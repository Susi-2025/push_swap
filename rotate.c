/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:57:15 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/14 15:03:54 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a)
{
	rotate(a);
}

void	rb(t_list **b)
{
	rotate(b);
}

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
}

void	rotate(t_list **list)
{
	t_list	*first;
	t_list	*last;

	if (!list || !*list || !(*list)->next)
		return ;
	first = *list;
	*list = first->next;
	last = *list;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
}
