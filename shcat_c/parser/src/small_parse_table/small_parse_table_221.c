/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_221.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1105(t_small_parse_table_array *v)
{
	v->a[22100] = anon_sym_LPAREN_LPAREN;
	v->a[22101] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22102] = actions(1083);
	v->a[22103] = 2;
	v->a[22104] = sym_raw_string;
	v->a[22105] = sym_ansi_c_string;
	v->a[22106] = actions(1089);
	v->a[22107] = 2;
	v->a[22108] = anon_sym_LT_LPAREN;
	v->a[22109] = anon_sym_GT_LPAREN;
	v->a[22110] = actions(3592);
	v->a[22111] = 2;
	v->a[22112] = anon_sym_PLUS_PLUS2;
	v->a[22113] = anon_sym_DASH_DASH2;
	v->a[22114] = actions(3594);
	v->a[22115] = 2;
	v->a[22116] = anon_sym_DASH2;
	v->a[22117] = anon_sym_PLUS2;
	v->a[22118] = state(2500);
	v->a[22119] = 4;
	small_parse_table_1106(v);
}

void	small_parse_table_1106(t_small_parse_table_array *v)
{
	v->a[22120] = sym_arithmetic_expansion;
	v->a[22121] = sym_brace_expression;
	v->a[22122] = sym_translated_string;
	v->a[22123] = sym_process_substitution;
	v->a[22124] = state(2506);
	v->a[22125] = 4;
	v->a[22126] = sym_string;
	v->a[22127] = sym_number;
	v->a[22128] = sym_simple_expansion;
	v->a[22129] = sym_expansion;
	v->a[22130] = state(3368);
	v->a[22131] = 4;
	v->a[22132] = sym_subscript;
	v->a[22133] = sym__arithmetic_expression;
	v->a[22134] = sym__arithmetic_literal;
	v->a[22135] = sym__arithmetic_parenthesized_expression;
	v->a[22136] = state(3053);
	v->a[22137] = 6;
	v->a[22138] = sym_binary_expression;
	v->a[22139] = sym_ternary_expression;
	small_parse_table_1107(v);
}

void	small_parse_table_1107(t_small_parse_table_array *v)
{
	v->a[22140] = sym_unary_expression;
	v->a[22141] = sym_postfix_expression;
	v->a[22142] = sym_parenthesized_expression;
	v->a[22143] = sym_concatenation;
	v->a[22144] = 21;
	v->a[22145] = actions(3);
	v->a[22146] = 1;
	v->a[22147] = sym_comment;
	v->a[22148] = actions(3183);
	v->a[22149] = 1;
	v->a[22150] = anon_sym_DOLLAR_LBRACK;
	v->a[22151] = actions(3185);
	v->a[22152] = 1;
	v->a[22153] = anon_sym_DOLLAR;
	v->a[22154] = actions(3189);
	v->a[22155] = 1;
	v->a[22156] = anon_sym_DQUOTE;
	v->a[22157] = actions(3191);
	v->a[22158] = 1;
	v->a[22159] = aux_sym_number_token1;
	small_parse_table_1108(v);
}

void	small_parse_table_1108(t_small_parse_table_array *v)
{
	v->a[22160] = actions(3193);
	v->a[22161] = 1;
	v->a[22162] = aux_sym_number_token2;
	v->a[22163] = actions(3195);
	v->a[22164] = 1;
	v->a[22165] = anon_sym_DOLLAR_LBRACE;
	v->a[22166] = actions(3197);
	v->a[22167] = 1;
	v->a[22168] = anon_sym_DOLLAR_LPAREN;
	v->a[22169] = actions(3201);
	v->a[22170] = 1;
	v->a[22171] = anon_sym_DOLLAR_BQUOTE;
	v->a[22172] = actions(3209);
	v->a[22173] = 1;
	v->a[22174] = sym__brace_start;
	v->a[22175] = actions(3657);
	v->a[22176] = 1;
	v->a[22177] = sym__special_character;
	v->a[22178] = actions(3661);
	v->a[22179] = 1;
	small_parse_table_1109(v);
}

void	small_parse_table_1109(t_small_parse_table_array *v)
{
	v->a[22180] = sym_test_operator;
	v->a[22181] = actions(4044);
	v->a[22182] = 1;
	v->a[22183] = aux_sym__simple_variable_name_token1;
	v->a[22184] = state(1966);
	v->a[22185] = 1;
	v->a[22186] = aux_sym__literal_repeat1;
	v->a[22187] = actions(2299);
	v->a[22188] = 2;
	v->a[22189] = sym_file_descriptor;
	v->a[22190] = aux_sym_heredoc_redirect_token1;
	v->a[22191] = actions(3181);
	v->a[22192] = 2;
	v->a[22193] = anon_sym_LPAREN_LPAREN;
	v->a[22194] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22195] = actions(3203);
	v->a[22196] = 2;
	v->a[22197] = anon_sym_LT_LPAREN;
	v->a[22198] = anon_sym_GT_LPAREN;
	v->a[22199] = state(726);
	small_parse_table_1110(v);
}

/* EOF small_parse_table_221.c */
