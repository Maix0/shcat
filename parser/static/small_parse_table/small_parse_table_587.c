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
	v->a[58700] = aux_sym_heredoc_redirect_token1;
	v->a[58701] = actions(3879);
	v->a[58702] = 2;
	v->a[58703] = sym_raw_string;
	v->a[58704] = sym_word;
	v->a[58705] = state(2776);
	v->a[58706] = 7;
	v->a[58707] = sym_arithmetic_expansion;
	v->a[58708] = sym_brace_expression;
	v->a[58709] = sym_string;
	v->a[58710] = sym_number;
	v->a[58711] = sym_simple_expansion;
	v->a[58712] = sym_expansion;
	v->a[58713] = sym_command_substitution;
	v->a[58714] = actions(1528);
	v->a[58715] = 12;
	v->a[58716] = anon_sym_AMP_AMP;
	v->a[58717] = anon_sym_PIPE_PIPE;
	v->a[58718] = anon_sym_LT;
	v->a[58719] = anon_sym_GT;
	small_parse_table_2936(v);
}

void	small_parse_table_2936(t_small_parse_table_array *v)
{
	v->a[58720] = anon_sym_GT_GT;
	v->a[58721] = anon_sym_AMP_GT;
	v->a[58722] = anon_sym_AMP_GT_GT;
	v->a[58723] = anon_sym_LT_AMP;
	v->a[58724] = anon_sym_GT_AMP;
	v->a[58725] = anon_sym_GT_PIPE;
	v->a[58726] = anon_sym_LT_AMP_DASH;
	v->a[58727] = anon_sym_GT_AMP_DASH;
	v->a[58728] = 8;
	v->a[58729] = actions(3);
	v->a[58730] = 1;
	v->a[58731] = sym_comment;
	v->a[58732] = actions(3632);
	v->a[58733] = 1;
	v->a[58734] = aux_sym_heredoc_redirect_token1;
	v->a[58735] = actions(3634);
	v->a[58736] = 1;
	v->a[58737] = sym_file_descriptor;
	v->a[58738] = actions(3905);
	v->a[58739] = 1;
	small_parse_table_2937(v);
}

void	small_parse_table_2937(t_small_parse_table_array *v)
{
	v->a[58740] = anon_sym_RPAREN;
	v->a[58741] = actions(3637);
	v->a[58742] = 3;
	v->a[58743] = sym_variable_name;
	v->a[58744] = sym_test_operator;
	v->a[58745] = sym__brace_start;
	v->a[58746] = actions(3627);
	v->a[58747] = 9;
	v->a[58748] = anon_sym_PIPE;
	v->a[58749] = anon_sym_SEMI_SEMI;
	v->a[58750] = anon_sym_PIPE_AMP;
	v->a[58751] = anon_sym_AMP_AMP;
	v->a[58752] = anon_sym_PIPE_PIPE;
	v->a[58753] = anon_sym_LT_LT;
	v->a[58754] = anon_sym_LT_LT_DASH;
	v->a[58755] = anon_sym_AMP;
	v->a[58756] = anon_sym_SEMI;
	v->a[58757] = actions(3629);
	v->a[58758] = 10;
	v->a[58759] = anon_sym_LT;
	small_parse_table_2938(v);
}

void	small_parse_table_2938(t_small_parse_table_array *v)
{
	v->a[58760] = anon_sym_GT;
	v->a[58761] = anon_sym_GT_GT;
	v->a[58762] = anon_sym_AMP_GT;
	v->a[58763] = anon_sym_AMP_GT_GT;
	v->a[58764] = anon_sym_LT_AMP;
	v->a[58765] = anon_sym_GT_AMP;
	v->a[58766] = anon_sym_GT_PIPE;
	v->a[58767] = anon_sym_LT_AMP_DASH;
	v->a[58768] = anon_sym_GT_AMP_DASH;
	v->a[58769] = actions(3625);
	v->a[58770] = 12;
	v->a[58771] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58772] = anon_sym_DOLLAR;
	v->a[58773] = sym__special_character;
	v->a[58774] = anon_sym_DQUOTE;
	v->a[58775] = sym_raw_string;
	v->a[58776] = aux_sym_number_token1;
	v->a[58777] = aux_sym_number_token2;
	v->a[58778] = anon_sym_DOLLAR_LBRACE;
	v->a[58779] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2939(v);
}

void	small_parse_table_2939(t_small_parse_table_array *v)
{
	v->a[58780] = anon_sym_BQUOTE;
	v->a[58781] = anon_sym_DOLLAR_BQUOTE;
	v->a[58782] = sym_word;
	v->a[58783] = 5;
	v->a[58784] = actions(3);
	v->a[58785] = 1;
	v->a[58786] = sym_comment;
	v->a[58787] = actions(3908);
	v->a[58788] = 1;
	v->a[58789] = sym__special_character;
	v->a[58790] = state(1274);
	v->a[58791] = 1;
	v->a[58792] = aux_sym__literal_repeat1;
	v->a[58793] = actions(3197);
	v->a[58794] = 5;
	v->a[58795] = sym_file_descriptor;
	v->a[58796] = sym_test_operator;
	v->a[58797] = sym__brace_start;
	v->a[58798] = ts_builtin_sym_end;
	v->a[58799] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2940(v);
}

/* EOF small_parse_table_587.c */
