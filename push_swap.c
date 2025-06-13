/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:57:15 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/13 15:29:07 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list	*a;
	int		size;

	if (argc <= 1)
		return (error_handler(-1));
	a = parsing_list(argc, argv);// not yet checking duplicate
	if (!a)
		return (error_handler(-1));
	ft_print_list(a);
	size = ft_list_size(a);
	printf("Size of list: %d\n", size);

	reverse_rotate(&a);
	printf("List a after reverse rotate:\n");
	ft_print_list(a);

	swap(&a);
	printf("List a after swap:\n");
	ft_print_list(a);

	rotate(&a);
	printf("List a after rotate:\n");
	ft_print_list(a);

	t_list *b = NULL;
	push(&a, &b);
	printf("List a after push:\n");
	ft_print_list(a);
	printf("List b after push:\n");
	ft_print_list(b);

	ft_free_list(a);
	ft_free_list(b);
	return (0);
}
