/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 23:34:32 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/19 18:14:44 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/*int	ft_strlen(char	*s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
*/
char	*ft_strdup(const char *src)
{
	char	*dest;
	char	*s;
	int		i;

	i = 0;
	s = (char *)src;
	dest = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*src = "Hello 42";
	char	*dest;

		dest = ft_strdup(src);
		printf("%s\n", src);
		printf("%s\n", dest);
		free(dest);
		dest = strdup(src);
                printf("%s\n", src);
                printf("%s", dest);
                free(dest);
		return (0);
}*/
