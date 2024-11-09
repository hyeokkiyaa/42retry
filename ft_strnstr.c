/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykwon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:19:16 by hykwon            #+#    #+#             */
/*   Updated: 2024/11/09 15:52:51 by hykwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, int len)
{
	int	length_little;
	int	i;
	int	jmp;

	if (!little || len <= 0)
		return (NULL);
	length_little = ft_strlen(little);
	i = 0;
	if (length_little == 0)
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		jmp = 0;
		while (big[i + jmp] == little[jmp] && i + jmp < len)
		{
			if (little[jmp + 1] == '\0')
				return ((char *)(big + i));
			jmp++;
		}
		i++;
	}
	return (NULL);
}
