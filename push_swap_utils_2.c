/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 13:31:22 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/14 16:26:22 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

int	ft_iszero(long nbr, char *str)
{
	if (nbr == 0)
	{
		if (ft_strcmp(str, "0") && ft_strcmp(str, "+0") && ft_strcmp(str, "-0"))
			return (1);
	}
	return (0);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
