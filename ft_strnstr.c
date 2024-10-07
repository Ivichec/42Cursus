/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:49 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/07 17:05:43 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Busca la primera aparición de la subcadena 'buscar' en la cadena 'cadena' 
donde no se buscan más de 'len' caracteres.*/
#include "libft.h"

char	*ft_strnstr(const char *cadena, const char *buscar, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!buscar[i])
		return ((char *)cadena);
	while (cadena[i] && i < len)
	{
		j = 0;
		while (cadena[i + j] == buscar[j] && i + j < len)
			j++;
		if (!buscar[j])
			return ((char *)&cadena[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char cadena[] = "Hello, World!";
// 	char buscar[] = "World";
// 	size_t len = 5;
// 	printf("%s\n", ft_strnstr(cadena, buscar, len));
// 	return 0;
// }