/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_initial.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:35:25 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/23 17:58:32 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	initial_a(t_stack *sta, int *out, int size);
static	void	initial_b(t_stack *sta, t_stack *stb, int size);
static	int	sort_confirm(t_stack st);
static	void	indices(t_stack *st, int *arr);

void	initial(t_stack *sta, t_stack *stb, int *out, int size)
{
	initial_a(sta, out, size);
	initial_b(sta, stb, size);
}

static	void	initial_a(t_stack *sta, int *out, int size)
{
	int	i;

	i = 0;
	sta->arr = malloc(sizeof(int) * size);
	sta->indices = malloc(sizeof(int) * size);
	if (!sta->arr || !sta->indices)
	{
		free_stack(sta);
		error_mem(out, EXIT_FAILURE);
	}
	sta->size = size;
	sta->capacity = size;
	while (i < size)
	{
		sta->arr[i] = out[i];
		i++;
	}
	indices(sta, out);
	free(out);
	if (sort_confirm(*sta) == 1)
	{
		free_stack(sta);
		exit(EXIT_SUCCESS);
	}
}

static	void	initial_b(t_stack *sta, t_stack *stb, int size)
{
	stb->arr = malloc(sizeof(int) * size);
	stb->indices = malloc(sizeof(int) * size);
	if (!stb->arr || !stb->indices)
	{
		free_all_stack(sta, stb);
		error(EXIT_FAILURE);
	}
	stb->size = 0;
	stb->capacity = size;
}

static int	sort_confirm(t_stack st)
{
	int	i;

	i = 0;
	while (i < st.size - 1)
	{
		if (st.arr[i] > st.arr[i + 1])
			return (-1);
		i++;
	}
	return (1);
}

static void	indices(t_stack *st, int *arr_temp)
{
	int	i;
	int	j;

	sort_arr(&arr_temp, st->size);
	i = 0;
	while (i < st->size)
	{
		j = 0;
		while (j < st->size)
		{
			if (st->arr[i] == arr_temp[j])
			{
				st->indices[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}
