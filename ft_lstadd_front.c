/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:09:34 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/23 21:22:31 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int     main(void)
{
        t_list *lst;
        int     a = 1;
        int     b = 2;
        int     c = 3;
        int     d = 4;

        lst = ft_lstnew(&a);
	ft_lstadd_front(&lst, ft_lstnew(&b));
	ft_lstadd_front(&lst, ft_lstnew(&c));
	ft_lstadd_front(&lst, ft_lstnew(&d));
        while (lst != NULL)
        {
                printf("<addr: %p> <content: %d> <next: %p>\n",
	       	lst, *(int *)lst->content, lst->next);
                lst = lst->next;
        }
}
*/
