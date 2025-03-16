/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:52:30 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/23 20:43:28 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*n_lst;
	t_list	*tmp;

	current = lst;
	n_lst = NULL;
	tmp = NULL;
	while (current)
	{
		tmp = ft_lstnew(f(current->content));
		if (!tmp)
		{
			ft_lstclear(&n_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&n_lst, tmp);
		current = current->next;
	}
	return (n_lst);
}
