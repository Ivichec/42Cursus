/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:24 by icheca-g          #+#    #+#             */
/*   Updated: 2024/09/26 19:18:13 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	char str[] = "Hola mundo";
// 	char *ptr;
// 	ptr = ft_memchr(str, 'u', 9);
// 	printf("%s\n", ptr);
// 	return 0;
// }