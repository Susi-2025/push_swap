/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:28:19 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/01 20:39:33 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sw(int *arr, int size)
{
	int temp;
	
	if (size < 2)
		return ;
	temp = arr[0];
	arr[0] = arr[1];
	arr[1] = temp;
	write(1, "sa\n", 3);
}

void	ror(int *arr, int size)
{
	int	i;
	int	temp;
	
	if (size < 2)
		return ;

	temp = arr[0];
	i = 0;
	while (i < size - 1)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = temp;
	write(1, "ra\n", 3);
}

void	rev_ror(int	*arr, int size)
{
	int	i;
	int	temp;
	
	i = size - 1;
	temp = arr[size - 1];
	while (i > 0)
	{
		arr[i] = arr[i - 1];
		i--;
	}
	arr[i] = temp;
	write(1, "rra\n", 4);
}
