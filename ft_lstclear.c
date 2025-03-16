/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <shhidrob@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:55:08 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/23 21:21:34 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*temp;

	current = *lst;
	while (current)
	{
		temp = current->next;
		ft_lstdelone(current, del);
		current = temp;
	}
	*lst = NULL;
}

// int     main(void)
// {
//         t_list *lst;
//         t_list *current;
//         int     *a = malloc(4);
//         int     *b = malloc(4);
//         int     *c = malloc(4);
//         int     *d = malloc(4);

// 	*a = 1;
// 	*b = 2;
// 	*c = 3;
// 	*d = 4;

//         lst = ft_lstnew(a);
//         ft_lstadd_back(&lst, ft_lstnew(b));
//         ft_lstadd_back(&lst, ft_lstnew(c));
//         ft_lstadd_back(&lst, ft_lstnew(d));
// 	current = lst;
//         while (current != NULL)
//         {
//                 printf("<addr: %p> <content: %d> <next: %p>\n",
//                 current, *(int *)current->content, current->next);
//                 current = current->next;
//         }
// 	ft_lstclear(&lst, free);
// 	current = lst;
// 	printf("current: %p\n", current);
//         while (current != NULL)
//         {
//                 printf("<addr: %p> <content: %d> <next: %p>\n", 
//			current, *(int *)current->content, current->next);
//                 current = current->next;
// 	}
// }
