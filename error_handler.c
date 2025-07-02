/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:52:12 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/02 12:57:50 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(int stt)
{
	write(1, "Error\n", 6);
	exit (stt);
}

void	free_stack(t_stack *a)
{
	if (a->arr)
		free(a->arr);
//	free(a);
}

void	error_stack(t_stack *a, int stt)
{
	free_stack(a);
	error(stt);
}
