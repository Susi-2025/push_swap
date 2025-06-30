/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:57:15 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/12 14:04:01 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_handler(int error)
{
	if (error == -1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	else
		return (0);
}
