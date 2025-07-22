/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_parsing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:48:43 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/22 15:19:12 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	check_valid_no(char *str);
static	int	check_duplicate(int	*out, int size);

int	*parsing(int ac, char **av)
{
	int	i;
	int	*out;

	i = 1;
	while (av[i])
	{
		if (check_valid_no(av[i]) == -1)
			error(EXIT_FAILURE);
		i++;
	}
	out = (int *)malloc((ac - 1) * sizeof(int));
	if (!out)
		error(EXIT_FAILURE);
	i = 1;
	while (i < ac)
	{
		out[i - 1] = ft_atoi(av[i]);
		i++;
	}
	if (check_duplicate(out, (ac - 1)) == -1)
		error_mem(out, EXIT_FAILURE);
	return (out);
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
			return (-1);
		i++;
	}
	return (0);
}

static	int	check_duplicate(int	*out, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (out[i] == out[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}
