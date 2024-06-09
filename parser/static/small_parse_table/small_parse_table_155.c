/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_155.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_775(t_small_parse_table_array *v)
{
	v->a[15500] = sym_raw_string;
	v->a[15501] = actions(71);
	v->a[15502] = 1;
	v->a[15503] = aux_sym_number_token1;
	v->a[15504] = actions(73);
	v->a[15505] = 1;
	v->a[15506] = aux_sym_number_token2;
	v->a[15507] = actions(75);
	v->a[15508] = 1;
	v->a[15509] = anon_sym_DOLLAR_LBRACE;
	v->a[15510] = actions(77);
	v->a[15511] = 1;
	v->a[15512] = anon_sym_DOLLAR_LPAREN;
	v->a[15513] = actions(79);
	v->a[15514] = 1;
	v->a[15515] = anon_sym_BQUOTE;
	v->a[15516] = actions(81);
	v->a[15517] = 1;
	v->a[15518] = sym_file_descriptor;
	v->a[15519] = actions(83);
	small_parse_table_776(v);
}

void	small_parse_table_776(t_small_parse_table_array *v)
{
	v->a[15520] = 1;
	v->a[15521] = sym_variable_name;
	v->a[15522] = actions(238);
	v->a[15523] = 1;
	v->a[15524] = sym_word;
	v->a[15525] = actions(240);
	v->a[15526] = 1;
	v->a[15527] = anon_sym_BANG;
	v->a[15528] = state(132);
	v->a[15529] = 1;
	v->a[15530] = aux_sym__statements_repeat1;
	v->a[15531] = state(185);
	v->a[15532] = 1;
	v->a[15533] = sym_command_name;
	v->a[15534] = state(297);
	v->a[15535] = 1;
	v->a[15536] = sym_variable_assignment;
	v->a[15537] = state(582);
	v->a[15538] = 1;
	v->a[15539] = sym_concatenation;
	small_parse_table_777(v);
}

void	small_parse_table_777(t_small_parse_table_array *v)
{
	v->a[15540] = state(614);
	v->a[15541] = 1;
	v->a[15542] = aux_sym_command_repeat1;
	v->a[15543] = state(769);
	v->a[15544] = 1;
	v->a[15545] = sym_file_redirect;
	v->a[15546] = state(1133);
	v->a[15547] = 1;
	v->a[15548] = aux_sym_redirected_statement_repeat2;
	v->a[15549] = state(1142);
	v->a[15550] = 1;
	v->a[15551] = sym_pipeline;
	v->a[15552] = state(2041);
	v->a[15553] = 1;
	v->a[15554] = sym__statement_not_pipeline;
	v->a[15555] = state(2160);
	v->a[15556] = 1;
	v->a[15557] = sym__statements;
	v->a[15558] = actions(11);
	v->a[15559] = 2;
	small_parse_table_778(v);
}

void	small_parse_table_778(t_small_parse_table_array *v)
{
	v->a[15560] = anon_sym_while;
	v->a[15561] = anon_sym_until;
	v->a[15562] = actions(61);
	v->a[15563] = 2;
	v->a[15564] = anon_sym_LT_AMP_DASH;
	v->a[15565] = anon_sym_GT_AMP_DASH;
	v->a[15566] = state(397);
	v->a[15567] = 6;
	v->a[15568] = sym_arithmetic_expansion;
	v->a[15569] = sym_string;
	v->a[15570] = sym_number;
	v->a[15571] = sym_simple_expansion;
	v->a[15572] = sym_expansion;
	v->a[15573] = sym_command_substitution;
	v->a[15574] = actions(59);
	v->a[15575] = 8;
	v->a[15576] = anon_sym_LT;
	v->a[15577] = anon_sym_GT;
	v->a[15578] = anon_sym_GT_GT;
	v->a[15579] = anon_sym_AMP_GT;
	small_parse_table_779(v);
}

void	small_parse_table_779(t_small_parse_table_array *v)
{
	v->a[15580] = anon_sym_AMP_GT_GT;
	v->a[15581] = anon_sym_LT_AMP;
	v->a[15582] = anon_sym_GT_AMP;
	v->a[15583] = anon_sym_GT_PIPE;
	v->a[15584] = state(1071);
	v->a[15585] = 12;
	v->a[15586] = sym_redirected_statement;
	v->a[15587] = sym_for_statement;
	v->a[15588] = sym_while_statement;
	v->a[15589] = sym_if_statement;
	v->a[15590] = sym_case_statement;
	v->a[15591] = sym_function_definition;
	v->a[15592] = sym_compound_statement;
	v->a[15593] = sym_subshell;
	v->a[15594] = sym_list;
	v->a[15595] = sym_negated_command;
	v->a[15596] = sym_command;
	v->a[15597] = sym_variable_assignments;
	v->a[15598] = 34;
	v->a[15599] = actions(3);
	small_parse_table_780(v);
}

/* EOF small_parse_table_155.c */
