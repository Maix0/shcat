/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   non_terminal_alias_map_0.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./non_terminal_alias_map.h"

void	non_terminal_alias_map_0(t_non_terminal_alias_map_array *v)
{
	v->a[0] = sym__statements;
	v->a[1] = 2;
	v->a[2] = sym__statements;
	v->a[3] = alias_sym_statements;
	v->a[4] = aux_sym__terminated_statement;
	v->a[5] = 2;
	v->a[6] = aux_sym__terminated_statement;
	v->a[7] = alias_sym_statements;
	v->a[8] = sym__word_no_brace;
	v->a[9] = 2;
	v->a[10] = sym__word_no_brace;
	v->a[11] = sym_word;
	v->a[12] = 0;
}

/* EOF non_terminal_alias_map_0.c */
