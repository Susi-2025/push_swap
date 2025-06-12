/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 11:13:11 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/12 14:54:35 by vinguyen         ###   ########.fr       */
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

int		*parsing(int argc, char **argv);
int		check_input(int argc, char **argv);
int		check_valid(char *str);

int		*input_to_array(int argc, char **argv, int *a);
int		ft_atoi(char *s);

int		error_handler(int error);

void	sa(int *a, int i);
void	ss(int *a, int *b, int i);
void	pa(int *a, int *b, int i);
void	ra(int *a);
void	rr(int *a, int *b);
void	rra(int *a);
void	rrr(int *a, int *b);

#endif
