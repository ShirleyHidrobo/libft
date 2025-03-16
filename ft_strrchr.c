/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 22:38:48 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/21 14:46:03 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = 0;
	while (s[s_len])
		s_len++;
	if ((char)c == '\0')
		return ((char *)s + s_len);
	while (s_len >= 0)
	{
		if (s[s_len] == (char)c)
			return ((char *)s + s_len);
		s_len--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char s[] = "Charcuteria pinzon";
	printf("%s\n", ft_strrchr(s, 't' + 256));
	return (0);
}
*/
