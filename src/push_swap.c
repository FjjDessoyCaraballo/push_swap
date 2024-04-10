/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:58:09 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/04/10 13:52:04 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(char **argv, t_stack **stack)
{
	int	i;
	int	len;

	i = 0;
	while (argv[i])
	{
		if (long_check(argv[i]) == 1)
			error_handling(stack, 3);
		i++;
	}
	i = 0;
	while (argv[i])
	{
		if (!add_node(stack, ft_atoi(argv[i++])))
			error_handling(stack, 1);
	}
	len = gimme_length(*stack);
	if (len == 1 || len == 0)
		error_handling(stack, 2);
	gimme_index(stack, len);
	instructions(stack, len);
	free_ll(stack);
}

int	long_check(char *str)
{
	int		x;
	char	*ou_flow;

	x = ft_atoi(str);
	ou_flow = ft_itoa(x);
	if (ft_strcmp(str, ou_flow) != 0)
		return (1);
	return (0);
}

void	instructions(t_stack **stack, int len)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (stack_order(stack))
		error_handling(stack, 0);
	else if (len == 2)
		sa(stack);
	else if (len == 3)
		sort_three(stack);
	else if (len <= 10)
		sort_four_or_more(stack, len);
	else
		radix(stack);
}

void	error_handling(t_stack **stack, int flag)
{
	if (flag == 1)
	{
		ft_putstr_fd(ERR, 2);
		free_ll(stack);
		exit(1);
	}
	else if (flag == 2)
	{
		free_ll(stack);
		exit(0);
	}
	else if (flag == 3)
	{
		ft_putstr_fd(ERR, 2);
		exit(0);
	}
	exit(0);
}
