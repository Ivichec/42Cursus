/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:47 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/15 19:26:00 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0 && s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main()
// {
// 	char s1[] = "Hello, World!";
// 	char s2[] = "Hello, World!";
// 	size_t n = 5;
// 	printf("%d\n", ft_strncmp(s1, s2, n));
// 	return 0;
// }