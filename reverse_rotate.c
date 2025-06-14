/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:57:15 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/14 14:57:17 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a)
{
	reverse_rotate(a);
}

void	rrb(t_list **b)
{
	reverse_rotate(b);
}

void	rrr(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
}

void	reverse_rotate(t_list **list)
{
	t_list	*first;
	t_list	*pre_last;
	t_list	*last;

	if (!list || !(*list) || !(*list)->next)
		return ;
	first = *list;
	last = *list;
	while (last->next)
	{
		pre_last = last;
		last = last->next;
	}
	pre_last->next = NULL;
	last->next = first;
	*list = last;
}
