/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2052.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10260(t_small_parse_table_array *v)
{
	v->a[205200] = actions(4165);
	v->a[205201] = 1;
	v->a[205202] = anon_sym_DOLLAR_LBRACE;
	v->a[205203] = actions(4167);
	v->a[205204] = 1;
	v->a[205205] = anon_sym_DOLLAR_LPAREN;
	v->a[205206] = actions(4169);
	v->a[205207] = 1;
	v->a[205208] = anon_sym_BQUOTE;
	v->a[205209] = actions(4171);
	v->a[205210] = 1;
	v->a[205211] = anon_sym_DOLLAR_BQUOTE;
	v->a[205212] = actions(4181);
	v->a[205213] = 1;
	v->a[205214] = sym__brace_start;
	v->a[205215] = actions(9502);
	v->a[205216] = 1;
	v->a[205217] = sym_word;
	v->a[205218] = actions(9508);
	v->a[205219] = 1;
	small_parse_table_10261(v);
}

void	small_parse_table_10261(t_small_parse_table_array *v)
{
	v->a[205220] = sym__comment_word;
	v->a[205221] = actions(4149);
	v->a[205222] = 2;
	v->a[205223] = anon_sym_LPAREN_LPAREN;
	v->a[205224] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[205225] = actions(4173);
	v->a[205226] = 2;
	v->a[205227] = anon_sym_LT_LPAREN;
	v->a[205228] = anon_sym_GT_LPAREN;
	v->a[205229] = actions(9504);
	v->a[205230] = 2;
	v->a[205231] = sym_test_operator;
	v->a[205232] = sym__special_character;
	v->a[205233] = actions(9506);
	v->a[205234] = 3;
	v->a[205235] = sym__bare_dollar;
	v->a[205236] = sym_raw_string;
	v->a[205237] = sym_ansi_c_string;
	v->a[205238] = state(2580);
	v->a[205239] = 9;
	small_parse_table_10262(v);
}

void	small_parse_table_10262(t_small_parse_table_array *v)
{
	v->a[205240] = sym_arithmetic_expansion;
	v->a[205241] = sym_brace_expression;
	v->a[205242] = sym_string;
	v->a[205243] = sym_translated_string;
	v->a[205244] = sym_number;
	v->a[205245] = sym_simple_expansion;
	v->a[205246] = sym_expansion;
	v->a[205247] = sym_command_substitution;
	v->a[205248] = sym_process_substitution;
	v->a[205249] = 18;
	v->a[205250] = actions(3);
	v->a[205251] = 1;
	v->a[205252] = sym_comment;
	v->a[205253] = actions(1551);
	v->a[205254] = 1;
	v->a[205255] = anon_sym_DOLLAR;
	v->a[205256] = actions(1557);
	v->a[205257] = 1;
	v->a[205258] = aux_sym_number_token1;
	v->a[205259] = actions(1559);
	small_parse_table_10263(v);
}

void	small_parse_table_10263(t_small_parse_table_array *v)
{
	v->a[205260] = 1;
	v->a[205261] = aux_sym_number_token2;
	v->a[205262] = actions(1563);
	v->a[205263] = 1;
	v->a[205264] = anon_sym_DOLLAR_LPAREN;
	v->a[205265] = actions(1575);
	v->a[205266] = 1;
	v->a[205267] = sym__brace_start;
	v->a[205268] = actions(9198);
	v->a[205269] = 1;
	v->a[205270] = anon_sym_DOLLAR_LBRACK;
	v->a[205271] = actions(9202);
	v->a[205272] = 1;
	v->a[205273] = anon_sym_DQUOTE;
	v->a[205274] = actions(9206);
	v->a[205275] = 1;
	v->a[205276] = anon_sym_DOLLAR_LBRACE;
	v->a[205277] = actions(9208);
	v->a[205278] = 1;
	v->a[205279] = anon_sym_BQUOTE;
	small_parse_table_10264(v);
}

void	small_parse_table_10264(t_small_parse_table_array *v)
{
	v->a[205280] = actions(9210);
	v->a[205281] = 1;
	v->a[205282] = anon_sym_DOLLAR_BQUOTE;
	v->a[205283] = actions(9268);
	v->a[205284] = 1;
	v->a[205285] = sym_word;
	v->a[205286] = actions(9276);
	v->a[205287] = 1;
	v->a[205288] = sym__comment_word;
	v->a[205289] = actions(9196);
	v->a[205290] = 2;
	v->a[205291] = anon_sym_LPAREN_LPAREN;
	v->a[205292] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[205293] = actions(9212);
	v->a[205294] = 2;
	v->a[205295] = anon_sym_LT_LPAREN;
	v->a[205296] = anon_sym_GT_LPAREN;
	v->a[205297] = actions(9272);
	v->a[205298] = 2;
	v->a[205299] = sym_test_operator;
	small_parse_table_10265(v);
}

/* EOF small_parse_table_2052.c */
