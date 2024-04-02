/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 09:10:52 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/03/28 09:10:55 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*second_n;
	t_stack	*third_n;

	second_n = (*stack)->next;
	third_n = second_n->next;
	second_n->next = (*stack);
	(*stack)->next = third_n;
	(*stack) = second_n;
	(*stack)->next->prev = (*stack);
	if (third_n != NULL)
		(*stack)->next->next->prev = (*stack)->next;	
	(*stack)->prev = NULL;
}
/*
sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
Where: Head will become next and next will become head
*/
void	sa(t_stack **stack)
{
	swap(stack);
	ft_printf("sa\n");
}
/*
sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
*/
void	sb(t_stack **stack)
{
	swap(stack);
	ft_printf("sb\n");
}
/*
ss : sa and sb at the same time.
*/
void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_printf("ss\n");
}
