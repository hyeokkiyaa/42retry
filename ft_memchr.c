/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykwon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:56:10 by hykwon            #+#    #+#             */
/*   Updated: 2024/10/06 13:53:11 by hykwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (s == 0)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s)[i] == c)
		{
			return ((unsigned char *)(s + i));
		}
		i++;
	}
	return (0);
}
