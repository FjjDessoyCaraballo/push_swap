/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:18:59 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/03/25 10:19:10 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_args(char **av)
{
	repeat_num(av);
	char_in(av);
}

char	**check_arg(int argc, char **argv, bool split)
{
	if (argc < 2)
	{
		ft_putstr_fd(ERR_ARG, 2);
		exit(1);
	}
	if (argc == 2)
	{	
		argv = ft_split(argv[1], ' ');
		split = true;
		if (!argv)
		{
			free_array(argv);
			exit(1);
		}
	}
	else
		argv = argv + 1;
	return (argv);
}

void	repeat_num(char **av)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (av[i])
	{
		a = i + 1;
		while (av[a])
		{
			if (!ft_strncmp(av[a], av[i], sizeof(int)))
			{
				ft_putstr_fd(ERR_REP, 2);
				exit(1);
			}
			a++;
		}
		i++;
	}
}

void	char_in(char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit_mod(av[i][j]))
			{
				ft_putstr_fd(ERR_STUPID, 2);
				exit(1);
			}
			j++;
		}
		i++;
	}

}

int	ft_isdigit_mod(int c)
{
	if ((c > 47 && c < 58) || c == 42 || c == 45)
		return (1);
	else
		return (0);
}
