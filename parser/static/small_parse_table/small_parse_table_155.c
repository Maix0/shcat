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
	v->a[15500] = anon_sym_LPAREN;
	v->a[15501] = actions(19);
	v->a[15502] = 1;
	v->a[15503] = anon_sym_LBRACE;
	v->a[15504] = actions(45);
	v->a[15505] = 1;
	v->a[15506] = sym_word;
	v->a[15507] = actions(53);
	v->a[15508] = 1;
	v->a[15509] = anon_sym_BANG;
	v->a[15510] = actions(59);
	v->a[15511] = 1;
	v->a[15512] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15513] = actions(61);
	v->a[15514] = 1;
	v->a[15515] = anon_sym_DOLLAR;
	v->a[15516] = actions(63);
	v->a[15517] = 1;
	v->a[15518] = anon_sym_DQUOTE;
	v->a[15519] = actions(67);
	small_parse_table_776(v);
}

void	small_parse_table_776(t_small_parse_table_array *v)
{
	v->a[15520] = 1;
	v->a[15521] = anon_sym_DOLLAR_LBRACE;
	v->a[15522] = actions(69);
	v->a[15523] = 1;
	v->a[15524] = anon_sym_DOLLAR_LPAREN;
	v->a[15525] = actions(71);
	v->a[15526] = 1;
	v->a[15527] = anon_sym_BQUOTE;
	v->a[15528] = actions(73);
	v->a[15529] = 1;
	v->a[15530] = sym_file_descriptor;
	v->a[15531] = actions(75);
	v->a[15532] = 1;
	v->a[15533] = sym_variable_name;
	v->a[15534] = state(45);
	v->a[15535] = 1;
	v->a[15536] = aux_sym__terminated_statement;
	v->a[15537] = state(191);
	v->a[15538] = 1;
	v->a[15539] = sym_command_name;
	small_parse_table_777(v);
}

void	small_parse_table_777(t_small_parse_table_array *v)
{
	v->a[15540] = state(252);
	v->a[15541] = 1;
	v->a[15542] = sym_variable_assignment;
	v->a[15543] = state(624);
	v->a[15544] = 1;
	v->a[15545] = sym_concatenation;
	v->a[15546] = state(726);
	v->a[15547] = 1;
	v->a[15548] = sym_file_redirect;
	v->a[15549] = state(733);
	v->a[15550] = 1;
	v->a[15551] = aux_sym_command_repeat1;
	v->a[15552] = state(1246);
	v->a[15553] = 1;
	v->a[15554] = sym_pipeline;
	v->a[15555] = state(1307);
	v->a[15556] = 1;
	v->a[15557] = aux_sym_redirected_statement_repeat2;
	v->a[15558] = state(2117);
	v->a[15559] = 1;
	small_parse_table_778(v);
}

void	small_parse_table_778(t_small_parse_table_array *v)
{
	v->a[15560] = sym__statement_not_pipeline;
	v->a[15561] = actions(11);
	v->a[15562] = 2;
	v->a[15563] = anon_sym_while;
	v->a[15564] = anon_sym_until;
	v->a[15565] = actions(57);
	v->a[15566] = 2;
	v->a[15567] = anon_sym_LT_AMP_DASH;
	v->a[15568] = anon_sym_GT_AMP_DASH;
	v->a[15569] = actions(65);
	v->a[15570] = 2;
	v->a[15571] = sym_raw_string;
	v->a[15572] = sym_number;
	v->a[15573] = state(420);
	v->a[15574] = 5;
	v->a[15575] = sym_arithmetic_expansion;
	v->a[15576] = sym_string;
	v->a[15577] = sym_simple_expansion;
	v->a[15578] = sym_expansion;
	v->a[15579] = sym_command_substitution;
	small_parse_table_779(v);
}

void	small_parse_table_779(t_small_parse_table_array *v)
{
	v->a[15580] = actions(55);
	v->a[15581] = 8;
	v->a[15582] = anon_sym_LT;
	v->a[15583] = anon_sym_GT;
	v->a[15584] = anon_sym_GT_GT;
	v->a[15585] = anon_sym_AMP_GT;
	v->a[15586] = anon_sym_AMP_GT_GT;
	v->a[15587] = anon_sym_LT_AMP;
	v->a[15588] = anon_sym_GT_AMP;
	v->a[15589] = anon_sym_GT_PIPE;
	v->a[15590] = state(1112);
	v->a[15591] = 12;
	v->a[15592] = sym_redirected_statement;
	v->a[15593] = sym_for_statement;
	v->a[15594] = sym_while_statement;
	v->a[15595] = sym_if_statement;
	v->a[15596] = sym_case_statement;
	v->a[15597] = sym_function_definition;
	v->a[15598] = sym_compound_statement;
	v->a[15599] = sym_subshell;
	small_parse_table_780(v);
}

/* EOF small_parse_table_155.c */
