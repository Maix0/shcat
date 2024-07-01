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
	v->a[15500] = actions(63);
	v->a[15501] = 1;
	v->a[15502] = anon_sym_DQUOTE;
	v->a[15503] = actions(67);
	v->a[15504] = 1;
	v->a[15505] = anon_sym_DOLLAR_LBRACE;
	v->a[15506] = actions(69);
	v->a[15507] = 1;
	v->a[15508] = anon_sym_DOLLAR_LPAREN;
	v->a[15509] = actions(71);
	v->a[15510] = 1;
	v->a[15511] = anon_sym_BQUOTE;
	v->a[15512] = actions(73);
	v->a[15513] = 1;
	v->a[15514] = sym_file_descriptor;
	v->a[15515] = actions(75);
	v->a[15516] = 1;
	v->a[15517] = sym_variable_name;
	v->a[15518] = state(41);
	v->a[15519] = 1;
	small_parse_table_776(v);
}

void	small_parse_table_776(t_small_parse_table_array *v)
{
	v->a[15520] = aux_sym__terminated_statement;
	v->a[15521] = state(189);
	v->a[15522] = 1;
	v->a[15523] = sym_command_name;
	v->a[15524] = state(291);
	v->a[15525] = 1;
	v->a[15526] = sym_variable_assignment;
	v->a[15527] = state(650);
	v->a[15528] = 1;
	v->a[15529] = sym_concatenation;
	v->a[15530] = state(712);
	v->a[15531] = 1;
	v->a[15532] = sym_file_redirect;
	v->a[15533] = state(713);
	v->a[15534] = 1;
	v->a[15535] = aux_sym_command_repeat1;
	v->a[15536] = state(1251);
	v->a[15537] = 1;
	v->a[15538] = sym_pipeline;
	v->a[15539] = state(1333);
	small_parse_table_777(v);
}

void	small_parse_table_777(t_small_parse_table_array *v)
{
	v->a[15540] = 1;
	v->a[15541] = aux_sym_redirected_statement_repeat2;
	v->a[15542] = state(2103);
	v->a[15543] = 1;
	v->a[15544] = sym__statement_not_pipeline;
	v->a[15545] = actions(11);
	v->a[15546] = 2;
	v->a[15547] = anon_sym_while;
	v->a[15548] = anon_sym_until;
	v->a[15549] = actions(57);
	v->a[15550] = 2;
	v->a[15551] = anon_sym_LT_AMP_DASH;
	v->a[15552] = anon_sym_GT_AMP_DASH;
	v->a[15553] = actions(65);
	v->a[15554] = 2;
	v->a[15555] = sym_raw_string;
	v->a[15556] = sym_number;
	v->a[15557] = state(443);
	v->a[15558] = 5;
	v->a[15559] = sym_arithmetic_expansion;
	small_parse_table_778(v);
}

void	small_parse_table_778(t_small_parse_table_array *v)
{
	v->a[15560] = sym_string;
	v->a[15561] = sym_simple_expansion;
	v->a[15562] = sym_expansion;
	v->a[15563] = sym_command_substitution;
	v->a[15564] = actions(55);
	v->a[15565] = 6;
	v->a[15566] = anon_sym_LT;
	v->a[15567] = anon_sym_GT;
	v->a[15568] = anon_sym_GT_GT;
	v->a[15569] = anon_sym_LT_AMP;
	v->a[15570] = anon_sym_GT_AMP;
	v->a[15571] = anon_sym_GT_PIPE;
	v->a[15572] = state(1094);
	v->a[15573] = 12;
	v->a[15574] = sym_redirected_statement;
	v->a[15575] = sym_for_statement;
	v->a[15576] = sym_while_statement;
	v->a[15577] = sym_if_statement;
	v->a[15578] = sym_case_statement;
	v->a[15579] = sym_function_definition;
	small_parse_table_779(v);
}

void	small_parse_table_779(t_small_parse_table_array *v)
{
	v->a[15580] = sym_compound_statement;
	v->a[15581] = sym_subshell;
	v->a[15582] = sym_list;
	v->a[15583] = sym_negated_command;
	v->a[15584] = sym_command;
	v->a[15585] = sym__variable_assignments;
	v->a[15586] = 31;
	v->a[15587] = actions(3);
	v->a[15588] = 1;
	v->a[15589] = sym_comment;
	v->a[15590] = actions(9);
	v->a[15591] = 1;
	v->a[15592] = anon_sym_for;
	v->a[15593] = actions(13);
	v->a[15594] = 1;
	v->a[15595] = anon_sym_if;
	v->a[15596] = actions(15);
	v->a[15597] = 1;
	v->a[15598] = anon_sym_case;
	v->a[15599] = actions(17);
	small_parse_table_780(v);
}

/* EOF small_parse_table_155.c */
