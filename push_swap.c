/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:57:15 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/04 18:36:45 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	check_input(int argc, char **argv);
int	check_valid(char *str);
int	*input_to_array(int argc, char **argv, int *a);
int	ft_atoi(char *s);

int main(int argc, char **argv)
{
	int	check;
	int	*a;
	int	*b;
	int	i;

	i = 0;
	//check valid input	
	printf("Value of argc: %i\n", argc);
	if (check_input(argc, argv) == -1)
	{
		printf("Error at input");
		return (-1);
	}
	// assign the array
	a = (int *)malloc(argc * sizeof(int));
	if (!a)
		return(-1);
	a = input_to_array(argc, argv, a);
	//print array
	//while(a[i])
	//{
	//	printf("%d\n",a[i]);
	//	i++;
	//}
	//printf("- -\n");
	//printf("a");
	//return (1);
	//sort
	while (i < (argc - 1)/ 2)
	{
		i = 0;
		while (a[i] > a[i + 1] || a[i] > a[argc - i - 1])
		{
			sa(a, i);
			ra(a, i);
		}
		if (a[i] <= a[i] && a[i] <= a[argc - i - 1])
			pa(a, i);
}

int	check_input(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc <= 1)
		return (-1);
	else
	{
		while (argv[i])
		{
			if (check_valid(argv[i]) == -1)
			{
				return (-1);
				printf("Error at %d position \n", i);
			}
			i++;
		}
	}
	return (1);
}

int check_valid(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		if(!str[1])
			return (-1);
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (-1);
		i++;
	}
	return (1);
}

int	*input_to_array(int argc, char **argv, int *a)
{
	int	i;

	i = 0;
	while(i < argc - 1)
	{
		a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (a);
}

int	ft_atoi(char *s)
{
	int	res;
	int sig;
	int	i;

	res = 0;
	sig = 1;
	i = 0;
	if (s[i] == '+' || s[i] == '-')
	{
		if(s[i] == '-')
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
