/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Isabela Genial <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:07:10 by Isabela Gen       #+#    #+#             */
/*   Updated: 2023/05/24 19:36:09 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char position;
	
	if (n == -2147483648)
	{
		write (fd, "-", 1);
		write (fd, "2", 1);
		n = 147483648;		
	}
	else if (n < 0)
	{
		n *= -1;
		write (fd, "-", 1);
	}
	else if (n / 10 == 0)
	{
		position = (n % 10) + '0';
		write (fd, &position, 1);
		return;
	}
	ft_putnbr_fd(n / 10, fd);
	position = (n % 10) + '0';
	write (fd, &position, 1);
}
