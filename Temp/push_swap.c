/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:57:15 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/16 16:13:28 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	int		size;

	if (argc <= 1)
		return (error_handler(-1));
	a = parsing_list(argc, argv);// not yet checking duplicate
	if (!a)
		return (error_handler(-1));
	size = ft_list_size(a);
	initial(a);
	printf("List a before sorting:\n");
	ft_print_list(a);

	sort_function(&a, size);
//	ft_free_list(b);
	printf("List a after sorting:\n");
	ft_print_list(a);

	ft_free_list(a);
	return (0);
}
