/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 16:55:17 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/29 15:06:31 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_pa(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_b->size)
		return ;
	stack_a->size += 1;
	ft_move_forward(stack_a);
	stack_a->tab[0] = stack_b->tab[0];
	ft_move_backward(stack_b);
	stack_b->size -= 1;
	ft_putstr_fd("pa\n", 1);
}

void	ft_pb(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_a->size)
		return ;
	stack_b->size += 1;
	ft_move_forward(stack_b);
	stack_b->tab[0] = stack_a->tab[0];
	ft_move_backward(stack_a);
	stack_a->size -= 1;
	ft_putstr_fd("pb\n", 1);
}
