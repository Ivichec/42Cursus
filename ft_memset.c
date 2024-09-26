/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:35 by icheca-g          #+#    #+#             */
/*   Updated: 2024/09/26 19:48:13 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void *ft_memset(void *ptr, int value, size_t num)
{
	unsigned char *p = (unsigned char *)ptr;
	while(num > 0)
	{
		p[num] = value;
		num--;
	}
	return (ptr);
}