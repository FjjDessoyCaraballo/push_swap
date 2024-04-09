/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:04:59 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/04/09 17:00:59 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	first = (*stack)->next;
	last = list_last(*stack);
	last->next = (*stack);
	(*stack)->next = NULL;
	(*stack) = first;
}

/* ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one. */
void	ra(t_stack **stack)
{
	rotate(stack);
	ft_printf("ra\n");
}

/* rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one. */
void	rb(t_stack **stack)
{
	rotate(stack);
	ft_printf("rb\n");
}

/* rr : ra and rb at the same time. */
void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_printf("rr\n");
}
