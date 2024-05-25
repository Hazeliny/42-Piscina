/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:03:38 by linyao            #+#    #+#             */
/*   Updated: 2024/05/25 12:05:18 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	judge_case(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (-1);
	}
}

int	is_alphanumeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (judge_case(c) == 0 || judge_case (c) == 1);
	}
}

void	ft_trans(char	*ch, int j)
{
	if (judge_case(*ch) == 1 && j)
		*ch -= 32;
	else
		if (judge_case(*ch) == 0 && !j)
			*ch += 32;
}

char	*ft_strcapitalize(char	*str)
{
	int	cap_next;
	int	i;

	cap_next = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_alphanumeric (str[i]))
		{
			if (cap_next)
			{
				ft_trans (&str[i], cap_next);
				cap_next = 0;
			}
			else
				ft_trans (&str[i], cap_next);
		}
		else
			cap_next = 1;
		i++;
	}
	return (str);
}
/*
int	 main(void)
{
	char	str[] = "heLlO, 42wOr-lD! como ? VaS; quIncE+uN$en6sA8yaR";
	printf("Capitalized String: %s\n", ft_strcapitalize(str));
	return (0);
}
*/