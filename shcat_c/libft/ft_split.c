/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:56:02 by rparodi           #+#    #+#             */
/*   Updated: 2024/03/31 21:07:40 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

static t_i32	count_words(t_const_str str, t_i8 sep)
{
	t_i32	i;
	t_i32	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == sep && str[i])
			i++;
		if (str[i] != sep && str[i])
		{
			while (str[i] != sep && str[i])
				i++;
			count++;
		}
	}
	return (count);
}

static t_str	ft_strndup(t_const_str s, t_i32 j)
{
	t_i32		i;
	t_str		str;

	i = 0;
	str = (t_str)malloc((j + 1));
	if (!str)
		return (NULL);
	while (s[i] && i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static t_str	*ext_w(t_str *words_array, t_const_str str, t_i8 sep, t_i32 size)
{
	t_i32	i;
	t_i32	j;

	i = 0;
	j = 0;
	while (j < size)
	{
		while (str[i] == sep && str[i])
			i++;
		str = str + i;
		i = 0;
		while (str[i] != sep && str[i])
			i++;
		words_array[j++] = ft_strndup(str, i);
		str = str + i;
		i = 0;
	}
	words_array[j] = 0;
	return (words_array);
}

t_str	*ft_split(t_const_str s, t_i8 c)
{
	t_i32		size;
	t_str		*words_array;

	size = count_words(s, c);
	words_array = (t_str *)malloc(sizeof(char *) * (size + 1));
	if (!words_array)
		return (NULL);
	if (size == 0)
	{
		words_array[0] = NULL;
		return (words_array);
	}
	words_array = ext_w(words_array, s, c, size);
	return (words_array);
}
