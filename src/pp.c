/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:28:08 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/04/09 16:56:53 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushing(t_stack **stack_s, t_stack **stack_d)
{
	t_stack	*first;

	first = (*stack_s);
	(*stack_s) = (*stack_s)->next;
	if ((*stack_d) == NULL)
		first->next = NULL;
	else
		first->next = (*stack_d);
	(*stack_d) = first;
}

/* pa (push a): Take the first element at the top of b
and put it at the top of a. Do nothing if b is empty. */
void	pa(t_stack **stack_b, t_stack **stack_a)
{
	if (stack_b != NULL)
	{
		pushing(stack_b, stack_a);
		ft_printf("pa\n");
	}
}

/* pb (push b): Take the first element at the top
of a and put it at the top of b. Do nothing if a is empty.*/
void	pb(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a != NULL)
	{
		pushing(stack_a, stack_b);
		ft_printf("pb\n");
	}
}
