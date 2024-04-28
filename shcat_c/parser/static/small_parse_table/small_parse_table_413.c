/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_413.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2065(t_small_parse_table_array *v)
{
	v->a[41300] = anon_sym_AMP_GT_GT;
	v->a[41301] = anon_sym_LT_AMP;
	v->a[41302] = anon_sym_GT_AMP;
	v->a[41303] = anon_sym_GT_PIPE;
	v->a[41304] = anon_sym_LT_AMP_DASH;
	v->a[41305] = anon_sym_GT_AMP_DASH;
	v->a[41306] = anon_sym_LT_LT_DASH;
	v->a[41307] = anon_sym_LT_LT_LT;
	v->a[41308] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41309] = anon_sym_DOLLAR_LBRACK;
	v->a[41310] = anon_sym_DOLLAR;
	v->a[41311] = anon_sym_DQUOTE;
	v->a[41312] = sym_raw_string;
	v->a[41313] = sym_ansi_c_string;
	v->a[41314] = aux_sym_number_token1;
	v->a[41315] = aux_sym_number_token2;
	v->a[41316] = anon_sym_DOLLAR_LBRACE;
	v->a[41317] = anon_sym_DOLLAR_LPAREN;
	v->a[41318] = anon_sym_BQUOTE;
	v->a[41319] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2066(v);
}

void	small_parse_table_2066(t_small_parse_table_array *v)
{
	v->a[41320] = anon_sym_LT_LPAREN;
	v->a[41321] = anon_sym_GT_LPAREN;
	v->a[41322] = sym_word;
	v->a[41323] = 3;
	v->a[41324] = actions(3);
	v->a[41325] = 1;
	v->a[41326] = sym_comment;
	v->a[41327] = actions(1334);
	v->a[41328] = 6;
	v->a[41329] = sym_file_descriptor;
	v->a[41330] = sym__concat;
	v->a[41331] = sym_test_operator;
	v->a[41332] = sym__bare_dollar;
	v->a[41333] = sym__brace_start;
	v->a[41334] = aux_sym_heredoc_redirect_token1;
	v->a[41335] = actions(1332);
	v->a[41336] = 42;
	v->a[41337] = anon_sym_LPAREN_LPAREN;
	v->a[41338] = anon_sym_SEMI;
	v->a[41339] = anon_sym_PIPE_PIPE;
	small_parse_table_2067(v);
}

void	small_parse_table_2067(t_small_parse_table_array *v)
{
	v->a[41340] = anon_sym_AMP_AMP;
	v->a[41341] = anon_sym_PIPE;
	v->a[41342] = anon_sym_AMP;
	v->a[41343] = anon_sym_EQ_EQ;
	v->a[41344] = anon_sym_LT;
	v->a[41345] = anon_sym_GT;
	v->a[41346] = anon_sym_LT_LT;
	v->a[41347] = anon_sym_GT_GT;
	v->a[41348] = anon_sym_LPAREN;
	v->a[41349] = anon_sym_RPAREN;
	v->a[41350] = anon_sym_SEMI_SEMI;
	v->a[41351] = anon_sym_PIPE_AMP;
	v->a[41352] = anon_sym_EQ_TILDE;
	v->a[41353] = anon_sym_AMP_GT;
	v->a[41354] = anon_sym_AMP_GT_GT;
	v->a[41355] = anon_sym_LT_AMP;
	v->a[41356] = anon_sym_GT_AMP;
	v->a[41357] = anon_sym_GT_PIPE;
	v->a[41358] = anon_sym_LT_AMP_DASH;
	v->a[41359] = anon_sym_GT_AMP_DASH;
	small_parse_table_2068(v);
}

void	small_parse_table_2068(t_small_parse_table_array *v)
{
	v->a[41360] = anon_sym_LT_LT_DASH;
	v->a[41361] = anon_sym_LT_LT_LT;
	v->a[41362] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41363] = anon_sym_DOLLAR_LBRACK;
	v->a[41364] = aux_sym_concatenation_token1;
	v->a[41365] = anon_sym_DOLLAR;
	v->a[41366] = sym__special_character;
	v->a[41367] = anon_sym_DQUOTE;
	v->a[41368] = sym_raw_string;
	v->a[41369] = sym_ansi_c_string;
	v->a[41370] = aux_sym_number_token1;
	v->a[41371] = aux_sym_number_token2;
	v->a[41372] = anon_sym_DOLLAR_LBRACE;
	v->a[41373] = anon_sym_DOLLAR_LPAREN;
	v->a[41374] = anon_sym_BQUOTE;
	v->a[41375] = anon_sym_DOLLAR_BQUOTE;
	v->a[41376] = anon_sym_LT_LPAREN;
	v->a[41377] = anon_sym_GT_LPAREN;
	v->a[41378] = sym_word;
	v->a[41379] = 9;
	small_parse_table_2069(v);
}

void	small_parse_table_2069(t_small_parse_table_array *v)
{
	v->a[41380] = actions(3);
	v->a[41381] = 1;
	v->a[41382] = sym_comment;
	v->a[41383] = actions(5094);
	v->a[41384] = 1;
	v->a[41385] = sym_variable_name;
	v->a[41386] = state(6758);
	v->a[41387] = 1;
	v->a[41388] = sym_subscript;
	v->a[41389] = actions(4261);
	v->a[41390] = 2;
	v->a[41391] = sym_test_operator;
	v->a[41392] = sym__brace_start;
	v->a[41393] = actions(4348);
	v->a[41394] = 2;
	v->a[41395] = sym_file_descriptor;
	v->a[41396] = aux_sym_heredoc_redirect_token1;
	v->a[41397] = state(4568);
	v->a[41398] = 2;
	v->a[41399] = sym_variable_assignment;
	small_parse_table_2070(v);
}

/* EOF small_parse_table_413.c */
