/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_393.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1965(t_small_parse_table_array *v)
{
	v->a[39300] = sym_raw_string;
	v->a[39301] = sym_number;
	v->a[39302] = anon_sym_DOLLAR_LBRACE;
	v->a[39303] = anon_sym_DOLLAR_LPAREN;
	v->a[39304] = anon_sym_BQUOTE;
	v->a[39305] = sym_word;
	v->a[39306] = anon_sym_SEMI;
	v->a[39307] = 3;
	v->a[39308] = actions(3);
	v->a[39309] = 1;
	v->a[39310] = sym_comment;
	v->a[39311] = actions(1092);
	v->a[39312] = 2;
	v->a[39313] = sym_file_descriptor;
	v->a[39314] = sym__concat;
	v->a[39315] = actions(1094);
	v->a[39316] = 27;
	v->a[39317] = anon_sym_PIPE;
	v->a[39318] = anon_sym_RPAREN;
	v->a[39319] = anon_sym_SEMI_SEMI;
	small_parse_table_1966(v);
}

void	small_parse_table_1966(t_small_parse_table_array *v)
{
	v->a[39320] = anon_sym_AMP_AMP;
	v->a[39321] = anon_sym_PIPE_PIPE;
	v->a[39322] = anon_sym_LT;
	v->a[39323] = anon_sym_GT;
	v->a[39324] = anon_sym_GT_GT;
	v->a[39325] = anon_sym_LT_AMP;
	v->a[39326] = anon_sym_GT_AMP;
	v->a[39327] = anon_sym_GT_PIPE;
	v->a[39328] = anon_sym_LT_GT;
	v->a[39329] = anon_sym_LT_LT;
	v->a[39330] = anon_sym_LT_LT_DASH;
	v->a[39331] = aux_sym_heredoc_redirect_token1;
	v->a[39332] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39333] = anon_sym_AMP;
	v->a[39334] = aux_sym_concatenation_token1;
	v->a[39335] = anon_sym_DOLLAR;
	v->a[39336] = anon_sym_DQUOTE;
	v->a[39337] = sym_raw_string;
	v->a[39338] = sym_number;
	v->a[39339] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1967(v);
}

void	small_parse_table_1967(t_small_parse_table_array *v)
{
	v->a[39340] = anon_sym_DOLLAR_LPAREN;
	v->a[39341] = anon_sym_BQUOTE;
	v->a[39342] = sym_word;
	v->a[39343] = anon_sym_SEMI;
	v->a[39344] = 7;
	v->a[39345] = actions(3);
	v->a[39346] = 1;
	v->a[39347] = sym_comment;
	v->a[39348] = actions(921);
	v->a[39349] = 1;
	v->a[39350] = sym_file_descriptor;
	v->a[39351] = actions(1372);
	v->a[39352] = 1;
	v->a[39353] = sym_variable_name;
	v->a[39354] = state(1286);
	v->a[39355] = 2;
	v->a[39356] = sym_variable_assignment;
	v->a[39357] = aux_sym__variable_assignments_repeat1;
	v->a[39358] = state(1354);
	v->a[39359] = 3;
	small_parse_table_1968(v);
}

void	small_parse_table_1968(t_small_parse_table_array *v)
{
	v->a[39360] = sym_file_redirect;
	v->a[39361] = sym_heredoc_redirect;
	v->a[39362] = aux_sym_redirected_statement_repeat1;
	v->a[39363] = actions(690);
	v->a[39364] = 9;
	v->a[39365] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39366] = anon_sym_DOLLAR;
	v->a[39367] = anon_sym_DQUOTE;
	v->a[39368] = sym_raw_string;
	v->a[39369] = sym_number;
	v->a[39370] = anon_sym_DOLLAR_LBRACE;
	v->a[39371] = anon_sym_DOLLAR_LPAREN;
	v->a[39372] = anon_sym_BQUOTE;
	v->a[39373] = sym_word;
	v->a[39374] = actions(692);
	v->a[39375] = 13;
	v->a[39376] = anon_sym_PIPE;
	v->a[39377] = anon_sym_AMP_AMP;
	v->a[39378] = anon_sym_PIPE_PIPE;
	v->a[39379] = anon_sym_LT;
	small_parse_table_1969(v);
}

void	small_parse_table_1969(t_small_parse_table_array *v)
{
	v->a[39380] = anon_sym_GT;
	v->a[39381] = anon_sym_GT_GT;
	v->a[39382] = anon_sym_LT_AMP;
	v->a[39383] = anon_sym_GT_AMP;
	v->a[39384] = anon_sym_GT_PIPE;
	v->a[39385] = anon_sym_LT_GT;
	v->a[39386] = anon_sym_LT_LT;
	v->a[39387] = anon_sym_LT_LT_DASH;
	v->a[39388] = aux_sym_heredoc_redirect_token1;
	v->a[39389] = 3;
	v->a[39390] = actions(3);
	v->a[39391] = 1;
	v->a[39392] = sym_comment;
	v->a[39393] = actions(688);
	v->a[39394] = 3;
	v->a[39395] = sym_file_descriptor;
	v->a[39396] = sym__concat;
	v->a[39397] = ts_builtin_sym_end;
	v->a[39398] = actions(686);
	v->a[39399] = 26;
	small_parse_table_1970(v);
}

/* EOF small_parse_table_393.c */
