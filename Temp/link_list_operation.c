/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_list_operation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:30:10 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/16 12:30:09 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_new_node(int number)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->value = number;
	new_node->next = NULL;
	return (new_node);
}

void	ft_list_add_front(t_list **list, t_list *new_node)
{
	if (!new_node | !list)
		return ;
	new_node->next = *list;
	*list = new_node;
}

void	ft_list_add_back(t_list **list, t_list *new_node)
{
	t_list	*temp;

	if (!list || !new_node)
		return ;
	if (*list == NULL)
	{
		*list = new_node;
		return ;
	}
	temp = *list;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
}

int	ft_list_size(t_list *list)
{
	int	i;

	if (!list)
		return (0);
	i = 0;
	while (list)
	{
		i++;
		list->position = i - 1;
		list = list->next;
	}
	return (i);
}

void	ft_free_list(t_list *list)
{
	t_list	*temp;

	while (list)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
}

void	ft_print_list(t_list *list)
{
	printf("Value	Indi	Pos	C_Cost	Tar_Cost	Tot_Cost\n");
	while (list)
	{
		printf("%d	%d	%d	%d	%d		%d\n", list->value, list->indices, list->position, list->cost_current, list->cost_target, list->total_cost);
		list = list->next;
	}
}
