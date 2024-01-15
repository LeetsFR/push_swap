/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 23:40:43 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/15 17:19:44 by mcollas          ###   ########.fr       */
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

int	calcule_cost(int index_a, int index_b, int size_a, int size_b)
{
	int cost;

	if (index_a <= (size_a / 2) && index_b <= (size_b / 2))
	{
		if (index_a > index_b)
			cost = index_a + 1;
		else
			cost = index_b + 1;
	}
	else if (index_a > (size_a / 2) && index_b > (size_b / 2))
	{
		if (index_a < index_b)
			cost = (size_a - index_a) + 1;
		else
			cost = (size_b - index_b) + 1;
	}
	else
	{
        if (index_a >
	}
}

	t_count find_cheapest(t_stack * a, t_stack * b)
	{
		t_count count;
		int i;
		int j;

		i = 0;
		j = 0;
		while (i < a->size)
		{
			while (a->tab[i] > b->tab[j])
				j++;
		if(count == 0 || count.tab > calcule_cost(i, j, a->size, b->size);
		}
	}

	void push_swap(t_stack * a, t_stack * b)
	{
		if (a->size < 3)
		{
			ft_pb(a, b);
			ft_pb(a, b);
			while (a->size < 3)
			{
			}
		}

		int main(int argc, char **argv)
		{
			t_stack stack_a;
			t_stack stack_b;

			if (argc > 1 && argc < INT_MAX)
			{
				stack_a = my_stack_a(argc, argv);
				if (!stack_a.tab)
					return (ft_putstr("Error\n"), 0);
				stack_b.tab = malloc(stack_a.size * sizeof(long));
				if (!stack_b.tab)
					return (ft_putstr("Error\n"), 0);
				stack_b.size = 0;
				push_swap(&stack_a, &stack_b);
				printf("A=");
				ft_print_tab(&stack_a);
				printf("B=");
				ft_print_tab(&stack_b);
				free(stack_a.tab);
				free(stack_b.tab);
				return (0);
			}
		}
