/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcollas <mcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 00:25:11 by mcollas           #+#    #+#             */
/*   Updated: 2023/12/31 03:21:57 by mcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void ft_sa(long *stack, int size)
{
    long tmp;

    if(size < 2)
        return;
    tmp = stack[0];
    stack[0] = stack[1];
    stack[1] = tmp;
    printf("sa");
}
    
void ft_sb(long *stack, int size)
{
    long tmp;

    if(size < 2)
        return;
    tmp = stack[0];
    stack[0] = stack[1];
    stack[1] = tmp;
    printf("sb");
}

void ft_ss(long *stack_a,long stack_b, int size)
{
   long tmp;

   if(size < 2)
        return;
    tmp = stack_a[0];
    stack_a[0] = stack_a[1];
    stack_a[1] = tmp;

    tmp = stack_b[0];
    stack_b[0] = stack_b[1];
    stack_b[1] = tmp;
    printf("ss");

}


