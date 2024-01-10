/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:33:03 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/10 19:47:58 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

e_bool	ft_no_duplicate(t_stack *stack)
{
	int		i;
	int		j;
	long	tmp;

	if (!stack->tab)
		return (false);
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

t_stack	ft_long_stack(char **arr)
{
	int		i;
	long	tmp;
	t_stack	stack;

	if (!arr)
	{
		stack.tab = NULL;
		return (stack);
	}
	stack.size = ft_arraylen(arr);
	stack.tab = malloc(stack.size * sizeof(long));
	i = -1;
	while (arr[++i])
	{
		tmp = ft_atol(arr[i]);
		if (ft_iszero(tmp, arr[i]))
			return (ft_free_array(arr), free(stack.tab), stack);
		stack.tab[i] = tmp;
	}
	return (ft_free_array(arr), stack);
}

char	**ft_sort_wrong_arg(char **arr)
{
	int	i;
	int	j;
	int	len;

	if (!arr)
		return (NULL);
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

t_stack	my_stack_a(int argc, char **argv)
{
	char	**arr;
	t_stack	stack;

	arr = ft_sort_wrong_arg(ft_sort_arg(argc, argv));
	stack = ft_long_stack(arr);
	ft_no_duplicate(&stack);
	return (stack);
}
