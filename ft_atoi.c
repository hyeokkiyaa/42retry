/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykwon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:56:19 by hykwon            #+#    #+#             */
/*   Updated: 2024/11/09 16:12:54 by hykwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	pm;

	num = 0;
	pm = 1;
	i = ft_isspace(nptr);
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			pm *= -1;
		i++;
	}
	while (nptr[i] != '\0')
	{
		if (nptr[i] >= 48 && nptr[i] <= 57)
		{
			num *= 10;
			num += (int)(nptr[i] - 48);
		}
		else
			break ;
		i++;
	}
	return (pm * num);
}
