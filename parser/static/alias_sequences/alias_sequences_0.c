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
	v->a[10][0] = anon_sym_DOLLAR;
	v->a[21][0] = sym__immediate_double_hash;
	v->a[23][1] = sym_string_content;
	v->a[26][0] = anon_sym_AT;
	v->a[28][1] = anon_sym_AT;
	v->a[36][1] = alias_sym_statements;
	v->a[39][1] = sym__immediate_double_hash;
	v->a[40][2] = sym_string_content;
	v->a[41][3] = sym_word;
	v->a[42][0] = sym_regex;
	v->a[45][1] = anon_sym_AT;
	v->a[47][1] = alias_sym_statements;
	v->a[48][1] = alias_sym_statements;
	v->a[48][3] = alias_sym_statements;
	v->a[49][1] = alias_sym_statements;
	v->a[50][1] = alias_sym_statements;
	v->a[53][0] = sym_word;
	v->a[56][1] = alias_sym_statements;
	alias_sequences_1(v);
}

void	alias_sequences_1(t_alias_sequences_array *v)
{
	v->a[56][3] = alias_sym_statements;
	v->a[57][1] = alias_sym_statements;
	v->a[57][3] = alias_sym_statements;
	v->a[58][1] = alias_sym_statements;
	v->a[59][2] = alias_sym_statements;
	v->a[64][1] = sym_word;
	v->a[69][1] = alias_sym_statements;
	v->a[69][3] = alias_sym_statements;
	v->a[70][3] = alias_sym_statements;
	v->a[71][3] = alias_sym_statements;
	v->a[72][3] = alias_sym_statements;
	v->a[79][4] = alias_sym_statements;
	v->a[80][4] = alias_sym_statements;
	v->a[81][4] = alias_sym_statements;
	v->a[84][5] = alias_sym_statements;
}

/* EOF alias_sequences_0.c */
