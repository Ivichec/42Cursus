/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:37 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/09 17:08:19 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Esta función devuelve un puntero al 
//primer carácter 'c' en la cadena 's'.
char	*ft_strchr(const char *s, int c)
{
	while (*s || *s == c)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char str[] = "Hola mundo";
// 	char *ptr;
// 	ptr = ft_strchr(str, 'p');
// 	printf("%s\n", ptr);
// 	return 0;
// }