/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:57:18 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/02 19:03:39 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		*out;
	t_stack	sta;
	t_stack stb;

	parsing(ac, av);
	out = read_argument(ac, av);
//	int i = 0;
//    while (i < ac - 1)
//	{
//	 	ft_printf("Value of array at pos %d is %d\n", i, out[i]);
//	 	i++;
//  }
	ft_bzero(&sta, sizeof(t_stack));
	initial_a(&sta, out, (ac - 1));
	ft_print_stack(sta);
	//
	ft_bzero(&stb, sizeof(t_stack));
	initial_b(&sta, &stb, (ac - 1));
	//
	ft_printf("Start sort\n");
	sort_algorithm(&sta, &stb);
	//ft_printf("Value of sta\n");
	//ft_print_stack(sta);	
	free_stack(&sta);
	free_stack(&stb);
	return (0);
}
