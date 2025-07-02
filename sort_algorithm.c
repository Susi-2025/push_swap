/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:26:48 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/02 18:55:13 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_algorithm(t_stack *sta, t_stack *stb)
{
//	if (a->size == 2)
	ft_printf("Start to rotate\n");
	rotate(sta, 'a');
	ft_print_stack(*sta);
	ft_printf("Start to swap\n");
	swap(sta, 'a');
	ft_print_stack(*sta);
	ft_printf("Start to rev_rotate\n");
	rev_rotate(sta, 'a');
	ft_print_stack(*sta);
	ft_printf("Start to push\n");
	push(sta, stb, 'a');
	ft_printf("Print new stack a:\n");
	ft_print_stack(*sta);
	ft_printf("Print new stack b:\n");
	ft_print_stack(*stb);
}
