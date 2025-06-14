/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:57:15 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/14 15:02:05 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **b, t_list **a)
{
	push(b, a);
}

void	pb(t_list **a, t_list **b)
{
	push(a, b);
}

void	push(t_list **list1, t_list **list2)
{
	t_list	*head1;

	if (!list1 ||!(*list1))
		return ;
	head1 = *list1;
	*list1 = head1->next;
	head1->next = *list2;
	*list2 = head1;
}
