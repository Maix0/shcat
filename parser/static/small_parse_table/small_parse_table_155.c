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
	v->a[15500] = anon_sym_GT;
	v->a[15501] = anon_sym_GT_GT;
	v->a[15502] = anon_sym_AMP_GT;
	v->a[15503] = anon_sym_AMP_GT_GT;
	v->a[15504] = anon_sym_LT_AMP;
	v->a[15505] = anon_sym_GT_AMP;
	v->a[15506] = anon_sym_GT_PIPE;
	v->a[15507] = 31;
	v->a[15508] = actions(3);
	v->a[15509] = 1;
	v->a[15510] = sym_comment;
	v->a[15511] = actions(9);
	v->a[15512] = 1;
	v->a[15513] = anon_sym_for;
	v->a[15514] = actions(13);
	v->a[15515] = 1;
	v->a[15516] = anon_sym_if;
	v->a[15517] = actions(15);
	v->a[15518] = 1;
	v->a[15519] = anon_sym_case;
	small_parse_table_776(v);
}

void	small_parse_table_776(t_small_parse_table_array *v)
{
	v->a[15520] = actions(17);
	v->a[15521] = 1;
	v->a[15522] = anon_sym_LPAREN;
	v->a[15523] = actions(19);
	v->a[15524] = 1;
	v->a[15525] = anon_sym_LBRACE;
	v->a[15526] = actions(45);
	v->a[15527] = 1;
	v->a[15528] = sym_word;
	v->a[15529] = actions(53);
	v->a[15530] = 1;
	v->a[15531] = anon_sym_BANG;
	v->a[15532] = actions(59);
	v->a[15533] = 1;
	v->a[15534] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15535] = actions(61);
	v->a[15536] = 1;
	v->a[15537] = anon_sym_DOLLAR;
	v->a[15538] = actions(63);
	v->a[15539] = 1;
	small_parse_table_777(v);
}

void	small_parse_table_777(t_small_parse_table_array *v)
{
	v->a[15540] = anon_sym_DQUOTE;
	v->a[15541] = actions(67);
	v->a[15542] = 1;
	v->a[15543] = anon_sym_DOLLAR_LBRACE;
	v->a[15544] = actions(69);
	v->a[15545] = 1;
	v->a[15546] = anon_sym_DOLLAR_LPAREN;
	v->a[15547] = actions(71);
	v->a[15548] = 1;
	v->a[15549] = anon_sym_BQUOTE;
	v->a[15550] = actions(73);
	v->a[15551] = 1;
	v->a[15552] = sym_file_descriptor;
	v->a[15553] = actions(75);
	v->a[15554] = 1;
	v->a[15555] = sym_variable_name;
	v->a[15556] = state(55);
	v->a[15557] = 1;
	v->a[15558] = aux_sym__terminated_statement;
	v->a[15559] = state(187);
	small_parse_table_778(v);
}

void	small_parse_table_778(t_small_parse_table_array *v)
{
	v->a[15560] = 1;
	v->a[15561] = sym_command_name;
	v->a[15562] = state(274);
	v->a[15563] = 1;
	v->a[15564] = sym_variable_assignment;
	v->a[15565] = state(647);
	v->a[15566] = 1;
	v->a[15567] = sym_concatenation;
	v->a[15568] = state(736);
	v->a[15569] = 1;
	v->a[15570] = aux_sym_command_repeat1;
	v->a[15571] = state(738);
	v->a[15572] = 1;
	v->a[15573] = sym_file_redirect;
	v->a[15574] = state(1439);
	v->a[15575] = 1;
	v->a[15576] = sym_pipeline;
	v->a[15577] = state(1460);
	v->a[15578] = 1;
	v->a[15579] = aux_sym_redirected_statement_repeat2;
	small_parse_table_779(v);
}

void	small_parse_table_779(t_small_parse_table_array *v)
{
	v->a[15580] = state(2269);
	v->a[15581] = 1;
	v->a[15582] = sym__statement_not_pipeline;
	v->a[15583] = actions(11);
	v->a[15584] = 2;
	v->a[15585] = anon_sym_while;
	v->a[15586] = anon_sym_until;
	v->a[15587] = actions(57);
	v->a[15588] = 2;
	v->a[15589] = anon_sym_LT_AMP_DASH;
	v->a[15590] = anon_sym_GT_AMP_DASH;
	v->a[15591] = actions(65);
	v->a[15592] = 2;
	v->a[15593] = sym_raw_string;
	v->a[15594] = sym_number;
	v->a[15595] = state(394);
	v->a[15596] = 5;
	v->a[15597] = sym_arithmetic_expansion;
	v->a[15598] = sym_string;
	v->a[15599] = sym_simple_expansion;
	small_parse_table_780(v);
}

/* EOF small_parse_table_155.c */
