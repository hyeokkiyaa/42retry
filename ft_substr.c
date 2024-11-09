/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykwon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:07:19 by hykwon            #+#    #+#             */
/*   Updated: 2024/10/06 16:24:26 by hykwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	length;
	char	*tmp;

	length = ft_strlen(s);
	if (start > length)
		return (NULL);
	if (start + len > length)
		len = length - start;
	tmp = (char *)malloc(len);
	if (tmp == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (start < start + len)
	{
		tmp[j] = s[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}
