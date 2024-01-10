/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 00:25:11 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/10 17:52:14 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_sa(t_stack *stack)
{
	long	tmp;

	if (stack.size < 2)
		return ;
	tmp = stack.tab[0];
	stack.tab[0] = stack.tab[1];
	stack.tab[1] = tmp;
}

void	ft_sb(t_stack *stack)
{
	long	tmp;

	if (stack.size < 2)
		return ;
	tmp = stack.tab[0];
	stack.tab[0] = stack.tab[1];
	stack.tab[1] = tmp;
}

void	ft_ss(t_stack *stack_a, t_stack *stack_b)
{
	ft_sa(stack_a);
	ft_sb(stack_b);
}
