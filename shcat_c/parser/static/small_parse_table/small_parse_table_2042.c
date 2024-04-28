/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2042.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10210(t_small_parse_table_array *v)
{
	v->a[204200] = 1;
	v->a[204201] = anon_sym_DOLLAR_BQUOTE;
	v->a[204202] = actions(5341);
	v->a[204203] = 1;
	v->a[204204] = sym__brace_start;
	v->a[204205] = actions(9350);
	v->a[204206] = 1;
	v->a[204207] = sym__special_character;
	v->a[204208] = actions(9450);
	v->a[204209] = 1;
	v->a[204210] = sym_word;
	v->a[204211] = actions(9454);
	v->a[204212] = 1;
	v->a[204213] = sym_test_operator;
	v->a[204214] = state(5447);
	v->a[204215] = 1;
	v->a[204216] = aux_sym__literal_repeat1;
	v->a[204217] = state(5549);
	v->a[204218] = 1;
	v->a[204219] = sym_concatenation;
	small_parse_table_10211(v);
}

void	small_parse_table_10211(t_small_parse_table_array *v)
{
	v->a[204220] = actions(5313);
	v->a[204221] = 2;
	v->a[204222] = anon_sym_LPAREN_LPAREN;
	v->a[204223] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[204224] = actions(5337);
	v->a[204225] = 2;
	v->a[204226] = anon_sym_LT_LPAREN;
	v->a[204227] = anon_sym_GT_LPAREN;
	v->a[204228] = actions(9452);
	v->a[204229] = 2;
	v->a[204230] = sym_raw_string;
	v->a[204231] = sym_ansi_c_string;
	v->a[204232] = state(5278);
	v->a[204233] = 9;
	v->a[204234] = sym_arithmetic_expansion;
	v->a[204235] = sym_brace_expression;
	v->a[204236] = sym_string;
	v->a[204237] = sym_translated_string;
	v->a[204238] = sym_number;
	v->a[204239] = sym_simple_expansion;
	small_parse_table_10212(v);
}

void	small_parse_table_10212(t_small_parse_table_array *v)
{
	v->a[204240] = sym_expansion;
	v->a[204241] = sym_command_substitution;
	v->a[204242] = sym_process_substitution;
	v->a[204243] = 18;
	v->a[204244] = actions(3);
	v->a[204245] = 1;
	v->a[204246] = sym_comment;
	v->a[204247] = actions(4086);
	v->a[204248] = 1;
	v->a[204249] = aux_sym_number_token1;
	v->a[204250] = actions(4088);
	v->a[204251] = 1;
	v->a[204252] = aux_sym_number_token2;
	v->a[204253] = actions(4092);
	v->a[204254] = 1;
	v->a[204255] = anon_sym_DOLLAR_LPAREN;
	v->a[204256] = actions(4102);
	v->a[204257] = 1;
	v->a[204258] = sym__brace_start;
	v->a[204259] = actions(9306);
	small_parse_table_10213(v);
}

void	small_parse_table_10213(t_small_parse_table_array *v)
{
	v->a[204260] = 1;
	v->a[204261] = sym_word;
	v->a[204262] = actions(9310);
	v->a[204263] = 1;
	v->a[204264] = anon_sym_DOLLAR_LBRACK;
	v->a[204265] = actions(9316);
	v->a[204266] = 1;
	v->a[204267] = anon_sym_DQUOTE;
	v->a[204268] = actions(9320);
	v->a[204269] = 1;
	v->a[204270] = anon_sym_DOLLAR_LBRACE;
	v->a[204271] = actions(9322);
	v->a[204272] = 1;
	v->a[204273] = anon_sym_BQUOTE;
	v->a[204274] = actions(9324);
	v->a[204275] = 1;
	v->a[204276] = anon_sym_DOLLAR_BQUOTE;
	v->a[204277] = actions(9328);
	v->a[204278] = 1;
	v->a[204279] = sym__comment_word;
	small_parse_table_10214(v);
}

void	small_parse_table_10214(t_small_parse_table_array *v)
{
	v->a[204280] = actions(9456);
	v->a[204281] = 1;
	v->a[204282] = anon_sym_DOLLAR;
	v->a[204283] = actions(9308);
	v->a[204284] = 2;
	v->a[204285] = anon_sym_LPAREN_LPAREN;
	v->a[204286] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[204287] = actions(9314);
	v->a[204288] = 2;
	v->a[204289] = sym_test_operator;
	v->a[204290] = sym__special_character;
	v->a[204291] = actions(9326);
	v->a[204292] = 2;
	v->a[204293] = anon_sym_LT_LPAREN;
	v->a[204294] = anon_sym_GT_LPAREN;
	v->a[204295] = actions(9318);
	v->a[204296] = 3;
	v->a[204297] = sym__bare_dollar;
	v->a[204298] = sym_raw_string;
	v->a[204299] = sym_ansi_c_string;
	small_parse_table_10215(v);
}

/* EOF small_parse_table_2042.c */
