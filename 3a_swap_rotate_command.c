/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3a_swap_rotate_command.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:28:19 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/22 20:36:45 by vinguyen         ###   ########.fr       */
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
