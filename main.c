/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:33:03 by mcollas           #+#    #+#             */
/*   Updated: 2023/12/28 03:06:22 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

long	*ft_stack_a(char **arr)
{
	int i;
	long tmp;
	long *stack;

	stack = malloc(ft_arraylen(arr) * sizeof(long));
	i = -1;
	while (arr[++i])
	{
		tmp = ft_atol(arr[i]);
		if (tmp == 0 )
			return (ft_free_array(arr),free(stack),NULL);
        stack[i] = tmp;
	}
    return(stack);
}

	char **ft_sort_arg(int argc, char **argv)
	{
		int i;
		char **arg;

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

	int main(int argc, char **argv)
	{
		int i;
        long *stack_a;

		i = 0;
		if (argc > 1)
		{
			stack_a = ft_stack_a(ft_sort_arg(argc, argv));
            if(!stack_a)
                return(printf("ERROR"));
			while (i < argc - 1)
			{
				printf("%ld\n", stack_a[i]);
				i++;
			}
		}
		return (0);
	}
