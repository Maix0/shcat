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
	v->a[12200] = actions(213);
	v->a[12201] = 1;
	v->a[12202] = sym_variable_name;
	v->a[12203] = state(95);
	v->a[12204] = 1;
	v->a[12205] = aux_sym__terminated_statement;
	v->a[12206] = state(190);
	v->a[12207] = 1;
	v->a[12208] = sym_command_name;
	v->a[12209] = state(307);
	v->a[12210] = 1;
	v->a[12211] = sym_variable_assignment;
	v->a[12212] = state(582);
	v->a[12213] = 1;
	v->a[12214] = sym_concatenation;
	v->a[12215] = state(587);
	v->a[12216] = 1;
	v->a[12217] = aux_sym_command_repeat1;
	v->a[12218] = state(718);
	v->a[12219] = 1;
	small_parse_table_611(v);
}

void	small_parse_table_611(t_small_parse_table_array *v)
{
	v->a[12220] = sym_file_redirect;
	v->a[12221] = state(1213);
	v->a[12222] = 1;
	v->a[12223] = aux_sym_redirected_statement_repeat2;
	v->a[12224] = state(1238);
	v->a[12225] = 1;
	v->a[12226] = sym_pipeline;
	v->a[12227] = state(2035);
	v->a[12228] = 1;
	v->a[12229] = sym__statement_not_pipeline;
	v->a[12230] = actions(157);
	v->a[12231] = 2;
	v->a[12232] = anon_sym_while;
	v->a[12233] = anon_sym_until;
	v->a[12234] = actions(180);
	v->a[12235] = 2;
	v->a[12236] = anon_sym_LT_AMP_DASH;
	v->a[12237] = anon_sym_GT_AMP_DASH;
	v->a[12238] = state(397);
	v->a[12239] = 6;
	small_parse_table_612(v);
}

void	small_parse_table_612(t_small_parse_table_array *v)
{
	v->a[12240] = sym_arithmetic_expansion;
	v->a[12241] = sym_string;
	v->a[12242] = sym_number;
	v->a[12243] = sym_simple_expansion;
	v->a[12244] = sym_expansion;
	v->a[12245] = sym_command_substitution;
	v->a[12246] = actions(177);
	v->a[12247] = 8;
	v->a[12248] = anon_sym_LT;
	v->a[12249] = anon_sym_GT;
	v->a[12250] = anon_sym_GT_GT;
	v->a[12251] = anon_sym_AMP_GT;
	v->a[12252] = anon_sym_AMP_GT_GT;
	v->a[12253] = anon_sym_LT_AMP;
	v->a[12254] = anon_sym_GT_AMP;
	v->a[12255] = anon_sym_GT_PIPE;
	v->a[12256] = state(1204);
	v->a[12257] = 12;
	v->a[12258] = sym_redirected_statement;
	v->a[12259] = sym_for_statement;
	small_parse_table_613(v);
}

void	small_parse_table_613(t_small_parse_table_array *v)
{
	v->a[12260] = sym_while_statement;
	v->a[12261] = sym_if_statement;
	v->a[12262] = sym_case_statement;
	v->a[12263] = sym_function_definition;
	v->a[12264] = sym_compound_statement;
	v->a[12265] = sym_subshell;
	v->a[12266] = sym_list;
	v->a[12267] = sym_negated_command;
	v->a[12268] = sym_command;
	v->a[12269] = sym_variable_assignments;
	v->a[12270] = 34;
	v->a[12271] = actions(3);
	v->a[12272] = 1;
	v->a[12273] = sym_comment;
	v->a[12274] = actions(9);
	v->a[12275] = 1;
	v->a[12276] = anon_sym_for;
	v->a[12277] = actions(13);
	v->a[12278] = 1;
	v->a[12279] = anon_sym_if;
	small_parse_table_614(v);
}

void	small_parse_table_614(t_small_parse_table_array *v)
{
	v->a[12280] = actions(15);
	v->a[12281] = 1;
	v->a[12282] = anon_sym_case;
	v->a[12283] = actions(17);
	v->a[12284] = 1;
	v->a[12285] = anon_sym_LPAREN;
	v->a[12286] = actions(19);
	v->a[12287] = 1;
	v->a[12288] = anon_sym_LBRACE;
	v->a[12289] = actions(63);
	v->a[12290] = 1;
	v->a[12291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12292] = actions(65);
	v->a[12293] = 1;
	v->a[12294] = anon_sym_DOLLAR;
	v->a[12295] = actions(67);
	v->a[12296] = 1;
	v->a[12297] = anon_sym_DQUOTE;
	v->a[12298] = actions(69);
	v->a[12299] = 1;
	small_parse_table_615(v);
}

/* EOF small_parse_table_122.c */
