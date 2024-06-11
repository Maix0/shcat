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
	v->a[8][1] = anon_sym_POUND;
	v->a[9][0] = anon_sym_POUND;
	v->a[10][1] = alias_sym_terminator;
	v->a[12][0] = anon_sym_DOLLAR;
	v->a[23][0] = sym__immediate_double_hash;
	v->a[25][1] = sym_string_content;
	v->a[27][0] = anon_sym_POUND;
	v->a[32][2] = alias_sym_terminator;
	v->a[35][1] = alias_sym_statements;
	v->a[38][1] = sym__immediate_double_hash;
	v->a[39][2] = sym_string_content;
	v->a[40][3] = sym_word;
	v->a[41][0] = sym_regex;
	v->a[43][1] = alias_sym_statements;
	v->a[44][1] = alias_sym_statements;
	v->a[44][3] = alias_sym_statements;
	v->a[45][1] = alias_sym_statements;
	v->a[46][1] = alias_sym_statements;
	v->a[51][1] = alias_sym_statements;
	v->a[51][3] = alias_sym_statements;
	alias_sequences_1(v);
}

void	alias_sequences_1(t_alias_sequences_array *v)
{
	v->a[52][1] = alias_sym_statements;
	v->a[52][3] = alias_sym_statements;
	v->a[53][1] = alias_sym_statements;
	v->a[55][2] = alias_sym_statements;
	v->a[62][1] = alias_sym_statements;
	v->a[62][3] = alias_sym_statements;
	v->a[63][3] = alias_sym_statements;
	v->a[65][3] = alias_sym_statements;
	v->a[66][3] = alias_sym_statements;
	v->a[72][4] = alias_sym_statements;
	v->a[73][4] = alias_sym_statements;
	v->a[74][4] = alias_sym_statements;
	v->a[77][5] = alias_sym_statements;
}

/* EOF alias_sequences_0.c */
