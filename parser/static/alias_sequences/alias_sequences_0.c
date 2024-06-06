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
	v->a[3][0] = sym_word;
	v->a[6][1] = sym_word;
	v->a[10][1] = anon_sym_AT;
	v->a[11][0] = anon_sym_AT;
	v->a[15][0] = sym_word;
	v->a[19][2] = sym_word;
	v->a[21][2] = sym_word;
	v->a[22][1] = sym_word;
	v->a[28][0] = anon_sym_AT;
	v->a[35][1] = sym_word;
	v->a[38][0] = sym_regex;
	v->a[41][0] = sym_word;
	v->a[50][0] = sym_word;
	v->a[51][0] = sym_word;
	v->a[52][0] = sym_word;
	v->a[65][1] = sym_word;
	v->a[66][1] = sym_word;
	v->a[67][1] = sym_word;
	v->a[68][0] = sym_word;
	v->a[69][0] = sym_word;
	alias_sequences_1(v);
}

void	alias_sequences_1(t_alias_sequences_array *v)
{
	v->a[70][0] = sym_word;
	v->a[71][0] = sym_word;
	v->a[82][1] = sym_word;
	v->a[83][1] = sym_word;
	v->a[84][1] = sym_word;
	v->a[85][1] = sym_word;
	v->a[86][0] = sym_word;
	v->a[87][0] = sym_word;
	v->a[91][1] = sym_word;
	v->a[92][1] = sym_word;
}

/* EOF alias_sequences_0.c */
