/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_443.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2215(t_small_parse_table_array *v)
{
	v->a[44300] = anon_sym_DOLLAR_LBRACE;
	v->a[44301] = anon_sym_DOLLAR_LPAREN;
	v->a[44302] = anon_sym_BQUOTE;
	v->a[44303] = anon_sym_DOLLAR_BQUOTE;
	v->a[44304] = anon_sym_LT_LPAREN;
	v->a[44305] = anon_sym_GT_LPAREN;
	v->a[44306] = sym_word;
	v->a[44307] = 22;
	v->a[44308] = actions(71);
	v->a[44309] = 1;
	v->a[44310] = sym_comment;
	v->a[44311] = actions(5188);
	v->a[44312] = 1;
	v->a[44313] = sym_word;
	v->a[44314] = actions(5194);
	v->a[44315] = 1;
	v->a[44316] = anon_sym_DOLLAR_LBRACK;
	v->a[44317] = actions(5197);
	v->a[44318] = 1;
	v->a[44319] = anon_sym_DOLLAR;
	small_parse_table_2216(v);
}

void	small_parse_table_2216(t_small_parse_table_array *v)
{
	v->a[44320] = actions(5200);
	v->a[44321] = 1;
	v->a[44322] = sym__special_character;
	v->a[44323] = actions(5203);
	v->a[44324] = 1;
	v->a[44325] = anon_sym_DQUOTE;
	v->a[44326] = actions(5209);
	v->a[44327] = 1;
	v->a[44328] = aux_sym_number_token1;
	v->a[44329] = actions(5212);
	v->a[44330] = 1;
	v->a[44331] = aux_sym_number_token2;
	v->a[44332] = actions(5215);
	v->a[44333] = 1;
	v->a[44334] = anon_sym_DOLLAR_LBRACE;
	v->a[44335] = actions(5218);
	v->a[44336] = 1;
	v->a[44337] = anon_sym_DOLLAR_LPAREN;
	v->a[44338] = actions(5221);
	v->a[44339] = 1;
	small_parse_table_2217(v);
}

void	small_parse_table_2217(t_small_parse_table_array *v)
{
	v->a[44340] = anon_sym_BQUOTE;
	v->a[44341] = actions(5224);
	v->a[44342] = 1;
	v->a[44343] = anon_sym_DOLLAR_BQUOTE;
	v->a[44344] = actions(5230);
	v->a[44345] = 1;
	v->a[44346] = sym_test_operator;
	v->a[44347] = actions(5233);
	v->a[44348] = 1;
	v->a[44349] = sym__brace_start;
	v->a[44350] = state(3114);
	v->a[44351] = 1;
	v->a[44352] = aux_sym__literal_repeat1;
	v->a[44353] = actions(5191);
	v->a[44354] = 2;
	v->a[44355] = anon_sym_LPAREN_LPAREN;
	v->a[44356] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44357] = actions(5206);
	v->a[44358] = 2;
	v->a[44359] = sym_raw_string;
	small_parse_table_2218(v);
}

void	small_parse_table_2218(t_small_parse_table_array *v)
{
	v->a[44360] = sym_ansi_c_string;
	v->a[44361] = actions(5227);
	v->a[44362] = 2;
	v->a[44363] = anon_sym_LT_LPAREN;
	v->a[44364] = anon_sym_GT_LPAREN;
	v->a[44365] = state(1075);
	v->a[44366] = 2;
	v->a[44367] = sym_concatenation;
	v->a[44368] = aux_sym_for_statement_repeat1;
	v->a[44369] = actions(2214);
	v->a[44370] = 7;
	v->a[44371] = anon_sym_PIPE;
	v->a[44372] = anon_sym_LT;
	v->a[44373] = anon_sym_GT;
	v->a[44374] = anon_sym_LT_LT;
	v->a[44375] = anon_sym_AMP_GT;
	v->a[44376] = anon_sym_LT_AMP;
	v->a[44377] = anon_sym_GT_AMP;
	v->a[44378] = state(2613);
	v->a[44379] = 9;
	small_parse_table_2219(v);
}

void	small_parse_table_2219(t_small_parse_table_array *v)
{
	v->a[44380] = sym_arithmetic_expansion;
	v->a[44381] = sym_brace_expression;
	v->a[44382] = sym_string;
	v->a[44383] = sym_translated_string;
	v->a[44384] = sym_number;
	v->a[44385] = sym_simple_expansion;
	v->a[44386] = sym_expansion;
	v->a[44387] = sym_command_substitution;
	v->a[44388] = sym_process_substitution;
	v->a[44389] = actions(2216);
	v->a[44390] = 10;
	v->a[44391] = sym_file_descriptor;
	v->a[44392] = anon_sym_PIPE_PIPE;
	v->a[44393] = anon_sym_AMP_AMP;
	v->a[44394] = anon_sym_GT_GT;
	v->a[44395] = anon_sym_PIPE_AMP;
	v->a[44396] = anon_sym_AMP_GT_GT;
	v->a[44397] = anon_sym_GT_PIPE;
	v->a[44398] = anon_sym_LT_AMP_DASH;
	v->a[44399] = anon_sym_GT_AMP_DASH;
	small_parse_table_2220(v);
}

/* EOF small_parse_table_443.c */
