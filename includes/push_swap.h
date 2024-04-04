/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:58:03 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/04/04 17:23:15 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*************************************************/
/* libft *****************************************/
/*************************************************/
# include "libft.h"

/*************************************************/
/* external libraries ****************************/
/*************************************************/

# include <limits.h>
/* for booleans */
# include <stdbool.h>
/* for read and write */
# include <unistd.h>
/* for malloc, free, and exit */
# include <stdlib.h>

/*************************************************/
/* error macros **********************************/
/*************************************************/
# define ERR_ARG "Error\nIncorrect number of arguments\n"
# define ERR_REP "Error\nDuplicated number\n"
# define ERR_MAL "Error\nMalloc failure\n"
# define ERR_STUPID "Error\nInvalid input, try again\n"

/*************************************************/
/* structs ***************************************/
/*************************************************/
typedef struct s_stack
{
	int				target;
	int				min;
	int				max;
	int				len;
	int				a_median;
	int				index;
	int				nb;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

/*************************************************/
/* functions *************************************/
/*************************************************/

/* in push_swap.c */
void		push_swap(char **argv, t_stack **stack);
void		instructions(t_stack **stack);
void    	retrieve_stack(t_stack *stack); // TAKE THIS OUT!!!
void    	retrieve_stack_rev(t_stack *stack); // TAKE THIS OUT TOO!!!

/* in parsing.c */
void		parse_args(char **av);
char		**check_arg(int argc, char **argv, bool split);
void		repeat_num(char **av);
void		char_in(char **av);
int			ft_isdigit_mod(int c);

/* in utils.c */
int			add_node(t_stack **stack, int value);
t_stack		*list_last(t_stack *lst);
int			gimme_length(t_stack *lst);
void 		free_ll(t_stack **stack);
int			stack_order(t_stack **stack);

/* in error.c */
void		error_handling(t_stack **stack, int num);

/* in ss.c */
void	swap(t_stack **stack);
void	sa(t_stack **stack);
void	sb(t_stack **stack);
void	ss(t_stack **stack_a, t_stack **stack_b);

/* in rr.c */
void	rotate(t_stack **stack);
void	ra(t_stack **stack);
void	rb(t_stack **stack);
void	rr(t_stack **stack_a, t_stack **stack_b);

/* in rrr.c */
void	rev_rotate(t_stack **stack);
void	rra(t_stack **stack);
void	rrb(t_stack **stack);
void	rrr(t_stack **stack_a, t_stack **stack_b);

/* in pp.c */
void	pushing(t_stack **stack_s, t_stack **stack_d);
void	pa(t_stack **stack_b, t_stack **stack_a);
void	pb(t_stack **stack_a, t_stack **stack_b);

/* in sorting.c */
void	sort_three(t_stack **stack);
void	sort_moderate(t_stack **stack);
void	sort_faux(t_stack **stack);

/* in utils2.c */
int		find_min(t_stack **stack);
int		find_max(t_stack **stack);
void	gimme_median(t_stack *stack);
void	target_number_a(t_stack **stack, t_stack *stack_b);
void	target_number_b(t_stack **stack, t_stack *stack_b);

#endif
