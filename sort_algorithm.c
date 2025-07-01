/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:26:48 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/01 20:40:10 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_algorithm(t_stack *a)
{
//	if (a->size == 2)
	sw(a->arr, a->size);
	ft_print_stack(*a);
	ror(a->arr, a->size);
	ft_print_stack(*a);
	rev_ror(a->arr, a->size);
	ft_print_stack(*a);
}
