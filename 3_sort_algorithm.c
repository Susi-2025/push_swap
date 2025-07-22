/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_sort_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:26:48 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/22 23:30:41 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_algorithm(t_stack *sta, t_stack *stb)
{
	if (sta->size == 2)
		two_sort(sta);
	else if (sta->size == 3)
		three_sort(sta);
	else if (sta->size == 4 || sta->size == 5)
		four_five_sort(sta, stb);
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
	if (st->arr[0] > st->arr[1])
		swap(st, 'a');
	if (st->arr[1] > st->arr[2])
		rev_rotate(st, 'a');
	if (st->arr[0] > st->arr[1])
		swap(st, 'a');
}
