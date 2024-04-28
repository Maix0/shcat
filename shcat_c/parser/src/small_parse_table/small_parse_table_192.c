/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_192.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_960(t_small_parse_table_array *v)
{
	v->a[19200] = aux_sym__literal_repeat1;
	v->a[19201] = state(3107);
	v->a[19202] = 1;
	v->a[19203] = sym__expression;
	v->a[19204] = state(3359);
	v->a[19205] = 1;
	v->a[19206] = sym__arithmetic_postfix_expression;
	v->a[19207] = state(3361);
	v->a[19208] = 1;
	v->a[19209] = sym__arithmetic_unary_expression;
	v->a[19210] = state(3367);
	v->a[19211] = 1;
	v->a[19212] = sym__arithmetic_ternary_expression;
	v->a[19213] = state(3375);
	v->a[19214] = 1;
	v->a[19215] = sym__arithmetic_binary_expression;
	v->a[19216] = actions(1073);
	v->a[19217] = 2;
	v->a[19218] = anon_sym_LPAREN_LPAREN;
	v->a[19219] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_961(v);
}

void	small_parse_table_961(t_small_parse_table_array *v)
{
	v->a[19220] = actions(1083);
	v->a[19221] = 2;
	v->a[19222] = sym_raw_string;
	v->a[19223] = sym_ansi_c_string;
	v->a[19224] = actions(1089);
	v->a[19225] = 2;
	v->a[19226] = anon_sym_LT_LPAREN;
	v->a[19227] = anon_sym_GT_LPAREN;
	v->a[19228] = actions(3592);
	v->a[19229] = 2;
	v->a[19230] = anon_sym_PLUS_PLUS2;
	v->a[19231] = anon_sym_DASH_DASH2;
	v->a[19232] = actions(3594);
	v->a[19233] = 2;
	v->a[19234] = anon_sym_DASH2;
	v->a[19235] = anon_sym_PLUS2;
	v->a[19236] = state(2500);
	v->a[19237] = 4;
	v->a[19238] = sym_arithmetic_expansion;
	v->a[19239] = sym_brace_expression;
	small_parse_table_962(v);
}

void	small_parse_table_962(t_small_parse_table_array *v)
{
	v->a[19240] = sym_translated_string;
	v->a[19241] = sym_process_substitution;
	v->a[19242] = state(2506);
	v->a[19243] = 4;
	v->a[19244] = sym_string;
	v->a[19245] = sym_number;
	v->a[19246] = sym_simple_expansion;
	v->a[19247] = sym_expansion;
	v->a[19248] = state(3278);
	v->a[19249] = 4;
	v->a[19250] = sym_subscript;
	v->a[19251] = sym__arithmetic_expression;
	v->a[19252] = sym__arithmetic_literal;
	v->a[19253] = sym__arithmetic_parenthesized_expression;
	v->a[19254] = state(3053);
	v->a[19255] = 6;
	v->a[19256] = sym_binary_expression;
	v->a[19257] = sym_ternary_expression;
	v->a[19258] = sym_unary_expression;
	v->a[19259] = sym_postfix_expression;
	small_parse_table_963(v);
}

void	small_parse_table_963(t_small_parse_table_array *v)
{
	v->a[19260] = sym_parenthesized_expression;
	v->a[19261] = sym_concatenation;
	v->a[19262] = 22;
	v->a[19263] = actions(3);
	v->a[19264] = 1;
	v->a[19265] = sym_comment;
	v->a[19266] = actions(3536);
	v->a[19267] = 1;
	v->a[19268] = anon_sym_DOLLAR_LBRACK;
	v->a[19269] = actions(3539);
	v->a[19270] = 1;
	v->a[19271] = anon_sym_DOLLAR;
	v->a[19272] = actions(3545);
	v->a[19273] = 1;
	v->a[19274] = anon_sym_DQUOTE;
	v->a[19275] = actions(3548);
	v->a[19276] = 1;
	v->a[19277] = aux_sym_number_token1;
	v->a[19278] = actions(3551);
	v->a[19279] = 1;
	small_parse_table_964(v);
}

void	small_parse_table_964(t_small_parse_table_array *v)
{
	v->a[19280] = aux_sym_number_token2;
	v->a[19281] = actions(3554);
	v->a[19282] = 1;
	v->a[19283] = anon_sym_DOLLAR_LBRACE;
	v->a[19284] = actions(3557);
	v->a[19285] = 1;
	v->a[19286] = anon_sym_DOLLAR_LPAREN;
	v->a[19287] = actions(3560);
	v->a[19288] = 1;
	v->a[19289] = anon_sym_BQUOTE;
	v->a[19290] = actions(3563);
	v->a[19291] = 1;
	v->a[19292] = anon_sym_DOLLAR_BQUOTE;
	v->a[19293] = actions(3575);
	v->a[19294] = 1;
	v->a[19295] = sym__brace_start;
	v->a[19296] = actions(3764);
	v->a[19297] = 1;
	v->a[19298] = sym__special_character;
	v->a[19299] = actions(3767);
	small_parse_table_965(v);
}

/* EOF small_parse_table_192.c */
