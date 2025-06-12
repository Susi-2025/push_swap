/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:57:15 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/12 11:18:48 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *a, int i)
{
	int	temp;
	if (a[i] && a[i + 1])
	{
		temp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = temp;
	}
}

void	ss(int *a, int *b, int i)
{
	sa(a, i);
	sa(b, i);
}

void	pa(int *a, int *b, int i)// not correct,
{
	if(b[i])
	{
		a[i] = b[i];
		b[i] = '\0';
	}
}

void	ra(int *a)
{
	int	temp;
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (a[len])
		len++;
	if (len >= 2)
	{
		temp = a[0];
		while (i < len - 2)
		{
			a[i] = a[i + 1];
			i++;
		}
		a[i] = temp;
	}
}

void	rr(int *a, int *b)
{
	ra(a);
	ra(b);
}

void	rra(int *a)
{
	int	temp;
	int len;
	
	len = 0;
	while (a[len])
		len++;
	if (len >= 2)
	{
		len--;
		temp = a[len];
		while (len > 0)
		{
			a[len] = a[len - 1];
			len--;
		}
		a[len] = temp;
	}
}

void rrr(int *a, int *b)
{
	rra(a);
	rra(b);
}
