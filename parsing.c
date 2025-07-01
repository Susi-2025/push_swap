/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:48:43 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/01 20:44:02 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	check_valid_no(char *str);

void	parsing(int ac, char **av)
{
	int	i;

	if (ac <= 2)
		error(EXIT_FAILURE);
	i = 1;
	while (av[i])
	{
		if (check_valid_no(av[i]) == -1)
		{
			error(EXIT_FAILURE);
		}
		i++;
	}
}

static	int	check_valid_no(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (!str[1])
			return (-1);
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
