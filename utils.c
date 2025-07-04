/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:57:18 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/02 13:00:12 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_stack a)
{
	int	i;

	i = 0;
	while (i< a.size)
	{
		ft_printf("Value of pos %d in stack is: %d\n", i, a.arr[i]);
		i++;
	}
}

void	indices(t_stack *st, int *arr)
{
	int	i;
	int j;

	sort_arr(&arr, st->size);
	i = 0;
	while (i < st->size)
	{
		j = 0;
		while (j < st->size)
		{
			if (st->arr[i] == arr[j])
				st->indices[i] = j;
			j++;
		}
		i++;
	}
}

void	sort_arr(int **arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size -1)
	{
		j = i + 1;
		while (j < size)
		{
			if ((*arr)[i] > (*arr)[j])
			{
				temp = (*arr)[i];
				(*arr)[i] = (*arr)[j];
				(*arr)[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}