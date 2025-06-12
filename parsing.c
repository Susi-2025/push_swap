/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:57:15 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/12 20:23:54 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_list	*parsing_list(int argc, char **argv)
{
	t_list	*list;
	if (check_input(argc, argv) == -1)
		return (NULL);
	list = input_to_link_list(argc, argv);
	return (list);
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

t_list	*input_to_link_list(int argc, char **argv)
{
	t_list	*list;
	t_list	*node;
	int		i;

	list = NULL;
	i = 1;
	while (i < argc)
	{
		node = ft_new_node(ft_atoi(argv[i]));
		if (node == NULL)
		{
			ft_free_list(list);
			return (NULL);
		}
		ft_list_add_back(&list, node);
		i++;
	}
	return (list);
}
