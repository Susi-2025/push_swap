/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_basic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:35:15 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/13 15:45:54 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a)
{
	swap(a);
}

void	sb(t_list **b)
{
	swap(b);
}

void	ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
}

void    swap(t_list **list)
{
    t_list  *first;
    t_list  *second;

    if (!list || !*list || !(*list)->next)
        return;
    first = *list;
    second = (*list)->next;
    first->next = second->next;
    second->next = first;
    *list = second;
}

