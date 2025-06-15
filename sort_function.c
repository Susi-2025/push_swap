/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 13:15:03 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/15 18:12:45 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_function(t_list **a, int size)
{
	t_list	*b;

	b = NULL;
	if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
	else if (size <= 5)
		tiny_sort(a, &b, size);
/*	else if (argc == 6)
		sort_five(argc - 1, a, &b);
*/
//	return (a)
}

void	sort_two(t_list **a)
{
	if ((*a)->indices != 0)
		sa(a);
}
	
void	sort_three(t_list **a)
{
	int	first;
	int	second;
	int	last;

	first = (*a)->indices;
	second = (*a)->next->indices;
	last = (*a)->next->next->indices;
	if (second == 2)
	{
		rra(a);
		if (first == 0)
			sa(a);
	}
	else if (first == 1 && second == 0)
		sa(a);
	else if (first == 2 && second == 1)
	{
		sa(a);
		rra(a);
	}
	else if (first == 2 && second == 0)
		ra(a);
	
}
/*
void	sort_four(t_list **a, t_list **b, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if ((*a)->indices == i)
			pb(a, b);
		i++;
	}
}

void	sort_five(int n, t_list **a, t_list **b)
{
	int		i;

	i = 1;
	while (i <= (n - 3))
	{
		ft_move_top(a);
		printf("Time %d of move in sort five:\n", i);
		pb(a, b);
		i++;
	}
	sort_three(a);
	sort_two(b);
	// if last of a is > top of b => wrong algorithm
	while (i >= (n - 3))
	{
		pa(b, a);
		ra(a);
		ft_print_list(*a);
		i--;
	}
}

void	ft_move_top(t_list **a)
{	
	t_list	*last;
	int		first;
	int		second;

	last = *a;
	first = (*a)->content;
	second = (*a)->next->content;
	while (last->next)
		last = last->next;
	if (last->content > first && last->content > second)
		rra(a);
	else if (last->content < second && second > first)
		sa(a);
}*/
