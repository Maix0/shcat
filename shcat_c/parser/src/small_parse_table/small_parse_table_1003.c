/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1003.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5015(t_small_parse_table_array *v)
{
	v->a[100300] = 1;
	v->a[100301] = anon_sym_BQUOTE;
	v->a[100302] = state(2484);
	v->a[100303] = 1;
	v->a[100304] = aux_sym__literal_repeat1;
	v->a[100305] = state(3332);
	v->a[100306] = 1;
	v->a[100307] = sym__expression;
	v->a[100308] = actions(1129);
	v->a[100309] = 2;
	v->a[100310] = anon_sym_LPAREN_LPAREN;
	v->a[100311] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100312] = actions(1165);
	v->a[100313] = 2;
	v->a[100314] = anon_sym_LT_LPAREN;
	v->a[100315] = anon_sym_GT_LPAREN;
	v->a[100316] = actions(1215);
	v->a[100317] = 2;
	v->a[100318] = anon_sym_PLUS_PLUS2;
	v->a[100319] = anon_sym_DASH_DASH2;
	small_parse_table_5016(v);
}

void	small_parse_table_5016(t_small_parse_table_array *v)
{
	v->a[100320] = actions(1217);
	v->a[100321] = 2;
	v->a[100322] = anon_sym_DASH2;
	v->a[100323] = anon_sym_PLUS2;
	v->a[100324] = actions(1223);
	v->a[100325] = 2;
	v->a[100326] = sym_raw_string;
	v->a[100327] = sym_ansi_c_string;
	v->a[100328] = state(2594);
	v->a[100329] = 6;
	v->a[100330] = sym_binary_expression;
	v->a[100331] = sym_ternary_expression;
	v->a[100332] = sym_unary_expression;
	v->a[100333] = sym_postfix_expression;
	v->a[100334] = sym_parenthesized_expression;
	v->a[100335] = sym_concatenation;
	v->a[100336] = state(2588);
	v->a[100337] = 9;
	v->a[100338] = sym_arithmetic_expansion;
	v->a[100339] = sym_brace_expression;
	small_parse_table_5017(v);
}

void	small_parse_table_5017(t_small_parse_table_array *v)
{
	v->a[100340] = sym_string;
	v->a[100341] = sym_translated_string;
	v->a[100342] = sym_number;
	v->a[100343] = sym_simple_expansion;
	v->a[100344] = sym_expansion;
	v->a[100345] = sym_command_substitution;
	v->a[100346] = sym_process_substitution;
	v->a[100347] = 3;
	v->a[100348] = actions(3);
	v->a[100349] = 1;
	v->a[100350] = sym_comment;
	v->a[100351] = actions(1310);
	v->a[100352] = 5;
	v->a[100353] = sym_file_descriptor;
	v->a[100354] = sym__concat;
	v->a[100355] = sym_test_operator;
	v->a[100356] = sym__brace_start;
	v->a[100357] = aux_sym_heredoc_redirect_token1;
	v->a[100358] = actions(1308);
	v->a[100359] = 38;
	small_parse_table_5018(v);
}

void	small_parse_table_5018(t_small_parse_table_array *v)
{
	v->a[100360] = anon_sym_LPAREN_LPAREN;
	v->a[100361] = anon_sym_SEMI;
	v->a[100362] = anon_sym_PIPE_PIPE;
	v->a[100363] = anon_sym_AMP_AMP;
	v->a[100364] = anon_sym_PIPE;
	v->a[100365] = anon_sym_AMP;
	v->a[100366] = anon_sym_LT;
	v->a[100367] = anon_sym_GT;
	v->a[100368] = anon_sym_LT_LT;
	v->a[100369] = anon_sym_GT_GT;
	v->a[100370] = anon_sym_RPAREN;
	v->a[100371] = anon_sym_SEMI_SEMI;
	v->a[100372] = anon_sym_PIPE_AMP;
	v->a[100373] = anon_sym_AMP_GT;
	v->a[100374] = anon_sym_AMP_GT_GT;
	v->a[100375] = anon_sym_LT_AMP;
	v->a[100376] = anon_sym_GT_AMP;
	v->a[100377] = anon_sym_GT_PIPE;
	v->a[100378] = anon_sym_LT_AMP_DASH;
	v->a[100379] = anon_sym_GT_AMP_DASH;
	small_parse_table_5019(v);
}

void	small_parse_table_5019(t_small_parse_table_array *v)
{
	v->a[100380] = anon_sym_LT_LT_DASH;
	v->a[100381] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100382] = anon_sym_DOLLAR_LBRACK;
	v->a[100383] = aux_sym_concatenation_token1;
	v->a[100384] = anon_sym_DOLLAR;
	v->a[100385] = sym__special_character;
	v->a[100386] = anon_sym_DQUOTE;
	v->a[100387] = sym_raw_string;
	v->a[100388] = sym_ansi_c_string;
	v->a[100389] = aux_sym_number_token1;
	v->a[100390] = aux_sym_number_token2;
	v->a[100391] = anon_sym_DOLLAR_LBRACE;
	v->a[100392] = anon_sym_DOLLAR_LPAREN;
	v->a[100393] = anon_sym_BQUOTE;
	v->a[100394] = anon_sym_DOLLAR_BQUOTE;
	v->a[100395] = anon_sym_LT_LPAREN;
	v->a[100396] = anon_sym_GT_LPAREN;
	v->a[100397] = sym_word;
	v->a[100398] = 26;
	v->a[100399] = actions(71);
	small_parse_table_5020(v);
}

/* EOF small_parse_table_1003.c */
