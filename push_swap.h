/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:27:14 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/02 18:29:14 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# include "./Library/library.h"

typedef struct s_stack
{
	int	*arr;
	int	*indices;
	int	size;
	// int	cost_a;
	// int	cost_b;
	// int	total_cost;
}	t_stack;

void	error(int stt);
void	error_stack(t_stack *st, int stt);
void	free_stack(t_stack *st);

void	parsing(int ac, char **av);
int		*read_argument(int ac, char **av);
void	initial_a(t_stack *st, int *out, int size);
void	initial_b(t_stack *st, t_stack *b, int size);
void	indices(t_stack *st, int *arr);

void	sort_algorithm(t_stack *a, t_stack *b);
void	two_sort(t_stack *st);
void	three_sort(t_stack *st);
void	four_sort(t_stack *sta, t_stack *stb);
void	five_sort(t_stack *sta, t_stack *stb);
void	sort_big(t_stack *sta,t_stack *stb);
int		find_min_value(t_stack *st);
int		find_max_value(t_stack *st);

void	ft_print_stack(t_stack a);
void	sort_arr(int **arr, int size);
void	swap(t_stack *st, char c);
void	rotate(t_stack *st, char c);
void	rev_rotate(t_stack *st, char c);
void	push(t_stack *sta, t_stack *stb, char c);
#endif
