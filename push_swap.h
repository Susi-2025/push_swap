/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:27:14 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/01 20:44:09 by vinguyen         ###   ########.fr       */
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
void	initial(t_stack *a, int *out, int size);
void	sort_algorithm(t_stack *a);

void	ft_print_stack(t_stack a);
int		sort_confirm(t_stack a);
void	sw(int *arr, int size);
void	ror(int *arr, int size);
void	rev_ror(int	*arr, int size);
#endif
