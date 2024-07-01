/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_132.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_660(t_small_parse_table_array *v)
{
	v->a[13200] = 1;
	v->a[13201] = sym_comment;
	v->a[13202] = actions(9);
	v->a[13203] = 1;
	v->a[13204] = anon_sym_for;
	v->a[13205] = actions(13);
	v->a[13206] = 1;
	v->a[13207] = anon_sym_if;
	v->a[13208] = actions(15);
	v->a[13209] = 1;
	v->a[13210] = anon_sym_case;
	v->a[13211] = actions(17);
	v->a[13212] = 1;
	v->a[13213] = anon_sym_LPAREN;
	v->a[13214] = actions(19);
	v->a[13215] = 1;
	v->a[13216] = anon_sym_LBRACE;
	v->a[13217] = actions(59);
	v->a[13218] = 1;
	v->a[13219] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_661(v);
}

void	small_parse_table_661(t_small_parse_table_array *v)
{
	v->a[13220] = actions(61);
	v->a[13221] = 1;
	v->a[13222] = anon_sym_DOLLAR;
	v->a[13223] = actions(63);
	v->a[13224] = 1;
	v->a[13225] = anon_sym_DQUOTE;
	v->a[13226] = actions(67);
	v->a[13227] = 1;
	v->a[13228] = anon_sym_DOLLAR_LBRACE;
	v->a[13229] = actions(69);
	v->a[13230] = 1;
	v->a[13231] = anon_sym_DOLLAR_LPAREN;
	v->a[13232] = actions(71);
	v->a[13233] = 1;
	v->a[13234] = anon_sym_BQUOTE;
	v->a[13235] = actions(220);
	v->a[13236] = 1;
	v->a[13237] = sym_word;
	v->a[13238] = actions(222);
	v->a[13239] = 1;
	small_parse_table_662(v);
}

void	small_parse_table_662(t_small_parse_table_array *v)
{
	v->a[13240] = anon_sym_BANG;
	v->a[13241] = actions(230);
	v->a[13242] = 1;
	v->a[13243] = sym_file_descriptor;
	v->a[13244] = actions(232);
	v->a[13245] = 1;
	v->a[13246] = sym_variable_name;
	v->a[13247] = state(133);
	v->a[13248] = 1;
	v->a[13249] = aux_sym__statements_repeat1;
	v->a[13250] = state(180);
	v->a[13251] = 1;
	v->a[13252] = sym_command_name;
	v->a[13253] = state(231);
	v->a[13254] = 1;
	v->a[13255] = sym_variable_assignment;
	v->a[13256] = state(650);
	v->a[13257] = 1;
	v->a[13258] = sym_concatenation;
	v->a[13259] = state(681);
	small_parse_table_663(v);
}

void	small_parse_table_663(t_small_parse_table_array *v)
{
	v->a[13260] = 1;
	v->a[13261] = sym_file_redirect;
	v->a[13262] = state(710);
	v->a[13263] = 1;
	v->a[13264] = aux_sym_command_repeat1;
	v->a[13265] = state(1095);
	v->a[13266] = 1;
	v->a[13267] = sym_pipeline;
	v->a[13268] = state(1282);
	v->a[13269] = 1;
	v->a[13270] = aux_sym_redirected_statement_repeat2;
	v->a[13271] = state(2127);
	v->a[13272] = 1;
	v->a[13273] = sym__statement_not_pipeline;
	v->a[13274] = state(2271);
	v->a[13275] = 1;
	v->a[13276] = sym__statements;
	v->a[13277] = actions(11);
	v->a[13278] = 2;
	v->a[13279] = anon_sym_while;
	small_parse_table_664(v);
}

void	small_parse_table_664(t_small_parse_table_array *v)
{
	v->a[13280] = anon_sym_until;
	v->a[13281] = actions(226);
	v->a[13282] = 2;
	v->a[13283] = anon_sym_LT_AMP_DASH;
	v->a[13284] = anon_sym_GT_AMP_DASH;
	v->a[13285] = actions(228);
	v->a[13286] = 2;
	v->a[13287] = sym_raw_string;
	v->a[13288] = sym_number;
	v->a[13289] = state(382);
	v->a[13290] = 5;
	v->a[13291] = sym_arithmetic_expansion;
	v->a[13292] = sym_string;
	v->a[13293] = sym_simple_expansion;
	v->a[13294] = sym_expansion;
	v->a[13295] = sym_command_substitution;
	v->a[13296] = actions(224);
	v->a[13297] = 6;
	v->a[13298] = anon_sym_LT;
	v->a[13299] = anon_sym_GT;
	small_parse_table_665(v);
}

/* EOF small_parse_table_132.c */
