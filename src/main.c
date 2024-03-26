/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:58:16 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/03/25 09:58:17 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = NULL;
	if (argc < 2)
	{
		ft_putstr_fd(ERR_ARG, 2);
		exit(1);
	}
	push_swap(argc, argv, &stack);
	return (0);
}

/*
*sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
Where: Head will become next and next will become head


*sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.


*ss : sa and sb at the same time.


*pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.


*pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.


*ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.


*rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.


*rr : ra and rb at the same time.


*rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.


*rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.


*rrr : rra and rrb at the same time.
*/