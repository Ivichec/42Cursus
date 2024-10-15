/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:20:21 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/15 16:35:20 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd (*s, fd);
		s++;
	}
}
// int main()
// {
// 	ft_putstr_fd("Hello, World!", 2);
// }