/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:27:14 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/23 15:00:54 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

# include "./libft/libft.h"

typedef struct s_stack
{
	int	*arr;
	int	*indices;
	int	size;
	int	capacity;
}	t_stack;

void	error(int stt);
void	error_mem(int *arr, int stt);
void	error_stack(t_stack *st, int stt);

void	free_stack(t_stack *st);
void	free_sta_mem(t_stack *sta, int *out);
void	free_all_stack(t_stack *sta, t_stack *stb);

int		*parsing(int ac, char **av);
void	initial(t_stack *sta, t_stack *stb, int *out, int size);
void	sort_algorithm(t_stack *a, t_stack *b);

void	two_sort(t_stack *st);
void	three_sort(t_stack *st);
void	four_five_sort(t_stack *sta, t_stack *stb);
void	sort_big(t_stack *sta, t_stack *stb);

void	ft_print_stack(t_stack a);
void	sort_arr(int **arr, int size);
void	swap(t_stack *st, char c);
void	rotate(t_stack *st, char c);
void	rev_rotate(t_stack *st, char c);
void	push_a(t_stack *sta, t_stack *stb);
void	push_b(t_stack *stb, t_stack *sta);
#endif
