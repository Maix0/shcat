/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:56:59 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 16:52:08 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/mem/mem_alloc.h"
#include "me/mem/mem_alloc_array.h"
#include "me/string/str_l_copy.h"
#include "me/string/str_split.h"
#include <stdlib.h>

static t_usize	local_count_words(t_const_str str, char chr);
static t_str	*local_split_inner(t_const_str str, char chr, t_str *out);
static t_str	*local_split_freeall(t_str **to_free);

static t_usize	local_count_words(t_const_str str, char chr)
{
	t_usize	i;
	t_usize	out;

	out = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == chr)
			i++;
		if (str[i] == 0)
			return (out);
		out++;
		while (str[i] && str[i] != chr)
			i++;
	}
	return (out);
}

static t_str	*local_split_freeall(t_str **to_free)
{
	while (*to_free)
		free(*(to_free++));
	return (NULL);
}

static t_str	*local_split_inner(t_const_str str, char chr, t_str *out)
{
	t_usize	str_i;
	t_usize	sub_i;
	t_usize	ptr_i;

	str_i = 0;
	ptr_i = 0;
	while (str[str_i])
	{
		while (str[str_i] && str[str_i] == chr)
			str_i++;
		if (str[str_i] == 0)
			break ;
		sub_i = 0;
		while (str[str_i + sub_i] && str[str_i + sub_i] != chr)
			sub_i++;
		out[ptr_i] = mem_alloc(sizeof(char) * (sub_i + 1));
		if (out[ptr_i] == NULL)
			return (local_split_freeall(&out));
		str_l_copy(out[ptr_i++], (t_str)(str + str_i), sub_i + 1);
		str_i += sub_i;
	}
	out[ptr_i] = NULL;
	return (out);
}

t_str	*str_split(t_const_str str, char chr)
{
	t_usize	ptr_len;
	t_str	*out;

	if (str == NULL || *str == 0)
	{
		out = mem_alloc(sizeof(t_str) * 1);
		*out = NULL;
		return (out);
	}
	ptr_len = local_count_words(str, chr);
	out = mem_alloc_array(sizeof(t_str), (ptr_len + 1));
	if (out == NULL)
		return (NULL);
	return (local_split_inner(str, chr, out));
}
