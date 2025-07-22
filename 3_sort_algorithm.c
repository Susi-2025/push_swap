/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_sort_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:26:48 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/22 19:55:20 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_algorithm(t_stack *sta, t_stack *stb)
{
	// rev_rotate(sta, 'a');
	// swap(sta, 'a');
	// rotate(sta, 'a');
	//push_a(sta, stb);
	//ft_print_stack(*sta);
	//ft_print_stack(*stb);
	//rotate(sta, 'a');
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

void	three_sort(t_stack *st)
{
	if (st->size != 3)
		return ;
	if (st->arr[0] > st->arr[1] && st->arr[1] > st->arr[2])
	{
		swap(st, 'a');
		rev_rotate(st, 'a');
	}
	else if (st->arr[0] > st->arr[2] && st->arr[2] > st->arr[1])
		rotate(st, 'a');
	else if (st->arr[0] > st->arr[1] && st->arr[2] > st->arr[0])
		swap(st, 'a');
	else if (st->arr[0] < st->arr[1] && st->arr[0] > st->arr[2])
		rev_rotate(st, 'a');
	else if (st->arr[1] > st->arr[2] && st->arr[2] > st->arr[0])
	{
		rev_rotate(st, 'a');
		swap(st, 'a');
	}
}
