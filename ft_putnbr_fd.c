/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrabeari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:23:26 by rrabeari          #+#    #+#             */
/*   Updated: 2024/03/20 14:49:50 by rrabeari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(long int n, int fd)
{
	char	c;

	c = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = n * (-1);
	}
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	c = '0' + (n % 10);
	ft_putchar_fd(c, fd);
}

int	ft_putunsignednbr_fd(unsigned long n, int fd)
{
	int		count;
	char	c;

	c = 0;
	count = 0;
	if (n / 10)
		count += ft_putunsignednbr_fd((unsigned long )(n / 10), fd);
	c = '0' + (n % 10);
	return (write(fd, &c, 1) + count);
}
