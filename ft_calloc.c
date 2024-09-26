/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:12:33 by icheca-g          #+#    #+#             */
/*   Updated: 2024/09/26 20:17:57 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void* calloc(size_t num, size_t size)
{
	void *ptr;
	ptr = malloc(num * size);
	if (ptr)
		ft_bzero(ptr, num * size);
	return (ptr);
}