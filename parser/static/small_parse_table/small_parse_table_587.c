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
	v->a[58700] = anon_sym_COLON_PLUS;
	v->a[58701] = anon_sym_PLUS3;
	v->a[58702] = 4;
	v->a[58703] = actions(407);
	v->a[58704] = 1;
	v->a[58705] = sym_comment;
	v->a[58706] = state(1233);
	v->a[58707] = 3;
	v->a[58708] = sym_file_redirect;
	v->a[58709] = sym_heredoc_redirect;
	v->a[58710] = aux_sym_redirected_statement_repeat1;
	v->a[58711] = actions(916);
	v->a[58712] = 4;
	v->a[58713] = anon_sym_PIPE;
	v->a[58714] = anon_sym_LT;
	v->a[58715] = anon_sym_GT;
	v->a[58716] = anon_sym_LT_LT;
	v->a[58717] = actions(942);
	v->a[58718] = 8;
	v->a[58719] = anon_sym_AMP_AMP;
	small_parse_table_2936(v);
}

void	small_parse_table_2936(t_small_parse_table_array *v)
{
	v->a[58720] = anon_sym_PIPE_PIPE;
	v->a[58721] = anon_sym_GT_GT;
	v->a[58722] = anon_sym_LT_AMP;
	v->a[58723] = anon_sym_GT_AMP;
	v->a[58724] = anon_sym_GT_PIPE;
	v->a[58725] = anon_sym_LT_GT;
	v->a[58726] = anon_sym_LT_LT_DASH;
	v->a[58727] = 7;
	v->a[58728] = actions(3);
	v->a[58729] = 1;
	v->a[58730] = sym_comment;
	v->a[58731] = actions(1504);
	v->a[58732] = 1;
	v->a[58733] = anon_sym_PERCENT;
	v->a[58734] = actions(2338);
	v->a[58735] = 1;
	v->a[58736] = anon_sym_RBRACE;
	v->a[58737] = state(1719);
	v->a[58738] = 1;
	v->a[58739] = sym__expansion_regex;
	small_parse_table_2937(v);
}

void	small_parse_table_2937(t_small_parse_table_array *v)
{
	v->a[58740] = state(1720);
	v->a[58741] = 1;
	v->a[58742] = sym__expansion_expression;
	v->a[58743] = actions(1510);
	v->a[58744] = 3;
	v->a[58745] = sym__immediate_double_hash;
	v->a[58746] = anon_sym_POUND;
	v->a[58747] = anon_sym_PERCENT_PERCENT;
	v->a[58748] = actions(1508);
	v->a[58749] = 8;
	v->a[58750] = anon_sym_COLON_DASH;
	v->a[58751] = anon_sym_DASH3;
	v->a[58752] = anon_sym_COLON_EQ;
	v->a[58753] = anon_sym_EQ2;
	v->a[58754] = anon_sym_COLON_QMARK;
	v->a[58755] = anon_sym_QMARK2;
	v->a[58756] = anon_sym_COLON_PLUS;
	v->a[58757] = anon_sym_PLUS3;
	v->a[58758] = 3;
	v->a[58759] = actions(407);
	small_parse_table_2938(v);
}

void	small_parse_table_2938(t_small_parse_table_array *v)
{
	v->a[58760] = 1;
	v->a[58761] = sym_comment;
	v->a[58762] = actions(1169);
	v->a[58763] = 4;
	v->a[58764] = anon_sym_PIPE;
	v->a[58765] = anon_sym_LT;
	v->a[58766] = anon_sym_GT;
	v->a[58767] = anon_sym_LT_LT;
	v->a[58768] = actions(1167);
	v->a[58769] = 11;
	v->a[58770] = sym__concat;
	v->a[58771] = sym_variable_name;
	v->a[58772] = anon_sym_AMP_AMP;
	v->a[58773] = anon_sym_PIPE_PIPE;
	v->a[58774] = anon_sym_GT_GT;
	v->a[58775] = anon_sym_LT_AMP;
	v->a[58776] = anon_sym_GT_AMP;
	v->a[58777] = anon_sym_GT_PIPE;
	v->a[58778] = anon_sym_LT_GT;
	v->a[58779] = anon_sym_LT_LT_DASH;
	small_parse_table_2939(v);
}

void	small_parse_table_2939(t_small_parse_table_array *v)
{
	v->a[58780] = aux_sym_concatenation_token1;
	v->a[58781] = 10;
	v->a[58782] = actions(3);
	v->a[58783] = 1;
	v->a[58784] = sym_comment;
	v->a[58785] = actions(2157);
	v->a[58786] = 1;
	v->a[58787] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58788] = actions(2161);
	v->a[58789] = 1;
	v->a[58790] = anon_sym_DQUOTE;
	v->a[58791] = actions(2163);
	v->a[58792] = 1;
	v->a[58793] = anon_sym_DOLLAR_LBRACE;
	v->a[58794] = actions(2165);
	v->a[58795] = 1;
	v->a[58796] = anon_sym_DOLLAR_LPAREN;
	v->a[58797] = actions(2167);
	v->a[58798] = 1;
	v->a[58799] = anon_sym_BQUOTE;
	small_parse_table_2940(v);
}

/* EOF small_parse_table_587.c */
