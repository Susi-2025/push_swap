/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:57:18 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/01 16:31:54 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_stack a)
{
	int	i;

	i = 0;
	while (i < a.size)
	{
		ft_printf("Value of pos %d in stack is: %d\n", i, a.arr[i]);
		i++;
	}
}
