/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1092.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5460(t_small_parse_table_array *v)
{
	v->a[109200] = actions(3598);
	v->a[109201] = 1;
	v->a[109202] = anon_sym_BQUOTE;
	v->a[109203] = state(2690);
	v->a[109204] = 1;
	v->a[109205] = aux_sym__literal_repeat1;
	v->a[109206] = state(3151);
	v->a[109207] = 1;
	v->a[109208] = sym__expression;
	v->a[109209] = actions(103);
	v->a[109210] = 2;
	v->a[109211] = anon_sym_PLUS_PLUS2;
	v->a[109212] = anon_sym_DASH_DASH2;
	v->a[109213] = actions(105);
	v->a[109214] = 2;
	v->a[109215] = anon_sym_DASH2;
	v->a[109216] = anon_sym_PLUS2;
	v->a[109217] = actions(1073);
	v->a[109218] = 2;
	v->a[109219] = anon_sym_LPAREN_LPAREN;
	small_parse_table_5461(v);
}

void	small_parse_table_5461(t_small_parse_table_array *v)
{
	v->a[109220] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[109221] = actions(1083);
	v->a[109222] = 2;
	v->a[109223] = sym_raw_string;
	v->a[109224] = sym_ansi_c_string;
	v->a[109225] = actions(1089);
	v->a[109226] = 2;
	v->a[109227] = anon_sym_LT_LPAREN;
	v->a[109228] = anon_sym_GT_LPAREN;
	v->a[109229] = state(3053);
	v->a[109230] = 6;
	v->a[109231] = sym_binary_expression;
	v->a[109232] = sym_ternary_expression;
	v->a[109233] = sym_unary_expression;
	v->a[109234] = sym_postfix_expression;
	v->a[109235] = sym_parenthesized_expression;
	v->a[109236] = sym_concatenation;
	v->a[109237] = state(2500);
	v->a[109238] = 9;
	v->a[109239] = sym_arithmetic_expansion;
	small_parse_table_5462(v);
}

void	small_parse_table_5462(t_small_parse_table_array *v)
{
	v->a[109240] = sym_brace_expression;
	v->a[109241] = sym_string;
	v->a[109242] = sym_translated_string;
	v->a[109243] = sym_number;
	v->a[109244] = sym_simple_expansion;
	v->a[109245] = sym_expansion;
	v->a[109246] = sym_command_substitution;
	v->a[109247] = sym_process_substitution;
	v->a[109248] = 6;
	v->a[109249] = actions(71);
	v->a[109250] = 1;
	v->a[109251] = sym_comment;
	v->a[109252] = actions(6133);
	v->a[109253] = 1;
	v->a[109254] = aux_sym_concatenation_token1;
	v->a[109255] = actions(6234);
	v->a[109256] = 1;
	v->a[109257] = sym__concat;
	v->a[109258] = state(2127);
	v->a[109259] = 1;
	small_parse_table_5463(v);
}

void	small_parse_table_5463(t_small_parse_table_array *v)
{
	v->a[109260] = aux_sym_concatenation_repeat1;
	v->a[109261] = actions(1286);
	v->a[109262] = 15;
	v->a[109263] = anon_sym_PIPE;
	v->a[109264] = anon_sym_EQ_EQ;
	v->a[109265] = anon_sym_LT;
	v->a[109266] = anon_sym_GT;
	v->a[109267] = anon_sym_LT_LT;
	v->a[109268] = anon_sym_EQ_TILDE;
	v->a[109269] = anon_sym_AMP_GT;
	v->a[109270] = anon_sym_LT_AMP;
	v->a[109271] = anon_sym_GT_AMP;
	v->a[109272] = anon_sym_DOLLAR;
	v->a[109273] = aux_sym_number_token1;
	v->a[109274] = aux_sym_number_token2;
	v->a[109275] = anon_sym_DOLLAR_LPAREN;
	v->a[109276] = anon_sym_BQUOTE;
	v->a[109277] = sym_word;
	v->a[109278] = actions(1288);
	v->a[109279] = 25;
	small_parse_table_5464(v);
}

void	small_parse_table_5464(t_small_parse_table_array *v)
{
	v->a[109280] = sym_file_descriptor;
	v->a[109281] = sym_test_operator;
	v->a[109282] = sym__bare_dollar;
	v->a[109283] = sym__brace_start;
	v->a[109284] = anon_sym_LPAREN_LPAREN;
	v->a[109285] = anon_sym_PIPE_PIPE;
	v->a[109286] = anon_sym_AMP_AMP;
	v->a[109287] = anon_sym_GT_GT;
	v->a[109288] = anon_sym_PIPE_AMP;
	v->a[109289] = anon_sym_AMP_GT_GT;
	v->a[109290] = anon_sym_GT_PIPE;
	v->a[109291] = anon_sym_LT_AMP_DASH;
	v->a[109292] = anon_sym_GT_AMP_DASH;
	v->a[109293] = anon_sym_LT_LT_DASH;
	v->a[109294] = anon_sym_LT_LT_LT;
	v->a[109295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[109296] = anon_sym_DOLLAR_LBRACK;
	v->a[109297] = sym__special_character;
	v->a[109298] = anon_sym_DQUOTE;
	v->a[109299] = sym_raw_string;
	small_parse_table_5465(v);
}

/* EOF small_parse_table_1092.c */
