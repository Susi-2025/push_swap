#include <climits>;
#include "push_swap.h";

void	three_sort(t_stack *st)
{
	// int	first;
	// int	second;
	// int	last;

	// first = st->arr[0];
	// second = st->arr[1];
	// last = st->arr[2];
	if (st->arr[0] > st->arr[1] && st->arr[1] > st->arr[2])// 8 5 2
	{
		swap(st, 'a');
		rev_rotate(st, 'a');
	}
	else if (st->arr[0] > st->arr[2] && st->arr[1] < st->arr[2]) // 8 2 5
		rotate(st, 'a');
	else if (st->arr[0] > st->arr[1] && st->arr[2] > st->arr[0]) // 5 2 8
		swap(st, 'a');
	else if (st->arr[0] < st->arr[1] && st->arr[0] > st->arr[2])// 5 8 2
		rev_rotate(st, 'a');
	else if (st->arr[0] < st->arr[2] && st->arr[2] < st->arr[1])// 2 8 5
	{
		rev_rotate(st, 'a');
		swap(st, 'a');
	}
}

int	find_min_value(t_stack *st)
{
	int	min;
	int	i;

	min = LONG_MAX;
	i = 0;
	while (i < st->size)
	{
		if (min > st->arr[i])
			min = st->arr[i];
		i++;
	}
	return (min);
}

int	find_max_value(t_stack *st)
{
	int	max;
	int	i;

	max = LONG_MIN;
	i = 0;
	while (i < st->size)
	{
		if (max < st->arr[i])
			max = st->arr[i];
		i++;
	}
	return (max);
}

void	four_sort(t_stack *sta, t_stack *stb)
{
	while (sta->arr[0] != find_min_value(sta))
		rotate(sta, 'a');
	push(sta, stb, 'a');
	three_sort(sta);
	push(stb, sta, 'b');
}

void	five_sort(t_stack *sta, t_stack *stb)
{
	while (sta->arr[0] != find_min_value(sta))
		rotate(sta, 'a');
	push(sta, stb, 'a');
	while (sta->arr[0] != find_min_value(sta))
		rotate(sta, 'a');
	push(sta, stb, 'a');
	three_sort(sta);
	push(stb, sta, 'b');
	push(stb, sta, 'b');	
}