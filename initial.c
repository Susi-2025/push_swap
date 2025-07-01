/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:35:25 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/01 16:44:10 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initial(t_stack *a, int *out, int size)
{
	int	i;

	i = 0;
	a->arr = (int *)malloc(size * sizeof(int));
	if (!a->arr)
	{
		free(out);
		error("Malloc error in initial");
	}
	while (i < size)
	{
		a->arr[i] = out[i];
		i++;
	}
	a->size = size;
	free(out);
	if (sort_confirm(a) == 1)
	{
		ft_printf("Already sorted\n");
		exit (EXIT_SUCCESS);
	}
}

int	sort_confirm(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->size - 1)
	{
		if (a->arr[i] > a->arr[i + 1])
			return (-1);
		i++;
	}
	return (1);
}
