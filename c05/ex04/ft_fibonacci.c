/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:36:24 by linyao            #+#    #+#             */
/*   Updated: 2024/05/25 12:37:00 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;

	i = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index > 1)
	{
		i = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (i);
}
/*
int	 main(void)
{
	printf ("nth element of fibonacci: %d\n", ft_fibonacci(6));
	return (0);
}
*/