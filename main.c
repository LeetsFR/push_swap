/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 23:40:43 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/24 16:31:25 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_print_tab(t_stack *a, t_stack *b)
{
	int	i;

	i = -1;
	printf("A = ");
	while (++i < a->size)
		printf("%ld\n", a->tab[i]);
	printf("\n");
	i = -1;
	printf("B = ");
	while (++i < b->size)
		printf("%ld\n ", b->tab[i]);
	printf("\n");
}

t_index	next_push(t_stack *a, t_stack *b)
{
	int		i;
	t_index	next;
	t_index	tmp;

	i = -1;
	next.cost = INT_MAX;
	while (++i < a->size)
	{
		tmp = ft_cost(i, a, b);
		if (tmp.cost < next.cost)
			next = tmp;
	}
	return (next);
}

void	ft_sort_a(t_stack *a)
{
	if (a->tab[0] > a->tab[1] && (a->tab[0] > a->tab[2])
		&& (a->tab[1] < a->tab[2]))
		ft_rra(a);
	if (a->tab[0] > a->tab[1])
		ft_sa(a);
	if (a->tab[0] > a->tab[2])
		ft_rra(a);
	if (a->tab[1] > a->tab[2])
	{
		ft_ra(a);
		ft_sa(a);
	}
	if (a->tab[2] < a->tab[0])
		ft_rra(a);
}

void	push_swap(t_stack *a, t_stack *b)
{
	t_index	next;

	if (a->size > 3)
	{
		ft_pb(a, b);
		ft_pb(a, b);
		while (a->size > 3)
		{
			next = next_push(a, b);
			push(&next, a, b);
		}
	}
	ft_sort_a(a);
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

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
		ft_print_tab(&stack_a, &stack_b);
		free(stack_a.tab);
		free(stack_b.tab);
	}
	return (0);
}
