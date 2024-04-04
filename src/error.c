/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:33:47 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/04/03 11:04:25 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_handling(t_stack **stack, int num)
{
	if (num == 1)
		ft_putstr_fd(ERR_MAL, 2);
	else if (num == 99)
	free_ll(stack);
	exit(1);
}