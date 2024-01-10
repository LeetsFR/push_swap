/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:15:28 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/10 19:50:49 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_rra(t_stack *stack)
{
	long	tmp;

	tmp = stack->tab[0];
	ft_move_forward(stack);
	stack->tab[stack->size - 1] = tmp;
}

void	ft_rrb(t_stack *stack)
{
	long	tmp;

	tmp = stack->tab[0];
	ft_move_forward(stack);
	stack->tab[stack->size - 1] = tmp;
}

void	ft_rrr(t_stack *stack_a, t_stack *stack_b)
{
	ft_rra(stack_a);
	ft_rrb(stack_b);
}
