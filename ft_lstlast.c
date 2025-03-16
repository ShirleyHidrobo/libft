/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:19:31 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/23 21:19:01 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int     main(void)
{
        t_list *lst;
        int     a = 1;
        int     b = 2;
        int     c = 3;
        int     d = 4;
	t_list	*last;

        lst = ft_lstnew(&a);
        ft_lstadd_back(&lst, ft_lstnew(&b));
        ft_lstadd_back(&lst, ft_lstnew(&c));
        ft_lstadd_back(&lst, ft_lstnew(&d));

	last = ft_lstlast(lst);
        printf("<addr: %p> <content: %d> <next: %p>\n",
       	last, *(int *)last->content, last->next);
}
*/
