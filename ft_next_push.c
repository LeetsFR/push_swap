/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:46:44 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/23 15:18:02 by mcollas          ###   ########.fr       */
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

void	push(t_index *next, t_stack *a, t_stack *b)
{
	if (in_top_index(next, a, b))
		push_in_top(next, a, b);
	else if (in_bottom_index(next, a, b))
		push_in_bottom(next, a, b);
	else
		printf("WE NEED THIS LINE");
	ft_pb(a, b);
}
