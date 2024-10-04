/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:18:31 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/04 18:25:16 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	joined = (char *)malloc(s1_len + 1);
	if (!joined)
		return (0);
	ft_memcpy(joined, s1, s1_len);
	ft_memcpy(joined + s1_len, s2, ft_strlen(s2));
	joined[s1_len + ft_strlen(s2)] = '\0';
	return (joined);
}

// int main()
// {
// 	char *s1 = "Hello, ";
// 	char *s2 = "World!";
// 	char *joined = ft_strjoin(s1, s2);
// 	printf("%s\n", joined);
// 	free(joined);
// 	return (0);
// }