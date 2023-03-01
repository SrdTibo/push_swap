/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:30:59 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/01 13:00:04 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_control	*initialisation()
{
    t_control	*list;
    t_pile		*element;

	list = malloc(sizeof(*list));
	element = malloc(sizeof(*element));
    if (list == NULL || element == NULL)
        return (0);
    element->content = 0;
    element->next = NULL;
    list->first = element->next;
    return (list);
}

int insertion(t_control *list, int nvNombre)
{
    t_pile *nouveau;

	nouveau = malloc(sizeof(*nouveau));
    if (list == NULL || nouveau == NULL)
        return (0);
    nouveau->content = nvNombre;
    nouveau->next = list->first;
    list->first = nouveau;
	return (1);
}

// int afficherListe(t_control *list)
// {
//     t_pile *actuel;

// 	actuel = list->first;
// 	if (list == NULL)
//         return (0);
//     while (actuel != NULL)
//     {
//         ft_printf("%d -> ", actuel->content);
//         actuel = actuel->next;
//     }
//     ft_printf("NULL\n");
// 	return (1);
// }

t_control	*put_list(int argc, char **argv)
{
	t_control	*list;
	int			i;

	list = initialisation();
	if (list == 0)
		return (0);
	i = 1;
	while (i < argc)
	{
		if ((insertion(list, atoi(argv[i]))) == 0 )
			return (0);
		i++;
	}
	// if (afficherListe(list) == 0)
	// 	return (0);
	return (list);
}