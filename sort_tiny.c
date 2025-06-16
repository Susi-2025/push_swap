/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tiny.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:34:14 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/16 15:20:47 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_list **a, t_list **b, int size)
{
	tiny_sort(a, b, size);
	sort_three(a);
	while (size >= 4)
	{
		pa(b, a);
		size--;
	}
}
void	tiny_sort(t_list **a, t_list **b, int size)
{
	t_list	*min_node;
	
	while (ft_list_size(*a) > 3)
	{
		initial(*a);
		min_node = find_min_value(*a, size);
		printf("Node needs to be move is: %d\n", min_node->value);
		move_minimum(a, b, min_node);
		printf("List a after moving:\n");
		ft_print_list(*a);
	}
}

t_list	*find_min_value(t_list *a, int size)
{
	int		min_value;
	t_list	*out_node;

	min_value = size;
	while (a)
	{
		if (a->value < min_value)
		{
			min_value = a->value;
			out_node = a;
		}
		a = a->next;
	}
	return (out_node);
}

void	move_minimum(t_list **a, t_list **b, t_list *min_node)
{
	int	rot;
	int	i;

	rot = min_node->cost_current;
	i = 0;
	while (i < ft_abs(rot))
	{
		if (rot < 0)
			rra(a);
		else
			ra(a);
		i++;
	}
	pb(a, b);
}
