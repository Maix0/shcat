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
	v->a[110700] = anon_sym_AMP_GT;
	v->a[110701] = anon_sym_AMP_GT_GT;
	v->a[110702] = anon_sym_LT_AMP;
	v->a[110703] = anon_sym_GT_AMP;
	v->a[110704] = anon_sym_GT_PIPE;
	v->a[110705] = anon_sym_LT_AMP_DASH;
	v->a[110706] = anon_sym_GT_AMP_DASH;
	v->a[110707] = anon_sym_LT_LT_LT;
	v->a[110708] = actions(5819);
	v->a[110709] = 17;
	v->a[110710] = anon_sym_LPAREN_LPAREN;
	v->a[110711] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110712] = anon_sym_DOLLAR_LBRACK;
	v->a[110713] = anon_sym_DOLLAR;
	v->a[110714] = sym__special_character;
	v->a[110715] = anon_sym_DQUOTE;
	v->a[110716] = sym_raw_string;
	v->a[110717] = sym_ansi_c_string;
	v->a[110718] = aux_sym_number_token1;
	v->a[110719] = aux_sym_number_token2;
	small_parse_table_5536(v);
}

void	small_parse_table_5536(t_small_parse_table_array *v)
{
	v->a[110720] = anon_sym_DOLLAR_LBRACE;
	v->a[110721] = anon_sym_DOLLAR_LPAREN;
	v->a[110722] = anon_sym_BQUOTE;
	v->a[110723] = anon_sym_DOLLAR_BQUOTE;
	v->a[110724] = anon_sym_LT_LPAREN;
	v->a[110725] = anon_sym_GT_LPAREN;
	v->a[110726] = sym_word;
	v->a[110727] = 3;
	v->a[110728] = actions(3);
	v->a[110729] = 1;
	v->a[110730] = sym_comment;
	v->a[110731] = actions(5375);
	v->a[110732] = 5;
	v->a[110733] = sym_file_descriptor;
	v->a[110734] = sym_variable_name;
	v->a[110735] = sym_test_operator;
	v->a[110736] = sym__brace_start;
	v->a[110737] = aux_sym_heredoc_redirect_token1;
	v->a[110738] = actions(5373);
	v->a[110739] = 38;
	small_parse_table_5537(v);
}

void	small_parse_table_5537(t_small_parse_table_array *v)
{
	v->a[110740] = anon_sym_LPAREN_LPAREN;
	v->a[110741] = anon_sym_SEMI;
	v->a[110742] = anon_sym_PIPE_PIPE;
	v->a[110743] = anon_sym_AMP_AMP;
	v->a[110744] = anon_sym_PIPE;
	v->a[110745] = anon_sym_AMP;
	v->a[110746] = anon_sym_LT;
	v->a[110747] = anon_sym_GT;
	v->a[110748] = anon_sym_LT_LT;
	v->a[110749] = anon_sym_GT_GT;
	v->a[110750] = anon_sym_RPAREN;
	v->a[110751] = anon_sym_SEMI_SEMI;
	v->a[110752] = anon_sym_PIPE_AMP;
	v->a[110753] = anon_sym_AMP_GT;
	v->a[110754] = anon_sym_AMP_GT_GT;
	v->a[110755] = anon_sym_LT_AMP;
	v->a[110756] = anon_sym_GT_AMP;
	v->a[110757] = anon_sym_GT_PIPE;
	v->a[110758] = anon_sym_LT_AMP_DASH;
	v->a[110759] = anon_sym_GT_AMP_DASH;
	small_parse_table_5538(v);
}

void	small_parse_table_5538(t_small_parse_table_array *v)
{
	v->a[110760] = anon_sym_LT_LT_DASH;
	v->a[110761] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110762] = anon_sym_DOLLAR_LBRACK;
	v->a[110763] = anon_sym_DOLLAR;
	v->a[110764] = sym__special_character;
	v->a[110765] = anon_sym_DQUOTE;
	v->a[110766] = sym_raw_string;
	v->a[110767] = sym_ansi_c_string;
	v->a[110768] = aux_sym_number_token1;
	v->a[110769] = aux_sym_number_token2;
	v->a[110770] = anon_sym_DOLLAR_LBRACE;
	v->a[110771] = anon_sym_DOLLAR_LPAREN;
	v->a[110772] = anon_sym_BQUOTE;
	v->a[110773] = anon_sym_DOLLAR_BQUOTE;
	v->a[110774] = anon_sym_LT_LPAREN;
	v->a[110775] = anon_sym_GT_LPAREN;
	v->a[110776] = aux_sym__simple_variable_name_token1;
	v->a[110777] = sym_word;
	v->a[110778] = 8;
	v->a[110779] = actions(3);
	small_parse_table_5539(v);
}

void	small_parse_table_5539(t_small_parse_table_array *v)
{
	v->a[110780] = 1;
	v->a[110781] = sym_comment;
	v->a[110782] = actions(5826);
	v->a[110783] = 1;
	v->a[110784] = aux_sym_heredoc_redirect_token1;
	v->a[110785] = actions(5828);
	v->a[110786] = 1;
	v->a[110787] = sym_file_descriptor;
	v->a[110788] = actions(6279);
	v->a[110789] = 1;
	v->a[110790] = anon_sym_RPAREN;
	v->a[110791] = actions(5831);
	v->a[110792] = 3;
	v->a[110793] = sym_variable_name;
	v->a[110794] = sym_test_operator;
	v->a[110795] = sym__brace_start;
	v->a[110796] = actions(5821);
	v->a[110797] = 9;
	v->a[110798] = anon_sym_SEMI;
	v->a[110799] = anon_sym_PIPE_PIPE;
	small_parse_table_5540(v);
}

/* EOF small_parse_table_1107.c */
