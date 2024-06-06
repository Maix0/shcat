/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1107.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5535(t_small_parse_table_array *v)
{
	v->a[110700] = anon_sym_AMP_AMP;
	v->a[110701] = anon_sym_PIPE_PIPE;
	v->a[110702] = anon_sym_LT;
	v->a[110703] = anon_sym_GT;
	v->a[110704] = anon_sym_GT_GT;
	v->a[110705] = anon_sym_AMP_GT;
	v->a[110706] = anon_sym_AMP_GT_GT;
	v->a[110707] = anon_sym_LT_AMP;
	v->a[110708] = anon_sym_GT_AMP;
	v->a[110709] = anon_sym_GT_PIPE;
	v->a[110710] = anon_sym_LT_AMP_DASH;
	v->a[110711] = anon_sym_GT_AMP_DASH;
	v->a[110712] = anon_sym_LT_LT;
	v->a[110713] = anon_sym_LT_LT_DASH;
	v->a[110714] = anon_sym_AMP;
	v->a[110715] = anon_sym_SEMI;
	v->a[110716] = 16;
	v->a[110717] = actions(3);
	v->a[110718] = 1;
	v->a[110719] = sym_comment;
	small_parse_table_5536(v);
}

void	small_parse_table_5536(t_small_parse_table_array *v)
{
	v->a[110720] = actions(369);
	v->a[110721] = 1;
	v->a[110722] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110723] = actions(371);
	v->a[110724] = 1;
	v->a[110725] = anon_sym_DOLLAR;
	v->a[110726] = actions(375);
	v->a[110727] = 1;
	v->a[110728] = anon_sym_DQUOTE;
	v->a[110729] = actions(379);
	v->a[110730] = 1;
	v->a[110731] = aux_sym_number_token1;
	v->a[110732] = actions(381);
	v->a[110733] = 1;
	v->a[110734] = aux_sym_number_token2;
	v->a[110735] = actions(383);
	v->a[110736] = 1;
	v->a[110737] = anon_sym_DOLLAR_LBRACE;
	v->a[110738] = actions(385);
	v->a[110739] = 1;
	small_parse_table_5537(v);
}

void	small_parse_table_5537(t_small_parse_table_array *v)
{
	v->a[110740] = anon_sym_DOLLAR_LPAREN;
	v->a[110741] = actions(387);
	v->a[110742] = 1;
	v->a[110743] = anon_sym_BQUOTE;
	v->a[110744] = actions(389);
	v->a[110745] = 1;
	v->a[110746] = anon_sym_DOLLAR_BQUOTE;
	v->a[110747] = actions(395);
	v->a[110748] = 1;
	v->a[110749] = sym__brace_start;
	v->a[110750] = actions(6340);
	v->a[110751] = 1;
	v->a[110752] = sym_word;
	v->a[110753] = actions(6342);
	v->a[110754] = 1;
	v->a[110755] = sym__special_character;
	v->a[110756] = actions(6346);
	v->a[110757] = 1;
	v->a[110758] = sym__comment_word;
	v->a[110759] = actions(6344);
	small_parse_table_5538(v);
}

void	small_parse_table_5538(t_small_parse_table_array *v)
{
	v->a[110760] = 3;
	v->a[110761] = sym_test_operator;
	v->a[110762] = sym__bare_dollar;
	v->a[110763] = sym_raw_string;
	v->a[110764] = state(762);
	v->a[110765] = 7;
	v->a[110766] = sym_arithmetic_expansion;
	v->a[110767] = sym_brace_expression;
	v->a[110768] = sym_string;
	v->a[110769] = sym_number;
	v->a[110770] = sym_simple_expansion;
	v->a[110771] = sym_expansion;
	v->a[110772] = sym_command_substitution;
	v->a[110773] = 3;
	v->a[110774] = actions(3);
	v->a[110775] = 1;
	v->a[110776] = sym_comment;
	v->a[110777] = actions(6131);
	v->a[110778] = 2;
	v->a[110779] = sym_file_descriptor;
	small_parse_table_5539(v);
}

void	small_parse_table_5539(t_small_parse_table_array *v)
{
	v->a[110780] = aux_sym_heredoc_redirect_token1;
	v->a[110781] = actions(6129);
	v->a[110782] = 21;
	v->a[110783] = anon_sym_PIPE;
	v->a[110784] = anon_sym_SEMI_SEMI;
	v->a[110785] = anon_sym_SEMI_AMP;
	v->a[110786] = anon_sym_SEMI_SEMI_AMP;
	v->a[110787] = anon_sym_PIPE_AMP;
	v->a[110788] = anon_sym_AMP_AMP;
	v->a[110789] = anon_sym_PIPE_PIPE;
	v->a[110790] = anon_sym_LT;
	v->a[110791] = anon_sym_GT;
	v->a[110792] = anon_sym_GT_GT;
	v->a[110793] = anon_sym_AMP_GT;
	v->a[110794] = anon_sym_AMP_GT_GT;
	v->a[110795] = anon_sym_LT_AMP;
	v->a[110796] = anon_sym_GT_AMP;
	v->a[110797] = anon_sym_GT_PIPE;
	v->a[110798] = anon_sym_LT_AMP_DASH;
	v->a[110799] = anon_sym_GT_AMP_DASH;
	small_parse_table_5540(v);
}

/* EOF small_parse_table_1107.c */
