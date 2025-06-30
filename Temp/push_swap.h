/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 11:13:11 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/16 16:11:12 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
	int				indices;
	int				position;
	int				cost_current;
	int				cost_target;
	int				total_cost;
}	t_list;

t_list	*parsing_list(int argc, char **argv);
int		check_input(int argc, char **argv);
int		check_valid(char *str);

t_list	*input_to_link_list(int argc, char **argv);
int		ft_atoi(char *s);
int		ft_abs(int no);

void	assign_array(t_list *a, int *out, int size);
void	sort_array(int *out, int size);
void	assign_indices(t_list *a, int *out, int size);
void	initial(t_list	*a);

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
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);

void	reverse_rotate(t_list **list);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

void	push(t_list **list1, t_list **list2);
void	pa(t_list **b, t_list **a);
void	pb(t_list **a, t_list **b);

void	sort_function(t_list **a, int size);
void	sort_two(t_list **a);
void	sort_three(t_list **a);
void	sort_five(t_list **a, t_list **b, int size);
void	tiny_sort(t_list **a, t_list **b, int size);
void	sort_big(t_list **a, t_list **b, int size);
void	move_minimum(t_list **a, t_list **b, t_list *min_node);
t_list	*find_min_value(t_list *a, int size);
t_list	*find_min_cost(t_list *a, int size);
#endif
