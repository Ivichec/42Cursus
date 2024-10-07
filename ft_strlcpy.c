/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:42 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/07 17:17:36 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Esta función copia la cadena 'src' en la cadena 'dest'
// y devuelve la longitud de la cadena 'src'.
#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

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