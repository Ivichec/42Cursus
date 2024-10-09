/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:14:40 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/09 17:11:04 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Esta función devuelve un puntero a 
//una nueva cadena que es una duplicación de la cadena 's'.
char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s) + 1;
	dup = (char *)malloc(len);
	if (!dup)
		return (0);
	ft_memcpy(dup, s, len);
	return (dup);
}

// int main()
// {
// 	char *str = "Hello, World!";
// 	char *dup = ft_strdup(str);
// 	printf("%s\n", dup);
// 	free(dup);
// 	return (0);
// }