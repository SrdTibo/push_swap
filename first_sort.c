/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:21:08 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/08 11:12:30 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(int *a, int *b)
{
    int temp;

	temp = *a;
    *a = *b;
    *b = temp;
}

t_tab *sort_tab(t_tab *stack, int n)
{
    int i;
	int	j;
	
	i = 0;
	j = 0;
    while (i < n) 
	{
        j = 0;
        while (j < n)
		{
            if (stack->temp[j] > stack->temp[j + 1])
                swap(&stack->temp[j], &stack->temp[j + 1]);
            j++;
        }
        i++;
    }
    return (stack);
}

t_tab *to_positive(t_tab *stack)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (i < stack->argm)
    {
        while(j < stack->argm)
        {
            if (stack->a[i] == stack->temp[j])
            {
                stack->a[i] = j;
            }
            j++;
        }
        j = 0;
        i++;
    }
    return (stack);
}

t_tab *first_sort(char **argv, t_tab *stack)
{
	(void)argv;
    sort_tab(stack, stack->argm - 2);
    to_positive(stack);
    return (stack);
}
