/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <shhidrob@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:54:32 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/17 21:29:55 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	s_len;
	size_t	i;

	i = 0;
	s_len = 0;
	while (src[s_len] != '\0')
		s_len++;
	if (size == 0)
		return (s_len);
	while (src[i] != '\0' && (i + 1) < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (s_len);
}

/*
int	main(void)
{
	char src[] = "hola";
	char dest[3];
	int	size = 3;
	size_t	result;
	result = ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
	printf("%zu\n", result);
	return (0);
}
*/
