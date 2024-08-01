/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alias_sequences_0.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./alias_sequences.h"

void	alias_sequences_0(t_alias_sequences_array *v)
{
	v->a[6][1] = anon_sym_AT;
	v->a[7][0] = anon_sym_AT;
	v->a[21][1] = sym_string_content;
	v->a[23][0] = anon_sym_AT;
	v->a[25][1] = anon_sym_AT;
	v->a[37][2] = sym_string_content;
	v->a[38][3] = sym_word;
	v->a[39][0] = sym_regex;
	v->a[42][1] = anon_sym_AT;
	v->a[50][0] = sym_word;
	v->a[61][1] = sym_word;
}

/* EOF alias_sequences_0.c */
