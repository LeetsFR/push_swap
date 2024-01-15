/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:56:36 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/14 18:24:45 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_ra(t_stack *stack)
{
	long	tmp;

	tmp = stack->tab[0];
	ft_move_backward(stack);
	stack->tab[stack->size - 1] = tmp;
	ft_putstr("ra\n");
}

void	ft_rb(t_stack *stack)
{
	long	tmp;

	tmp = stack->tab[0];
	ft_move_backward(stack);
	stack->tab[stack->size - 1] = tmp;
	ft_putstr("rb\n");
}

void	ft_rr(t_stack *stack_a, t_stack *stack_b)
{
	long	tmp;

	tmp = stack_a->tab[0];
	ft_move_backward(stack_a);
	stack_a->tab[stack_a->size - 1] = tmp;
	tmp = stack_b->tab[0];
	ft_move_backward(stack_b);
	stack_b->tab[stack_b->size - 1] = tmp;
	ft_putstr("rr\n");
}
