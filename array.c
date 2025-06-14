/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:13:32 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/14 19:47:49 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	assign_array(t_list *a, int *out, int size)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = a;
	while (i < size && temp)
	{
		out[i] = temp->content;
		i++;
		temp = temp->next;
	}
}

void	sort_array(int *out, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (out[i] > out [j])
			{
				temp = out[i];
				out[i] = out[j];
				out[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	assign_indices(t_list *a, int *out, int size)
{
	int	i;

	while (a)
	{
		i = 0;
		while (i < size)
		{
			if (a->content == out[i])
			{
				a->indices = i;
				break ;
			}
			i++;
		}
		a = a->next;
	}
}
