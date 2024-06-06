/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_892.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4460(t_small_parse_table_array *v)
{
	v->a[89200] = actions(4598);
	v->a[89201] = 1;
	v->a[89202] = aux_sym_number_token1;
	v->a[89203] = actions(4600);
	v->a[89204] = 1;
	v->a[89205] = aux_sym_number_token2;
	v->a[89206] = actions(4602);
	v->a[89207] = 1;
	v->a[89208] = anon_sym_DOLLAR_LBRACE;
	v->a[89209] = actions(4604);
	v->a[89210] = 1;
	v->a[89211] = anon_sym_DOLLAR_LPAREN;
	v->a[89212] = actions(4606);
	v->a[89213] = 1;
	v->a[89214] = anon_sym_BQUOTE;
	v->a[89215] = actions(4608);
	v->a[89216] = 1;
	v->a[89217] = anon_sym_DOLLAR_BQUOTE;
	v->a[89218] = actions(4925);
	v->a[89219] = 1;
	small_parse_table_4461(v);
}

void	small_parse_table_4461(t_small_parse_table_array *v)
{
	v->a[89220] = aux_sym__simple_variable_name_token1;
	v->a[89221] = actions(4927);
	v->a[89222] = 1;
	v->a[89223] = sym_variable_name;
	v->a[89224] = state(1476);
	v->a[89225] = 1;
	v->a[89226] = sym__arithmetic_postfix_expression;
	v->a[89227] = state(1478);
	v->a[89228] = 1;
	v->a[89229] = sym__arithmetic_unary_expression;
	v->a[89230] = state(1490);
	v->a[89231] = 1;
	v->a[89232] = sym__arithmetic_ternary_expression;
	v->a[89233] = state(1511);
	v->a[89234] = 1;
	v->a[89235] = sym__arithmetic_binary_expression;
	v->a[89236] = actions(4588);
	v->a[89237] = 2;
	v->a[89238] = anon_sym_PLUS_PLUS;
	v->a[89239] = anon_sym_DASH_DASH;
	small_parse_table_4462(v);
}

void	small_parse_table_4462(t_small_parse_table_array *v)
{
	v->a[89240] = actions(4590);
	v->a[89241] = 2;
	v->a[89242] = anon_sym_DASH2;
	v->a[89243] = anon_sym_PLUS2;
	v->a[89244] = state(1457);
	v->a[89245] = 8;
	v->a[89246] = sym__arithmetic_expression;
	v->a[89247] = sym__arithmetic_literal;
	v->a[89248] = sym__arithmetic_parenthesized_expression;
	v->a[89249] = sym_string;
	v->a[89250] = sym_number;
	v->a[89251] = sym_simple_expansion;
	v->a[89252] = sym_expansion;
	v->a[89253] = sym_command_substitution;
	v->a[89254] = 5;
	v->a[89255] = actions(57);
	v->a[89256] = 1;
	v->a[89257] = sym_comment;
	v->a[89258] = state(1782);
	v->a[89259] = 1;
	small_parse_table_4463(v);
}

void	small_parse_table_4463(t_small_parse_table_array *v)
{
	v->a[89260] = aux_sym_concatenation_repeat1;
	v->a[89261] = actions(4795);
	v->a[89262] = 2;
	v->a[89263] = sym__concat;
	v->a[89264] = aux_sym_concatenation_token1;
	v->a[89265] = actions(1180);
	v->a[89266] = 11;
	v->a[89267] = anon_sym_LT;
	v->a[89268] = anon_sym_GT;
	v->a[89269] = anon_sym_AMP_GT;
	v->a[89270] = anon_sym_LT_AMP;
	v->a[89271] = anon_sym_GT_AMP;
	v->a[89272] = anon_sym_DOLLAR;
	v->a[89273] = aux_sym_number_token1;
	v->a[89274] = aux_sym_number_token2;
	v->a[89275] = anon_sym_DOLLAR_LPAREN;
	v->a[89276] = anon_sym_BQUOTE;
	v->a[89277] = sym_word;
	v->a[89278] = actions(1182);
	v->a[89279] = 15;
	small_parse_table_4464(v);
}

void	small_parse_table_4464(t_small_parse_table_array *v)
{
	v->a[89280] = sym_file_descriptor;
	v->a[89281] = sym_variable_name;
	v->a[89282] = sym_test_operator;
	v->a[89283] = sym__brace_start;
	v->a[89284] = anon_sym_GT_GT;
	v->a[89285] = anon_sym_AMP_GT_GT;
	v->a[89286] = anon_sym_GT_PIPE;
	v->a[89287] = anon_sym_LT_AMP_DASH;
	v->a[89288] = anon_sym_GT_AMP_DASH;
	v->a[89289] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89290] = sym__special_character;
	v->a[89291] = anon_sym_DQUOTE;
	v->a[89292] = sym_raw_string;
	v->a[89293] = anon_sym_DOLLAR_LBRACE;
	v->a[89294] = anon_sym_DOLLAR_BQUOTE;
	v->a[89295] = 21;
	v->a[89296] = actions(57);
	v->a[89297] = 1;
	v->a[89298] = sym_comment;
	v->a[89299] = actions(4584);
	small_parse_table_4465(v);
}

/* EOF small_parse_table_892.c */
