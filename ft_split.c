/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:12:59 by lucida-s          #+#    #+#             */
/*   Updated: 2022/12/10 21:24:31 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	var_starter(size_t *i, size_t *j, int *index)
{
	*i = -1;
	*j = 0;
	*index = -1;
}

static size_t	cp(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] != c)
			count++;
		if (i > 0 && s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

void	ft_free(char **split, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**s_split(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;

	var_starter(&i, &j, &index);
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j] = ft_substr(s, index, (i - index));
			if (!split[j])
			{
				ft_free(split, j);
				return (0);
			}
			j++;
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}

char	**ft_split(const char *s, char c)
{
	char	**split;

	split = malloc((cp(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	return (s_split(split, s, c));
}
