/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 23:40:43 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/01 20:18:47 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char **argv)
{
	int		i;
	stack	*stack_a;

	if (argc > 1)
	{
		stack_a->tab = my_stack_a(argc, argv, &stack_a->size);
		if (!stack_a->tab)
			return (printf("Error\n"));
		i = -1;
		printf("[");
		while (++i < stack_a->size)
		{
			if (i == stack_a->size - 1)
				printf("%ld", stack_a->tab[i]);
			else
				printf("%ld, ", stack_a->tab[i]);
		}
		printf("]\n");
		return (0);
	}
}
