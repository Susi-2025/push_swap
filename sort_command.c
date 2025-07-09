/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:28:19 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/02 18:54:12 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *st, char c)
{
	int	temp;
	int	temp_ind;

	if (st->size < 2)
		return ;
	temp = st->arr[0];
	temp_ind = st->indices[0];
	st->arr[0] = st->arr[1];
	st->indices[0] = st->indices[1];
	st->arr[1] = temp;
	st->indices[1] = temp_ind;
	if (c == 'a')
		write(1, "sa\n", 3);
	else if (c == 'b')
		write(1, "sb\n", 3);
}

void	rotate(t_stack *st, char c)
{
	int	i;
	int	temp;
	int	temp_ind;

	if (st->size < 2)
		return ;
	temp = st->arr[0];
	temp_ind = st->indices[0];
	i = 0;
	while (i < st->size - 1)
	{
		st->arr[i] = st->arr[i + 1];
		st->indices[i] = st->indices[i + 1];
		i++;
	}
	st->arr[st->size - 1] = temp;
	st->indices[st->size - 1] = temp_ind;
	if (c == 'a')
		write(1, "ra\n", 3);
	else if (c == 'b')
		write(1, "rb\n", 3);
}

void	rev_rotate(t_stack *st, char c)
{
	int	i;
	int	temp;
	int	temp_ind;

	i = st->size - 1;
	temp = st->arr[st->size - 1];
	temp_ind = st->indices[st->size - 1];
	while (i > 0)
	{
		st->arr[i] = st->arr[i - 1];
		st->indices[i] = st->indices[i - 1];
		i--;
	}
	st->arr[0] = temp;
	st->indices[0] = temp_ind;
	if (c == 'a')
		write(1, "rra\n", 4);
	else if (c == 'b')
		write(1, "rrb\n", 4);
}

void	push(t_stack *from, t_stack *to, char c)
{
	int	i;

	if (to->size > 0)
	{
		i = to->size;
		while (i > 0)
		{
			to->arr[i] = to->arr[i - 1];
			to->indices[i] = to->indices[i - 1];
			i--;
		}
	}
	to->arr[0] = from->arr[0];
	to->indices[0] = from->indices[0];
	i = 0;
	while (i < from->size)
	{
		from->arr[i] = from->arr[i + 1];
		from->indices[i] = from->indices[i + 1];
		i++;
	}
	from->size--;
	to->size++;
	if (c == 'a')
		write(1, "pa\n", 4);
	else if (c == 'b')
		write(1, "pb\n", 4);
}
