/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:33:03 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/29 12:31:31 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

bool	ft_no_duplicate(t_stack *stack)
{
	int		i;
	int		j;
	long	tmp;

	i = -1;
	while (++i < stack->size)
	{
		tmp = stack->tab[i];
		if (tmp > INT_MAX || tmp < INT_MIN)
			return (free(stack->tab), false);
		j = i;
		while (++j < stack->size)
		{
			if (tmp == stack->tab[j])
				return ((free(stack->tab), false));
		}
	}
	return (true);
}

bool	ft_long_stack(char **arr, t_stack *stack)
{
	int		i;
	long	tmp;

	if (!arr)
		return (false);
	stack->size = ft_arraylen(arr);
	stack->tab = malloc(stack->size * sizeof(long));
	i = -1;
	while (arr[++i])
	{
		tmp = ft_atol(arr[i]);
		if (ft_iszero(tmp, arr[i]))
			return (ft_free_array(arr), free(stack->tab), false);
		stack->tab[i] = tmp;
	}
	return (ft_free_array(arr), true);
}

bool	ft_sort_wrong_arg(char **arr)
{
	int	i;
	int	j;
	int	len;

	if (!arr)
		return (false);
	i = -1;
	while (arr[++i])
	{
		j = -1;
		len = 0;
		while (arr[i][++j])
		{
			if (len > LEN_INT_MIN)
				return (ft_free_array(arr), false);
			len++;
		}
	}
	return (true);
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
			arg[i] = malloc((ft_strlen(argv[i + 1]) + 1) * sizeof(char));
			if (!arg)
				return (ft_free_array(arg), NULL);
			ft_strcpy(arg[i], argv[i + 1]);
		}
		arg[i] = NULL;
	}
	return (arg);
}

t_stack	my_stack_a(int argc, char **argv)
{
	char	**arr;
	t_stack	stack;

	stack.tab = NULL;
	arr = ft_sort_arg(argc, argv);
	if (!arr || !ft_sort_wrong_arg(arr))
		return (stack);
	if (!ft_long_stack(arr, &stack) || !ft_no_duplicate(&stack))
		stack.tab = NULL;
	return (stack);
}
