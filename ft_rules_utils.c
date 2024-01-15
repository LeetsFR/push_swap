/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:24:09 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/13 02:00:24 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

// stack look like [4, 2, 40, 2] not like a tower

void	ft_move_forward(t_stack *stack)
{
	int	i;

	i = stack->size;
	while (--i > 0)
		stack->tab[i] = stack->tab[i - 1];
}

void	ft_move_backward(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->size - 1)
		stack->tab[i] = stack->tab[i + 1];
}
