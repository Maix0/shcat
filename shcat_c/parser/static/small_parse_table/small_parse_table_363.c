/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_363.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1815(t_small_parse_table_array *v)
{
	v->a[36300] = aux_sym_number_token2;
	v->a[36301] = anon_sym_DOLLAR_LBRACE;
	v->a[36302] = anon_sym_DOLLAR_LPAREN;
	v->a[36303] = anon_sym_BQUOTE;
	v->a[36304] = anon_sym_DOLLAR_BQUOTE;
	v->a[36305] = anon_sym_LT_LPAREN;
	v->a[36306] = anon_sym_GT_LPAREN;
	v->a[36307] = sym_word;
	v->a[36308] = 8;
	v->a[36309] = actions(3);
	v->a[36310] = 1;
	v->a[36311] = sym_comment;
	v->a[36312] = actions(4857);
	v->a[36313] = 1;
	v->a[36314] = anon_sym_DQUOTE;
	v->a[36315] = actions(4861);
	v->a[36316] = 1;
	v->a[36317] = sym_variable_name;
	v->a[36318] = state(2638);
	v->a[36319] = 1;
	small_parse_table_1816(v);
}

void	small_parse_table_1816(t_small_parse_table_array *v)
{
	v->a[36320] = sym_string;
	v->a[36321] = actions(4859);
	v->a[36322] = 2;
	v->a[36323] = aux_sym__simple_variable_name_token1;
	v->a[36324] = aux_sym__multiline_variable_name_token1;
	v->a[36325] = actions(1235);
	v->a[36326] = 3;
	v->a[36327] = sym_file_descriptor;
	v->a[36328] = sym_test_operator;
	v->a[36329] = sym__brace_start;
	v->a[36330] = actions(4855);
	v->a[36331] = 9;
	v->a[36332] = anon_sym_DASH;
	v->a[36333] = anon_sym_STAR;
	v->a[36334] = anon_sym_BANG;
	v->a[36335] = anon_sym_QMARK;
	v->a[36336] = anon_sym_DOLLAR;
	v->a[36337] = anon_sym_POUND;
	v->a[36338] = anon_sym_AT2;
	v->a[36339] = anon_sym_0;
	small_parse_table_1817(v);
}

void	small_parse_table_1817(t_small_parse_table_array *v)
{
	v->a[36340] = anon_sym__;
	v->a[36341] = actions(1227);
	v->a[36342] = 32;
	v->a[36343] = anon_sym_LPAREN_LPAREN;
	v->a[36344] = anon_sym_PIPE_PIPE;
	v->a[36345] = anon_sym_AMP_AMP;
	v->a[36346] = anon_sym_PIPE;
	v->a[36347] = anon_sym_LT;
	v->a[36348] = anon_sym_GT;
	v->a[36349] = anon_sym_LT_LT;
	v->a[36350] = anon_sym_GT_GT;
	v->a[36351] = anon_sym_PIPE_AMP;
	v->a[36352] = anon_sym_AMP_GT;
	v->a[36353] = anon_sym_AMP_GT_GT;
	v->a[36354] = anon_sym_LT_AMP;
	v->a[36355] = anon_sym_GT_AMP;
	v->a[36356] = anon_sym_GT_PIPE;
	v->a[36357] = anon_sym_LT_AMP_DASH;
	v->a[36358] = anon_sym_GT_AMP_DASH;
	v->a[36359] = anon_sym_LT_LT_DASH;
	small_parse_table_1818(v);
}

void	small_parse_table_1818(t_small_parse_table_array *v)
{
	v->a[36360] = anon_sym_LT_LT_LT;
	v->a[36361] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36362] = anon_sym_DOLLAR_LBRACK;
	v->a[36363] = sym__special_character;
	v->a[36364] = sym_raw_string;
	v->a[36365] = sym_ansi_c_string;
	v->a[36366] = aux_sym_number_token1;
	v->a[36367] = aux_sym_number_token2;
	v->a[36368] = anon_sym_DOLLAR_LBRACE;
	v->a[36369] = anon_sym_DOLLAR_LPAREN;
	v->a[36370] = anon_sym_BQUOTE;
	v->a[36371] = anon_sym_DOLLAR_BQUOTE;
	v->a[36372] = anon_sym_LT_LPAREN;
	v->a[36373] = anon_sym_GT_LPAREN;
	v->a[36374] = sym_word;
	v->a[36375] = 8;
	v->a[36376] = actions(3);
	v->a[36377] = 1;
	v->a[36378] = sym_comment;
	v->a[36379] = actions(4857);
	small_parse_table_1819(v);
}

void	small_parse_table_1819(t_small_parse_table_array *v)
{
	v->a[36380] = 1;
	v->a[36381] = anon_sym_DQUOTE;
	v->a[36382] = actions(4861);
	v->a[36383] = 1;
	v->a[36384] = sym_variable_name;
	v->a[36385] = state(2638);
	v->a[36386] = 1;
	v->a[36387] = sym_string;
	v->a[36388] = actions(4859);
	v->a[36389] = 2;
	v->a[36390] = aux_sym__simple_variable_name_token1;
	v->a[36391] = aux_sym__multiline_variable_name_token1;
	v->a[36392] = actions(1241);
	v->a[36393] = 3;
	v->a[36394] = sym_file_descriptor;
	v->a[36395] = sym_test_operator;
	v->a[36396] = sym__brace_start;
	v->a[36397] = actions(4855);
	v->a[36398] = 9;
	v->a[36399] = anon_sym_DASH;
	small_parse_table_1820(v);
}

/* EOF small_parse_table_363.c */
