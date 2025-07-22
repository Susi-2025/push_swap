/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9b_error_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:52:12 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/22 17:15:11 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(int stt)
{
	write(2, "Error\n", 6);
	exit (stt);
}

void	error_mem(int *arr, int stt)
{
	free(arr);
	error(stt);
}

void	error_stack(t_stack *st, int stt)
{
	free_stack(st);
	error(stt);
}
