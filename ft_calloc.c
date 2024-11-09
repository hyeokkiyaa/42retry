/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykwon <hykwon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:25:32 by hykwon            #+#    #+#             */
/*   Updated: 2024/10/27 15:53:12 by hykwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;
	size_t			i;
	size_t			total;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	temp = (unsigned char *)malloc(total);
	if (temp == NULL)
		return (NULL);
	while (i < total)
	{
		temp[i] = 0;
		i++;
	}
	return ((void *)temp);
}
