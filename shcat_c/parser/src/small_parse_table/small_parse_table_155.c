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
	v->a[15500] = anon_sym_SEMI_SEMI;
	v->a[15501] = anon_sym_PIPE_AMP;
	v->a[15502] = anon_sym_AMP_GT;
	v->a[15503] = anon_sym_AMP_GT_GT;
	v->a[15504] = anon_sym_LT_AMP;
	v->a[15505] = anon_sym_GT_AMP;
	v->a[15506] = anon_sym_GT_PIPE;
	v->a[15507] = anon_sym_LT_AMP_DASH;
	v->a[15508] = anon_sym_GT_AMP_DASH;
	v->a[15509] = anon_sym_LT_LT_DASH;
	v->a[15510] = anon_sym_LT_LT_LT;
	v->a[15511] = 8;
	v->a[15512] = actions(3);
	v->a[15513] = 1;
	v->a[15514] = sym_comment;
	v->a[15515] = actions(3282);
	v->a[15516] = 1;
	v->a[15517] = anon_sym_DQUOTE;
	v->a[15518] = actions(3286);
	v->a[15519] = 1;
	small_parse_table_776(v);
}

void	small_parse_table_776(t_small_parse_table_array *v)
{
	v->a[15520] = sym_variable_name;
	v->a[15521] = state(1628);
	v->a[15522] = 1;
	v->a[15523] = sym_string;
	v->a[15524] = actions(3284);
	v->a[15525] = 2;
	v->a[15526] = aux_sym__simple_variable_name_token1;
	v->a[15527] = aux_sym__multiline_variable_name_token1;
	v->a[15528] = actions(1241);
	v->a[15529] = 3;
	v->a[15530] = sym_file_descriptor;
	v->a[15531] = sym_test_operator;
	v->a[15532] = sym__brace_start;
	v->a[15533] = actions(3280);
	v->a[15534] = 9;
	v->a[15535] = anon_sym_DASH;
	v->a[15536] = anon_sym_STAR;
	v->a[15537] = anon_sym_BANG;
	v->a[15538] = anon_sym_QMARK;
	v->a[15539] = anon_sym_DOLLAR;
	small_parse_table_777(v);
}

void	small_parse_table_777(t_small_parse_table_array *v)
{
	v->a[15540] = anon_sym_POUND;
	v->a[15541] = anon_sym_AT2;
	v->a[15542] = anon_sym_0;
	v->a[15543] = anon_sym__;
	v->a[15544] = actions(1239);
	v->a[15545] = 37;
	v->a[15546] = anon_sym_LPAREN_LPAREN;
	v->a[15547] = anon_sym_SEMI;
	v->a[15548] = anon_sym_PIPE_PIPE;
	v->a[15549] = anon_sym_AMP_AMP;
	v->a[15550] = anon_sym_PIPE;
	v->a[15551] = anon_sym_AMP;
	v->a[15552] = anon_sym_LT;
	v->a[15553] = anon_sym_GT;
	v->a[15554] = anon_sym_LT_LT;
	v->a[15555] = anon_sym_GT_GT;
	v->a[15556] = anon_sym_RPAREN;
	v->a[15557] = anon_sym_SEMI_SEMI;
	v->a[15558] = anon_sym_PIPE_AMP;
	v->a[15559] = anon_sym_AMP_GT;
	small_parse_table_778(v);
}

void	small_parse_table_778(t_small_parse_table_array *v)
{
	v->a[15560] = anon_sym_AMP_GT_GT;
	v->a[15561] = anon_sym_LT_AMP;
	v->a[15562] = anon_sym_GT_AMP;
	v->a[15563] = anon_sym_GT_PIPE;
	v->a[15564] = anon_sym_LT_AMP_DASH;
	v->a[15565] = anon_sym_GT_AMP_DASH;
	v->a[15566] = anon_sym_LT_LT_DASH;
	v->a[15567] = aux_sym_heredoc_redirect_token1;
	v->a[15568] = anon_sym_LT_LT_LT;
	v->a[15569] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15570] = anon_sym_DOLLAR_LBRACK;
	v->a[15571] = sym__special_character;
	v->a[15572] = sym_raw_string;
	v->a[15573] = sym_ansi_c_string;
	v->a[15574] = aux_sym_number_token1;
	v->a[15575] = aux_sym_number_token2;
	v->a[15576] = anon_sym_DOLLAR_LBRACE;
	v->a[15577] = anon_sym_DOLLAR_LPAREN;
	v->a[15578] = anon_sym_BQUOTE;
	v->a[15579] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_779(v);
}

void	small_parse_table_779(t_small_parse_table_array *v)
{
	v->a[15580] = anon_sym_LT_LPAREN;
	v->a[15581] = anon_sym_GT_LPAREN;
	v->a[15582] = sym_word;
	v->a[15583] = 22;
	v->a[15584] = actions(3);
	v->a[15585] = 1;
	v->a[15586] = sym_comment;
	v->a[15587] = actions(3183);
	v->a[15588] = 1;
	v->a[15589] = anon_sym_DOLLAR_LBRACK;
	v->a[15590] = actions(3185);
	v->a[15591] = 1;
	v->a[15592] = anon_sym_DOLLAR;
	v->a[15593] = actions(3187);
	v->a[15594] = 1;
	v->a[15595] = sym__special_character;
	v->a[15596] = actions(3189);
	v->a[15597] = 1;
	v->a[15598] = anon_sym_DQUOTE;
	v->a[15599] = actions(3191);
	small_parse_table_780(v);
}

/* EOF small_parse_table_155.c */
