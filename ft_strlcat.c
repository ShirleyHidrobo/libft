/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <shhidrob@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:57:13 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/17 21:29:07 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char	*dest, char *src, size_t size)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;

	i = 0;
	s_len = 0;
	d_len = 0;
	while (dest[d_len] != '\0' && d_len < size)
		d_len++;
	while (src[s_len] != '\0')
		s_len++;
	if (size <= d_len)
		return (s_len + size);
	while (src[i] != '\0' && (d_len + i + 1) < size)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}

/*
int	main(void)
{
	char	dest[3] = "Ay";
	char	src[10] = "hello";
	char	dest1[2] = "Hello";
	char	src1[] = "Hi";
	char	dest2[6] = "adios!";
	char	src2[] = "hastalue";
	printf("%zu\n", strlcat(dest, src, 8));
	printf("%zu\n", ft_strlcat(dest1, src1, 10));
	printf("%zu\n", ft_strlcat(dest2, src2, 4));
	return (0);
}
*/

/*
	size refers to length of the container that
       	holds the string in the dest,
	if the size is small than the 
	whole dest_len then there's no space
	to concatenate and returns early 
	the s_len + size of what we have space for
*/
