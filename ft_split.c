/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhidrob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:40:54 by shhidrob          #+#    #+#             */
/*   Updated: 2024/12/21 23:22:50 by shhidrob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static	int	w_count(char *w, char c)
{
	int	i;
	int	counter;
	int	check;

	i = 0;
	counter = 0;
	if (!w)
		return (0);
	while (w[i])
	{
		while (w[i] && w[i] == c)
			i++;
		check = 0;
		while (w[i] && w[i] != c)
		{
			check = 1;
			i++;
		}
		if (check == 1)
			counter++;
	}
	return (counter);
}

static int	w_length(char *w, int i, char c)
{
	int	j;

	j = 0;
	if (!w)
		return (0);
	while (w [i + j] != c && w[i + j])
		j++;
	return (j);
}

static void	*free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free (str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		size;

	if (s == NULL)
		return (NULL);
	str = malloc(sizeof(char *) * (w_count((char *)s, c) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < w_count((char *)s, c))
	{
		while (s[i] == c)
			i++;
		size = w_length((char *)s, i, c);
		str[j] = malloc(sizeof(char) * size + 1);
		if (str[j] == NULL)
			return (free_str(str));
		ft_strlcpy(str[j++], (char *)s + i, size + 1);
		i += size;
	}
	str[j] = NULL;
	return (str);
}
/*
int	main(void)
{
	char const s[] = "  Hello monkey money tris";
	char	c = ' ';
	int	i;
	char **str;

	i = 0;
	str = ft_split(s, c);
	while (str[i])
	{
		printf("%s\n", str[i]);
		free (str[i]);
		i++;
	}
	free (str);	
	return (0);
}*/
