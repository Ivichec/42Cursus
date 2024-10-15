/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:35 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/15 16:35:05 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	if (num == 0)
		return (ptr);
	while (num > 0)
	{
		num--;
		p[num] = value;
	}
	return (ptr);
}

// int main()
// {
// 	char mem[15] = "Hello World!";
// 	if (mem != ft_memset(mem, 'c', 5))
//         write(1, "mem's adress returned\n", 30);
//     write(1, mem, 15);
// 	return 0;
// }