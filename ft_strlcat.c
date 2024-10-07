/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:40 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/07 17:06:12 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strlen1(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = strlen1(dest);
	src_len = strlen1(src);
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

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char dest[20] = "Hello, ";
//     char src[] = "world!";
//     size_t size = sizeof(dest);

//     size_t result = ft_strlcat(dest, src, size);

//     printf("Resulting string: '%s'\n", dest);
//     printf("Total length: %zu\n", result);

//     return 0;
// }