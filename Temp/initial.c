/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:34:14 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/16 15:19:18 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void    assign_array(t_list *a, int *out, int size)
{
    int     i;
    t_list  *temp;

    i = 0; 
    temp = a;
    while (i < size && temp)
    {
        out[i] = temp->value;
        i++; 
        temp = temp->next;
    }
}

void    sort_array(int *out, int size)
{
    int i;
    int j;
    int temp;

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

void    assign_indices(t_list *a, int *out, int size)
{
    int i;

    while (a)
    {
        i = 0;
        while (i < size)
        {
            if (a->value == out[i])
            {
                a->indices = i;
                break ;
            }
            i++;
        }
        a = a->next;
    }
}

void	initial(t_list	*a)
{
	int	size;
	int	*temp_array;

	size = ft_list_size(a);
    temp_array = (int *)malloc(size * sizeof(int));
    if (!temp_array)
        return ;
    assign_array(a, temp_array, size);
    sort_array(temp_array, size);
	assign_indices(a, temp_array, size);
	while (a)
	{
		if (a->position <= size / 2)
			a->cost_current = a->position;
		else
			a->cost_current = a->position - size;
		if (a->indices <= size / 2)
			a->cost_target = a->indices;
		else
			a->cost_target = a->indices - size;
		a->total_cost = ft_abs(a->cost_current) + ft_abs(a->cost_target);
		a = a->next;
	}
	free(temp_array);
}

