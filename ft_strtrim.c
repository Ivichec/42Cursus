/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:55:28 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/12 12:32:37 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Esta función reserva memoria con malloc y devuelve una nueva cadena
// que es una copia de la cadena 's1' sin los caracteres que aparecen en 'set'.

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	s1_len;
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (!s1 || !set)
		return (0);
	s1_len = ft_strlen(s1);
	start = 0;
	while (start < s1_len && ft_strchr(set, s1[start]))
		start++;
	end = s1_len;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed = (char *)malloc(end - start + 1);
	if (!trimmed)
		return (0);
	ft_memcpy(trimmed, s1 + start, end - start);
	trimmed[end - start] = '\0';
	return (trimmed);
}

// int main()
// {
// 	char s[] = "Hello, World!";
// 	char set[] = "Hello, ";
// 	char *trimmed = ft_strtrim(s, set);
// 	printf("%s\n", trimmed);
// }