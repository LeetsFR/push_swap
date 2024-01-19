/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 00:29:45 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/19 01:52:54 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_first_pb(t_stack *a, t_stack *b)
{
	ft_pb(a, b);
	b->min = b->tab[0];
	b->max = b->tab[0];
	ft_pb(a, b);
	if (b->min > b->tab[0])
		b->min = b->tab[0];
	else
		b->max = b->tab[0];
}

e_bool	in_top_index(t_index *idx, t_stack *a, t_stack *b)
{
	if (idx->index_a < (a->size / 2) && idx->index_b <= (b->size / 2))
		return (true);
	if (idx->index_a < (a->size / 2) && idx->index_b <= (a->size / 2))
		return (true);
	if (idx->index_b <= (b->size / 2) && idx->index_a <= (b->size / 2))
		return (true);
	return (false);
}

e_bool	in_botton_index(t_index *idx, t_stack *a, t_stack *b)
{
	if (!(idx->index_a < (a->size / 2) && idx->index_b <= (b->size / 2)))
		return (true);
	if (!(idx->index_a < (a->size / 2) && idx->index_b <= (a->size / 2)))
		return (true);
	if (!(idx->index_b <= (b->size / 2) && idx->index_a <= (b->size / 2)))
		return (true);
	return (false);
}

int	find_cost(t_index *my_index, t_stack *a, t_stack *b)
{
	int	cost;

	if (in_top_index(my_index, a, b))
	{
		if(my_index->index_a > my_index->index_b
            cost = index_a;
        else
            cost = index_b;
	}
	else if (in_bottom_index(my_index, a, b))
	{
		if (my_index->index_a > my_index->index_b)
			cost = (b->size / 2) - my_index->index_b;
		else
			cost = (b->size / 2) - my_index->index_a;
	}
	else
	{
		cost = index_a + index_b;
	}
	return (cost);
}

t_index	ft_cost(int index_a, t_stack *a, t_stack *b)
{
	int		index_b;
	t_index	my_index;

	i = 0;
	if (a->tab[index_a] > b->max)
	{
		while (i < b->size && b->tab[index_b] != b->max)
			i++;
		b->max = a->tab[index_a];
	}
	else if (a->tab[index_a] < b->min)
	{
		while (i < b->size && b->tab[index_b] != b->max)
			i++;
		b->min = a->tab[index_a];
	}
	else
	{
		while (a->tab[index_a] > b->tab[index_b])
			i++;
	}
	my_index.index_a = index_a;
	my_index.index_b = index_b;
	my_index.cost = find_cost(my_index, a, b);
	return (my_index);
}
