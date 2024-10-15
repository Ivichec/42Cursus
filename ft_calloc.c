/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:12:33 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/15 20:08:27 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if(!ptr)
		return (NULL);
	if (ptr)
		ft_bzero(ptr, num * size);
	return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h" // Ensure this includes the declaration of ft_calloc

// int main() {
//     // Attempt to allocate a very large amount of memory to increase the chance of failure
//     size_t num_elements = (size_t)-1; // This is the maximum value of size_t
//     size_t element_size = 1;

//     void *ptr = ft_calloc(num_elements, element_size);
//     if (ptr == NULL) {
//         printf("Memory allocation failed as expected\n");
//     } else {
//         // If allocation didn't fail, it's important to free the memory to avoid a memory leak
//         free(ptr);
//         printf("Memory allocation succeeded unexpectedly\n");
//     }

//     return 0;
// }