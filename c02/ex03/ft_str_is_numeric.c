/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 11:49:20 by linyao            #+#    #+#             */
/*   Updated: 2024/05/25 11:50:53 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_str_is_numeric(char	*str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
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
	char	str1[] = "HelloWo892";
	char	str2[] = "123789";
	char	str3[] = "";
	char	str4[] = "Hello789$%!";

	printf("Is '%s' alphabetical? %d\n", str1, ft_str_is_numeric(str1));
	printf("Is '%s' alphabetical? %d\n", str2, ft_str_is_numeric(str2));
	printf("Is '%s' alphabetical? %d\n", str3, ft_str_is_numeric(str3));
	printf("Is '%s' alphabetical? %d\n", str4, ft_str_is_numeric(str4));
    return 0;
}
*/