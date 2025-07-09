
#include "push_swap.h"

void	sort_big(t_stack *sta, t_stack *stb)
{
	int	i;
	int	max_bits;
	int	j;
	int	size;

	max_bits = 0;
	while ((((sta->size) - 1) >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		size = sta->size;
		j = 0;
		while (j < size)
		{
			if (((sta->indices[0] >> i) & 1) == 0)
				push(sta, stb, 'a');
			else
				rotate(sta, 'a');
			j++;
		}
		while (stb->size > 0)
			push(stb, sta, 'b');
		i++;
	}
}
