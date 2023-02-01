/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhielsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:10:04 by bhielsch          #+#    #+#             */
/*   Updated: 2022/10/07 16:22:21 by bhielsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*source;

	if (!dest && !src)
		return (NULL);
	i = 0;
	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	i = 0;
	return (dest);
}

// int main()
// {
//     int n = 4;
//     char dest[4];
//     char cest[4];
//     char src[] = "FuckYouPrintF";
//     ft_memcpy(dest, src, n);
//     puts(dest);
//     memcpy(cest, src, n);
//     puts(cest);
// }
