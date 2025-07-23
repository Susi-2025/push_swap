/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_parsing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:48:43 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/23 15:38:00 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	check_valid_no(char *str);
static	int	check_duplicate(int	*out, int size);
static	int	get_numbers(char *str, int *out);

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
		out[i - 1] = get_numbers(av[i], out);
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

static int	get_numbers(char *str, int *out)
{
	int		sign;
	long	res;
	int		i;

	sign = 1;
	res = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i++] == '-')
		sign = -1;
	if (!((str[i] >= '0') && (str[i] <= '9')))
		error_mem(out, EXIT_FAILURE);
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		if (res * sign < INT_MIN || res * sign > INT_MAX)
			error_mem(out, EXIT_FAILURE);
		i++;
	}
	return ((int)(res * sign));
}
