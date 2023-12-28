/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:10:20 by mcollas           #+#    #+#             */
/*   Updated: 2023/12/28 18:00:40 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "limits.h"
# include "stdio.h"
# include "stdlib.h"
# include "unistd.h"

# define LEN_INT_MIN 11

// main.c
char			**ft_sort_arg(int argc, char **argv);

// push_swap_utils.c
char			*ft_strcpy(char *dest, const char *source);
char			*ft_strdup(const char *str);
unsigned int	ft_strlen(char const *str);
long			ft_atol(const char *str);
unsigned int	ft_arraylen(char **array);

// push_swap_utils_2.c
int				ft_strcmp(char *str1, char *str2);
int				ft_iszero(int long, char *str);
// push_swap_split.c
int				ft_count_word(const char *str);
int				ft_next_strlen(const char *str);
void			ft_next_strcpy(const char *source, char *dest);
void			ft_free_array(char **arr);
char			**ft_split(const char *str);
#endif
