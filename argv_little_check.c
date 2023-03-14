/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_little_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:46:19 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/14 12:38:35 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	nmbr_arg_tab(char **tab)
{
	int	p;
	int	i;

	p = 0;
	i = 0;
	while (tab[p])
	{
		while (tab[p][i])
			i++;
		i = 0;
		p++;
	}
	return (p);
}

int	check_argv_litlle(int argc, char **argv)
{
	int	i;
	int	p;

	p = 0;
	i = 0;
	while (p < argc)
	{
		while (argv[p][i] != '\0')
		{
			if ((argv[p][i] < 48 || argv[p][i] > 57) && argv[p][i] != 45)
			{
				ft_printf("Error\n");
				return (0);
			}
			i++;
		}
		i = 0;
		p++;
	}
	return (1);
}

int	check_double_little(int argc, char **argv)
{
	int	i;
	int	p;

	i = 0;
	p = 1;
	while (i < argc)
	{
		while (p < argc)
		{
			if (ft_atoi(argv[p]) == ft_atoi(argv[i]))
			{
				ft_printf("Error\n");
				return (0);
			}
			p++;
		}
		i++;
		p = i + 1;
	}
	return (1);
}

t_tab	*argv_split(char **argv, t_tab *stack)
{
	char	**tab;

	tab = ft_split(argv[1], ' ');
	if (!tab)
		return (0);
	if (check_argv_litlle(nmbr_arg_tab(tab), tab) == 0)
		return (0);
	if (check_double_little(nmbr_arg_tab(tab), tab) == 0)
		return (0);
	if (put_tab_little(nmbr_arg_tab(tab), tab, stack) == 0)
		return (0);
	return (stack);
}

t_tab	*argv_little_check(char **argv, t_tab *stack)
{
	if (argv_split(argv, stack) == 0)
		return (0);
	return (stack);
}
