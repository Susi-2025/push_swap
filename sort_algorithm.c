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
	// test basic function
	/*
	// ft_printf("Start to rotate\n");
	// rotate(sta, 'a');
	// ft_print_stack(*sta);
	// ft_printf("Start to swap\n");
	// swap(sta, 'a');
	// ft_print_stack(*sta);
	// ft_printf("Start to rev_rotate\n");
	// rev_rotate(sta, 'a');
	// ft_print_stack(*sta);
	// ft_printf("Start to push\n");
	// push(sta, stb, 'a');
	// ft_printf("Print new stack a:\n");
	// ft_print_stack(*sta);
	// ft_printf("Print new stack b:\n");
	// ft_print_stack(*stb);
	// */
	if (sta->size == 2)
		two_sort(sta);
	else if (sta->size == 3)
		three_sort(sta);
	else if (sta->size == 4)
		four_sort(sta, stb);
	else if (sta->size == 5)
		five_sort(sta, stb);
	else
		sort_big(sta, stb);
}

void	two_sort(t_stack *st)
{
	if (st->arr[0] > st->arr[1])
		swap(st, 'a');
}
