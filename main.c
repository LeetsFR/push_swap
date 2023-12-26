/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:33:03 by mcollas           #+#    #+#             */
/*   Updated: 2023/12/26 18:28:25 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_push_swap(int *tab, int size)
{
}

int	main(int argc, char **argv)
{
	int	*tab;
	int	my_int;
	int	i;

	tab = malloc(argc + 1 * sizeof(int));
	if (!tab)
		return (NULL);
	i = 1;
	while (i <= argc)
	{
		my_int = ft_atoi(argv[i]);
		if (my_int == '0' && argv[i] != "0")
		{
			write(1, "Error", 5);
			return (free(line), 0);
		}
		tab[i++] = my_int;
	}
    tab[i] = NULL;
    ft_push_swap(tab, argc)
}
