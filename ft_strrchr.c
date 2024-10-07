/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:52 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/07 17:18:30 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Esta función devuelve un puntero al último carácter 'c' en la cadena 'str'.
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == c)
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