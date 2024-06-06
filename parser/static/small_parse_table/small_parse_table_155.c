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
	v->a[15501] = sym_file_descriptor;
	v->a[15502] = sym_test_operator;
	v->a[15503] = sym__brace_start;
	v->a[15504] = state(1894);
	v->a[15505] = 3;
	v->a[15506] = sym_file_redirect;
	v->a[15507] = sym_heredoc_redirect;
	v->a[15508] = aux_sym_redirected_statement_repeat1;
	v->a[15509] = actions(2630);
	v->a[15510] = 10;
	v->a[15511] = anon_sym_esac;
	v->a[15512] = anon_sym_SEMI_SEMI;
	v->a[15513] = anon_sym_SEMI_AMP;
	v->a[15514] = anon_sym_SEMI_SEMI_AMP;
	v->a[15515] = anon_sym_AMP_AMP;
	v->a[15516] = anon_sym_PIPE_PIPE;
	v->a[15517] = anon_sym_LT_LT;
	v->a[15518] = anon_sym_LT_LT_DASH;
	v->a[15519] = anon_sym_AMP;
	small_parse_table_776(v);
}

void	small_parse_table_776(t_small_parse_table_array *v)
{
	v->a[15520] = anon_sym_SEMI;
	v->a[15521] = actions(2512);
	v->a[15522] = 22;
	v->a[15523] = anon_sym_LT;
	v->a[15524] = anon_sym_GT;
	v->a[15525] = anon_sym_GT_GT;
	v->a[15526] = anon_sym_AMP_GT;
	v->a[15527] = anon_sym_AMP_GT_GT;
	v->a[15528] = anon_sym_LT_AMP;
	v->a[15529] = anon_sym_GT_AMP;
	v->a[15530] = anon_sym_GT_PIPE;
	v->a[15531] = anon_sym_LT_AMP_DASH;
	v->a[15532] = anon_sym_GT_AMP_DASH;
	v->a[15533] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15534] = anon_sym_DOLLAR;
	v->a[15535] = sym__special_character;
	v->a[15536] = anon_sym_DQUOTE;
	v->a[15537] = sym_raw_string;
	v->a[15538] = aux_sym_number_token1;
	v->a[15539] = aux_sym_number_token2;
	small_parse_table_777(v);
}

void	small_parse_table_777(t_small_parse_table_array *v)
{
	v->a[15540] = anon_sym_DOLLAR_LBRACE;
	v->a[15541] = anon_sym_DOLLAR_LPAREN;
	v->a[15542] = anon_sym_BQUOTE;
	v->a[15543] = anon_sym_DOLLAR_BQUOTE;
	v->a[15544] = sym_word;
	v->a[15545] = 27;
	v->a[15546] = actions(3);
	v->a[15547] = 1;
	v->a[15548] = sym_comment;
	v->a[15549] = actions(2458);
	v->a[15550] = 1;
	v->a[15551] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15552] = actions(2460);
	v->a[15553] = 1;
	v->a[15554] = anon_sym_DOLLAR;
	v->a[15555] = actions(2462);
	v->a[15556] = 1;
	v->a[15557] = sym__special_character;
	v->a[15558] = actions(2464);
	v->a[15559] = 1;
	small_parse_table_778(v);
}

void	small_parse_table_778(t_small_parse_table_array *v)
{
	v->a[15560] = anon_sym_DQUOTE;
	v->a[15561] = actions(2466);
	v->a[15562] = 1;
	v->a[15563] = aux_sym_number_token1;
	v->a[15564] = actions(2468);
	v->a[15565] = 1;
	v->a[15566] = aux_sym_number_token2;
	v->a[15567] = actions(2470);
	v->a[15568] = 1;
	v->a[15569] = anon_sym_DOLLAR_LBRACE;
	v->a[15570] = actions(2472);
	v->a[15571] = 1;
	v->a[15572] = anon_sym_DOLLAR_LPAREN;
	v->a[15573] = actions(2474);
	v->a[15574] = 1;
	v->a[15575] = anon_sym_BQUOTE;
	v->a[15576] = actions(2476);
	v->a[15577] = 1;
	v->a[15578] = anon_sym_DOLLAR_BQUOTE;
	v->a[15579] = actions(2478);
	small_parse_table_779(v);
}

void	small_parse_table_779(t_small_parse_table_array *v)
{
	v->a[15580] = 1;
	v->a[15581] = sym_file_descriptor;
	v->a[15582] = actions(2480);
	v->a[15583] = 1;
	v->a[15584] = sym_test_operator;
	v->a[15585] = actions(2482);
	v->a[15586] = 1;
	v->a[15587] = sym__brace_start;
	v->a[15588] = actions(2634);
	v->a[15589] = 1;
	v->a[15590] = aux_sym_heredoc_redirect_token1;
	v->a[15591] = state(2102);
	v->a[15592] = 1;
	v->a[15593] = aux_sym__heredoc_command;
	v->a[15594] = state(2852);
	v->a[15595] = 1;
	v->a[15596] = aux_sym__literal_repeat1;
	v->a[15597] = state(2882);
	v->a[15598] = 1;
	v->a[15599] = sym_concatenation;
	small_parse_table_780(v);
}

/* EOF small_parse_table_155.c */
