/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:34:14 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/15 18:52:25 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cal_cost(t_list	*a)
{
	int	size;
	int	*temp_array;

	size = ft_list_size(a);
    temp_array = (int *)malloc(size * sizeof(int));
    if (!temp_array)
        return ;
    assign_array(a, temp_array, size);
    sort_array(temp_array, size);
    printf("Value of array after sorting:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", temp_array[i]);
    printf("\n");
	assign_indices(a, temp_array, size);
	while (a)
	{
		if (a->position <= size / 2)
			a->cost_current = a->position;
		else
			a->cost_current = a->position - size;
		if (a->indices <= size / 2)
			a->cost_target = a->indices;
		else
			a->cost_target = a->indices - size;
		a->total_cost = ft_abs(a->cost_current) + ft_abs(a->cost_target);
		a = a->next;
	}
	free(temp_array);
}

t_list	*find_min_cost(t_list *a, int size)// wrong in calculation
{
	int		min_cost;
	int		min_target;
	t_list	*min_node;

	min_cost = INT_MAX;
	min_target = size;
	min_node = a;
	while (a)
	{
		if (a->total_cost <= min_cost && a->indices < min_target)
		{
			min_cost = a->total_cost;
			min_target = a->indices;
			min_node = a;
		}
		a = a->next;
	}
	return (min_node);
}

void	tiny_sort(t_list **a, t_list **b, int size)
{
	t_list	*min_node;
	
	while (ft_list_size(*a) > 3)
	{
		cal_cost(*a);
		min_node = find_min_cost(*a, size);
		printf("Node needs to be move is: %d\n", min_node->content);
		move_minimum(a, b, min_node);
		printf("List a after moving:\n");
		ft_print_list(*a);
	}
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
