/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:52 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/15 16:37:14 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	casteo;

	i = 0;
	casteo = (unsigned char)c;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == casteo)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}

// int main()
// {
// 	char str[] = "Hello, World!";
// 	char c = 'o';
// 	printf("%s\n", ft_strrchr(str, c));
// 	return 0;
// }