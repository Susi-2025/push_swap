/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:27:14 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/01 16:37:00 by vinguyen         ###   ########.fr       */
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

void	error(char *str);
void	error_stack(t_stack *a, char *str);
void	free_stack(t_stack *a);
void	parsing(int ac, char **av);
int		*read_argument(int ac, char **av);
void	initial(t_stack *a, int *out, int size);

void	ft_print_stack(t_stack a);
int		sort_confirm(t_stack *a);
#endif
