/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:12:33 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/12 13:16:19 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Esta función reserva memoria con malloc 
//y devuelve un puntero a la memoria reservada ya inicialiazda.

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (ptr)
		ft_bzero(ptr, num * size);
	return (ptr);
}

// int main()
// {
// 	int *ptr = ft_calloc(5, sizeof(int));
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d\n", ptr[i]);
// 	}
// 	free(ptr);
// 	return (0);
// }