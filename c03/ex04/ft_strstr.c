/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:15:47 by linyao            #+#    #+#             */
/*   Updated: 2024/05/25 12:16:50 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;

	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (to_find[i] && str[i] == to_find[i])
				i++;
			if (!to_find[i])
				return (str);
		}
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "";
	char	to_find[] = "";
	char	*result = ft_strstr(str, to_find);

	if (result != NULL)
	{
		printf("Substring found at position: %ld\n", result - str);
	}
	else
	{
		printf("Substring not found\n");
	}
	return (0);
}
*/