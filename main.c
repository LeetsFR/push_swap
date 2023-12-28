/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:33:03 by mcollas           #+#    #+#             */
/*   Updated: 2023/12/28 18:26:05 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

long	*ft_no_duplicate(long *stack, int size)
{
	int		i;
	int		j;
	long	tmp;

	i = -1;
	while (++i < size)
	{
		tmp = stack[i];
		if (tmp > INT_MAX || tmp < INT_MIN)
			return (free(stack), NULL);
		j = i;
		while (++j < size)
		{
			if (tmp == stack[i])
				return ((free(stack), NULL));
		}
	}
	return (stack);
}

long	*ft_stack_a(char **arr)
{
	int		i;
	long	tmp;
	long	*stack;

	if (!arr)
		return (NULL);
	stack = malloc(ft_arraylen(arr) * sizeof(long));
	i = -1;
	while (arr[++i])
	{
		tmp = ft_atol(arr[i]);
		if (ft_iszero(tmp, arr[i]))
			return (ft_free_array(arr), free(stack), NULL);
		stack[i] = tmp;
	}
	return (ft_free_array(arr), stack);
}

char	**ft_sort_wrong_arg(char **arr)
{
	int	i;
	int	j;
	int	len;

	i = -1;
	while (arr[++i])
	{
		j = -1;
		len = 0;
		while (arr[i][++j])
		{
			if (len > LEN_INT_MIN)
				return (ft_free_array(arr), NULL);
			len++;
		}
	}
	return (arr);
}

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
		i = -1;
		while (++i < (argc - 1))
		{
			arg[i] = malloc((ft_strlen(argv[i + 1] + 1) * sizeof(char)));
			if (!arg)
				return (ft_free_array(arg), NULL);
			ft_strcpy(arg[i], argv[i + 1]);
		}
		arg[i] = NULL;
	}
	return (arg);
}

int	main(int argc, char **argv)
{
	int		i;
	long	*stack_a;

	//	int		size;
	//	size = argc - 1;
	i = 0;
	if (argc > 1)
	{
		stack_a = ft_stack_a(ft_sort_wrong_arg(ft_sort_arg(argc, argv)));
		if (!stack_a)
			return (printf("ERROR"));
		while (i < argc - 1)
		{
			printf("%ld\n", stack_a[i]);
			i++;
		}
		free(stack_a);
	}
	return (0);
}
