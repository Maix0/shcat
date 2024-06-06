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
	v->a[39300] = actions(2696);
	v->a[39301] = 6;
	v->a[39302] = sym_file_descriptor;
	v->a[39303] = sym_test_operator;
	v->a[39304] = sym__bare_dollar;
	v->a[39305] = sym__brace_start;
	v->a[39306] = ts_builtin_sym_end;
	v->a[39307] = aux_sym_heredoc_redirect_token1;
	v->a[39308] = actions(2694);
	v->a[39309] = 31;
	v->a[39310] = anon_sym_PIPE;
	v->a[39311] = anon_sym_SEMI_SEMI;
	v->a[39312] = anon_sym_PIPE_AMP;
	v->a[39313] = anon_sym_AMP_AMP;
	v->a[39314] = anon_sym_PIPE_PIPE;
	v->a[39315] = anon_sym_LT;
	v->a[39316] = anon_sym_GT;
	v->a[39317] = anon_sym_GT_GT;
	v->a[39318] = anon_sym_AMP_GT;
	v->a[39319] = anon_sym_AMP_GT_GT;
	small_parse_table_1966(v);
}

void	small_parse_table_1966(t_small_parse_table_array *v)
{
	v->a[39320] = anon_sym_LT_AMP;
	v->a[39321] = anon_sym_GT_AMP;
	v->a[39322] = anon_sym_GT_PIPE;
	v->a[39323] = anon_sym_LT_AMP_DASH;
	v->a[39324] = anon_sym_GT_AMP_DASH;
	v->a[39325] = anon_sym_LT_LT;
	v->a[39326] = anon_sym_LT_LT_DASH;
	v->a[39327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39328] = anon_sym_AMP;
	v->a[39329] = anon_sym_DOLLAR;
	v->a[39330] = sym__special_character;
	v->a[39331] = anon_sym_DQUOTE;
	v->a[39332] = sym_raw_string;
	v->a[39333] = aux_sym_number_token1;
	v->a[39334] = aux_sym_number_token2;
	v->a[39335] = anon_sym_DOLLAR_LBRACE;
	v->a[39336] = anon_sym_DOLLAR_LPAREN;
	v->a[39337] = anon_sym_BQUOTE;
	v->a[39338] = anon_sym_DOLLAR_BQUOTE;
	v->a[39339] = sym_word;
	small_parse_table_1967(v);
}

void	small_parse_table_1967(t_small_parse_table_array *v)
{
	v->a[39340] = anon_sym_SEMI;
	v->a[39341] = 3;
	v->a[39342] = actions(3);
	v->a[39343] = 1;
	v->a[39344] = sym_comment;
	v->a[39345] = actions(3020);
	v->a[39346] = 7;
	v->a[39347] = sym_file_descriptor;
	v->a[39348] = sym__concat;
	v->a[39349] = sym_variable_name;
	v->a[39350] = sym_test_operator;
	v->a[39351] = sym__brace_start;
	v->a[39352] = ts_builtin_sym_end;
	v->a[39353] = aux_sym_heredoc_redirect_token1;
	v->a[39354] = actions(3018);
	v->a[39355] = 33;
	v->a[39356] = anon_sym_PIPE;
	v->a[39357] = anon_sym_SEMI_SEMI;
	v->a[39358] = anon_sym_PIPE_AMP;
	v->a[39359] = anon_sym_AMP_AMP;
	small_parse_table_1968(v);
}

void	small_parse_table_1968(t_small_parse_table_array *v)
{
	v->a[39360] = anon_sym_PIPE_PIPE;
	v->a[39361] = anon_sym_LT;
	v->a[39362] = anon_sym_GT;
	v->a[39363] = anon_sym_GT_GT;
	v->a[39364] = anon_sym_AMP_GT;
	v->a[39365] = anon_sym_AMP_GT_GT;
	v->a[39366] = anon_sym_LT_AMP;
	v->a[39367] = anon_sym_GT_AMP;
	v->a[39368] = anon_sym_GT_PIPE;
	v->a[39369] = anon_sym_LT_AMP_DASH;
	v->a[39370] = anon_sym_GT_AMP_DASH;
	v->a[39371] = anon_sym_LT_LT;
	v->a[39372] = anon_sym_LT_LT_DASH;
	v->a[39373] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39374] = anon_sym_AMP;
	v->a[39375] = aux_sym_concatenation_token1;
	v->a[39376] = anon_sym_DOLLAR;
	v->a[39377] = sym__special_character;
	v->a[39378] = anon_sym_DQUOTE;
	v->a[39379] = sym_raw_string;
	small_parse_table_1969(v);
}

void	small_parse_table_1969(t_small_parse_table_array *v)
{
	v->a[39380] = aux_sym_number_token1;
	v->a[39381] = aux_sym_number_token2;
	v->a[39382] = anon_sym_DOLLAR_LBRACE;
	v->a[39383] = anon_sym_DOLLAR_LPAREN;
	v->a[39384] = anon_sym_BQUOTE;
	v->a[39385] = anon_sym_DOLLAR_BQUOTE;
	v->a[39386] = aux_sym__simple_variable_name_token1;
	v->a[39387] = sym_word;
	v->a[39388] = anon_sym_SEMI;
	v->a[39389] = 3;
	v->a[39390] = actions(3);
	v->a[39391] = 1;
	v->a[39392] = sym_comment;
	v->a[39393] = actions(3024);
	v->a[39394] = 7;
	v->a[39395] = sym_file_descriptor;
	v->a[39396] = sym__concat;
	v->a[39397] = sym_variable_name;
	v->a[39398] = sym_test_operator;
	v->a[39399] = sym__brace_start;
	small_parse_table_1970(v);
}

/* EOF small_parse_table_393.c */
