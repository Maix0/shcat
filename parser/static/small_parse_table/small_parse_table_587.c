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
	v->a[58700] = actions(729);
	v->a[58701] = 17;
	v->a[58702] = anon_sym_LT;
	v->a[58703] = anon_sym_GT;
	v->a[58704] = anon_sym_GT_GT;
	v->a[58705] = anon_sym_LT_AMP;
	v->a[58706] = anon_sym_GT_AMP;
	v->a[58707] = anon_sym_GT_PIPE;
	v->a[58708] = anon_sym_LT_GT;
	v->a[58709] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58710] = aux_sym_concatenation_token1;
	v->a[58711] = anon_sym_DOLLAR;
	v->a[58712] = anon_sym_DQUOTE;
	v->a[58713] = sym_raw_string;
	v->a[58714] = sym_number;
	v->a[58715] = anon_sym_DOLLAR_LBRACE;
	v->a[58716] = anon_sym_DOLLAR_LPAREN;
	v->a[58717] = anon_sym_BQUOTE;
	v->a[58718] = sym_word;
	v->a[58719] = 3;
	small_parse_table_2936(v);
}

void	small_parse_table_2936(t_small_parse_table_array *v)
{
	v->a[58720] = actions(3);
	v->a[58721] = 1;
	v->a[58722] = sym_comment;
	v->a[58723] = actions(1200);
	v->a[58724] = 4;
	v->a[58725] = sym_file_descriptor;
	v->a[58726] = sym_variable_name;
	v->a[58727] = ts_builtin_sym_end;
	v->a[58728] = aux_sym_heredoc_redirect_token1;
	v->a[58729] = actions(1202);
	v->a[58730] = 16;
	v->a[58731] = anon_sym_PIPE;
	v->a[58732] = anon_sym_RPAREN;
	v->a[58733] = anon_sym_SEMI_SEMI;
	v->a[58734] = anon_sym_AMP_AMP;
	v->a[58735] = anon_sym_PIPE_PIPE;
	v->a[58736] = anon_sym_LT;
	v->a[58737] = anon_sym_GT;
	v->a[58738] = anon_sym_GT_GT;
	v->a[58739] = anon_sym_LT_AMP;
	small_parse_table_2937(v);
}

void	small_parse_table_2937(t_small_parse_table_array *v)
{
	v->a[58740] = anon_sym_GT_AMP;
	v->a[58741] = anon_sym_GT_PIPE;
	v->a[58742] = anon_sym_LT_GT;
	v->a[58743] = anon_sym_LT_LT;
	v->a[58744] = anon_sym_LT_LT_DASH;
	v->a[58745] = anon_sym_BQUOTE;
	v->a[58746] = anon_sym_SEMI;
	v->a[58747] = 3;
	v->a[58748] = actions(3);
	v->a[58749] = 1;
	v->a[58750] = sym_comment;
	v->a[58751] = actions(515);
	v->a[58752] = 3;
	v->a[58753] = sym_file_descriptor;
	v->a[58754] = sym__concat;
	v->a[58755] = sym_variable_name;
	v->a[58756] = actions(513);
	v->a[58757] = 17;
	v->a[58758] = anon_sym_LT;
	v->a[58759] = anon_sym_GT;
	small_parse_table_2938(v);
}

void	small_parse_table_2938(t_small_parse_table_array *v)
{
	v->a[58760] = anon_sym_GT_GT;
	v->a[58761] = anon_sym_LT_AMP;
	v->a[58762] = anon_sym_GT_AMP;
	v->a[58763] = anon_sym_GT_PIPE;
	v->a[58764] = anon_sym_LT_GT;
	v->a[58765] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58766] = aux_sym_concatenation_token1;
	v->a[58767] = anon_sym_DOLLAR;
	v->a[58768] = anon_sym_DQUOTE;
	v->a[58769] = sym_raw_string;
	v->a[58770] = sym_number;
	v->a[58771] = anon_sym_DOLLAR_LBRACE;
	v->a[58772] = anon_sym_DOLLAR_LPAREN;
	v->a[58773] = anon_sym_BQUOTE;
	v->a[58774] = sym_word;
	v->a[58775] = 7;
	v->a[58776] = actions(3);
	v->a[58777] = 1;
	v->a[58778] = sym_comment;
	v->a[58779] = actions(1890);
	small_parse_table_2939(v);
}

void	small_parse_table_2939(t_small_parse_table_array *v)
{
	v->a[58780] = 1;
	v->a[58781] = sym_file_descriptor;
	v->a[58782] = actions(1951);
	v->a[58783] = 1;
	v->a[58784] = aux_sym_heredoc_redirect_token1;
	v->a[58785] = actions(790);
	v->a[58786] = 2;
	v->a[58787] = anon_sym_LT_LT;
	v->a[58788] = anon_sym_LT_LT_DASH;
	v->a[58789] = state(1093);
	v->a[58790] = 3;
	v->a[58791] = sym_file_redirect;
	v->a[58792] = sym_heredoc_redirect;
	v->a[58793] = aux_sym_redirected_statement_repeat1;
	v->a[58794] = actions(1949);
	v->a[58795] = 6;
	v->a[58796] = anon_sym_PIPE;
	v->a[58797] = anon_sym_SEMI_SEMI;
	v->a[58798] = anon_sym_AMP_AMP;
	v->a[58799] = anon_sym_PIPE_PIPE;
	small_parse_table_2940(v);
}

/* EOF small_parse_table_587.c */
