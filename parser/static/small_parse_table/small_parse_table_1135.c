/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1135.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5675(t_small_parse_table_array *v)
{
	v->a[113500] = anon_sym_GT_AMP;
	v->a[113501] = anon_sym_GT_PIPE;
	v->a[113502] = anon_sym_LT_AMP_DASH;
	v->a[113503] = anon_sym_GT_AMP_DASH;
	v->a[113504] = anon_sym_LT_LT;
	v->a[113505] = anon_sym_LT_LT_DASH;
	v->a[113506] = anon_sym_AMP;
	v->a[113507] = anon_sym_SEMI;
	v->a[113508] = 3;
	v->a[113509] = actions(3);
	v->a[113510] = 1;
	v->a[113511] = sym_comment;
	v->a[113512] = actions(6089);
	v->a[113513] = 2;
	v->a[113514] = sym_file_descriptor;
	v->a[113515] = aux_sym_heredoc_redirect_token1;
	v->a[113516] = actions(6091);
	v->a[113517] = 21;
	v->a[113518] = anon_sym_PIPE;
	v->a[113519] = anon_sym_SEMI_SEMI;
	small_parse_table_5676(v);
}

void	small_parse_table_5676(t_small_parse_table_array *v)
{
	v->a[113520] = anon_sym_SEMI_AMP;
	v->a[113521] = anon_sym_SEMI_SEMI_AMP;
	v->a[113522] = anon_sym_PIPE_AMP;
	v->a[113523] = anon_sym_AMP_AMP;
	v->a[113524] = anon_sym_PIPE_PIPE;
	v->a[113525] = anon_sym_LT;
	v->a[113526] = anon_sym_GT;
	v->a[113527] = anon_sym_GT_GT;
	v->a[113528] = anon_sym_AMP_GT;
	v->a[113529] = anon_sym_AMP_GT_GT;
	v->a[113530] = anon_sym_LT_AMP;
	v->a[113531] = anon_sym_GT_AMP;
	v->a[113532] = anon_sym_GT_PIPE;
	v->a[113533] = anon_sym_LT_AMP_DASH;
	v->a[113534] = anon_sym_GT_AMP_DASH;
	v->a[113535] = anon_sym_LT_LT;
	v->a[113536] = anon_sym_LT_LT_DASH;
	v->a[113537] = anon_sym_AMP;
	v->a[113538] = anon_sym_SEMI;
	v->a[113539] = 16;
	small_parse_table_5677(v);
}

void	small_parse_table_5677(t_small_parse_table_array *v)
{
	v->a[113540] = actions(3);
	v->a[113541] = 1;
	v->a[113542] = sym_comment;
	v->a[113543] = actions(2486);
	v->a[113544] = 1;
	v->a[113545] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[113546] = actions(2492);
	v->a[113547] = 1;
	v->a[113548] = anon_sym_DQUOTE;
	v->a[113549] = actions(2496);
	v->a[113550] = 1;
	v->a[113551] = aux_sym_number_token1;
	v->a[113552] = actions(2498);
	v->a[113553] = 1;
	v->a[113554] = aux_sym_number_token2;
	v->a[113555] = actions(2500);
	v->a[113556] = 1;
	v->a[113557] = anon_sym_DOLLAR_LBRACE;
	v->a[113558] = actions(2502);
	v->a[113559] = 1;
	small_parse_table_5678(v);
}

void	small_parse_table_5678(t_small_parse_table_array *v)
{
	v->a[113560] = anon_sym_DOLLAR_LPAREN;
	v->a[113561] = actions(2504);
	v->a[113562] = 1;
	v->a[113563] = anon_sym_BQUOTE;
	v->a[113564] = actions(2506);
	v->a[113565] = 1;
	v->a[113566] = anon_sym_DOLLAR_BQUOTE;
	v->a[113567] = actions(2510);
	v->a[113568] = 1;
	v->a[113569] = sym__brace_start;
	v->a[113570] = actions(6531);
	v->a[113571] = 1;
	v->a[113572] = sym_word;
	v->a[113573] = actions(6535);
	v->a[113574] = 1;
	v->a[113575] = sym__special_character;
	v->a[113576] = actions(6539);
	v->a[113577] = 1;
	v->a[113578] = sym__comment_word;
	v->a[113579] = actions(6563);
	small_parse_table_5679(v);
}

void	small_parse_table_5679(t_small_parse_table_array *v)
{
	v->a[113580] = 1;
	v->a[113581] = anon_sym_DOLLAR;
	v->a[113582] = actions(6537);
	v->a[113583] = 3;
	v->a[113584] = sym_test_operator;
	v->a[113585] = sym__bare_dollar;
	v->a[113586] = sym_raw_string;
	v->a[113587] = state(1596);
	v->a[113588] = 7;
	v->a[113589] = sym_arithmetic_expansion;
	v->a[113590] = sym_brace_expression;
	v->a[113591] = sym_string;
	v->a[113592] = sym_number;
	v->a[113593] = sym_simple_expansion;
	v->a[113594] = sym_expansion;
	v->a[113595] = sym_command_substitution;
	v->a[113596] = 3;
	v->a[113597] = actions(3);
	v->a[113598] = 1;
	v->a[113599] = sym_comment;
	small_parse_table_5680(v);
}

/* EOF small_parse_table_1135.c */
