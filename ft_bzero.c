/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:17 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/12 13:06:19 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Esta función pone a cero los primeros 'n' 
//bytes del área de memoria apuntada por 's'.

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

// int main()
// {
// 	char str[] = "Hello, World!";
// 	ft_bzero(str, 2);
// 	printf("%s\n", str);
// 	return 0;
// }