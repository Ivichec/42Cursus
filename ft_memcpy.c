/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:30 by icheca-g          #+#    #+#             */
/*   Updated: 2024/09/29 19:56:24 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char *d = (unsigned char *)dest;
	unsigned char *s = (unsigned char *)src;
	while (count--)
	{
		*d++ = *s++;
	}
	return (dest);
}