/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 19:12:08 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/30 20:53:32 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBRARY_H
# define LIBRARY_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);
void	ft_free_triptr(char ***str);
char	**ft_split(char const *s, char c);

int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putptr(void *ptr, char *base, int i);
int		ft_putnbr_base(long long number, char *base, int i);
int		ft_putnbr_base_unsigned(unsigned long long number, char *base, int i);
int		check_format(va_list args, const char *string, int i);
int		check_string(va_list args, const char *string, int i);
int		ft_printf(const char *string, ...);
#endif
