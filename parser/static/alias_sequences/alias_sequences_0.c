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
	v->a[6][1] = anon_sym_POUND;
	v->a[7][0] = anon_sym_POUND;
	v->a[10][0] = anon_sym_DOLLAR;
	v->a[21][0] = sym__immediate_double_hash;
	v->a[23][1] = sym_string_content;
	v->a[26][0] = anon_sym_POUND;
	v->a[34][1] = alias_sym_statements;
	v->a[37][1] = sym__immediate_double_hash;
	v->a[38][2] = sym_string_content;
	v->a[39][3] = sym_word;
	v->a[40][0] = sym_regex;
	v->a[42][1] = alias_sym_statements;
	v->a[43][1] = alias_sym_statements;
	v->a[43][3] = alias_sym_statements;
	v->a[44][1] = alias_sym_statements;
	v->a[45][1] = alias_sym_statements;
	v->a[50][1] = alias_sym_statements;
	v->a[50][3] = alias_sym_statements;
	v->a[51][1] = alias_sym_statements;
	v->a[51][3] = alias_sym_statements;
	alias_sequences_1(v);
}

void	alias_sequences_1(t_alias_sequences_array *v)
{
	v->a[52][1] = alias_sym_statements;
	v->a[53][2] = alias_sym_statements;
	v->a[62][1] = alias_sym_statements;
	v->a[62][3] = alias_sym_statements;
	v->a[63][3] = alias_sym_statements;
	v->a[64][3] = alias_sym_statements;
	v->a[65][3] = alias_sym_statements;
	v->a[72][4] = alias_sym_statements;
	v->a[73][4] = alias_sym_statements;
	v->a[74][4] = alias_sym_statements;
	v->a[77][5] = alias_sym_statements;
}

/* EOF alias_sequences_0.c */
