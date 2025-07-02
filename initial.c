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

void	initial_a(t_stack *a, int *out, int size)
{
	int	i;

	i = 0;
	a->arr = (int *)malloc(size * sizeof(int));
	if (!a->arr)
	{
		free(out);
		error(EXIT_FAILURE);
	}
	while (i < size)
	{
		a->arr[i] = out[i];
		i++;
	}
	a->size = size;
	free(out);
	if (sort_confirm(*a) == 1)
	{
		free_stack(a);
		ft_printf("Already sorted\n");
		exit (EXIT_SUCCESS);
	}
}

void	initial_b(t_stack *a, t_stack *b, int size)
{
	b->arr = (int *)malloc(size * sizeof(int));
	if (!b->arr)
	{
		free_stack(a);
		error(EXIT_FAILURE);
	}
	b->size = 0;
}

int	sort_confirm(t_stack a)
{
	int	i;

	i = 0;
	while (i < a.size - 1)
	{
		if (a.arr[i] > a.arr[i + 1])
			return (-1);
		i++;
	}
	return (1);
}
