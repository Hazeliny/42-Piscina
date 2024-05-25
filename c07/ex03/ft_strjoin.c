/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:53:54 by linyao            #+#    #+#             */
/*   Updated: 2024/05/25 12:54:48 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*s;

	i = 0;
	c = 0;
	s = malloc(sizeof(strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			s[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != (size - 1))
			s[c++] = sep[j++];
		i++;
	}
	s[c] = '\0';
	return (s);
}
/*
int	main(void)
{
	char	**tab;

	tab[0] = "hello";
	tab[1] = "everyone";
	tab[2] = "niceDay";
	printf("%s", ft_strjoin(3, tab, ", "));
	return (0);
}
*/