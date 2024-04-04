/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:31:45 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/04/04 16:45:34 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/* should work for 4 to 5 */
// int	calculate_moves_to_b(t_stack *stack_b, int num)
// {
// 	int count_moves;
// 	int i;

// 	i = 0;
// 	while (i < stack_b->len)
// 	{
// 		if (stack_b->nb > num > stack_b->next->nb)
// 			return (i);
// 		i++;
// 	}
// 	stack_b->next->nb < num;
// }

// void sort(t_stack **stack)
// {
// 	t_stack	*stack_b;
// 	int	bmoves;
// 	int	i;
// 	int	min;
// 	int best;

// 	bmoves = 0;
// 	best = 0;
// 	min = 0;
// 	i = 0;
// 	while ((*stack)->len > 3)
// 	{
// 		while (i < (*stack)->len)
// 		{
// 			bmoves = calculate_moves_to_b(stack_b, stack_b->nb);
// 			if (bmoves + i < min)
// 				min = bmoves + i;
// 				best = i;
// 			(*stack) = (*stack)->next;
// 			i++;
// 			push_best(i, (*stack), stack b)	
// 		}
// 	}
// 	sort_three((*stack));
// 	//pushback
// 	while (stack_b)
// 		if (stack_b->nb > end->nb)
// 			pa(&stack_b, (*stack));
// 		else
// 			rra(*stack);
// 	smallest to top a
// }


void	sort_faux(t_stack **stack)
{
	t_stack	*stack_b = NULL;
	
	pb(stack, &stack_b);
	pb(stack, &stack_b);
	target_number(stack, stack_b);
	retrieve_stack(stack_b);
}

void	sort_three(t_stack **stack)
{
	if ((*stack)->nb > (*stack)->next->nb && (*stack)->nb
		> (*stack)->next->next->nb)
	{
		if ((*stack)->next->nb < (*stack)->next->next->nb)
			ra(stack);
		else
		{
			ra(stack);
			sa(stack);
		}
	}
	else if ((*stack)->nb < (*stack)->next->nb && (*stack)->nb
		> (*stack)->next->next->nb)
		rra(stack);
	else if ((*stack)->nb > (*stack)->next->nb && (*stack)->nb
		< (*stack)->next->next->nb)
		sa(stack);
	else
	{
		sa(stack);
		ra(stack);
	}
}
// void	sort_moderate(t_stack **stack)
// {
// 	t_stack	*stack_b;
// 	t_stack *end;

// 	stack_b = NULL;
// 	while (!stack_order(stack))
// 	{
// 		gimme_length(*stack);
// 		while (gimme_length((*stack)) > 3)
// 			pb(stack, &stack_b);
// 		if ((*stack)->len == 3)
// 			sort_three(stack);
// 		ra(stack);
// 	}
// }

// void	sort(t_stack **stack)
// {
// 	t_stack	*end;
// 	t_stack	*stack_b;
	
// 	stack_b = NULL;
// 	ft_printf("length: %i\n", (*stack)->len);
// 	while ((*stack) != NULL)
// 	{
// 		(*stack)->min = find_min(stack);
// 		end = list_last(*stack);
// 		// ft_printf("min: %i\n", (*stack)->min);
// 		if ((*stack)->nb != (*stack)->min)
// 		{
// 			// ft_printf("number: %i\n", (*stack)->nb);
// 			ra(stack);
// 		}
// 		// ft_printf("mininum: %i\n", (*stack)->min);
// 		if ((*stack)->nb == (*stack)->min || end->nb == (*stack)->min)
// 		{
// 			if (end->nb == (*stack)->min)
// 				rra(stack);
// 			if ((*stack)->len > 3)
// 				pb(stack, &stack_b);
// 			(*stack)->nlen = gimme_length(*stack);
// 			// ft_printf("stack_b:\n");
// 			// retrieve_stack(stack_b);
// 		}
// 		if ((*stack)->nlen == 3)
// 		{
// 			ft_printf("here\n");
// 			sort_three(stack);
// 			if (stack_b->nb < stack_b->next->nb)
// 				sb(&stack_b);
// 			while ((*stack)->len >= (*stack)->nlen)
// 			{
// 				pa(&stack_b, stack);
// 				(*stack)->nlen = gimme_length(*stack);
// 			}
// 		}
// 		if (ft_stack_order(stack) && stack_b == NULL)
// 			break ;
// 	}
// }
