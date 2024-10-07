/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:53:06 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/07 17:03:30 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Esta funcion reserva memoria con malloc y
// devuelve una nueva cadena que es una copia de la cadena 's'.
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (s_len < len)
		len = s_len;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (0);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

// int main()
// {
// 	char *s = "Hello World!";
// 	unsigned int start = 6;
// 	size_t len = 5;
// 	printf("%s\n", ft_substr(s, start, len));
// 	return 0;
// }