/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:57:15 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/13 15:47:26 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **list)
{
	t_list	*first;
	t_list	*last;

	if (!list || !*list || !(*list)->next)
		return;
	first = *list;
	*list = first->next;

	last = *list;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
}

void	reverse_rotate(t_list **list)
{
	t_list	*first;
	t_list	*pre_last;
	t_list	*last;

	if (!list || !(*list) || !(*list)->next)
		return;
	first = *list;
	last = *list;
	while(last->next)
	{	
		pre_last = last;
		last = last->next;
	}
	pre_last->next = NULL;
	last->next = first;
	*list = last;
}

void	push(t_list **list1, t_list **list2)
{
	t_list	*head1;
	
	if (!list1 ||!(*list1))
		return;
	
	head1 = *list1;
	*list1 = head1->next;
	head1->next = *list2;
	*list2 = head1;
}
