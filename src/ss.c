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
void	ss(t_stack **stack)
{
	sa(stack);
	sb(stack);
	ft_printf("ss\n");
}
