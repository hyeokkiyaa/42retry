/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykwon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:50:46 by hykwon            #+#    #+#             */
/*   Updated: 2024/10/12 13:38:48 by hykwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_char(char const *s, char c)
{
	int	i;
	int	count;
	int	check;

	i = 0;
	count = 0;
	check = 0;
	if (s[i] == c)
		check = 1;
	while (s[i])
	{
		if (s[i] != c && check == 0)
		{
			count++;
			check = 1;
		}
		else if (s[i] == c && check == 1)
		{
			check = 0;
		}
		i++;
	}
	return (count);
}

void	free_mem(char **mem, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(mem[i]);
		i++;
	}
	free(mem);
	mem = NULL;
}

void	split(char const *s, char c, char **result)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && s[i] != 0)
		{
			start = i;
			while (s[i] != c && s[i] != 0)
				i++;
			result[j] = (char *)malloc(sizeof(char) * (i - start + 1));
			if (result[j] == NULL)
			{
				free_mem(result, j);
				return ;
			}
			ft_strlcpy(result[j], &s[start], i - start + 1);
			j++;
		}
		else
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	if (s == NULL)
		return (NULL);
	i = count_char(s, c);
	result = (char **)malloc(sizeof(char *) * (i + 1));
	if (result == NULL)
		return (NULL);
	result[i] = 0;
	if (i == 0)
		return (result);
	split(s, c, result);
	return (result);
}
