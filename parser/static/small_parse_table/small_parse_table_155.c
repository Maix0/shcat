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
	v->a[15500] = 3;
	v->a[15501] = anon_sym_LT;
	v->a[15502] = anon_sym_GT;
	v->a[15503] = anon_sym_GT_GT;
	v->a[15504] = actions(31);
	v->a[15505] = 3;
	v->a[15506] = sym_raw_string;
	v->a[15507] = sym_number;
	v->a[15508] = sym_word;
	v->a[15509] = state(280);
	v->a[15510] = 5;
	v->a[15511] = sym_arithmetic_expansion;
	v->a[15512] = sym_string;
	v->a[15513] = sym_simple_expansion;
	v->a[15514] = sym_expansion;
	v->a[15515] = sym_command_substitution;
	v->a[15516] = state(1008);
	v->a[15517] = 7;
	v->a[15518] = sym_for_statement;
	v->a[15519] = sym_while_statement;
	small_parse_table_776(v);
}

void	small_parse_table_776(t_small_parse_table_array *v)
{
	v->a[15520] = sym_if_statement;
	v->a[15521] = sym_compound_statement;
	v->a[15522] = sym_subshell;
	v->a[15523] = sym_command;
	v->a[15524] = sym__variable_assignments;
	v->a[15525] = 6;
	v->a[15526] = actions(3);
	v->a[15527] = 1;
	v->a[15528] = sym_comment;
	v->a[15529] = actions(349);
	v->a[15530] = 1;
	v->a[15531] = sym_variable_name;
	v->a[15532] = actions(351);
	v->a[15533] = 1;
	v->a[15534] = sym__bare_dollar;
	v->a[15535] = actions(347);
	v->a[15536] = 2;
	v->a[15537] = aux_sym__simple_variable_name_token1;
	v->a[15538] = aux_sym__multiline_variable_name_token1;
	v->a[15539] = actions(345);
	small_parse_table_777(v);
}

void	small_parse_table_777(t_small_parse_table_array *v)
{
	v->a[15540] = 8;
	v->a[15541] = anon_sym_BANG;
	v->a[15542] = anon_sym_DASH;
	v->a[15543] = anon_sym_STAR;
	v->a[15544] = anon_sym_QMARK;
	v->a[15545] = anon_sym_DOLLAR;
	v->a[15546] = anon_sym_POUND;
	v->a[15547] = anon_sym_AT;
	v->a[15548] = anon_sym_0;
	v->a[15549] = actions(343);
	v->a[15550] = 19;
	v->a[15551] = anon_sym_PIPE;
	v->a[15552] = anon_sym_RPAREN;
	v->a[15553] = anon_sym_SEMI_SEMI;
	v->a[15554] = anon_sym_AMP_AMP;
	v->a[15555] = anon_sym_PIPE_PIPE;
	v->a[15556] = anon_sym_LT;
	v->a[15557] = anon_sym_GT;
	v->a[15558] = anon_sym_GT_GT;
	v->a[15559] = anon_sym_LT_LT;
	small_parse_table_778(v);
}

void	small_parse_table_778(t_small_parse_table_array *v)
{
	v->a[15560] = aux_sym_heredoc_redirect_token1;
	v->a[15561] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15562] = anon_sym_DQUOTE;
	v->a[15563] = sym_raw_string;
	v->a[15564] = sym_number;
	v->a[15565] = anon_sym_DOLLAR_LBRACE;
	v->a[15566] = anon_sym_DOLLAR_LPAREN;
	v->a[15567] = anon_sym_BQUOTE;
	v->a[15568] = sym_word;
	v->a[15569] = anon_sym_SEMI;
	v->a[15570] = 6;
	v->a[15571] = actions(3);
	v->a[15572] = 1;
	v->a[15573] = sym_comment;
	v->a[15574] = actions(357);
	v->a[15575] = 1;
	v->a[15576] = sym_variable_name;
	v->a[15577] = actions(351);
	v->a[15578] = 2;
	v->a[15579] = sym__bare_dollar;
	small_parse_table_779(v);
}

void	small_parse_table_779(t_small_parse_table_array *v)
{
	v->a[15580] = ts_builtin_sym_end;
	v->a[15581] = actions(355);
	v->a[15582] = 2;
	v->a[15583] = aux_sym__simple_variable_name_token1;
	v->a[15584] = aux_sym__multiline_variable_name_token1;
	v->a[15585] = actions(353);
	v->a[15586] = 8;
	v->a[15587] = anon_sym_BANG;
	v->a[15588] = anon_sym_DASH;
	v->a[15589] = anon_sym_STAR;
	v->a[15590] = anon_sym_QMARK;
	v->a[15591] = anon_sym_DOLLAR;
	v->a[15592] = anon_sym_POUND;
	v->a[15593] = anon_sym_AT;
	v->a[15594] = anon_sym_0;
	v->a[15595] = actions(343);
	v->a[15596] = 18;
	v->a[15597] = anon_sym_PIPE;
	v->a[15598] = anon_sym_SEMI_SEMI;
	v->a[15599] = anon_sym_AMP_AMP;
	small_parse_table_780(v);
}

/* EOF small_parse_table_155.c */
