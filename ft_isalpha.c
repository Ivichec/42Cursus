/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:35:10 by icheca-g          #+#    #+#             */
/*   Updated: 2024/09/26 19:45:09 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}


// #include <stdio.h>
// int main()
// {
// 	char ch;

// 	// Asking user for a character input
// 	printf("Enter a character: ");
// 	scanf("%c", &ch);

// 	// Checking if the character is alphabetic
// 	if (isprint(ch))
// 		printf("'%c' is true", ch);
// 	else
// 		printf("'%c' is false", ch);
// 	return 0;
// }