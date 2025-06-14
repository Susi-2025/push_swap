/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 13:15:03 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/14 17:44:21 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_function(t_list **a, int argc)
{
	t_list	*b;

	b = NULL;
	if (argc <= 4)
		sort_three(a);
	else if (argc <= 6)
		sort_five(argc - 1, a, &b);
//	return (a)
}

void	sort_three(t_list **a)
{
	int	first;
	int	second;
	int	last;

	first = (*a)->content;
	second = (*a)->next->content;
	last = (*a)->next->next->content;
	if (first > second && second > last) // 8 5 2
	{
		sa(a);
		rra(a);
	}
	else if (first > last && last > second) // 8 2 5
		ra(a);
	else if (first < last && second > last) // 2 8 5
	{
		rra(a);
		sa(a);
	}
	else if (first > second && last > first) // 5 2 8
		sa(a);
	else if (first < second && first > last) // 5 8 2
		rra(a);
}

void	sort_five(int n, t_list **a, t_list **b)
{
	int		i;

	i = 1;
	while (i <= (n - 3))
	{
		ft_move_top(a);
		printf("Time %d of move in sort five:\n", i);
		pb(a,b);
		i++;
	}
	sort_three(a);
	sort_two(b);
	// if last of a is > top of b => wrong algorithm
	while (i >= (n - 3))
	{
		pa(b,a);
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
}

void	sort_two(t_list **a)
{
	int	first;
	int second;

	first = (*a)->content;
	second = (*a)->next->content;
	if (first > second)
		sa(a);
}
