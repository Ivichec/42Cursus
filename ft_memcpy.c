/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:30 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/15 16:34:42 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (0);
	while (count--)
	{
		*d++ = *s++;
	}
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char src[] = "Hello, World!";
// 	char dest[20];
// 	ft_memcpy(dest, src, sizeof(src));
// 	printf("%s\n", dest);
// 	return 0;
// }