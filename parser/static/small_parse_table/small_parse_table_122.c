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
	v->a[12200] = 2;
	v->a[12201] = sym_raw_string;
	v->a[12202] = sym_number;
	v->a[12203] = actions(51);
	v->a[12204] = 3;
	v->a[12205] = anon_sym_LT;
	v->a[12206] = anon_sym_GT;
	v->a[12207] = anon_sym_GT_GT;
	v->a[12208] = state(401);
	v->a[12209] = 5;
	v->a[12210] = sym_arithmetic_expansion;
	v->a[12211] = sym_string;
	v->a[12212] = sym_simple_expansion;
	v->a[12213] = sym_expansion;
	v->a[12214] = sym_command_substitution;
	v->a[12215] = state(955);
	v->a[12216] = 12;
	v->a[12217] = sym_redirected_statement;
	v->a[12218] = sym_for_statement;
	v->a[12219] = sym_while_statement;
	small_parse_table_611(v);
}

void	small_parse_table_611(t_small_parse_table_array *v)
{
	v->a[12220] = sym_if_statement;
	v->a[12221] = sym_case_statement;
	v->a[12222] = sym_function_definition;
	v->a[12223] = sym_compound_statement;
	v->a[12224] = sym_subshell;
	v->a[12225] = sym_list;
	v->a[12226] = sym_negated_command;
	v->a[12227] = sym_command;
	v->a[12228] = sym__variable_assignments;
	v->a[12229] = 29;
	v->a[12230] = actions(3);
	v->a[12231] = 1;
	v->a[12232] = sym_comment;
	v->a[12233] = actions(9);
	v->a[12234] = 1;
	v->a[12235] = anon_sym_for;
	v->a[12236] = actions(13);
	v->a[12237] = 1;
	v->a[12238] = anon_sym_if;
	v->a[12239] = actions(15);
	small_parse_table_612(v);
}

void	small_parse_table_612(t_small_parse_table_array *v)
{
	v->a[12240] = 1;
	v->a[12241] = anon_sym_case;
	v->a[12242] = actions(17);
	v->a[12243] = 1;
	v->a[12244] = anon_sym_LPAREN;
	v->a[12245] = actions(19);
	v->a[12246] = 1;
	v->a[12247] = anon_sym_LBRACE;
	v->a[12248] = actions(41);
	v->a[12249] = 1;
	v->a[12250] = sym_word;
	v->a[12251] = actions(49);
	v->a[12252] = 1;
	v->a[12253] = anon_sym_BANG;
	v->a[12254] = actions(53);
	v->a[12255] = 1;
	v->a[12256] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12257] = actions(55);
	v->a[12258] = 1;
	v->a[12259] = anon_sym_DOLLAR;
	small_parse_table_613(v);
}

void	small_parse_table_613(t_small_parse_table_array *v)
{
	v->a[12260] = actions(57);
	v->a[12261] = 1;
	v->a[12262] = anon_sym_DQUOTE;
	v->a[12263] = actions(61);
	v->a[12264] = 1;
	v->a[12265] = anon_sym_DOLLAR_LBRACE;
	v->a[12266] = actions(63);
	v->a[12267] = 1;
	v->a[12268] = anon_sym_DOLLAR_LPAREN;
	v->a[12269] = actions(65);
	v->a[12270] = 1;
	v->a[12271] = anon_sym_BQUOTE;
	v->a[12272] = actions(67);
	v->a[12273] = 1;
	v->a[12274] = sym_variable_name;
	v->a[12275] = state(99);
	v->a[12276] = 1;
	v->a[12277] = aux_sym__terminated_statement;
	v->a[12278] = state(185);
	v->a[12279] = 1;
	small_parse_table_614(v);
}

void	small_parse_table_614(t_small_parse_table_array *v)
{
	v->a[12280] = sym_command_name;
	v->a[12281] = state(237);
	v->a[12282] = 1;
	v->a[12283] = sym_variable_assignment;
	v->a[12284] = state(411);
	v->a[12285] = 1;
	v->a[12286] = aux_sym_command_repeat1;
	v->a[12287] = state(551);
	v->a[12288] = 1;
	v->a[12289] = sym_file_redirect;
	v->a[12290] = state(555);
	v->a[12291] = 1;
	v->a[12292] = sym_concatenation;
	v->a[12293] = state(1059);
	v->a[12294] = 1;
	v->a[12295] = sym_pipeline;
	v->a[12296] = state(1126);
	v->a[12297] = 1;
	v->a[12298] = aux_sym_redirected_statement_repeat2;
	v->a[12299] = state(1561);
	small_parse_table_615(v);
}

/* EOF small_parse_table_122.c */
