/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykwon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:10:15 by hykwon            #+#    #+#             */
/*   Updated: 2024/10/12 12:49:44 by hykwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		front;
	int		end;

	result = NULL;
	if (s1 != NULL && set != NULL)
	{
		front = 0;
		end = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > front)
			end--;
		result = (char *)malloc(sizeof(char) * (end - front +1));
		if (result)
			ft_strlcpy(result, &s1[front], end - front + 1);
	}
	return (result);
}
