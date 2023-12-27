/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_split.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:58:18 by mcollas           #+#    #+#             */
/*   Updated: 2023/12/27 18:50:43 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_count_word(const char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && str[i])
				i++;
			word++;
		}
		else
			i++;
	}
	return (word);
}

int	ft_next_strlen(const char *str)
{
	static unsigned int	i;
	unsigned int		len;

	len = 0;
	while (str[i] == ' ' && str[i])
		i++;
	while (str[i] && str[i] != ' ')
	{
		i++;
		len++;
	}
	return (len);
}

void	ft_next_strcpy(const char *source, char *dest)
{
	static unsigned int	i;
	unsigned int		j;

	j = 0;
	while (source[i] == ' ' && source[i])
		i++;
	while (source[i] && source[i] != ' ')
	{
		dest[j] = source[i];
		i++;
		j++;
	}
	dest[j] = '\0';
}

char	**ft_split(const char *str)
{
	int		i;
	int		count_word;
	char	**split;

	i = 0;
	count_word = ft_count_word(str);
	split = malloc((count_word + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (i < count_word)
	{
		split[i] = malloc((ft_next_strlen(str) + 1) * sizeof(char));
		if (!split[i])
		{
			while (i >= 0)
				free(split[i--]);
			return (free(split), NULL);
		}
		ft_next_strcpy(str, split[i++]);
	}
	split[i] = NULL;
	return (split);
}
