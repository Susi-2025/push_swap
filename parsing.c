/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:57:15 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/12 13:33:27 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	*parsing(int argc, char **argv)
{
	int	*out;

	if (check_input(argc, argv) == -1)
		return (NULL);
	out = (int *)malloc((argc) * sizeof(int));
	if (!out)
		return (NULL);
	out = input_to_array(argc, argv, out);
	return (out);
}

int	check_input(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc <= 1)
		return (-1);
	else
	{
		while (argv[i])
		{
			if (check_valid(argv[i]) == -1)
			{
				return (-1);
				//printf("Error at %d position \n", i);
			}
			i++;
		}
	}
	return (1);
}

int check_valid(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		if(!str[1])
			return (-1);
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (-1);
		i++;
	}
	return (1);
}

int	*input_to_array(int argc, char **argv, int *a)
{
	int	i;

	i = 0;
	while(i < argc - 1)
	{
		a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (a);
}
