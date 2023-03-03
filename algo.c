/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:21:08 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/03 15:10:44 by tserdet          ###   ########.fr       */
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
0
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

t_tab *algo(int argc, char **argv)
{
	t_tab 	*stack;
	int		i;

	i = 0;
	stack = put_tab(argc, argv);
	if (stack == NULL)
	{
		free_end(stack);
		return (0);
	}
	sort_tab(stack, argc - 2);
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