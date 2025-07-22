/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3c_sort_tiny.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:19:20 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/22 23:32:10 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	find_min_pos(t_stack *st);

void	four_five_sort(t_stack *sta, t_stack *stb)
{
	int	i;
	int	min_pos;

	while (sta->size > 3)
	{
		min_pos = find_min_pos(sta);
		if (min_pos == 0)
			push_b(sta, stb);
		else if (min_pos <= sta->size / 2)
		{
			while (min_pos--)
				rotate(sta, 'a');
			push_b(sta, stb);
		}
		else
		{
			i = sta->size - min_pos;
			while (i--)
				rev_rotate(sta, 'a');
			push_b(sta, stb);
		}
	}
	three_sort(sta);
	while (stb->size)
		push_a(stb, sta);
}

static	int	find_min_pos(t_stack *st)
{
	int	min;
	int	i;
	int	min_pos;

	min = st->arr[0];
	min_pos = 0;
	i = 1;
	while (i < st->size)
	{
		if (min > st->arr[i])
		{
			min = st->arr[i];
			min_pos = i;
		}
		i++;
	}
	return (min_pos);
}
