/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:12:33 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/17 18:29:50 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (!ptr)
		return (0);
	if (ptr)
		ft_bzero(ptr, num * size);
	return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     size_t num = (size_t)-1;
//     size_t size = 1;
//     void *ptr = ft_calloc(num, size);
//     if (ptr == 0) {
//         printf("error\n");
//     } else 
//         free(ptr);
//         printf("perfecto\n");
//     }
//     return 0;
// }