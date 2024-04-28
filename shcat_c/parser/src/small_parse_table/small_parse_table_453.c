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
	v->a[45300] = actions(5269);
	v->a[45301] = 2;
	v->a[45302] = sym_raw_string;
	v->a[45303] = sym_ansi_c_string;
	v->a[45304] = actions(5283);
	v->a[45305] = 2;
	v->a[45306] = anon_sym_LT_LPAREN;
	v->a[45307] = anon_sym_GT_LPAREN;
	v->a[45308] = actions(2494);
	v->a[45309] = 7;
	v->a[45310] = anon_sym_PIPE;
	v->a[45311] = anon_sym_LT;
	v->a[45312] = anon_sym_GT;
	v->a[45313] = anon_sym_LT_LT;
	v->a[45314] = anon_sym_AMP_GT;
	v->a[45315] = anon_sym_LT_AMP;
	v->a[45316] = anon_sym_GT_AMP;
	v->a[45317] = state(5378);
	v->a[45318] = 9;
	v->a[45319] = sym_arithmetic_expansion;
	small_parse_table_2266(v);
}

void	small_parse_table_2266(t_small_parse_table_array *v)
{
	v->a[45320] = sym_brace_expression;
	v->a[45321] = sym_string;
	v->a[45322] = sym_translated_string;
	v->a[45323] = sym_number;
	v->a[45324] = sym_simple_expansion;
	v->a[45325] = sym_expansion;
	v->a[45326] = sym_command_substitution;
	v->a[45327] = sym_process_substitution;
	v->a[45328] = actions(2496);
	v->a[45329] = 11;
	v->a[45330] = sym_file_descriptor;
	v->a[45331] = anon_sym_PIPE_PIPE;
	v->a[45332] = anon_sym_AMP_AMP;
	v->a[45333] = anon_sym_GT_GT;
	v->a[45334] = anon_sym_PIPE_AMP;
	v->a[45335] = anon_sym_AMP_GT_GT;
	v->a[45336] = anon_sym_GT_PIPE;
	v->a[45337] = anon_sym_LT_AMP_DASH;
	v->a[45338] = anon_sym_GT_AMP_DASH;
	v->a[45339] = anon_sym_LT_LT_DASH;
	small_parse_table_2267(v);
}

void	small_parse_table_2267(t_small_parse_table_array *v)
{
	v->a[45340] = anon_sym_LT_LT_LT;
	v->a[45341] = 6;
	v->a[45342] = actions(3);
	v->a[45343] = 1;
	v->a[45344] = sym_comment;
	v->a[45345] = actions(5080);
	v->a[45346] = 1;
	v->a[45347] = aux_sym_concatenation_token1;
	v->a[45348] = actions(5082);
	v->a[45349] = 1;
	v->a[45350] = sym__concat;
	v->a[45351] = state(1032);
	v->a[45352] = 1;
	v->a[45353] = aux_sym_concatenation_repeat1;
	v->a[45354] = actions(1263);
	v->a[45355] = 5;
	v->a[45356] = sym_file_descriptor;
	v->a[45357] = sym_test_operator;
	v->a[45358] = sym__bare_dollar;
	v->a[45359] = sym__brace_start;
	small_parse_table_2268(v);
}

void	small_parse_table_2268(t_small_parse_table_array *v)
{
	v->a[45360] = aux_sym_heredoc_redirect_token1;
	v->a[45361] = actions(1261);
	v->a[45362] = 40;
	v->a[45363] = anon_sym_LPAREN_LPAREN;
	v->a[45364] = anon_sym_SEMI;
	v->a[45365] = anon_sym_PIPE_PIPE;
	v->a[45366] = anon_sym_AMP_AMP;
	v->a[45367] = anon_sym_PIPE;
	v->a[45368] = anon_sym_AMP;
	v->a[45369] = anon_sym_EQ_EQ;
	v->a[45370] = anon_sym_LT;
	v->a[45371] = anon_sym_GT;
	v->a[45372] = anon_sym_LT_LT;
	v->a[45373] = anon_sym_GT_GT;
	v->a[45374] = anon_sym_RPAREN;
	v->a[45375] = anon_sym_SEMI_SEMI;
	v->a[45376] = anon_sym_PIPE_AMP;
	v->a[45377] = anon_sym_EQ_TILDE;
	v->a[45378] = anon_sym_AMP_GT;
	v->a[45379] = anon_sym_AMP_GT_GT;
	small_parse_table_2269(v);
}

void	small_parse_table_2269(t_small_parse_table_array *v)
{
	v->a[45380] = anon_sym_LT_AMP;
	v->a[45381] = anon_sym_GT_AMP;
	v->a[45382] = anon_sym_GT_PIPE;
	v->a[45383] = anon_sym_LT_AMP_DASH;
	v->a[45384] = anon_sym_GT_AMP_DASH;
	v->a[45385] = anon_sym_LT_LT_DASH;
	v->a[45386] = anon_sym_LT_LT_LT;
	v->a[45387] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45388] = anon_sym_DOLLAR_LBRACK;
	v->a[45389] = anon_sym_DOLLAR;
	v->a[45390] = sym__special_character;
	v->a[45391] = anon_sym_DQUOTE;
	v->a[45392] = sym_raw_string;
	v->a[45393] = sym_ansi_c_string;
	v->a[45394] = aux_sym_number_token1;
	v->a[45395] = aux_sym_number_token2;
	v->a[45396] = anon_sym_DOLLAR_LBRACE;
	v->a[45397] = anon_sym_DOLLAR_LPAREN;
	v->a[45398] = anon_sym_BQUOTE;
	v->a[45399] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2270(v);
}

/* EOF small_parse_table_453.c */
