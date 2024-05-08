/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:35:51 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/08 19:07:54 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"
#include "app/env.h"
#include "me/hashmap/hashmap_env.h"

#include "me/alloc/alloc_internal.h"

void ts_parser_delete(t_first_parser *self);

void ft_free(void *ptr)
{
	if (!ptr)
		free(ptr);
}

void ft_free_strs(t_str *strs)
{
	t_usize i;

	i = 0;
	while (strs[i])
		ft_free(strs[i++]);
	ft_free(strs);
}

void ft_free_utils(t_utils *s)
{
	(void)(s);
	if (s->str_input)
		free(s->str_input);
	if (s->path)
		ft_free_strs(s->path);
	ts_parser_delete(s->parser.parser);
}

void ft_exit(t_utils *maiboyerlpb, t_u8 exit_status)
{
	if (maiboyerlpb != NULL)
		ft_free_utils(maiboyerlpb);
	print_pages_info();
	me_exit(exit_status);
}
