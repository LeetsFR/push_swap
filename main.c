/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:33:03 by mcollas           #+#    #+#             */
/*   Updated: 2023/12/27 18:50:33 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	**ft_sort_arg(int argc, char **argv)
{
	int		i;
	char	**arg;

	if (argc == 2)
		arg = ft_split(argv[1]);
	else
	{
		arg = malloc((argc) * sizeof(char *));
		if (!arg)
			return (NULL);
		i = 0;
		while (i < (argc - 1))
		{
			arg[i] = malloc((ft_strlen(argv[i + 1]) + 1) * sizeof(char));
			if (!arg)
				return (NULL);
			ft_strcpy(arg[i], argv[i + 1]);
			i++;
		}
		arg[i] = NULL;
	}
	return (arg);
}

int	main(int argc, char **argv)
{
	char	**tab;
	int		i;

	i = 0;
	if (argc > 1)
	{
		tab = ft_sort_arg(argc, argv);
		while (tab[i])
		{
			printf("%s\n", tab[i]);
			free(tab[i]);
			i++;
		}
		free(tab);
	}
	return (0);
}
