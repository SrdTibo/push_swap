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

t_tab *algo(char **argv, t_tab *stack)
{
	(void)argv;
    if (stack == NULL)
    {
        free_end(stack);
        return (0);
    }
    sort_tab(stack, stack->argm - 2);
    return (stack);
}

/*	
	- Trier tous les nombres;
	- Ajouter la position des nombres trier a la stack A;
	- Parcourir stack A:
		si decallage de bit = 0 -> push dans stack B
		sinon continuer de parcourir Stack A;
	- Push tout B au dessu de A;
*/