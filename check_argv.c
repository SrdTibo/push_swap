/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:35:50 by tserdet           #+#    #+#             */
/*   Updated: 2023/02/22 17:20:19 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_argv(int argc, char **argv)
{
	int	i;
	int	p;

	p = 1;
	i = 0;
	if (argc <= 1)
		return (0);
	while (p < argc)
	{
		while (argv[p][i] != '\0')
		{
			if ((argv[p][i] < 48 || argv[p][i] > 57) && argv[p][i] != 45)
			{
				ft_printf("Error\nARGV must be numbers");
				return (0);
			}
			i++;
		}
		i = 0;
		p++;
	}
	return (1);
}

int check_double(int argc, char **argv)
{
	int	i;
	int	p;

	i = 1;
	p = 2;
	if (argc > 2)
	{
		while (i < argc)
		{
			while (p < argc)
			{
				if (ft_atoi(argv[p]) == ft_atoi(argv[i]))
				{
					ft_printf("Error\nThere should be no duplicates");
					return (0);
				}
				p++;
			}
			i++;
			p = i + 1;
		}
	}
	return (1);
}
