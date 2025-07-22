/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3c_sort_tiny.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:19:20 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/22 20:29:03 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_value(t_stack *st)
{
	int	min;
	int	i;

	min = INT_MAX;
	i = 0;
	while (i < st->size)
	{
		if (min > st->arr[i])
			min = st->arr[i];
		i++;
	}
	return (min);
}

void	four_sort(t_stack *sta, t_stack *stb)
{
	while (sta->arr[0] != find_min_value(sta))
		rotate(sta, 'a');
	push_b(sta, stb);
	three_sort(sta);
	push_b(sta, stb);
}

void	five_sort(t_stack *sta, t_stack *stb)
{
	while (sta->arr[0] != find_min_value(sta))
		rotate(sta, 'a');
	push_b(sta, stb);
	while (sta->arr[0] != find_min_value(sta))
		rotate(sta, 'a');
	push_b(sta, stb);
	three_sort(sta);
	push_a(stb, sta);
	push_a(stb, sta);
}
