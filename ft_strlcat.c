/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:15:17 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/07 16:22:47 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	char	*source;
	size_t	dest_len;
	size_t	size;
	size_t	src_len;
	size_t	i;

	source = (char *)src;
	if (n == 0 || ft_strlen(dest) > n)
		return (ft_strlen(source) + n);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen((char *)source);
	size = 0;
	i = 0;
	if (n > dest_len)
		size = src_len + dest_len;
	else
		size = src_len + n;
	while (source[i] && (dest_len + 1) < n)
	{
		dest[dest_len] = source[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (size);
}

// int main()
// {
// 	char src[] = "nyan !";
//     printf("%ld", ft_strlcat(((void *)0), src, 0));
// }   
