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
	v->a[1][0] = sym_word;
	v->a[9][1] = sym_word;
	v->a[10][1] = sym_word;
	v->a[11][1] = anon_sym_AT2;
	v->a[13][0] = anon_sym_AT2;
	v->a[16][0] = sym_word;
	v->a[22][2] = sym_word;
	v->a[23][2] = sym_word;
	v->a[25][2] = sym_word;
	v->a[32][0] = anon_sym_AT2;
	v->a[33][1] = anon_sym_AT2;
	v->a[36][1] = sym_word;
	v->a[40][2] = sym_word;
	v->a[45][1] = sym_word;
	v->a[48][0] = sym_regex;
	v->a[53][1] = anon_sym_AT2;
	v->a[55][0] = sym_variable_name;
	v->a[59][0] = sym_word;
	v->a[62][2] = sym_word;
	v->a[77][0] = sym_word;
	alias_sequences_1(v);
}

void	alias_sequences_1(t_alias_sequences_array *v)
{
	v->a[78][0] = sym_word;
	v->a[79][0] = sym_word;
	v->a[85][3] = sym_word;
	v->a[86][2] = sym_word;
	v->a[88][3] = sym_word;
	v->a[103][0] = sym_word;
	v->a[104][0] = sym_word;
	v->a[105][0] = sym_word;
	v->a[106][0] = sym_word;
	v->a[107][1] = sym_word;
	v->a[108][1] = sym_word;
	v->a[109][1] = sym_word;
	v->a[117][3] = sym_word;
	v->a[119][4] = sym_word;
	v->a[120][3] = sym_word;
	v->a[121][4] = sym_word;
	v->a[134][0] = sym_word;
	v->a[135][0] = sym_word;
	v->a[136][1] = sym_word;
	v->a[137][1] = sym_word;
	alias_sequences_2(v);
}

void	alias_sequences_2(t_alias_sequences_array *v)
{
	v->a[138][1] = sym_word;
	v->a[139][1] = sym_word;
	v->a[146][4] = sym_word;
	v->a[147][4] = sym_word;
	v->a[153][1] = sym_word;
	v->a[154][1] = sym_word;
}

/* EOF alias_sequences_0.c */
