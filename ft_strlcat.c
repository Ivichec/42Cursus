/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:40 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/15 16:36:28 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	while (i < size - dest_len - 1 && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int main()
// {
// 	char dest[20] = "Hello, ";
// 	char src[] = "World!";
// 	unsigned int size = 20;
// 	unsigned int length = ft_strlcat(dest, src, size);
// 	printf("Destination: %s\n", dest);
// 	printf("Length of destination: %u\n", length);
// 	return 0;
// }