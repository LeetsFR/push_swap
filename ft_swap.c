/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 00:25:11 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/29 15:06:08 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_sa(t_stack *stack)
{
	long	tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->tab[0];
	stack->tab[0] = stack->tab[1];
	stack->tab[1] = tmp;
	ft_putstr_fd("sa\n", 1);
}

void	ft_sb(t_stack *stack)
{
	long	tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->tab[0];
	stack->tab[0] = stack->tab[1];
	stack->tab[1] = tmp;
	ft_putstr_fd("sb\n", 1);
}

void	ft_ss(t_stack *stack_a, t_stack *stack_b)
{
	long	tmp;

	if (stack_a->size >= 2)
	{
		tmp = stack_a->tab[0];
		stack_a->tab[0] = stack_a->tab[1];
		stack_a->tab[1] = tmp;
	}
	if (stack_b->size >= 2)
	{
		tmp = stack_b->tab[0];
		stack_b->tab[0] = stack_b->tab[1];
		stack_b->tab[1] = tmp;
	}
	ft_putstr_fd("ss\n", 1);
}
