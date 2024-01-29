/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:56:36 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/29 15:06:56 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_ra(t_stack *stack)
{
	long	tmp;

	tmp = stack->tab[0];
	ft_move_backward(stack);
	stack->tab[stack->size - 1] = tmp;
	ft_putstr_fd("ra\n", 1);
}

void	ft_rb(t_stack *stack)
{
	long	tmp;

	tmp = stack->tab[0];
	ft_move_backward(stack);
	stack->tab[stack->size - 1] = tmp;
	ft_putstr_fd("rb\n", 1);
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
	ft_putstr_fd("rr\n", 1);
}
