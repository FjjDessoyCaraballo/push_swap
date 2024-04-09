/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:39:50 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/04/09 19:11:13 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*find_next(t_stack **stack)
{
	t_stack	*tmp;

	tmp = (*stack);
	while (tmp->next != NULL)
	{
		if (tmp->index == -1)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}

t_stack	*find_min(t_stack **stack)
{
	t_stack	*min;

	min = (*stack);
	while ((*stack) != NULL)
	{
		if ((*stack)->nb < min->nb)
			min = (*stack);
		(*stack) = (*stack)->next;
	}
	return (min);
}

int	find_max(t_stack **stack)
{
	int		n;
	t_stack	*max;

	max = (*stack);
	while ((*stack) != NULL)
	{
		if ((*stack)->nb > max->nb)
			n = (*stack)->nb;
		(*stack) = (*stack)->next;
	}
	return (n);
}

void	gimme_index(t_stack **stack, int len)
{
	t_stack	*max;
	t_stack	*tmp;

	max = (*stack);
	tmp = (*stack);
	if (len == 0)
		return ;
	while (len > 0)
	{
		tmp = tmp->next;
		if (tmp->nb > max->nb && tmp->index == -1)
			max = tmp;
		if (tmp->next == NULL)
		{
			max->index = len;
			len--;
			max = find_next(stack);
			tmp = (*stack);
		}
	}
}
