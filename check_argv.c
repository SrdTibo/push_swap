/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:35:50 by tserdet           #+#    #+#             */
/*   Updated: 2023/02/22 13:56:20 by tserdet          ###   ########.fr       */
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
	{
		ft_printf("Ther's no ARGV");
		return (0);	
	}
	while (p < argc)
	{
		while (argv[p][i] != '\0')
		{
			if ((argv[p][i] < 48 || argv[p][i] > 57) && argv[p][i] != 45)
			{
				ft_printf("ARGV must be integer");
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
	int temp;

	i = 1;
	p = 1;
	while (i < argc)
	{
		temp = atoi(argv[i]);
		while (p < argc)
		{
			if (atoi(argv[p]) == temp)
			{
				ft_printf("There should be no duplicates");
				return (0);
			}
			p++;
		}
		p = i + 1;
		i++;
	}
	return (1);
}
