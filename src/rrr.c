/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:05:07 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/04/09 17:01:20 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	first = list_last(*stack);
	last = (*stack);
	while (last->next->next != NULL)
		last = last->next;
	first->next = (*stack);
	last->next = NULL;
	(*stack) = first;
}

/* rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one. */
void	rra(t_stack **stack)
{
	rev_rotate(stack);
	ft_printf("rra\n");
}

/* rrb (reverse rotate b): Shift down all elements
of stack b by 1. The last element becomes the first one.*/
void	rrb(t_stack **stack)
{
	rev_rotate(stack);
	ft_printf("rrb\n");
}

/* *rrr : rra and rrb at the same time. */
void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate(stack_a);
	rev_rotate(stack_b);
	ft_printf("rrr\n");
}
