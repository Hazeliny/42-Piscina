/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 11:53:03 by linyao            #+#    #+#             */
/*   Updated: 2024/05/25 11:54:07 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_str_is_lowercase(char	*str)
{
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
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
	char	str1[] = "HELLOWORLD";
	char	str2[] = "ffogmje";
	char	str3[] = "";
	char	str4[] = "Hello789$%!";

	printf("Is '%s' alphabetical? %d\n", str1, ft_str_is_lowercase(str1));
	printf("Is '%s' alphabetical? %d\n", str2, ft_str_is_lowercase(str2));
	printf("Is '%s' alphabetical? %d\n", str3, ft_str_is_lowercase(str3));
	printf("Is '%s' alphabetical? %d\n", str4, ft_str_is_lowercase(str4));
    return 0;
}
*/