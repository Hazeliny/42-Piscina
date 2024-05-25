/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 11:55:00 by linyao            #+#    #+#             */
/*   Updated: 2024/05/25 11:57:03 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_str_is_uppercase(char	*str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "HELLOWORD";
	char	str2[] = "89godjk";
	char	str3[] = "";
	char	str4[] = "Hello789$%!";

	printf("Is '%s' alphabetical? %d\n", str1, ft_str_is_uppercase(str1));
	printf("Is '%s' alphabetical? %d\n", str2, ft_str_is_uppercase(str2));
	printf("Is '%s' alphabetical? %d\n", str3, ft_str_is_uppercase(str3));
	printf("Is '%s' alphabetical? %d\n", str4, ft_str_is_uppercase(str4));
    return 0;
}
*/