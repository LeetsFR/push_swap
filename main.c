/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 23:40:43 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/10 18:15:05 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_print_tab(t_stack *stack)
{
	int	i;

	i = -1;
	printf("[");
	while (++i < stack->size)
	{
		if (i == stack->size - 1)
			printf("%ld", stack->tab[i]);
		else
			printf("%ld, ", stack->tab[i]);
	}
	printf("]\n");
}
int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack stack_b;

	if (argc > 1)
	{
		stack_a = my_stack_a(argc, argv);
		if (!stack_a.tab)
			return (printf("Error\n"));
		stack_b.tab = malloc(stack_a.size * sizeof(long));
		if (!stack_b.tab)
			return (0);
		stack_b.size = 0;
		ft_print_tab(&stack_a);
		ft_print_tab(&stack_b);
		return (0);
	}
}
