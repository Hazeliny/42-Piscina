/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:25:24 by linyao            #+#    #+#             */
/*   Updated: 2024/05/25 12:26:33 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
		ft_putchar (nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
}
/*
int	main(void)
{
	int a = INT_MIN;
	int b = 876543;
	int c = 0;
	int d = -923;
	int e = INT_MAX;

	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	ft_putchar('\n');
	ft_putnbr(c);
    ft_putchar('\n');
	ft_putnbr(d);
    ft_putchar('\n');
	ft_putnbr(e);
    ft_putchar('\n');
	return (0);
}
*/