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

	split = false;
	stack = NULL;
	argv = check_arg(argc, argv, split);
	parse_args(argv);
	push_swap(argv, &stack);
	if (split == true)
		free_array(argv);
	return (0);
}
