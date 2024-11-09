/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykwon <hykwon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:57:33 by hykwon            #+#    #+#             */
/*   Updated: 2024/10/27 13:27:06 by hykwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long				nbr;
	int					num;

	nbr = n;
	if (fd < 0)
		return ;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nbr >= 10)
	{
		num = nbr / 10;
		ft_putnbr_fd(num, fd);
	}
	ft_putchar_fd((nbr % 10) + '0', fd);
}
