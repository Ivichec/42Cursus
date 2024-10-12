/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:53:06 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/12 12:48:15 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Esta funcion reserva memoria con malloc y
// devuelve una nueva cadena que es una copia de la cadena 's'.
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new_substr;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	new_substr = (char *)malloc((len + 1) * sizeof(char));
	if (!new_substr)
		return (0);
	ft_strlcpy(new_substr, s + start, len + 1);
	return (new_substr);
}

// int main()
// {
// 	char *s = "Hello World!";
// 	unsigned int start = 6;
// 	size_t len = 5;
// 	printf("%s\n", ft_substr(s, start, len));
// 	return 0;
// }