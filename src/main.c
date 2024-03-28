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
	bool	split;
	// int		size;

	split = false;
	stack = NULL;
	argv = check_arg(argc, argv, split);
	parse_args(argv);
	push_swap(argv, &stack);
	if (split == true)
		free_array(argv);
	return (0);
}

/*
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