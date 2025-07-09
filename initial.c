/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:35:25 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/02 19:03:48 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	assign_mem(int **arr, int *in1, int *in2, int size);
static int	sort_confirm(t_stack st);

void	initial_a(t_stack *st, int *out, int size)
{
	int	i;

	i = 0;
	assign_mem(&(st->arr), out, NULL, size);
	st->size = size;
	while (i < size)
	{
		st->arr[i] = out[i];
		i++;
	}
	if (sort_confirm(*st) == 1)
	{
		free(st->arr);
		free(out);
		ft_printf("Already sorted\n");
		exit (EXIT_SUCCESS);
	}
	assign_mem(&(st->indices), st->arr, out, size);
	indices(st, out);
	free(out);
}

void	initial_b(t_stack *sta, t_stack *stb, int size)
{
	stb->arr = (int *)malloc(size * sizeof(int));
	stb->indices = (int *)malloc(size * sizeof(int));
	if (!stb->arr || !stb->indices)
	{
		free_stack(sta);
		error(EXIT_FAILURE);
	}
	stb->size = 0;
}

static void	assign_mem(int **arr, int *in1, int *in2, int size)
{
	*arr = (int *)malloc(size * sizeof(int));
	if (!*arr)
	{
		free(in1);
		free(in2);
		error(EXIT_FAILURE);
	}
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
