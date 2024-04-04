/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:39:50 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/04/04 17:22:28 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_stack **stack)
{
	t_stack	*curr;
	int		min;

	curr = (*stack);
	min = curr->nb;
	while (curr != NULL)
	{
		if (curr->nb < min)
			min = curr->nb;
		curr = curr->next;
	}
	return (min);
}

int	find_max(t_stack **stack)
{
	t_stack	*curr;
	int		max;

	max = 0;
	curr = (*stack);
	max = curr->nb;
	while (curr != NULL)
	{
		if (curr->nb > max)
			max = curr->nb;
		curr = curr->next;
	}
	return (max);
}

void gimme_median(t_stack *stack)
{
	int		i;

	i = 0;
	if (stack->len % 2 == 0)
		stack->a_median = stack->len / 2;
	else
		stack->a_median = stack->len / 2 + 1;
}

void	target_number_a(t_stack **stack, t_stack *stack_b)
{
	t_stack	*tmp_b;
	t_stack *tmp_a;
	long	diff;
	
	tmp_b = stack_b;
	tmp_a = (*stack);
	while ((*stack))
	{
		diff = UINT_MAX;
		while (stack_b)
		{
			if ((stack_b->nb < (*stack)->nb) && ((long)(*stack)->nb - (long)stack_b->nb < diff))
			{
				diff = (*stack)->nb - stack_b->nb;
				(*stack)->target = stack_b->nb;
			}
			stack_b = stack_b->next;
		}
		stack_b = tmp_b;
		if (diff == UINT_MAX)
			(*stack)->target = find_max(&stack_b);
		(*stack) = (*stack)->next;
	}
	(*stack) = tmp_a;
}

void	target_number_b(t_stack **stack, t_stack *stack_b)
{
	t_stack	*tmp_b;
	t_stack *tmp_a;
	long	diff;
	
	tmp_b = stack_b;
	tmp_a = (*stack);
	while (stack_b)
	{
		diff = UINT_MAX;
		while ((*stack))
		{
			if ((stack_b->nb < (*stack)->nb) && ((long)(*stack)->nb - (long)stack_b->nb < diff))
			{
				diff = (*stack)->nb - stack_b->nb;
				(*stack)->target = stack_b->nb;
			}
			(*stack) = (*stack)->next;
		}
		(*stack) = tmp_a;
		if (diff == UINT_MAX)
			(*stack)->target = find_min(&stack_b);
		stack_b = stack_b->next;
	}
	stack_b = tmp_b;
}
