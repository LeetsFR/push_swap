/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:56:36 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/10 17:59:25 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_ra(t_stack *stack)
{
	ft_move_backward(stack);
	stack.tab[0] = stack.tab[size - 1];
}

void	ft_rb(t_stack *stack)
{
	ft_move_backward(stack);
	stack.tab[0] = stack.tab[size - 1];
}

void	ft_rr(t_stack *stack_a, t_stack *stack_b)
{
	ft_ra(stack_a);
	ft_rb(stack_b);
}
