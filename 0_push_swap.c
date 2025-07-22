/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_push_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:57:18 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/22 23:30:21 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		*out;
	t_stack	sta;
	t_stack	stb;

	if (ac <= 2)
		error(EXIT_FAILURE);
	out = parsing(ac, av);
	initial(&sta, &stb, out, ac - 1);
	sort_algorithm(&sta, &stb);
	free_all_stack(&sta, &stb);
	return (0);
}
