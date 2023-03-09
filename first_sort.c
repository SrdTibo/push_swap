/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:21:08 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/09 21:01:29 by thib             ###   ########.fr       */
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

    j = 0;
    i = 0;
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
	while (stack->temp[stack->argm - 2] > stack->temp[stack->argm - 1])
	{
		swap(&stack->temp[stack->argm - 2], &stack->temp[stack->argm - 1]);
		stack->argm--;
	}
    return (stack);
}

t_tab *to_positive(t_tab *stack)
{
    int i;
    int j;

    j = 0;
    i = 0;




	printf("s_a = %d\n", stack->s_a);
	printf("s_temp = %d\n", stack->s_temp);
	printf("a = ");
	while(i < stack->s_a)
	{
		printf("%d, ", stack->a[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("temp = ");
	while(i < stack->s_temp)
	{
		printf("%d, ", stack->temp[i]);
		i++;
	}
	printf("\n");
	i = 0;






    while (i < stack->s_a)
    {
        while(j < stack->s_temp)
        {
            if (stack->a[i] == stack->temp[j])
                stack->a[i] = j;
            j++;
        }
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
