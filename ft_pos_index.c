/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:58:09 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/27 12:41:26 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

e_bool	in_top_index(t_index *idx, t_stack *a, t_stack *b)
{
	if (idx->index_a <= (a->size / 2) && idx->index_b <= (b->size / 2))
		return (true);
	if (idx->index_a <= (a->size / 2) && idx->index_b <= idx->index_a)
		return (true);
	if (idx->index_b <= (b->size / 2) && idx->index_a <= idx->index_b)
		return (true);
	return (false);
}

e_bool	in_bottom_index(t_index *idx, t_stack *a, t_stack *b)
{
	if (idx->index_a > (a->size / 2) && idx->index_b > (b->size / 2))
		return (true);
	if (idx->index_a > (a->size / 2) && (b->size - idx->index_b) < (a->size
			- idx->index_a))
		return (true);
	if (idx->index_b > (b->size / 2) && (a->size - idx->index_a) < b->size
		- idx->index_b)
		return (true);
	return (false);
}

e_bool	in_inter_top_idx(t_index *idx, t_stack *a, t_stack *b)
{
	if (idx->index_a < (a->size / 2) && idx->index_b > (b->size / 2))
		if ((idx->index_b - idx->index_a) < (b->size - idx->index_b))
			return (true);
	if (idx->index_b < (b->size / 2) && idx->index_a > (a->size / 2))
		if ((idx->index_a - idx->index_a) < (a->size - idx->index_a))
			return (true);
	return (false);
}

e_bool	in_inter_bottom_idx(t_index *idx, t_stack *a, t_stack *b)
{
	if (idx->index_a > (a->size / 2) && idx->index_b < (b->size / 2))
		if ((b->size - idx->index_a) < idx->index_b)
			return (true);
	if (idx->index_b > (b->size / 2) && idx->index_a < (a->size / 2))
		if ((a->size - idx->index_b) > idx->index_a)
			return (true);
	return (false);
}
