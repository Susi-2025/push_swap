/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 13:15:03 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/16 16:13:23 by vinguyen         ###   ########.fr       */
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
		sort_five(a, &b, size);
	else if (size > 5)
		sort_big(a, &b, size);
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

	first = (*a)->value;
	second = (*a)->next->value;
	last = (*a)->next->next->value;
	if (first > second && second > last) // 8 5 2
	{
		sa(a);
		rra(a);
	}
	else if (first > last && last > second) // 8 2 5
		ra(a);
	else if (second > first && first > last) // 5 8 2
		rra(a);
	else if (second > last && last > first) // 2 8 5
	{
		rra(a);
		sa(a);
	}
	else if (last > first && first > second) // 5 2 8
		sa(a);
}
