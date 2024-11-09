/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykwon <hykwon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:27:56 by hykwon            #+#    #+#             */
/*   Updated: 2024/10/27 14:44:00 by hykwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		length_s1;
	char	*tmp;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	length_s1 = ft_strlen(s1);
	tmp = (char *)malloc(length_s1 + length_s1 + 1);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		tmp[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		tmp[i++] = *s2;
		s2++;
	}
	tmp[i] = '\0';
	return (tmp);
}
