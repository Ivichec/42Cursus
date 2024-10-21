/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:32 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/17 19:42:57 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char		*p_str1;
	unsigned const char	*p_str2;

	p_str1 = (unsigned char *)dest;
	p_str2 = (unsigned const char *)src;
	if (!dest && !src)
		return (0);
	if (dest < src)
		return (ft_memcpy(dest, src, count));
	if (!count || dest == src)
		return (dest);
	while (count--)
		p_str1[count] = p_str2[count];
	return (dest);
}

// int main()
// {
// 	char dest[13] = " World!";
// 	char src[12] = "Hello, World";
// 	printf("Before ft_memmove: %s\n", dest);
// 	ft_memmove(dest, src, 7);
// 	printf("After ft_memmove: %s\n", dest);
// 	return (0);
// }