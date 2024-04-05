/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 10:42:07 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/04/05 15:32:59 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	gimme_index(t_stack *stack)
{
	t_stack *tmp;
	int		i;

	tmp = stack;
	i = 0;
	if (stack->len % 2 == 0)
		stack->a_median = stack->len / 2;
	else
		stack->a_median = stack->len / 2 + 1;
	while (stack != NULL)
	{
		stack->index = i;
		if (i < stack->a_median)
			stack->median = true;
		else
			stack->median = false;
		stack = stack->next;
		i++;
	}
	stack = tmp;
}
void	set_cost(t_stack *stack, int lendifa, int lendifb)
{
	if (stack->median && stack->target->median)
	{
		if (stack->index < stack->target->index)
			stack->cost = stack->target->index;
		else
			stack->cost = stack->index;
	}
	else if ((!stack->median) && (!stack->target->median))
	{
		if (lendifa > lendifb)
			stack->cost = lendifa;
		else
			stack->cost = lendifb;
	}
}

void	gimme_cost(t_stack *stack, t_stack *stack_b)
{
	t_stack *tmp;
	int		len_difference_a;
	int		len_difference_b;

	tmp = stack;
	stack_b->lenb = gimme_length(stack_b);
	while (stack)
	{
		len_difference_a = stack->len - stack->index;
		len_difference_b = stack_b->lenb - stack->target;
		set_cost(stack, len_difference_a, len_difference_b);
		set_cost(stack_b, len_difference_a, len_difference_b);
		stack = stack->next;
	}
}