/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_587.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2935(t_small_parse_table_array *v)
{
	v->a[58700] = sym_arithmetic_expansion;
	v->a[58701] = sym_brace_expression;
	v->a[58702] = sym_string;
	v->a[58703] = sym_translated_string;
	v->a[58704] = sym_number;
	v->a[58705] = sym_simple_expansion;
	v->a[58706] = sym_expansion;
	v->a[58707] = sym_command_substitution;
	v->a[58708] = sym_process_substitution;
	v->a[58709] = actions(2214);
	v->a[58710] = 13;
	v->a[58711] = anon_sym_PIPE_PIPE;
	v->a[58712] = anon_sym_AMP_AMP;
	v->a[58713] = anon_sym_LT;
	v->a[58714] = anon_sym_GT;
	v->a[58715] = anon_sym_GT_GT;
	v->a[58716] = anon_sym_AMP_GT;
	v->a[58717] = anon_sym_AMP_GT_GT;
	v->a[58718] = anon_sym_LT_AMP;
	v->a[58719] = anon_sym_GT_AMP;
	small_parse_table_2936(v);
}

void	small_parse_table_2936(t_small_parse_table_array *v)
{
	v->a[58720] = anon_sym_GT_PIPE;
	v->a[58721] = anon_sym_LT_AMP_DASH;
	v->a[58722] = anon_sym_GT_AMP_DASH;
	v->a[58723] = anon_sym_LT_LT_LT;
	v->a[58724] = 3;
	v->a[58725] = actions(3);
	v->a[58726] = 1;
	v->a[58727] = sym_comment;
	v->a[58728] = actions(1342);
	v->a[58729] = 6;
	v->a[58730] = sym_file_descriptor;
	v->a[58731] = sym__concat;
	v->a[58732] = sym_variable_name;
	v->a[58733] = sym_test_operator;
	v->a[58734] = sym__brace_start;
	v->a[58735] = aux_sym_heredoc_redirect_token1;
	v->a[58736] = actions(1340);
	v->a[58737] = 40;
	v->a[58738] = anon_sym_LPAREN_LPAREN;
	v->a[58739] = anon_sym_SEMI;
	small_parse_table_2937(v);
}

void	small_parse_table_2937(t_small_parse_table_array *v)
{
	v->a[58740] = anon_sym_PIPE_PIPE;
	v->a[58741] = anon_sym_AMP_AMP;
	v->a[58742] = anon_sym_PIPE;
	v->a[58743] = anon_sym_AMP;
	v->a[58744] = anon_sym_LT;
	v->a[58745] = anon_sym_GT;
	v->a[58746] = anon_sym_LT_LT;
	v->a[58747] = anon_sym_GT_GT;
	v->a[58748] = anon_sym_SEMI_SEMI;
	v->a[58749] = anon_sym_SEMI_AMP;
	v->a[58750] = anon_sym_SEMI_SEMI_AMP;
	v->a[58751] = anon_sym_PIPE_AMP;
	v->a[58752] = anon_sym_AMP_GT;
	v->a[58753] = anon_sym_AMP_GT_GT;
	v->a[58754] = anon_sym_LT_AMP;
	v->a[58755] = anon_sym_GT_AMP;
	v->a[58756] = anon_sym_GT_PIPE;
	v->a[58757] = anon_sym_LT_AMP_DASH;
	v->a[58758] = anon_sym_GT_AMP_DASH;
	v->a[58759] = anon_sym_LT_LT_DASH;
	small_parse_table_2938(v);
}

void	small_parse_table_2938(t_small_parse_table_array *v)
{
	v->a[58760] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58761] = anon_sym_DOLLAR_LBRACK;
	v->a[58762] = aux_sym_concatenation_token1;
	v->a[58763] = anon_sym_DOLLAR;
	v->a[58764] = sym__special_character;
	v->a[58765] = anon_sym_DQUOTE;
	v->a[58766] = sym_raw_string;
	v->a[58767] = sym_ansi_c_string;
	v->a[58768] = aux_sym_number_token1;
	v->a[58769] = aux_sym_number_token2;
	v->a[58770] = anon_sym_DOLLAR_LBRACE;
	v->a[58771] = anon_sym_DOLLAR_LPAREN;
	v->a[58772] = anon_sym_BQUOTE;
	v->a[58773] = anon_sym_DOLLAR_BQUOTE;
	v->a[58774] = anon_sym_LT_LPAREN;
	v->a[58775] = anon_sym_GT_LPAREN;
	v->a[58776] = aux_sym__simple_variable_name_token1;
	v->a[58777] = sym_word;
	v->a[58778] = 3;
	v->a[58779] = actions(3);
	small_parse_table_2939(v);
}

void	small_parse_table_2939(t_small_parse_table_array *v)
{
	v->a[58780] = 1;
	v->a[58781] = sym_comment;
	v->a[58782] = actions(1338);
	v->a[58783] = 6;
	v->a[58784] = sym_file_descriptor;
	v->a[58785] = sym__concat;
	v->a[58786] = sym_variable_name;
	v->a[58787] = sym_test_operator;
	v->a[58788] = sym__brace_start;
	v->a[58789] = aux_sym_heredoc_redirect_token1;
	v->a[58790] = actions(1336);
	v->a[58791] = 40;
	v->a[58792] = anon_sym_LPAREN_LPAREN;
	v->a[58793] = anon_sym_SEMI;
	v->a[58794] = anon_sym_PIPE_PIPE;
	v->a[58795] = anon_sym_AMP_AMP;
	v->a[58796] = anon_sym_PIPE;
	v->a[58797] = anon_sym_AMP;
	v->a[58798] = anon_sym_LT;
	v->a[58799] = anon_sym_GT;
	small_parse_table_2940(v);
}

/* EOF small_parse_table_587.c */
