/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_313.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1565(t_small_parse_table_array *v)
{
	v->a[31300] = anon_sym_LT;
	v->a[31301] = anon_sym_GT;
	v->a[31302] = anon_sym_LT_LT;
	v->a[31303] = anon_sym_GT_GT;
	v->a[31304] = anon_sym_esac;
	v->a[31305] = anon_sym_SEMI_SEMI;
	v->a[31306] = anon_sym_SEMI_AMP;
	v->a[31307] = anon_sym_SEMI_SEMI_AMP;
	v->a[31308] = anon_sym_PIPE_AMP;
	v->a[31309] = anon_sym_EQ_TILDE;
	v->a[31310] = anon_sym_AMP_GT;
	v->a[31311] = anon_sym_AMP_GT_GT;
	v->a[31312] = anon_sym_LT_AMP;
	v->a[31313] = anon_sym_GT_AMP;
	v->a[31314] = anon_sym_GT_PIPE;
	v->a[31315] = anon_sym_LT_AMP_DASH;
	v->a[31316] = anon_sym_GT_AMP_DASH;
	v->a[31317] = anon_sym_LT_LT_DASH;
	v->a[31318] = anon_sym_LT_LT_LT;
	v->a[31319] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1566(v);
}

void	small_parse_table_1566(t_small_parse_table_array *v)
{
	v->a[31320] = anon_sym_DOLLAR_LBRACK;
	v->a[31321] = anon_sym_DOLLAR;
	v->a[31322] = sym__special_character;
	v->a[31323] = anon_sym_DQUOTE;
	v->a[31324] = sym_raw_string;
	v->a[31325] = sym_ansi_c_string;
	v->a[31326] = aux_sym_number_token1;
	v->a[31327] = aux_sym_number_token2;
	v->a[31328] = anon_sym_DOLLAR_LBRACE;
	v->a[31329] = anon_sym_DOLLAR_LPAREN;
	v->a[31330] = anon_sym_BQUOTE;
	v->a[31331] = anon_sym_DOLLAR_BQUOTE;
	v->a[31332] = anon_sym_LT_LPAREN;
	v->a[31333] = anon_sym_GT_LPAREN;
	v->a[31334] = sym_word;
	v->a[31335] = 8;
	v->a[31336] = actions(3);
	v->a[31337] = 1;
	v->a[31338] = sym_comment;
	v->a[31339] = actions(4558);
	small_parse_table_1567(v);
}

void	small_parse_table_1567(t_small_parse_table_array *v)
{
	v->a[31340] = 1;
	v->a[31341] = anon_sym_DQUOTE;
	v->a[31342] = actions(4562);
	v->a[31343] = 1;
	v->a[31344] = sym_variable_name;
	v->a[31345] = state(2447);
	v->a[31346] = 1;
	v->a[31347] = sym_string;
	v->a[31348] = actions(4560);
	v->a[31349] = 2;
	v->a[31350] = aux_sym__simple_variable_name_token1;
	v->a[31351] = aux_sym__multiline_variable_name_token1;
	v->a[31352] = actions(1241);
	v->a[31353] = 3;
	v->a[31354] = sym_file_descriptor;
	v->a[31355] = sym_test_operator;
	v->a[31356] = sym__brace_start;
	v->a[31357] = actions(4556);
	v->a[31358] = 9;
	v->a[31359] = anon_sym_DASH;
	small_parse_table_1568(v);
}

void	small_parse_table_1568(t_small_parse_table_array *v)
{
	v->a[31360] = anon_sym_STAR;
	v->a[31361] = anon_sym_BANG;
	v->a[31362] = anon_sym_QMARK;
	v->a[31363] = anon_sym_DOLLAR;
	v->a[31364] = anon_sym_POUND;
	v->a[31365] = anon_sym_AT2;
	v->a[31366] = anon_sym_0;
	v->a[31367] = anon_sym__;
	v->a[31368] = actions(1239);
	v->a[31369] = 33;
	v->a[31370] = anon_sym_LPAREN_LPAREN;
	v->a[31371] = anon_sym_PIPE_PIPE;
	v->a[31372] = anon_sym_AMP_AMP;
	v->a[31373] = anon_sym_PIPE;
	v->a[31374] = anon_sym_LT;
	v->a[31375] = anon_sym_GT;
	v->a[31376] = anon_sym_LT_LT;
	v->a[31377] = anon_sym_GT_GT;
	v->a[31378] = anon_sym_PIPE_AMP;
	v->a[31379] = anon_sym_RBRACK;
	small_parse_table_1569(v);
}

void	small_parse_table_1569(t_small_parse_table_array *v)
{
	v->a[31380] = anon_sym_AMP_GT;
	v->a[31381] = anon_sym_AMP_GT_GT;
	v->a[31382] = anon_sym_LT_AMP;
	v->a[31383] = anon_sym_GT_AMP;
	v->a[31384] = anon_sym_GT_PIPE;
	v->a[31385] = anon_sym_LT_AMP_DASH;
	v->a[31386] = anon_sym_GT_AMP_DASH;
	v->a[31387] = anon_sym_LT_LT_DASH;
	v->a[31388] = anon_sym_LT_LT_LT;
	v->a[31389] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31390] = anon_sym_DOLLAR_LBRACK;
	v->a[31391] = sym__special_character;
	v->a[31392] = sym_raw_string;
	v->a[31393] = sym_ansi_c_string;
	v->a[31394] = aux_sym_number_token1;
	v->a[31395] = aux_sym_number_token2;
	v->a[31396] = anon_sym_DOLLAR_LBRACE;
	v->a[31397] = anon_sym_DOLLAR_LPAREN;
	v->a[31398] = anon_sym_BQUOTE;
	v->a[31399] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1570(v);
}

/* EOF small_parse_table_313.c */
