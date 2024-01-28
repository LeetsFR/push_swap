/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 00:29:45 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/28 14:47:39 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	find_cost(t_index *my_index, t_stack *a, t_stack *b)
{
	int	cost;

	if (in_top_index(my_index, a, b))
	{
		if (my_index->index_a > my_index->index_b)
			cost = my_index->index_a;
		else
			cost = my_index->index_b;
	}
	else if (in_bottom_index(my_index, a, b))
	{
		if ((a->size - my_index->index_a) > (b->size - my_index->index_b))
			cost = a->size - my_index->index_a;
		else
			cost = b->size - my_index->index_b;
	}
	else
	{
		if (my_index->index_a <= (a->size / 2))
			cost = my_index->index_a + (b->size - my_index->index_b);
		else 
			cost = my_index->index_b + (a->size - my_index->index_a);
	}
	return (cost);
}

int	find_idx_max(t_stack *s)
{
	int		i;
	long	nbr;
	int		idx;

	i = -1;
	nbr = INT_MIN;
	idx = 0;
	while (++i < s->size)
	{
		if (s->tab[i] > nbr)
		{
			nbr = s->tab[i];
			idx = i;
		}
	}
	return (idx);
}

t_index	ft_cost(int idx, t_stack *a, t_stack *b)
{
	int		i;
	int		tmp;
	t_index	my_index;

	i = -1;
	tmp = INT_MIN;
	my_index.index_b = find_idx_max(b);
	while (++i < b->size)
	{
		if (b->tab[i] < a->tab[idx])
		{
			if (b->tab[i] > tmp)
			{
				tmp = b->tab[i];
				my_index.index_b = i;
			}
		}
	}
	my_index.index_a = idx;
	my_index.cost = find_cost(&my_index, a, b);
	return (my_index);
}
