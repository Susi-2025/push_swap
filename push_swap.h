/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 11:13:11 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/12 20:26:46 by vinguyen         ###   ########.fr       */
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

void	sa(int *a, int i);
void	ss(int *a, int *b, int i);
void	pa(int *a, int *b, int i);
void	ra(int *a);
void	rr(int *a, int *b);
void	rra(int *a);
void	rrr(int *a, int *b);

#endif
