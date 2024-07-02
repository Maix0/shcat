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
	v->a[15500] = state(433);
	v->a[15501] = 5;
	v->a[15502] = sym_arithmetic_expansion;
	v->a[15503] = sym_string;
	v->a[15504] = sym_simple_expansion;
	v->a[15505] = sym_expansion;
	v->a[15506] = sym_command_substitution;
	v->a[15507] = actions(53);
	v->a[15508] = 7;
	v->a[15509] = anon_sym_LT;
	v->a[15510] = anon_sym_GT;
	v->a[15511] = anon_sym_GT_GT;
	v->a[15512] = anon_sym_LT_AMP;
	v->a[15513] = anon_sym_GT_AMP;
	v->a[15514] = anon_sym_GT_PIPE;
	v->a[15515] = anon_sym_LT_GT;
	v->a[15516] = 30;
	v->a[15517] = actions(3);
	v->a[15518] = 1;
	v->a[15519] = sym_comment;
	small_parse_table_776(v);
}

void	small_parse_table_776(t_small_parse_table_array *v)
{
	v->a[15520] = actions(9);
	v->a[15521] = 1;
	v->a[15522] = anon_sym_for;
	v->a[15523] = actions(13);
	v->a[15524] = 1;
	v->a[15525] = anon_sym_if;
	v->a[15526] = actions(15);
	v->a[15527] = 1;
	v->a[15528] = anon_sym_case;
	v->a[15529] = actions(17);
	v->a[15530] = 1;
	v->a[15531] = anon_sym_LPAREN;
	v->a[15532] = actions(19);
	v->a[15533] = 1;
	v->a[15534] = anon_sym_LBRACE;
	v->a[15535] = actions(43);
	v->a[15536] = 1;
	v->a[15537] = sym_word;
	v->a[15538] = actions(51);
	v->a[15539] = 1;
	small_parse_table_777(v);
}

void	small_parse_table_777(t_small_parse_table_array *v)
{
	v->a[15540] = anon_sym_BANG;
	v->a[15541] = actions(55);
	v->a[15542] = 1;
	v->a[15543] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15544] = actions(57);
	v->a[15545] = 1;
	v->a[15546] = anon_sym_DOLLAR;
	v->a[15547] = actions(59);
	v->a[15548] = 1;
	v->a[15549] = anon_sym_DQUOTE;
	v->a[15550] = actions(63);
	v->a[15551] = 1;
	v->a[15552] = anon_sym_DOLLAR_LBRACE;
	v->a[15553] = actions(65);
	v->a[15554] = 1;
	v->a[15555] = anon_sym_DOLLAR_LPAREN;
	v->a[15556] = actions(67);
	v->a[15557] = 1;
	v->a[15558] = anon_sym_BQUOTE;
	v->a[15559] = actions(69);
	small_parse_table_778(v);
}

void	small_parse_table_778(t_small_parse_table_array *v)
{
	v->a[15560] = 1;
	v->a[15561] = sym_file_descriptor;
	v->a[15562] = actions(71);
	v->a[15563] = 1;
	v->a[15564] = sym_variable_name;
	v->a[15565] = state(81);
	v->a[15566] = 1;
	v->a[15567] = aux_sym__terminated_statement;
	v->a[15568] = state(182);
	v->a[15569] = 1;
	v->a[15570] = sym_command_name;
	v->a[15571] = state(340);
	v->a[15572] = 1;
	v->a[15573] = sym_variable_assignment;
	v->a[15574] = state(584);
	v->a[15575] = 1;
	v->a[15576] = sym_concatenation;
	v->a[15577] = state(620);
	v->a[15578] = 1;
	v->a[15579] = sym_file_redirect;
	small_parse_table_779(v);
}

void	small_parse_table_779(t_small_parse_table_array *v)
{
	v->a[15580] = state(623);
	v->a[15581] = 1;
	v->a[15582] = aux_sym_command_repeat1;
	v->a[15583] = state(1193);
	v->a[15584] = 1;
	v->a[15585] = sym_pipeline;
	v->a[15586] = state(1201);
	v->a[15587] = 1;
	v->a[15588] = aux_sym_redirected_statement_repeat2;
	v->a[15589] = state(1911);
	v->a[15590] = 1;
	v->a[15591] = sym__statement_not_pipeline;
	v->a[15592] = actions(11);
	v->a[15593] = 2;
	v->a[15594] = anon_sym_while;
	v->a[15595] = anon_sym_until;
	v->a[15596] = actions(61);
	v->a[15597] = 2;
	v->a[15598] = sym_raw_string;
	v->a[15599] = sym_number;
	small_parse_table_780(v);
}

/* EOF small_parse_table_155.c */
