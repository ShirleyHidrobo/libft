/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:21:01 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/23 16:02:54 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
        lst->next = ft_lstnew(&b);
        lst->next->next = ft_lstnew(&c);
        lst->next->next->next = ft_lstnew(&d);
	printf("%d\n", ft_lstsize(lst));
}
*/
