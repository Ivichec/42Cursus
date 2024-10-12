/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:27 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/12 13:48:07 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Esta función compara los primeros n bytes 
//de las áreas de memoria apuntadas por s1 y s2.

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char str1[] = "Hola mundo";
// 	char str2[] = "Hola mundo1";
// 	printf("%d\n", ft_memcmp(str1, str2, 11));
// 	return 0;
// }