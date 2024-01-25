/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:46:44 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/25 16:14:14 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	push_in_top(t_index *next, t_stack *a, t_stack *b)
{
	int	i;

	i = -1;
	while (++i < next->cost)
	{
		{
			if (next->index_a > 0 && next->index_b > 0)
			{
				ft_rr(a, b);
				next->index_a -= 1;
				next->index_b -= 1;
			}
			else if (next->index_a > 0 && next->index_b == 0)
			{
				ft_ra(a);
				next->index_a -= 1;
			}
			else if (next->index_a == 0 && next->index_b > 0)
			{
				ft_rb(b);
				next->index_b -= 1;
			}
		}
	}
}

void	push_in_bottom(t_index *next, t_stack *a, t_stack *b)
{
	int	i;

	i = -1;
	while (++i < next->cost)
	{
		if (next->index_a < a->size && next->index_b < b->size)
		{
			ft_rrr(a, b);
			next->index_a += 1;
			next->index_b += 1;
		}
		else if (next->index_a < a->size && next->index_b == b->size)
		{
			ft_rra(a);
			next->index_a += 1;
		}
		else if (next->index_a == a->size && next->index_b < b->size)
		{
			ft_rrb(b);
			next->index_b += 1;
		}
	}
}

void	push_in_2(t_index *next, t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (i < next->cost)
	{
		if (next->index_a < (a->size / 2))
		{
			if (next->index_a > 0)
			{
				next->index_a -= 1;
				ft_ra(a);
				i++;
			}
		}
		else
		{
			if (next->index_a < a->size)
			{
				next->index_a += 1;
				i++;
				ft_rra(a);
			}
		}
		if (next->index_b < (b->size / 2))
		{
			if (next->index_b > 0)
			{
				next->index_b -= 1;
				i++;
				ft_rb(b);
			}
		}
		else
		{
			if (next->index_b < b->size)
			{
				next->index_b += 1;
				i++;
				ft_rra(b);
			}
		}
	}
}

void	push(t_index *next, t_stack *a, t_stack *b)
{
	if (in_top_index(next, a, b) || in_inter_top_idx(next, a, b))
		push_in_top(next, a, b);
	else if (in_bottom_index(next, a, b) || in_inter_bottom_idx(next, a, b))
		push_in_bottom(next, a, b);
	else
		push_in_2(next, a, b);
	ft_pb(a, b);
}
