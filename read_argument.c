/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_argument.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:59:08 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/01 16:14:35 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	check_duplicate(int	*out, int size);

int	*read_argument(int ac, char **av)
{
	int	i;
	int	*out;

	out = (int *)malloc((ac - 1) * sizeof(int));
	if (!out)
		error("Allocation fail in read_argu");
	i = 1;
	while (av[i])
	{
		out[i - 1] = ft_atoi(av[i]);
		i++;
	}
	if (check_duplicate(out, (ac - 1)) == -1)
	{
		free(out);
		error("Duplicate value in string");
	}
	return (out);
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
