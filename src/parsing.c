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
			if (!ft_strncmp(av[a], av[i], 11))
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
			if (!ft_isdigit(av[i][j]))
			{
				ft_putstr_fd(ERR_STUPID, 2);
				exit(1);
			}
			j++;
		}
		i++;
	}

}
