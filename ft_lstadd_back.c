/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <shhidrob@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:16:31 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/23 21:19:57 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*c;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	c = *lst;
	while (c->next != NULL)
		c = c->next;
	c->next = new;
}

// int     main(void)
// {
//         t_list *lst;
//         int     a = 1;
//         int     b = 2;
//         int     c = 3;
//         int     d = 4;

//         lst = ft_lstnew(&a);
//         ft_lstadd_back(&lst, ft_lstnew(&b));
//         ft_lstadd_back(&lst, ft_lstnew(&c));
//         ft_lstadd_back(&lst, ft_lstnew(&d));
//         while (lst != NULL)
//         {
//                 printf("<addr: %p> <content: %d> <next: %p>\n",
//                 lst, *(int *)lst->content, lst->next);
//                 lst = lst->next;
//         }
// }
