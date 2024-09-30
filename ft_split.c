/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:23:56 by icheca-g          #+#    #+#             */
/*   Updated: 2024/09/29 17:11:12 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int ft_count_words(char const *s, char c)
// {
// 	int i;
// 	int count;

// 	i = 0;
// 	count = 0;
// 	while (s[i])
// 	{
// 		if (s[i] != c)
// 		{
// 			count++;
// 			while (s[i] && s[i] != c)
// 				i++;
// 		}
// 		else
// 			i++;
// 	}
// 	return (count);
// }
// char **ft_split(char const *s, char c)
// {
// 	char **strs;
// 	int i;
// 	int j;
// 	int k;

// 	i = 0;
// 	j = 0;
// 	strs = (char **)ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
// 	if (!strs)
// 		return (0);
// 	while (s[i])
// 	{
// 		if (s[i] != c)
// 		{
// 			k = 0;
// 			while (s[i + k] && s[i + k] != c)
// 				k++;
// 			strs[j] = (char *)ft_calloc(k + 1, sizeof(char));
// 			if (!strs[j])
// 				return (0);
// 			ft_strlcpy(strs[j], s + i, k + 1);
// 			i += k;
// 			j++;
// 		}
// 		else
// 			i++;
// 	}
// 	return (strs);
// }