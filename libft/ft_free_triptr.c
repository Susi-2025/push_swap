/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_triptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 15:36:23 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/23 15:02:33 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_triptr(char ***str)
{
	int	i;

	i = 0;
	if (*str)
	{
		while ((*str)[i] != NULL)
		{
			free((*str)[i]);
			i++;
		}
		free(*str);
		*str = NULL;
	}
}
