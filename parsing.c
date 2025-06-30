/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:48:43 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/30 21:23:41 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	check_ac2(char *str);
static	int	check_ac2_numbers(char **numbers);
static	int	check_valid_no(char *str);

void	parsing(int ac, char **av)
{
	int	i;

	if (ac < 2)
		error("No of argument is not enough");
	else if (ac == 2)
		check_ac2(av[1]);
	i = 1;
	while (ac > 2 && av[i])
	{
		if (check_valid_no(av[i]) == -1)
		{
			error("Invalid argument");
		}
		i++;
	}
}

static	void	check_ac2(char *str)
{
	int		i;
	char	**numbers;

	i = 0;
	while (str[i])
	{
		if (!(str[i] == ' ' || (str[i] >= '0' && str[i] <= '9')
				|| str[i] == '+' || str[i] == '-'))
			error("Invalid in first argument");
		i++;
	}
	numbers = ft_split(str, ' ');
	if (!numbers)
		error("Allocate fail");
	if (check_ac2_numbers(numbers) == -1)
	{
		ft_free_triptr(&numbers);
		error("Invalid number in first argument");
	}
	ft_free_triptr(&numbers);
}

static	int	check_ac2_numbers(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
	{
		if (check_valid_no(numbers[i]) == -1)
		{
			return (-1);
		}
		i++;
	}
	return (0);
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
