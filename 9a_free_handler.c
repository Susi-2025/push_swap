/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9a_free_handler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:52:12 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/22 20:03:03 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *st)
{
	if (st && st->arr)
		free(st->arr);
	if (st && st->indices)
		free(st->indices);
}

void	free_all_stack(t_stack *sta, t_stack *stb)
{
	free_stack(sta);
	free_stack(stb);
}

void	free_sta_memm(t_stack *sta, int *out)
{
	free(out);
	free_stack(sta);
}
