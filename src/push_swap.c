/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:58:09 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/04/09 19:13:19 by fdessoy-         ###   ########.fr       */
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
		if (!add_node(stack, ft_atoi(argv[i++])))
			error_handling(stack, 1);
	}
	len = gimme_length(*stack);
	gimme_index(stack, len);
	instructions(stack, len);
	free_ll(stack);
}

void	instructions(t_stack **stack, int len)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (len == 1 || stack_order(stack))
		error_handling(stack, 99);
	else if (len == 2)
		sa(stack);
	else if (len == 3)
		sort_three(stack);
	else if (len <= 10)
		sort_four_or_more(stack, len);
	else
		radix(stack);
}
