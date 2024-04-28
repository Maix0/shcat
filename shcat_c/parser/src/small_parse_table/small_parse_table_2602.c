/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2602.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13010(t_small_parse_table_array *v)
{
	v->a[260200] = 1;
	v->a[260201] = anon_sym_RBRACE3;
	v->a[260202] = state(3532);
	v->a[260203] = 1;
	v->a[260204] = sym_subscript;
	v->a[260205] = state(6428);
	v->a[260206] = 1;
	v->a[260207] = aux_sym__expansion_body_repeat1;
	v->a[260208] = state(6472);
	v->a[260209] = 1;
	v->a[260210] = sym_command_substitution;
	v->a[260211] = state(7601);
	v->a[260212] = 1;
	v->a[260213] = sym__expansion_body;
	v->a[260214] = actions(11762);
	v->a[260215] = 2;
	v->a[260216] = anon_sym_POUND2;
	v->a[260217] = anon_sym_EQ2;
	v->a[260218] = actions(8050);
	v->a[260219] = 3;
	small_parse_table_13011(v);
}

void	small_parse_table_13011(t_small_parse_table_array *v)
{
	v->a[260220] = sym__external_expansion_sym_hash;
	v->a[260221] = sym__external_expansion_sym_bang;
	v->a[260222] = sym__external_expansion_sym_equal;
	v->a[260223] = actions(11754);
	v->a[260224] = 4;
	v->a[260225] = anon_sym_DASH;
	v->a[260226] = anon_sym_STAR;
	v->a[260227] = anon_sym_QMARK;
	v->a[260228] = anon_sym_AT2;
	v->a[260229] = actions(11756);
	v->a[260230] = 5;
	v->a[260231] = anon_sym_BANG;
	v->a[260232] = anon_sym_DOLLAR;
	v->a[260233] = anon_sym_POUND;
	v->a[260234] = anon_sym_0;
	v->a[260235] = anon_sym__;
	v->a[260236] = 16;
	v->a[260237] = actions(3);
	v->a[260238] = 1;
	v->a[260239] = sym_comment;
	small_parse_table_13012(v);
}

void	small_parse_table_13012(t_small_parse_table_array *v)
{
	v->a[260240] = actions(11760);
	v->a[260241] = 1;
	v->a[260242] = anon_sym_BANG2;
	v->a[260243] = actions(11764);
	v->a[260244] = 1;
	v->a[260245] = anon_sym_DOLLAR_LPAREN;
	v->a[260246] = actions(11766);
	v->a[260247] = 1;
	v->a[260248] = anon_sym_BQUOTE;
	v->a[260249] = actions(11768);
	v->a[260250] = 1;
	v->a[260251] = anon_sym_DOLLAR_BQUOTE;
	v->a[260252] = actions(11770);
	v->a[260253] = 1;
	v->a[260254] = aux_sym__simple_variable_name_token1;
	v->a[260255] = actions(11772);
	v->a[260256] = 1;
	v->a[260257] = sym_variable_name;
	v->a[260258] = actions(11962);
	v->a[260259] = 1;
	small_parse_table_13013(v);
}

void	small_parse_table_13013(t_small_parse_table_array *v)
{
	v->a[260260] = anon_sym_RBRACE3;
	v->a[260261] = state(3532);
	v->a[260262] = 1;
	v->a[260263] = sym_subscript;
	v->a[260264] = state(6428);
	v->a[260265] = 1;
	v->a[260266] = aux_sym__expansion_body_repeat1;
	v->a[260267] = state(6472);
	v->a[260268] = 1;
	v->a[260269] = sym_command_substitution;
	v->a[260270] = state(7361);
	v->a[260271] = 1;
	v->a[260272] = sym__expansion_body;
	v->a[260273] = actions(11762);
	v->a[260274] = 2;
	v->a[260275] = anon_sym_POUND2;
	v->a[260276] = anon_sym_EQ2;
	v->a[260277] = actions(8050);
	v->a[260278] = 3;
	v->a[260279] = sym__external_expansion_sym_hash;
	small_parse_table_13014(v);
}

void	small_parse_table_13014(t_small_parse_table_array *v)
{
	v->a[260280] = sym__external_expansion_sym_bang;
	v->a[260281] = sym__external_expansion_sym_equal;
	v->a[260282] = actions(11754);
	v->a[260283] = 4;
	v->a[260284] = anon_sym_DASH;
	v->a[260285] = anon_sym_STAR;
	v->a[260286] = anon_sym_QMARK;
	v->a[260287] = anon_sym_AT2;
	v->a[260288] = actions(11756);
	v->a[260289] = 5;
	v->a[260290] = anon_sym_BANG;
	v->a[260291] = anon_sym_DOLLAR;
	v->a[260292] = anon_sym_POUND;
	v->a[260293] = anon_sym_0;
	v->a[260294] = anon_sym__;
	v->a[260295] = 16;
	v->a[260296] = actions(3);
	v->a[260297] = 1;
	v->a[260298] = sym_comment;
	v->a[260299] = actions(11760);
	small_parse_table_13015(v);
}

/* EOF small_parse_table_2602.c */
