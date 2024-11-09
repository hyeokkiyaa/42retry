/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykwon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:07:16 by hykwon            #+#    #+#             */
/*   Updated: 2024/11/09 14:33:14 by hykwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dst_length;
	size_t		src_length;
	size_t		i;

	i = 0;
	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (size < dst_length + 1)
		return (size + src_length);
	if (size > dst_length + 1)
	{
		while (src[i] != '\0' && dst_length + 1 + i < size)
		{
			dst[dst_length + i] = src[i];
			i++;
		}
	}
	dst[dst_length + i] = '\0';
	return (dst_length + src_length);
}
