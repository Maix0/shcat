/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:35:51 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/02 12:09:53 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/state.h"
#include "me/hashmap/hashmap_env.h"
#include "me/mem/mem.h"
#include "parser/api.h"

void	ts_parser_delete(t_first_parser *self);

void	ft_free(void *ptr)
{
	if (!ptr)
		mem_free(ptr);
}

void	ft_free_strs(t_str *strs)
{
	t_usize	i;

	i = 0;
	while (strs[i])
		ft_free(strs[i++]);
	ft_free(strs);
}

void	ft_free_utils(t_state *s)
{
	if (s->str_input)
		mem_free(s->str_input);
	if (s->path)
		ft_free_strs(s->path);
	if (s->env)
		hmap_env_free(s->env);
	ts_parser_delete(s->parser.parser);
}

void	ft_exit(t_state *maiboyerlpb, t_u8 exit_status)
{
	if (maiboyerlpb != NULL)
		ft_free_utils(maiboyerlpb);
	me_exit(exit_status);
}
