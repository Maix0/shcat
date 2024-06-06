/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_453.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2265(t_small_parse_table_array *v)
{
	v->a[45300] = sym__special_character;
	v->a[45301] = state(1036);
	v->a[45302] = 1;
	v->a[45303] = aux_sym__literal_repeat1;
	v->a[45304] = actions(3326);
	v->a[45305] = 6;
	v->a[45306] = sym_file_descriptor;
	v->a[45307] = sym_test_operator;
	v->a[45308] = sym__bare_dollar;
	v->a[45309] = sym__brace_start;
	v->a[45310] = ts_builtin_sym_end;
	v->a[45311] = aux_sym_heredoc_redirect_token1;
	v->a[45312] = actions(3324);
	v->a[45313] = 31;
	v->a[45314] = anon_sym_LPAREN;
	v->a[45315] = anon_sym_PIPE;
	v->a[45316] = anon_sym_SEMI_SEMI;
	v->a[45317] = anon_sym_PIPE_AMP;
	v->a[45318] = anon_sym_AMP_AMP;
	v->a[45319] = anon_sym_PIPE_PIPE;
	small_parse_table_2266(v);
}

void	small_parse_table_2266(t_small_parse_table_array *v)
{
	v->a[45320] = anon_sym_LT;
	v->a[45321] = anon_sym_GT;
	v->a[45322] = anon_sym_GT_GT;
	v->a[45323] = anon_sym_AMP_GT;
	v->a[45324] = anon_sym_AMP_GT_GT;
	v->a[45325] = anon_sym_LT_AMP;
	v->a[45326] = anon_sym_GT_AMP;
	v->a[45327] = anon_sym_GT_PIPE;
	v->a[45328] = anon_sym_LT_AMP_DASH;
	v->a[45329] = anon_sym_GT_AMP_DASH;
	v->a[45330] = anon_sym_LT_LT;
	v->a[45331] = anon_sym_LT_LT_DASH;
	v->a[45332] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45333] = anon_sym_AMP;
	v->a[45334] = anon_sym_DOLLAR;
	v->a[45335] = anon_sym_DQUOTE;
	v->a[45336] = sym_raw_string;
	v->a[45337] = aux_sym_number_token1;
	v->a[45338] = aux_sym_number_token2;
	v->a[45339] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2267(v);
}

void	small_parse_table_2267(t_small_parse_table_array *v)
{
	v->a[45340] = anon_sym_DOLLAR_LPAREN;
	v->a[45341] = anon_sym_BQUOTE;
	v->a[45342] = anon_sym_DOLLAR_BQUOTE;
	v->a[45343] = sym_word;
	v->a[45344] = anon_sym_SEMI;
	v->a[45345] = 3;
	v->a[45346] = actions(3);
	v->a[45347] = 1;
	v->a[45348] = sym_comment;
	v->a[45349] = actions(2774);
	v->a[45350] = 6;
	v->a[45351] = sym_file_descriptor;
	v->a[45352] = sym__concat;
	v->a[45353] = sym_variable_name;
	v->a[45354] = sym_test_operator;
	v->a[45355] = sym__brace_start;
	v->a[45356] = aux_sym_heredoc_redirect_token1;
	v->a[45357] = actions(2772);
	v->a[45358] = 33;
	v->a[45359] = anon_sym_PIPE;
	small_parse_table_2268(v);
}

void	small_parse_table_2268(t_small_parse_table_array *v)
{
	v->a[45360] = anon_sym_RPAREN;
	v->a[45361] = anon_sym_SEMI_SEMI;
	v->a[45362] = anon_sym_PIPE_AMP;
	v->a[45363] = anon_sym_AMP_AMP;
	v->a[45364] = anon_sym_PIPE_PIPE;
	v->a[45365] = anon_sym_LT;
	v->a[45366] = anon_sym_GT;
	v->a[45367] = anon_sym_GT_GT;
	v->a[45368] = anon_sym_AMP_GT;
	v->a[45369] = anon_sym_AMP_GT_GT;
	v->a[45370] = anon_sym_LT_AMP;
	v->a[45371] = anon_sym_GT_AMP;
	v->a[45372] = anon_sym_GT_PIPE;
	v->a[45373] = anon_sym_LT_AMP_DASH;
	v->a[45374] = anon_sym_GT_AMP_DASH;
	v->a[45375] = anon_sym_LT_LT;
	v->a[45376] = anon_sym_LT_LT_DASH;
	v->a[45377] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45378] = anon_sym_AMP;
	v->a[45379] = aux_sym_concatenation_token1;
	small_parse_table_2269(v);
}

void	small_parse_table_2269(t_small_parse_table_array *v)
{
	v->a[45380] = anon_sym_DOLLAR;
	v->a[45381] = sym__special_character;
	v->a[45382] = anon_sym_DQUOTE;
	v->a[45383] = sym_raw_string;
	v->a[45384] = aux_sym_number_token1;
	v->a[45385] = aux_sym_number_token2;
	v->a[45386] = anon_sym_DOLLAR_LBRACE;
	v->a[45387] = anon_sym_DOLLAR_LPAREN;
	v->a[45388] = anon_sym_BQUOTE;
	v->a[45389] = anon_sym_DOLLAR_BQUOTE;
	v->a[45390] = sym_word;
	v->a[45391] = anon_sym_SEMI;
	v->a[45392] = 25;
	v->a[45393] = actions(57);
	v->a[45394] = 1;
	v->a[45395] = sym_comment;
	v->a[45396] = actions(87);
	v->a[45397] = 1;
	v->a[45398] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45399] = actions(89);
	small_parse_table_2270(v);
}

/* EOF small_parse_table_453.c */
