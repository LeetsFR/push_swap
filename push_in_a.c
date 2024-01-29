/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_in_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:22:09 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/29 12:30:26 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	push_all_in_a(t_stack *a, t_stack *b)
{
	int	imax;

	imax = find_idx_max(b);
	if (imax <= (b->size / 2))
		while (imax-- > 0)
			ft_rb(b);
	else
		while (imax++ < b->size)
			ft_rrb(b);
	imax = find_idx_max(a);
	while (a->tab[imax] > b->tab[0] && imax >= 0)
	{
		imax--;
		ft_rra(a);
	}
	while (b->size > 0)
	{
		if (a->tab[a->size - 1] > b->tab[0] && a->tab[a->size - 1] < a->tab[0])
			ft_rra(a);
		else
			ft_pa(a, b);
	}
}

void	ft_clear_a(t_stack *a)
{
	int	imax;

	if (a->size > 2)
	{
		imax = find_idx_max(a);
		if (imax == 0)
			ft_ra(a);
		else if (imax == 1)
			ft_rra(a);
	}
	if (a->tab[0] > a->tab[1])
		ft_sa(a);
}

void	verif(t_stack *a)
{
	int	imax;

	imax = find_idx_max(a);
	if (imax == a->size - 1)
		return ;
	if (imax > (a->size / 2))
	{
		while (imax != a->size - 1)
		{
			ft_rra(a);
			imax++;
		}
	}
	else
	{
		while (imax != -1)
		{
			ft_ra(a);
			imax--;
		}
	}
}
