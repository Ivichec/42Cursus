/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:42 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/17 17:44:16 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

/*
#include <stdio.h>
int	main ()
{
	char src[] = "Hello, World!";
    char dest[20];
    
    unsigned int length = ft_strlcpy(dest, src, sizeof(dest));
    
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Length of source: %u\n", length);
    
    return 0;
}*/