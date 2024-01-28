/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:15:28 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/28 16:16:31 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_rra(t_stack *stack)
{
	long	tmp;

	tmp = stack->tab[stack->size - 1];
	ft_move_forward(stack);
	stack->tab[0] = tmp;
	ft_putstr("rra\n");
}

void	ft_rrb(t_stack *stack)
{
	long	tmp;

	tmp = stack->tab[stack->size - 1];
	ft_move_forward(stack);
	stack->tab[0] = tmp;
	ft_putstr("rrb\n");
}

void	ft_rrr(t_stack *stack_a, t_stack *stack_b)
{
	long	tmp;

	tmp = stack_a->tab[stack_a->size - 1];
	ft_move_forward(stack_a);
	stack_a->tab[0] = tmp;
	tmp = stack_b->tab[stack_b->size - 1];
	ft_move_forward(stack_b);
	stack_b->tab[0] = tmp;
	ft_putstr("rrr\n");
}
