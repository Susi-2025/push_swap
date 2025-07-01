/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:57:18 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/01 20:40:46 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		*out;
	t_stack	a;

	parsing(ac, av);
	out = read_argument(ac, av);
	ft_bzero(&a, sizeof(a));
	initial(&a, out, (ac - 1));
	ft_print_stack(a);
	sort_algorithm(&a);
	free(a.arr);
	return (0);
}
