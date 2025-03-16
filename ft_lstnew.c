/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:25:55 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/23 21:18:18 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
int	main(void)
{
	t_list *lst;
	int	a = 1;
	int	b = 2;
	int	c = 3;
	int	d = 4;

	lst = ft_lstnew(&a);
	lst->next = ft_lstnew(&b);
	lst->next->next = ft_lstnew(&c);
	lst->next->next->next = ft_lstnew(&d);
	while (lst != NULL)
	{
		printf("<addr: %p> <content: %d> <next: %p>\n",
	       	lst, *(int *)lst->content, lst->next);
		lst = lst->next;
	}
	while (s[i] != 0)
		i++
}
*/
