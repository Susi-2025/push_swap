/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3b_push_command.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:28:19 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/22 20:36:28 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	push(t_stack *from, t_stack *to);
static	void	shift_stack_down(t_stack *st);
static	void	shift_stack_up(t_stack *st);

void	push_a(t_stack *stb, t_stack *sta)
{
	push(stb, sta);
	write(1, "pa\n", 3);
}

void	push_b(t_stack *sta, t_stack *stb)
{
	push(sta, stb);
	write(1, "pb\n", 3);
}

static	void	shift_stack_down(t_stack *st)
{
	int	i;

	if (st->size > 0)
	{
		i = st->size;
		while (i > 0)
		{
			st->arr[i] = st->arr[i - 1];
			st->indices[i] = st->indices[i - 1];
			i--;
		}
	}
}

static	void	shift_stack_up(t_stack *st)
{
	int	i;

	i = 0;
	while (i < st->size - 1)
	{
		st->arr[i] = st->arr[i + 1];
		st->indices[i] = st->indices[i + 1];
		i++;
	}
}

static	void	push(t_stack *from, t_stack *to)
{
	if (from->size == 0)
		return ;
	if (to->size == to->capacity)
		return ;
	shift_stack_down(to);
	to->arr[0] = from->arr[0];
	to->indices[0] = from->indices[0];
	shift_stack_up(from);
	from->size--;
	to->size++;
}
