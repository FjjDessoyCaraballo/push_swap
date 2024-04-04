/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:04:59 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/04/03 16:41:06 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	tmp = (*stack);
	last = (*stack);
	(*stack) = (*stack)->next;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = last;
	(*stack)->prev = NULL;
	last->next = NULL;
	last->prev = tmp;
	// while((*stack)->next != NULL)
	// {
	// 	ft_printf("previous is %p next is %p\n", (*stack)->prev, (*stack)->next);
	// 	(*stack) = (*stack)->next;
	// }
	// 	ft_printf("here\n");
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
