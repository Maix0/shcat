/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_122.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_610(t_small_parse_table_array *v)
{
	v->a[12200] = anon_sym_until;
	v->a[12201] = actions(212);
	v->a[12202] = 2;
	v->a[12203] = sym_raw_string;
	v->a[12204] = sym_number;
	v->a[12205] = state(327);
	v->a[12206] = 5;
	v->a[12207] = sym_arithmetic_expansion;
	v->a[12208] = sym_string;
	v->a[12209] = sym_simple_expansion;
	v->a[12210] = sym_expansion;
	v->a[12211] = sym_command_substitution;
	v->a[12212] = actions(210);
	v->a[12213] = 7;
	v->a[12214] = anon_sym_LT;
	v->a[12215] = anon_sym_GT;
	v->a[12216] = anon_sym_GT_GT;
	v->a[12217] = anon_sym_LT_AMP;
	v->a[12218] = anon_sym_GT_AMP;
	v->a[12219] = anon_sym_GT_PIPE;
	small_parse_table_611(v);
}

void	small_parse_table_611(t_small_parse_table_array *v)
{
	v->a[12220] = anon_sym_LT_GT;
	v->a[12221] = 29;
	v->a[12222] = actions(3);
	v->a[12223] = 1;
	v->a[12224] = sym_comment;
	v->a[12225] = actions(9);
	v->a[12226] = 1;
	v->a[12227] = anon_sym_for;
	v->a[12228] = actions(13);
	v->a[12229] = 1;
	v->a[12230] = anon_sym_if;
	v->a[12231] = actions(15);
	v->a[12232] = 1;
	v->a[12233] = anon_sym_case;
	v->a[12234] = actions(17);
	v->a[12235] = 1;
	v->a[12236] = anon_sym_LPAREN;
	v->a[12237] = actions(19);
	v->a[12238] = 1;
	v->a[12239] = anon_sym_LBRACE;
	small_parse_table_612(v);
}

void	small_parse_table_612(t_small_parse_table_array *v)
{
	v->a[12240] = actions(41);
	v->a[12241] = 1;
	v->a[12242] = sym_word;
	v->a[12243] = actions(49);
	v->a[12244] = 1;
	v->a[12245] = anon_sym_BANG;
	v->a[12246] = actions(53);
	v->a[12247] = 1;
	v->a[12248] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12249] = actions(55);
	v->a[12250] = 1;
	v->a[12251] = anon_sym_DOLLAR;
	v->a[12252] = actions(57);
	v->a[12253] = 1;
	v->a[12254] = anon_sym_DQUOTE;
	v->a[12255] = actions(61);
	v->a[12256] = 1;
	v->a[12257] = anon_sym_DOLLAR_LBRACE;
	v->a[12258] = actions(63);
	v->a[12259] = 1;
	small_parse_table_613(v);
}

void	small_parse_table_613(t_small_parse_table_array *v)
{
	v->a[12260] = anon_sym_DOLLAR_LPAREN;
	v->a[12261] = actions(65);
	v->a[12262] = 1;
	v->a[12263] = anon_sym_BQUOTE;
	v->a[12264] = actions(67);
	v->a[12265] = 1;
	v->a[12266] = sym_variable_name;
	v->a[12267] = state(77);
	v->a[12268] = 1;
	v->a[12269] = aux_sym__terminated_statement;
	v->a[12270] = state(271);
	v->a[12271] = 1;
	v->a[12272] = sym_command_name;
	v->a[12273] = state(302);
	v->a[12274] = 1;
	v->a[12275] = sym_variable_assignment;
	v->a[12276] = state(482);
	v->a[12277] = 1;
	v->a[12278] = aux_sym_command_repeat1;
	v->a[12279] = state(600);
	small_parse_table_614(v);
}

void	small_parse_table_614(t_small_parse_table_array *v)
{
	v->a[12280] = 1;
	v->a[12281] = sym_file_redirect;
	v->a[12282] = state(602);
	v->a[12283] = 1;
	v->a[12284] = sym_concatenation;
	v->a[12285] = state(980);
	v->a[12286] = 1;
	v->a[12287] = sym_pipeline;
	v->a[12288] = state(1068);
	v->a[12289] = 1;
	v->a[12290] = aux_sym_redirected_statement_repeat2;
	v->a[12291] = state(1609);
	v->a[12292] = 1;
	v->a[12293] = sym__statement_not_pipeline;
	v->a[12294] = actions(11);
	v->a[12295] = 2;
	v->a[12296] = anon_sym_while;
	v->a[12297] = anon_sym_until;
	v->a[12298] = actions(59);
	v->a[12299] = 2;
	small_parse_table_615(v);
}

/* EOF small_parse_table_122.c */
