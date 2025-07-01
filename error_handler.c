/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:52:12 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/01 14:52:22 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(char *str)
{
	ft_printf("Error\n");
	ft_printf("%s\n", str);
	exit (EXIT_FAILURE);
}

void	free_stack(t_stack *a)
{
	int	i;

	i = 0;
	free(a->arr);
	free(a);
}

void	error_stack(t_stack *a, char *str)
{
	free_stack(a);
	error(str);
}
