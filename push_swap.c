/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:57:15 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/15 19:00:04 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	int		size;
	int		*temp_array;

	if (argc <= 1)
		return (error_handler(-1));
	a = parsing_list(argc, argv);// not yet checking duplicate
	if (!a)
		return (error_handler(-1));
	size = ft_list_size(a);
	/*
	temp_array = (int *)malloc(size * sizeof(int));
	if (!temp_array)
		return (error_handler(-1));
	assign_array(a, temp_array, size);

	printf("List value is: \n");
	ft_print_list(a);
	printf("Value of array is: \n");
	for (int i = 0; i < size; i++)
		printf("%d ", temp_array[i]);
	printf("\n");

	sort_array(temp_array, size);
	printf("Value of array after sorting:\n");
	for (int i = 0; i < size; i++)
		printf("%d ", temp_array[i]);
	printf("\n");

	assign_indices(a, temp_array, size);
	cal_cost(a, size);
	*/
	cal_cost(a);
	printf("List a before sorting:\n");
	ft_print_list(a);

	sort_function(&a, size);
	printf("List a after sorting:\n");
	ft_print_list(a);

	ft_free_list(a);
//	ft_free_list(b);
	return (0);
}
