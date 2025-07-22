/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:48:43 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/21 19:50:59 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big(t_stack *sta, t_stack *stb)
{
	int	i;
	int	max_bits;
	int	j;
	int	size;

	max_bits = 0;
	while ((((sta->size) - 1) >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		size = sta->size - 1;
		j = 0;
		while (j < size)
		{
			if (((sta->indices[0] >> i) & 1) == 0)
				push_a(sta, stb);
			else
				rotate(sta, 'a');
			j++;
		}
		while (stb->size > 0)
			push_b(stb, sta);
		i++;
	}
}
