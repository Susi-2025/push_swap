/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:57:15 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/15 16:16:51 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_atoi(char *s)
{
	int	res;
	int	sig;
	int	i;

	res = 0;
	sig = 1;
	i = 0;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sig = -1;
		i++;
	}
	while (s[i])
	{
		res = res * 10;
		res = res + (s[i] - '0');
		i++;
	}
	return (res * sig);
}

int	ft_abs(int no)
{
	if (no >= 0)
		return (no);
	else
		return(-no);
}
