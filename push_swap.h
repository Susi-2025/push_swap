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

# include "./Library/library.h"

typedef struct s_stack
{
	int	*arr;
//	int	top;
	int	size;
	int	indices;
	int	cost_a;
	int	cost_b;
	int	total_cost;
}	t_stack;

void	error(int stt);
void	error_stack(t_stack *a, int stt);
void	free_stack(t_stack *a);

void	parsing(int ac, char **av);
int		*read_argument(int ac, char **av);
void	initial_a(t_stack *a, int *out, int size);
void	initial_b(t_stack *a, t_stack *b, int size);
void	sort_algorithm(t_stack *a, t_stack *b);

void	ft_print_stack(t_stack a);
int		sort_confirm(t_stack a);
void	swap(t_stack *st, char c);
void	rotate(t_stack *st, char c);
void	rev_rotate(t_stack *st, char c);
void	push(t_stack *sta, t_stack *stb, char c);
#endif
