/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:32 by icheca-g          #+#    #+#             */
/*   Updated: 2024/09/29 19:56:22 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s = (const unsigned char *)src;
	size_t	i;

	i = 0;
	if(s < d && d < s + count)
	{
		while(count > 0)
		{
			d[count - 1] = s[count - 1];
			count--;
		}
	} else {
		while(i < count)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}