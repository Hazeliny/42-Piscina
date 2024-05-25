/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 11:57:26 by linyao            #+#    #+#             */
/*   Updated: 2024/05/25 11:58:22 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_str_is_printable(char	*str)
{
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
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
	char	str1[] = "Hello¡§¢892";
	char	str2[] = "diG&$ [`|ioe";
	char	str3[] = "";
	char	str4[] = "•¶£∞£º";

	printf("Is '%s' alphabetical? %d\n", str1, ft_str_is_printable(str1));
	printf("Is '%s' alphabetical? %d\n", str2, ft_str_is_printable(str2));
	printf("Is '%s' alphabetical? %d\n", str3, ft_str_is_printable(str3));
	printf("Is '%s' alphabetical? %d\n", str4, ft_str_is_printable(str4));
    return 0;
}
*/