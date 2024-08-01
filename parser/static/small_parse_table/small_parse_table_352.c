/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_352.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1760(t_small_parse_table_array *v)
{
	v->a[35200] = actions(1097);
	v->a[35201] = 1;
	v->a[35202] = sym__concat;
	v->a[35203] = actions(1095);
	v->a[35204] = 18;
	v->a[35205] = anon_sym_SEMI_SEMI;
	v->a[35206] = anon_sym_AMP_AMP;
	v->a[35207] = anon_sym_PIPE_PIPE;
	v->a[35208] = anon_sym_LT;
	v->a[35209] = anon_sym_GT;
	v->a[35210] = anon_sym_GT_GT;
	v->a[35211] = aux_sym_heredoc_redirect_token1;
	v->a[35212] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35213] = aux_sym_concatenation_token1;
	v->a[35214] = anon_sym_DOLLAR;
	v->a[35215] = anon_sym_DQUOTE;
	v->a[35216] = sym_raw_string;
	v->a[35217] = sym_number;
	v->a[35218] = anon_sym_DOLLAR_LBRACE;
	v->a[35219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1761(v);
}

void	small_parse_table_1761(t_small_parse_table_array *v)
{
	v->a[35220] = anon_sym_BQUOTE;
	v->a[35221] = sym_word;
	v->a[35222] = anon_sym_SEMI;
	v->a[35223] = 3;
	v->a[35224] = actions(3);
	v->a[35225] = 1;
	v->a[35226] = sym_comment;
	v->a[35227] = actions(1093);
	v->a[35228] = 1;
	v->a[35229] = sym__concat;
	v->a[35230] = actions(1091);
	v->a[35231] = 18;
	v->a[35232] = anon_sym_SEMI_SEMI;
	v->a[35233] = anon_sym_AMP_AMP;
	v->a[35234] = anon_sym_PIPE_PIPE;
	v->a[35235] = anon_sym_LT;
	v->a[35236] = anon_sym_GT;
	v->a[35237] = anon_sym_GT_GT;
	v->a[35238] = aux_sym_heredoc_redirect_token1;
	v->a[35239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1762(v);
}

void	small_parse_table_1762(t_small_parse_table_array *v)
{
	v->a[35240] = aux_sym_concatenation_token1;
	v->a[35241] = anon_sym_DOLLAR;
	v->a[35242] = anon_sym_DQUOTE;
	v->a[35243] = sym_raw_string;
	v->a[35244] = sym_number;
	v->a[35245] = anon_sym_DOLLAR_LBRACE;
	v->a[35246] = anon_sym_DOLLAR_LPAREN;
	v->a[35247] = anon_sym_BQUOTE;
	v->a[35248] = sym_word;
	v->a[35249] = anon_sym_SEMI;
	v->a[35250] = 10;
	v->a[35251] = actions(1424);
	v->a[35252] = 1;
	v->a[35253] = anon_sym_LPAREN;
	v->a[35254] = actions(1428);
	v->a[35255] = 1;
	v->a[35256] = anon_sym_DOLLAR;
	v->a[35257] = actions(1430);
	v->a[35258] = 1;
	v->a[35259] = anon_sym_DQUOTE;
	small_parse_table_1763(v);
}

void	small_parse_table_1763(t_small_parse_table_array *v)
{
	v->a[35260] = actions(1434);
	v->a[35261] = 1;
	v->a[35262] = anon_sym_DOLLAR_LBRACE;
	v->a[35263] = actions(1436);
	v->a[35264] = 1;
	v->a[35265] = sym_comment;
	v->a[35266] = actions(1438);
	v->a[35267] = 1;
	v->a[35268] = sym_variable_name;
	v->a[35269] = actions(1426);
	v->a[35270] = 2;
	v->a[35271] = anon_sym_DASH2;
	v->a[35272] = anon_sym_PLUS2;
	v->a[35273] = actions(1432);
	v->a[35274] = 2;
	v->a[35275] = sym_number;
	v->a[35276] = aux_sym__simple_variable_name_token1;
	v->a[35277] = state(1312);
	v->a[35278] = 3;
	v->a[35279] = sym_string;
	small_parse_table_1764(v);
}

void	small_parse_table_1764(t_small_parse_table_array *v)
{
	v->a[35280] = sym_simple_expansion;
	v->a[35281] = sym_expansion;
	v->a[35282] = state(1362);
	v->a[35283] = 7;
	v->a[35284] = sym__arithmetic_expression;
	v->a[35285] = sym_arithmetic_literal;
	v->a[35286] = sym_arithmetic_binary_expression;
	v->a[35287] = sym_arithmetic_ternary_expression;
	v->a[35288] = sym_arithmetic_unary_expression;
	v->a[35289] = sym_arithmetic_postfix_expression;
	v->a[35290] = sym_arithmetic_parenthesized_expression;
	v->a[35291] = 3;
	v->a[35292] = actions(3);
	v->a[35293] = 1;
	v->a[35294] = sym_comment;
	v->a[35295] = actions(1046);
	v->a[35296] = 2;
	v->a[35297] = sym__concat;
	v->a[35298] = sym_variable_name;
	v->a[35299] = actions(1048);
	small_parse_table_1765(v);
}

/* EOF small_parse_table_352.c */
