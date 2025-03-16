/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <shhidrob@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:30:46 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/21 23:35:28 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *) dest;
	p2 = (unsigned char *) src;
	if (p2 < p1)
		while (n-- > 0)
			p1[n] = p2[n];
	else if (p1 < p2)
		ft_memcpy(dest, src, n);
	return (dest);
}

/*
int	main(void)
{
	char	dest[] = "bye bye";
	char	src[] = "Leo";
	ft_memmove(dest, src, 3);
	printf("%s", dest);//ft_memmove(dest, src, 3));
	return (0);
}
*/
