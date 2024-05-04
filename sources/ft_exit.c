/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:35:51 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/04 19:24:44 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"
#include "app/env.h"
#include "me/hashmap/hashmap_env.h"

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
	if (s->env)
		drop_hashmap_env(s->env);
	ts_parser_delete(s->parser.parser);
}

void ft_exit(t_utils *maiboyerlpb, t_u8 exit_status)
{
	if (maiboyerlpb != NULL)
		ft_free_utils(maiboyerlpb);
	exit(exit_status);
}
