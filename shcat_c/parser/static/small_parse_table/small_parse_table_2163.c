/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2163.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10815(t_small_parse_table_array *v)
{
	v->a[216300] = sym_string;
	v->a[216301] = sym_translated_string;
	v->a[216302] = sym_number;
	v->a[216303] = sym_simple_expansion;
	v->a[216304] = sym_expansion;
	v->a[216305] = sym_command_substitution;
	v->a[216306] = sym_process_substitution;
	v->a[216307] = 18;
	v->a[216308] = actions(3);
	v->a[216309] = 1;
	v->a[216310] = sym_comment;
	v->a[216311] = actions(5261);
	v->a[216312] = 1;
	v->a[216313] = anon_sym_DOLLAR_LBRACK;
	v->a[216314] = actions(5263);
	v->a[216315] = 1;
	v->a[216316] = anon_sym_DOLLAR;
	v->a[216317] = actions(5267);
	v->a[216318] = 1;
	v->a[216319] = anon_sym_DQUOTE;
	small_parse_table_10816(v);
}

void	small_parse_table_10816(t_small_parse_table_array *v)
{
	v->a[216320] = actions(5271);
	v->a[216321] = 1;
	v->a[216322] = aux_sym_number_token1;
	v->a[216323] = actions(5273);
	v->a[216324] = 1;
	v->a[216325] = aux_sym_number_token2;
	v->a[216326] = actions(5275);
	v->a[216327] = 1;
	v->a[216328] = anon_sym_DOLLAR_LBRACE;
	v->a[216329] = actions(5277);
	v->a[216330] = 1;
	v->a[216331] = anon_sym_DOLLAR_LPAREN;
	v->a[216332] = actions(5279);
	v->a[216333] = 1;
	v->a[216334] = anon_sym_BQUOTE;
	v->a[216335] = actions(5281);
	v->a[216336] = 1;
	v->a[216337] = anon_sym_DOLLAR_BQUOTE;
	v->a[216338] = actions(5287);
	v->a[216339] = 1;
	small_parse_table_10817(v);
}

void	small_parse_table_10817(t_small_parse_table_array *v)
{
	v->a[216340] = sym__brace_start;
	v->a[216341] = actions(9472);
	v->a[216342] = 1;
	v->a[216343] = sym_word;
	v->a[216344] = actions(9480);
	v->a[216345] = 1;
	v->a[216346] = sym__comment_word;
	v->a[216347] = actions(5259);
	v->a[216348] = 2;
	v->a[216349] = anon_sym_LPAREN_LPAREN;
	v->a[216350] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[216351] = actions(5283);
	v->a[216352] = 2;
	v->a[216353] = anon_sym_LT_LPAREN;
	v->a[216354] = anon_sym_GT_LPAREN;
	v->a[216355] = actions(9476);
	v->a[216356] = 2;
	v->a[216357] = sym_test_operator;
	v->a[216358] = sym__special_character;
	v->a[216359] = actions(9478);
	small_parse_table_10818(v);
}

void	small_parse_table_10818(t_small_parse_table_array *v)
{
	v->a[216360] = 3;
	v->a[216361] = sym__bare_dollar;
	v->a[216362] = sym_raw_string;
	v->a[216363] = sym_ansi_c_string;
	v->a[216364] = state(5440);
	v->a[216365] = 9;
	v->a[216366] = sym_arithmetic_expansion;
	v->a[216367] = sym_brace_expression;
	v->a[216368] = sym_string;
	v->a[216369] = sym_translated_string;
	v->a[216370] = sym_number;
	v->a[216371] = sym_simple_expansion;
	v->a[216372] = sym_expansion;
	v->a[216373] = sym_command_substitution;
	v->a[216374] = sym_process_substitution;
	v->a[216375] = 18;
	v->a[216376] = actions(3);
	v->a[216377] = 1;
	v->a[216378] = sym_comment;
	v->a[216379] = actions(8102);
	small_parse_table_10819(v);
}

void	small_parse_table_10819(t_small_parse_table_array *v)
{
	v->a[216380] = 1;
	v->a[216381] = anon_sym_DOLLAR_LBRACK;
	v->a[216382] = actions(8104);
	v->a[216383] = 1;
	v->a[216384] = anon_sym_DOLLAR;
	v->a[216385] = actions(8108);
	v->a[216386] = 1;
	v->a[216387] = anon_sym_DQUOTE;
	v->a[216388] = actions(8112);
	v->a[216389] = 1;
	v->a[216390] = aux_sym_number_token1;
	v->a[216391] = actions(8114);
	v->a[216392] = 1;
	v->a[216393] = aux_sym_number_token2;
	v->a[216394] = actions(8116);
	v->a[216395] = 1;
	v->a[216396] = anon_sym_DOLLAR_LBRACE;
	v->a[216397] = actions(8118);
	v->a[216398] = 1;
	v->a[216399] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_10820(v);
}

/* EOF small_parse_table_2163.c */
