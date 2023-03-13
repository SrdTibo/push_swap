/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:21:08 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/13 17:15:35 by tserdet          ###   ########.fr       */
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
    int j;
	int	a;

    j = 0;
    i = 0;
	a = stack->argm;
	while (j < n)
	{
		while (i < n)
		{
			if (stack->temp[i + 1] < stack->temp[i])
				swap(&stack->temp[i + 1], &stack->temp[i]);
			i++;
		}
		i = 0;
		j++;
	}
	print_stacks(stack);
	while (stack->temp[a - 2] > stack->temp[a - 1])
	{
		swap(&stack->temp[a - 2], &stack->temp[a - 1]);
		a--;
	}
    return (stack);
}

t_tab *to_positive(t_tab *stack)
{
    int i;
    int j;

    j = 0;
    i = 0;

    while (i < stack->s_a)
    {
        while(stack->a[i] != stack->temp[j])
            j++;
		stack->a[i] = j;
		j = 0;
        i++;
	}
    return (stack);
}

t_tab *init_b(t_tab *stack)
{
	int	i;

	i = 0;
	while (i < stack->argm)
	{
		stack->b[i] = -1;
		i++;
	}
	return (stack);
}

t_tab *first_sort(char **argv, t_tab *stack)
{
	(void)argv;
	init_b(stack);
    sort_tab(stack, stack->argm - 2);
    to_positive(stack);
    return (stack);
}
