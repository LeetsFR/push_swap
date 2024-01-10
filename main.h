/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:10:20 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/10 19:39:46 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "limits.h"
# include "stdio.h"
# include "stdlib.h"
# include "unistd.h"

# define LEN_INT_MIN 11

typedef enum
{
	false,
	true
}				e_bool;

typedef struct Stack
{
	int			size;
	long		*tab;
}				t_stack;

// create_stack_a.c
e_bool			ft_no_duplicate(t_stack *stack);
t_stack			ft_long_stack(char **arr);
char			**ft_sort_wrong_arg(char **arr);
char			**ft_sort_arg(int argc, char **argv);
t_stack			my_stack_a(int argc, char **argv);

// push_swap_utils.c
char			*ft_strcpy(char *dest, const char *source);
char			*ft_strdup(const char *str);
unsigned int	ft_strlen(char const *str);
long			ft_atol(const char *str);
unsigned int	ft_arraylen(char **array);

// push_swap_utils_2.c
int				ft_strcmp(char *str1, char *str2);
int				ft_iszero(long nbr, char *str);

// push_swap_split.c
int				ft_count_word(const char *str);
int				ft_next_strlen(const char *str);
void			ft_next_strcpy(const char *source, char *dest);
void			ft_free_array(char **arr);
char			**ft_split(const char *str);

// ft_rules_utils.c
void			ft_move_forward(t_stack *stack);
void			ft_move_backward(t_stack *stack);

// ft_swap.c
void			ft_sa(t_stack *stack);
void			ft_sb(t_stack *stack);
void			ft_ss(t_stack *stack_a, t_stack *stack_b);

// ft_push.c
void			ft_pa(t_stack *stack_a, t_stack *stack_b);
void			ft_pb(t_stack *stack_a, t_stack *stack_b);

// ft_rotate.c
void			ft_ra(t_stack *stack);
void			ft_rb(t_stack *stack);
void			ft_rr(t_stack *stack_a, t_stack *stack_b);

// ft_reverse.c
void			ft_rra(t_stack *stack);
void			ft_rrb(t_stack *stack);
void			ft_rrr(t_stack *stack_a, t_stack *stack_b);

#endif
