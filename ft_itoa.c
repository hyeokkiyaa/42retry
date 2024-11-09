/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykwon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:50:19 by hykwon            #+#    #+#             */
/*   Updated: 2024/10/27 11:46:42 by hykwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nosize(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			size;
	long long	nbr;

	nbr = n;
	size = nosize(n);
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	result[size] = '\0';
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		result[0] = '0';
	while (nbr > 0)
	{
		result[--size] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (result);
}
