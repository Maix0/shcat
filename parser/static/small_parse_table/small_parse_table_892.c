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
	v->a[89200] = anon_sym_AMP_GT_GT;
	v->a[89201] = anon_sym_LT_AMP;
	v->a[89202] = anon_sym_GT_AMP;
	v->a[89203] = anon_sym_GT_PIPE;
	v->a[89204] = anon_sym_LT_AMP_DASH;
	v->a[89205] = anon_sym_GT_AMP_DASH;
	v->a[89206] = anon_sym_LT_LT_DASH;
	v->a[89207] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89208] = anon_sym_DOLLAR_LBRACK;
	v->a[89209] = aux_sym_concatenation_token1;
	v->a[89210] = anon_sym_DOLLAR;
	v->a[89211] = sym__special_character;
	v->a[89212] = anon_sym_DQUOTE;
	v->a[89213] = sym_raw_string;
	v->a[89214] = sym_ansi_c_string;
	v->a[89215] = aux_sym_number_token1;
	v->a[89216] = aux_sym_number_token2;
	v->a[89217] = anon_sym_DOLLAR_LBRACE;
	v->a[89218] = anon_sym_DOLLAR_LPAREN;
	v->a[89219] = anon_sym_BQUOTE;
	small_parse_table_4461(v);
}

void	small_parse_table_4461(t_small_parse_table_array *v)
{
	v->a[89220] = anon_sym_DOLLAR_BQUOTE;
	v->a[89221] = anon_sym_LT_LPAREN;
	v->a[89222] = anon_sym_GT_LPAREN;
	v->a[89223] = aux_sym__simple_variable_name_token1;
	v->a[89224] = sym_word;
	v->a[89225] = 27;
	v->a[89226] = actions(71);
	v->a[89227] = 1;
	v->a[89228] = sym_comment;
	v->a[89229] = actions(107);
	v->a[89230] = 1;
	v->a[89231] = anon_sym_TILDE;
	v->a[89232] = actions(237);
	v->a[89233] = 1;
	v->a[89234] = sym_word;
	v->a[89235] = actions(248);
	v->a[89236] = 1;
	v->a[89237] = anon_sym_LPAREN;
	v->a[89238] = actions(250);
	v->a[89239] = 1;
	small_parse_table_4462(v);
}

void	small_parse_table_4462(t_small_parse_table_array *v)
{
	v->a[89240] = anon_sym_BANG;
	v->a[89241] = actions(258);
	v->a[89242] = 1;
	v->a[89243] = anon_sym_DOLLAR;
	v->a[89244] = actions(264);
	v->a[89245] = 1;
	v->a[89246] = aux_sym_number_token1;
	v->a[89247] = actions(266);
	v->a[89248] = 1;
	v->a[89249] = aux_sym_number_token2;
	v->a[89250] = actions(270);
	v->a[89251] = 1;
	v->a[89252] = anon_sym_DOLLAR_LPAREN;
	v->a[89253] = actions(282);
	v->a[89254] = 1;
	v->a[89255] = sym_test_operator;
	v->a[89256] = actions(284);
	v->a[89257] = 1;
	v->a[89258] = sym__brace_start;
	v->a[89259] = actions(1075);
	small_parse_table_4463(v);
}

void	small_parse_table_4463(t_small_parse_table_array *v)
{
	v->a[89260] = 1;
	v->a[89261] = anon_sym_DOLLAR_LBRACK;
	v->a[89262] = actions(1079);
	v->a[89263] = 1;
	v->a[89264] = sym__special_character;
	v->a[89265] = actions(1081);
	v->a[89266] = 1;
	v->a[89267] = anon_sym_DQUOTE;
	v->a[89268] = actions(1085);
	v->a[89269] = 1;
	v->a[89270] = anon_sym_DOLLAR_LBRACE;
	v->a[89271] = actions(1087);
	v->a[89272] = 1;
	v->a[89273] = anon_sym_DOLLAR_BQUOTE;
	v->a[89274] = actions(3598);
	v->a[89275] = 1;
	v->a[89276] = anon_sym_BQUOTE;
	v->a[89277] = actions(6021);
	v->a[89278] = 1;
	v->a[89279] = sym__regex_no_space;
	small_parse_table_4464(v);
}

void	small_parse_table_4464(t_small_parse_table_array *v)
{
	v->a[89280] = state(2690);
	v->a[89281] = 1;
	v->a[89282] = aux_sym__literal_repeat1;
	v->a[89283] = state(3095);
	v->a[89284] = 1;
	v->a[89285] = sym__expression;
	v->a[89286] = actions(103);
	v->a[89287] = 2;
	v->a[89288] = anon_sym_PLUS_PLUS2;
	v->a[89289] = anon_sym_DASH_DASH2;
	v->a[89290] = actions(105);
	v->a[89291] = 2;
	v->a[89292] = anon_sym_DASH2;
	v->a[89293] = anon_sym_PLUS2;
	v->a[89294] = actions(1073);
	v->a[89295] = 2;
	v->a[89296] = anon_sym_LPAREN_LPAREN;
	v->a[89297] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89298] = actions(1083);
	v->a[89299] = 2;
	small_parse_table_4465(v);
}

/* EOF small_parse_table_892.c */
