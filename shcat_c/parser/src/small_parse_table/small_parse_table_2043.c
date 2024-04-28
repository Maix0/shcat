/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2043.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10215(t_small_parse_table_array *v)
{
	v->a[204300] = state(4566);
	v->a[204301] = 9;
	v->a[204302] = sym_arithmetic_expansion;
	v->a[204303] = sym_brace_expression;
	v->a[204304] = sym_string;
	v->a[204305] = sym_translated_string;
	v->a[204306] = sym_number;
	v->a[204307] = sym_simple_expansion;
	v->a[204308] = sym_expansion;
	v->a[204309] = sym_command_substitution;
	v->a[204310] = sym_process_substitution;
	v->a[204311] = 20;
	v->a[204312] = actions(71);
	v->a[204313] = 1;
	v->a[204314] = sym_comment;
	v->a[204315] = actions(4767);
	v->a[204316] = 1;
	v->a[204317] = anon_sym_DOLLAR_LBRACK;
	v->a[204318] = actions(4769);
	v->a[204319] = 1;
	small_parse_table_10216(v);
}

void	small_parse_table_10216(t_small_parse_table_array *v)
{
	v->a[204320] = anon_sym_DOLLAR;
	v->a[204321] = actions(4773);
	v->a[204322] = 1;
	v->a[204323] = anon_sym_DQUOTE;
	v->a[204324] = actions(4777);
	v->a[204325] = 1;
	v->a[204326] = aux_sym_number_token1;
	v->a[204327] = actions(4779);
	v->a[204328] = 1;
	v->a[204329] = aux_sym_number_token2;
	v->a[204330] = actions(4781);
	v->a[204331] = 1;
	v->a[204332] = anon_sym_DOLLAR_LBRACE;
	v->a[204333] = actions(4783);
	v->a[204334] = 1;
	v->a[204335] = anon_sym_DOLLAR_LPAREN;
	v->a[204336] = actions(4785);
	v->a[204337] = 1;
	v->a[204338] = anon_sym_BQUOTE;
	v->a[204339] = actions(4787);
	small_parse_table_10217(v);
}

void	small_parse_table_10217(t_small_parse_table_array *v)
{
	v->a[204340] = 1;
	v->a[204341] = anon_sym_DOLLAR_BQUOTE;
	v->a[204342] = actions(4793);
	v->a[204343] = 1;
	v->a[204344] = sym__brace_start;
	v->a[204345] = actions(9436);
	v->a[204346] = 1;
	v->a[204347] = sym__special_character;
	v->a[204348] = actions(9458);
	v->a[204349] = 1;
	v->a[204350] = sym_word;
	v->a[204351] = actions(9462);
	v->a[204352] = 1;
	v->a[204353] = sym_test_operator;
	v->a[204354] = state(5292);
	v->a[204355] = 1;
	v->a[204356] = aux_sym__literal_repeat1;
	v->a[204357] = state(5526);
	v->a[204358] = 1;
	v->a[204359] = sym_concatenation;
	small_parse_table_10218(v);
}

void	small_parse_table_10218(t_small_parse_table_array *v)
{
	v->a[204360] = actions(4765);
	v->a[204361] = 2;
	v->a[204362] = anon_sym_LPAREN_LPAREN;
	v->a[204363] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[204364] = actions(4789);
	v->a[204365] = 2;
	v->a[204366] = anon_sym_LT_LPAREN;
	v->a[204367] = anon_sym_GT_LPAREN;
	v->a[204368] = actions(9460);
	v->a[204369] = 2;
	v->a[204370] = sym_raw_string;
	v->a[204371] = sym_ansi_c_string;
	v->a[204372] = state(5140);
	v->a[204373] = 9;
	v->a[204374] = sym_arithmetic_expansion;
	v->a[204375] = sym_brace_expression;
	v->a[204376] = sym_string;
	v->a[204377] = sym_translated_string;
	v->a[204378] = sym_number;
	v->a[204379] = sym_simple_expansion;
	small_parse_table_10219(v);
}

void	small_parse_table_10219(t_small_parse_table_array *v)
{
	v->a[204380] = sym_expansion;
	v->a[204381] = sym_command_substitution;
	v->a[204382] = sym_process_substitution;
	v->a[204383] = 20;
	v->a[204384] = actions(71);
	v->a[204385] = 1;
	v->a[204386] = sym_comment;
	v->a[204387] = actions(1551);
	v->a[204388] = 1;
	v->a[204389] = anon_sym_DOLLAR;
	v->a[204390] = actions(1557);
	v->a[204391] = 1;
	v->a[204392] = aux_sym_number_token1;
	v->a[204393] = actions(1559);
	v->a[204394] = 1;
	v->a[204395] = aux_sym_number_token2;
	v->a[204396] = actions(1563);
	v->a[204397] = 1;
	v->a[204398] = anon_sym_DOLLAR_LPAREN;
	v->a[204399] = actions(1575);
	small_parse_table_10220(v);
}

/* EOF small_parse_table_2043.c */
