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
	v->a[15500] = actions(341);
	v->a[15501] = 1;
	v->a[15502] = sym_variable_name;
	v->a[15503] = state(272);
	v->a[15504] = 1;
	v->a[15505] = sym_command_name;
	v->a[15506] = state(486);
	v->a[15507] = 1;
	v->a[15508] = aux_sym_command_repeat1;
	v->a[15509] = state(602);
	v->a[15510] = 1;
	v->a[15511] = sym_concatenation;
	v->a[15512] = state(636);
	v->a[15513] = 1;
	v->a[15514] = sym_file_redirect;
	v->a[15515] = state(887);
	v->a[15516] = 1;
	v->a[15517] = sym_variable_assignment;
	v->a[15518] = state(986);
	v->a[15519] = 1;
	small_parse_table_776(v);
}

void	small_parse_table_776(t_small_parse_table_array *v)
{
	v->a[15520] = aux_sym_redirected_statement_repeat2;
	v->a[15521] = actions(11);
	v->a[15522] = 2;
	v->a[15523] = anon_sym_while;
	v->a[15524] = anon_sym_until;
	v->a[15525] = actions(59);
	v->a[15526] = 3;
	v->a[15527] = sym_raw_string;
	v->a[15528] = sym_number;
	v->a[15529] = sym_word;
	v->a[15530] = state(425);
	v->a[15531] = 5;
	v->a[15532] = sym_arithmetic_expansion;
	v->a[15533] = sym_string;
	v->a[15534] = sym_simple_expansion;
	v->a[15535] = sym_expansion;
	v->a[15536] = sym_command_substitution;
	v->a[15537] = actions(51);
	v->a[15538] = 7;
	v->a[15539] = anon_sym_LT;
	small_parse_table_777(v);
}

void	small_parse_table_777(t_small_parse_table_array *v)
{
	v->a[15540] = anon_sym_GT;
	v->a[15541] = anon_sym_GT_GT;
	v->a[15542] = anon_sym_LT_AMP;
	v->a[15543] = anon_sym_GT_AMP;
	v->a[15544] = anon_sym_GT_PIPE;
	v->a[15545] = anon_sym_LT_GT;
	v->a[15546] = state(974);
	v->a[15547] = 7;
	v->a[15548] = sym_for_statement;
	v->a[15549] = sym_while_statement;
	v->a[15550] = sym_if_statement;
	v->a[15551] = sym_compound_statement;
	v->a[15552] = sym_subshell;
	v->a[15553] = sym_command;
	v->a[15554] = sym__variable_assignments;
	v->a[15555] = 23;
	v->a[15556] = actions(3);
	v->a[15557] = 1;
	v->a[15558] = sym_comment;
	v->a[15559] = actions(9);
	small_parse_table_778(v);
}

void	small_parse_table_778(t_small_parse_table_array *v)
{
	v->a[15560] = 1;
	v->a[15561] = anon_sym_for;
	v->a[15562] = actions(13);
	v->a[15563] = 1;
	v->a[15564] = anon_sym_if;
	v->a[15565] = actions(17);
	v->a[15566] = 1;
	v->a[15567] = anon_sym_LPAREN;
	v->a[15568] = actions(19);
	v->a[15569] = 1;
	v->a[15570] = anon_sym_LBRACE;
	v->a[15571] = actions(53);
	v->a[15572] = 1;
	v->a[15573] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15574] = actions(55);
	v->a[15575] = 1;
	v->a[15576] = anon_sym_DOLLAR;
	v->a[15577] = actions(57);
	v->a[15578] = 1;
	v->a[15579] = anon_sym_DQUOTE;
	small_parse_table_779(v);
}

void	small_parse_table_779(t_small_parse_table_array *v)
{
	v->a[15580] = actions(61);
	v->a[15581] = 1;
	v->a[15582] = anon_sym_DOLLAR_LBRACE;
	v->a[15583] = actions(63);
	v->a[15584] = 1;
	v->a[15585] = anon_sym_DOLLAR_LPAREN;
	v->a[15586] = actions(65);
	v->a[15587] = 1;
	v->a[15588] = anon_sym_BQUOTE;
	v->a[15589] = actions(341);
	v->a[15590] = 1;
	v->a[15591] = sym_variable_name;
	v->a[15592] = state(312);
	v->a[15593] = 1;
	v->a[15594] = sym_command_name;
	v->a[15595] = state(471);
	v->a[15596] = 1;
	v->a[15597] = aux_sym_command_repeat1;
	v->a[15598] = state(600);
	v->a[15599] = 1;
	small_parse_table_780(v);
}

/* EOF small_parse_table_155.c */
