/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:29:04 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/07 16:29:33 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	strlen;

	strlen = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(strlen + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, ft_strlen(s1));
	ft_memcpy(str + ft_strlen((char *)s1), (char *)s2, ft_strlen((char *)s2));
	*(str + strlen) = '\0';
	return (str);
}

// int main()
// {
//     char s1[] = "World";
//     char s2[] = "Hello";
//     printf("%s", ft_strjoin(s1, s2));
// }
