/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8_utils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:57:18 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/22 16:25:37 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_stack a)
{
	int	i;

	i = 0;
	while (i < a.size)
	{
		printf("Value of pos %d in stack is: %d\n", i, a.arr[i]);
		printf("Value of indice %d in stack is: %d\n", i, a.indices[i]);
		i++;
	}
}

void	sort_arr(int **arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
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
}
