/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1147.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5735(t_small_parse_table_array *v)
{
	v->a[114700] = anon_sym_SEMI;
	v->a[114701] = anon_sym_PIPE_PIPE;
	v->a[114702] = anon_sym_AMP_AMP;
	v->a[114703] = anon_sym_PIPE;
	v->a[114704] = anon_sym_AMP;
	v->a[114705] = anon_sym_LT;
	v->a[114706] = anon_sym_GT;
	v->a[114707] = anon_sym_LT_LT;
	v->a[114708] = anon_sym_GT_GT;
	v->a[114709] = anon_sym_SEMI_SEMI;
	v->a[114710] = anon_sym_PIPE_AMP;
	v->a[114711] = anon_sym_AMP_GT;
	v->a[114712] = anon_sym_AMP_GT_GT;
	v->a[114713] = anon_sym_LT_AMP;
	v->a[114714] = anon_sym_GT_AMP;
	v->a[114715] = anon_sym_GT_PIPE;
	v->a[114716] = anon_sym_LT_AMP_DASH;
	v->a[114717] = anon_sym_GT_AMP_DASH;
	v->a[114718] = anon_sym_LT_LT_DASH;
	v->a[114719] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5736(v);
}

void	small_parse_table_5736(t_small_parse_table_array *v)
{
	v->a[114720] = anon_sym_DOLLAR_LBRACK;
	v->a[114721] = aux_sym_concatenation_token1;
	v->a[114722] = anon_sym_DOLLAR;
	v->a[114723] = sym__special_character;
	v->a[114724] = anon_sym_DQUOTE;
	v->a[114725] = sym_raw_string;
	v->a[114726] = sym_ansi_c_string;
	v->a[114727] = aux_sym_number_token1;
	v->a[114728] = aux_sym_number_token2;
	v->a[114729] = anon_sym_DOLLAR_LBRACE;
	v->a[114730] = anon_sym_DOLLAR_LPAREN;
	v->a[114731] = anon_sym_BQUOTE;
	v->a[114732] = anon_sym_DOLLAR_BQUOTE;
	v->a[114733] = anon_sym_LT_LPAREN;
	v->a[114734] = anon_sym_GT_LPAREN;
	v->a[114735] = sym_word;
	v->a[114736] = 8;
	v->a[114737] = actions(3);
	v->a[114738] = 1;
	v->a[114739] = sym_comment;
	small_parse_table_5737(v);
}

void	small_parse_table_5737(t_small_parse_table_array *v)
{
	v->a[114740] = actions(5826);
	v->a[114741] = 1;
	v->a[114742] = aux_sym_heredoc_redirect_token1;
	v->a[114743] = actions(5828);
	v->a[114744] = 1;
	v->a[114745] = sym_file_descriptor;
	v->a[114746] = actions(6385);
	v->a[114747] = 1;
	v->a[114748] = anon_sym_RPAREN;
	v->a[114749] = actions(5831);
	v->a[114750] = 3;
	v->a[114751] = sym_variable_name;
	v->a[114752] = sym_test_operator;
	v->a[114753] = sym__brace_start;
	v->a[114754] = actions(5821);
	v->a[114755] = 9;
	v->a[114756] = anon_sym_SEMI;
	v->a[114757] = anon_sym_PIPE_PIPE;
	v->a[114758] = anon_sym_AMP_AMP;
	v->a[114759] = anon_sym_PIPE;
	small_parse_table_5738(v);
}

void	small_parse_table_5738(t_small_parse_table_array *v)
{
	v->a[114760] = anon_sym_AMP;
	v->a[114761] = anon_sym_LT_LT;
	v->a[114762] = anon_sym_SEMI_SEMI;
	v->a[114763] = anon_sym_PIPE_AMP;
	v->a[114764] = anon_sym_LT_LT_DASH;
	v->a[114765] = actions(5823);
	v->a[114766] = 11;
	v->a[114767] = anon_sym_LT;
	v->a[114768] = anon_sym_GT;
	v->a[114769] = anon_sym_GT_GT;
	v->a[114770] = anon_sym_AMP_GT;
	v->a[114771] = anon_sym_AMP_GT_GT;
	v->a[114772] = anon_sym_LT_AMP;
	v->a[114773] = anon_sym_GT_AMP;
	v->a[114774] = anon_sym_GT_PIPE;
	v->a[114775] = anon_sym_LT_AMP_DASH;
	v->a[114776] = anon_sym_GT_AMP_DASH;
	v->a[114777] = anon_sym_LT_LT_LT;
	v->a[114778] = actions(5819);
	v->a[114779] = 17;
	small_parse_table_5739(v);
}

void	small_parse_table_5739(t_small_parse_table_array *v)
{
	v->a[114780] = anon_sym_LPAREN_LPAREN;
	v->a[114781] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114782] = anon_sym_DOLLAR_LBRACK;
	v->a[114783] = anon_sym_DOLLAR;
	v->a[114784] = sym__special_character;
	v->a[114785] = anon_sym_DQUOTE;
	v->a[114786] = sym_raw_string;
	v->a[114787] = sym_ansi_c_string;
	v->a[114788] = aux_sym_number_token1;
	v->a[114789] = aux_sym_number_token2;
	v->a[114790] = anon_sym_DOLLAR_LBRACE;
	v->a[114791] = anon_sym_DOLLAR_LPAREN;
	v->a[114792] = anon_sym_BQUOTE;
	v->a[114793] = anon_sym_DOLLAR_BQUOTE;
	v->a[114794] = anon_sym_LT_LPAREN;
	v->a[114795] = anon_sym_GT_LPAREN;
	v->a[114796] = sym_word;
	v->a[114797] = 8;
	v->a[114798] = actions(3);
	v->a[114799] = 1;
	small_parse_table_5740(v);
}

/* EOF small_parse_table_1147.c */
