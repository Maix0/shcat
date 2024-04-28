/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1162.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5810(t_small_parse_table_array *v)
{
	v->a[116200] = aux_sym_number_token2;
	v->a[116201] = actions(1157);
	v->a[116202] = 1;
	v->a[116203] = anon_sym_DOLLAR_LBRACE;
	v->a[116204] = actions(1159);
	v->a[116205] = 1;
	v->a[116206] = anon_sym_DOLLAR_LPAREN;
	v->a[116207] = actions(1163);
	v->a[116208] = 1;
	v->a[116209] = anon_sym_DOLLAR_BQUOTE;
	v->a[116210] = actions(1169);
	v->a[116211] = 1;
	v->a[116212] = sym__brace_start;
	v->a[116213] = actions(1187);
	v->a[116214] = 1;
	v->a[116215] = sym_word;
	v->a[116216] = actions(1189);
	v->a[116217] = 1;
	v->a[116218] = anon_sym_BANG;
	v->a[116219] = actions(1195);
	small_parse_table_5811(v);
}

void	small_parse_table_5811(t_small_parse_table_array *v)
{
	v->a[116220] = 1;
	v->a[116221] = anon_sym_TILDE;
	v->a[116222] = actions(1201);
	v->a[116223] = 1;
	v->a[116224] = sym_test_operator;
	v->a[116225] = actions(3060);
	v->a[116226] = 1;
	v->a[116227] = anon_sym_BQUOTE;
	v->a[116228] = actions(5779);
	v->a[116229] = 1;
	v->a[116230] = sym__special_character;
	v->a[116231] = state(2717);
	v->a[116232] = 1;
	v->a[116233] = aux_sym__literal_repeat1;
	v->a[116234] = state(3002);
	v->a[116235] = 1;
	v->a[116236] = sym__expression;
	v->a[116237] = actions(1129);
	v->a[116238] = 2;
	v->a[116239] = anon_sym_LPAREN_LPAREN;
	small_parse_table_5812(v);
}

void	small_parse_table_5812(t_small_parse_table_array *v)
{
	v->a[116240] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116241] = actions(1165);
	v->a[116242] = 2;
	v->a[116243] = anon_sym_LT_LPAREN;
	v->a[116244] = anon_sym_GT_LPAREN;
	v->a[116245] = actions(1191);
	v->a[116246] = 2;
	v->a[116247] = anon_sym_PLUS_PLUS2;
	v->a[116248] = anon_sym_DASH_DASH2;
	v->a[116249] = actions(1193);
	v->a[116250] = 2;
	v->a[116251] = anon_sym_DASH2;
	v->a[116252] = anon_sym_PLUS2;
	v->a[116253] = actions(1199);
	v->a[116254] = 2;
	v->a[116255] = sym_raw_string;
	v->a[116256] = sym_ansi_c_string;
	v->a[116257] = state(2594);
	v->a[116258] = 6;
	v->a[116259] = sym_binary_expression;
	small_parse_table_5813(v);
}

void	small_parse_table_5813(t_small_parse_table_array *v)
{
	v->a[116260] = sym_ternary_expression;
	v->a[116261] = sym_unary_expression;
	v->a[116262] = sym_postfix_expression;
	v->a[116263] = sym_parenthesized_expression;
	v->a[116264] = sym_concatenation;
	v->a[116265] = state(2503);
	v->a[116266] = 9;
	v->a[116267] = sym_arithmetic_expansion;
	v->a[116268] = sym_brace_expression;
	v->a[116269] = sym_string;
	v->a[116270] = sym_translated_string;
	v->a[116271] = sym_number;
	v->a[116272] = sym_simple_expansion;
	v->a[116273] = sym_expansion;
	v->a[116274] = sym_command_substitution;
	v->a[116275] = sym_process_substitution;
	v->a[116276] = 26;
	v->a[116277] = actions(71);
	v->a[116278] = 1;
	v->a[116279] = sym_comment;
	small_parse_table_5814(v);
}

void	small_parse_table_5814(t_small_parse_table_array *v)
{
	v->a[116280] = actions(1131);
	v->a[116281] = 1;
	v->a[116282] = anon_sym_LPAREN;
	v->a[116283] = actions(1141);
	v->a[116284] = 1;
	v->a[116285] = anon_sym_DOLLAR_LBRACK;
	v->a[116286] = actions(1145);
	v->a[116287] = 1;
	v->a[116288] = anon_sym_DOLLAR;
	v->a[116289] = actions(1149);
	v->a[116290] = 1;
	v->a[116291] = anon_sym_DQUOTE;
	v->a[116292] = actions(1153);
	v->a[116293] = 1;
	v->a[116294] = aux_sym_number_token1;
	v->a[116295] = actions(1155);
	v->a[116296] = 1;
	v->a[116297] = aux_sym_number_token2;
	v->a[116298] = actions(1157);
	v->a[116299] = 1;
	small_parse_table_5815(v);
}

/* EOF small_parse_table_1162.c */
