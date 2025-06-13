/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 11:13:11 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/13 15:44:51 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list{
	int				content;
	struct s_list	*next; 
}t_list;

t_list	*parsing_list(int argc, char **argv);
int		check_input(int argc, char **argv);
int		check_valid(char *str);

t_list	*input_to_link_list(int argc, char **argv);
int		ft_atoi(char *s);

t_list	*ft_new_node(int number);
void	ft_list_add_front(t_list **list, t_list *new_node);
void	ft_list_add_back(t_list **list, t_list *new_node);
int		ft_list_size(t_list *list);
void	ft_free_list(t_list *list);
void	ft_print_list(t_list *list);

int		error_handler(int error);

void	swap(t_list **list);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);

void	rotate(t_list **list);
void	reverse_rotate(t_list **list);
void	push(t_list **list1, t_list **list2);
#endif
