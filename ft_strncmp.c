/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:25:11 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/26 16:40:20 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    int cs1;
    int cs2;
    i = 0;
    
    while (i < n -1)
    {
      cs1 = (int)s1[i];
      cs2 = (int)s2[i];
      i++;
    }
    if (cs1 > cs2)
      return (1);
    if (cs1 < cs2)
      return (-1);
    else
      return (0);
}
int    ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    int j;
    int cs1;
    int cs2;
    i = 0;
    
    while ((cs1 && cs2 != '\n') && i < n)
    {
      cs1 = (int)s1[i];
      cs2 = (int)s2[i];
      i++;
    }
    if (cs1 == cs2)
      return (0);
    if (cs1 > cs2)
      return (1);
    if (cs1 < cs2)
      return (-1);
}
int    main(void)
{
  
    printf("%d", ft_strncmp("test", "te", 7));
    return (0);
}/*
int	main(void)
{
	const char	*str1;	
	const char	*str2;
	size_t	nbr;

	str1 = "test";
	str2 = "testss";
	nbr = 7;
	printf("%i", ft_strncmp(str1, str2, nbr));
	return (0);
}*/
