/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:35:51 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/26 18:14:26 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/state.h"
#include "me/hashmap/hashmap_env.h"
#include "me/mem/mem.h"

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
	if (s->env)
		hmap_env_free(s->env);
	if (s->tmp_var)
		hmap_env_free(s->tmp_var);
}

void	ft_exit(t_state *maiboyerlpb, t_u8 exit_status)
{
	if (maiboyerlpb != NULL)
		ft_free_utils(maiboyerlpb);
	me_exit(exit_status);
}
