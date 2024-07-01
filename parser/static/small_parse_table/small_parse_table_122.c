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
	v->a[12200] = actions(63);
	v->a[12201] = 1;
	v->a[12202] = anon_sym_DOLLAR_LBRACE;
	v->a[12203] = actions(65);
	v->a[12204] = 1;
	v->a[12205] = anon_sym_DOLLAR_LPAREN;
	v->a[12206] = actions(67);
	v->a[12207] = 1;
	v->a[12208] = anon_sym_BQUOTE;
	v->a[12209] = actions(211);
	v->a[12210] = 1;
	v->a[12211] = sym_word;
	v->a[12212] = actions(213);
	v->a[12213] = 1;
	v->a[12214] = anon_sym_BANG;
	v->a[12215] = actions(219);
	v->a[12216] = 1;
	v->a[12217] = sym_file_descriptor;
	v->a[12218] = actions(221);
	v->a[12219] = 1;
	small_parse_table_611(v);
}

void	small_parse_table_611(t_small_parse_table_array *v)
{
	v->a[12220] = sym_variable_name;
	v->a[12221] = state(125);
	v->a[12222] = 1;
	v->a[12223] = aux_sym__statements_repeat1;
	v->a[12224] = state(173);
	v->a[12225] = 1;
	v->a[12226] = sym_command_name;
	v->a[12227] = state(224);
	v->a[12228] = 1;
	v->a[12229] = sym_variable_assignment;
	v->a[12230] = state(603);
	v->a[12231] = 1;
	v->a[12232] = sym_concatenation;
	v->a[12233] = state(673);
	v->a[12234] = 1;
	v->a[12235] = aux_sym_command_repeat1;
	v->a[12236] = state(675);
	v->a[12237] = 1;
	v->a[12238] = sym_file_redirect;
	v->a[12239] = state(1020);
	small_parse_table_612(v);
}

void	small_parse_table_612(t_small_parse_table_array *v)
{
	v->a[12240] = 1;
	v->a[12241] = sym_pipeline;
	v->a[12242] = state(1136);
	v->a[12243] = 1;
	v->a[12244] = aux_sym_redirected_statement_repeat2;
	v->a[12245] = state(1898);
	v->a[12246] = 1;
	v->a[12247] = sym__statement_not_pipeline;
	v->a[12248] = state(1950);
	v->a[12249] = 1;
	v->a[12250] = sym__statements;
	v->a[12251] = actions(11);
	v->a[12252] = 2;
	v->a[12253] = anon_sym_while;
	v->a[12254] = anon_sym_until;
	v->a[12255] = actions(217);
	v->a[12256] = 2;
	v->a[12257] = sym_raw_string;
	v->a[12258] = sym_number;
	v->a[12259] = state(362);
	small_parse_table_613(v);
}

void	small_parse_table_613(t_small_parse_table_array *v)
{
	v->a[12260] = 5;
	v->a[12261] = sym_arithmetic_expansion;
	v->a[12262] = sym_string;
	v->a[12263] = sym_simple_expansion;
	v->a[12264] = sym_expansion;
	v->a[12265] = sym_command_substitution;
	v->a[12266] = actions(215);
	v->a[12267] = 7;
	v->a[12268] = anon_sym_LT;
	v->a[12269] = anon_sym_GT;
	v->a[12270] = anon_sym_GT_GT;
	v->a[12271] = anon_sym_LT_AMP;
	v->a[12272] = anon_sym_GT_AMP;
	v->a[12273] = anon_sym_GT_PIPE;
	v->a[12274] = anon_sym_LT_GT;
	v->a[12275] = state(1003);
	v->a[12276] = 12;
	v->a[12277] = sym_redirected_statement;
	v->a[12278] = sym_for_statement;
	v->a[12279] = sym_while_statement;
	small_parse_table_614(v);
}

void	small_parse_table_614(t_small_parse_table_array *v)
{
	v->a[12280] = sym_if_statement;
	v->a[12281] = sym_case_statement;
	v->a[12282] = sym_function_definition;
	v->a[12283] = sym_compound_statement;
	v->a[12284] = sym_subshell;
	v->a[12285] = sym_list;
	v->a[12286] = sym_negated_command;
	v->a[12287] = sym_command;
	v->a[12288] = sym__variable_assignments;
	v->a[12289] = 31;
	v->a[12290] = actions(3);
	v->a[12291] = 1;
	v->a[12292] = sym_comment;
	v->a[12293] = actions(9);
	v->a[12294] = 1;
	v->a[12295] = anon_sym_for;
	v->a[12296] = actions(13);
	v->a[12297] = 1;
	v->a[12298] = anon_sym_if;
	v->a[12299] = actions(15);
	small_parse_table_615(v);
}

/* EOF small_parse_table_122.c */
