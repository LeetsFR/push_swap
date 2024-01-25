/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:10:20 by mcollas           #+#    #+#             */
/*   Updated: 2024/01/25 02:01:11 by mcollas          ###   ########.fr       */
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
	true,
}				e_bool;

typedef struct Index_Stack
{
	int			index_a;
	int			index_b;
	int			cost;
	e_bool		pos;
}				t_index;

typedef struct Stack
{
	int			size;
	long		*tab;
}				t_stack;

// ft_next_push.c
void			push_in_top(t_index *next, t_stack *a, t_stack *b);
void			push_in_bottom(t_index *next, t_stack *a, t_stack *b);
void				push(t_index *next, t_stack *a, t_stack *b);

// ft_cost.c
e_bool			in_inter_top_idx(t_index *idx, t_stack *a, t_stack *b);
e_bool			in_inter_bottom_idx(t_index *idx, t_stack *a, t_stack *b);
e_bool			in_top_index(t_index *idx, t_stack *a, t_stack *b);
e_bool			in_bottom_index(t_index *idx, t_stack *a, t_stack *b);
int				find_cost(t_index *my_index, t_stack *a, t_stack *b);
t_index			ft_cost(int index_a, t_stack *a, t_stack *b);

// create_stack_a.c
e_bool			ft_no_duplicate(t_stack *stack);
e_bool			ft_long_stack(char **arr, t_stack *stack);
e_bool			ft_sort_wrong_arg(char **arr);
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
void			ft_putstr(char *str);

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
