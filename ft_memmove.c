/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:32 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/09 19:21:19 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Esta funcion copia n bytes de la memoria de src a la memoria de dest.
//La copia se realiza de forma segura, incluso si las dos áreas de 
//memoria se superponen.
//La función devuelve un puntero a la memoria de destino.
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char		*p_str1;
	unsigned const char	*p_str2;

	if (dest < src)
		return (ft_memcpy(dest, src, count));
	p_str1 = (unsigned char *)dest;
	p_str2 = (unsigned const char *)src;
	if (!count || dest == src)
		return (dest);
	while (count--)
		p_str1[count] = p_str2[count];
	return (dest);
}

// int main()
// {
// 	char dest[50] = "Hello, World!";
// 	char src[50] = "Hello, World!";
// 	printf("Before ft_memmove: %s\n", dest);
// 	ft_memmove(dest + 7, src + 7, 7);
// 	printf("After ft_memmove: %s\n", dest);
// 	return (0);
// }
