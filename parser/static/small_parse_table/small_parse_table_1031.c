/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1031.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5155(t_small_parse_table_array *v)
{
	v->a[103100] = anon_sym_DOLLAR_BQUOTE;
	v->a[103101] = actions(1169);
	v->a[103102] = 1;
	v->a[103103] = sym__brace_start;
	v->a[103104] = actions(1171);
	v->a[103105] = 1;
	v->a[103106] = sym_word;
	v->a[103107] = actions(1173);
	v->a[103108] = 1;
	v->a[103109] = anon_sym_BANG;
	v->a[103110] = actions(1179);
	v->a[103111] = 1;
	v->a[103112] = anon_sym_TILDE;
	v->a[103113] = actions(1181);
	v->a[103114] = 1;
	v->a[103115] = sym__special_character;
	v->a[103116] = actions(1185);
	v->a[103117] = 1;
	v->a[103118] = sym_test_operator;
	v->a[103119] = actions(3060);
	small_parse_table_5156(v);
}

void	small_parse_table_5156(t_small_parse_table_array *v)
{
	v->a[103120] = 1;
	v->a[103121] = anon_sym_BQUOTE;
	v->a[103122] = state(2484);
	v->a[103123] = 1;
	v->a[103124] = aux_sym__literal_repeat1;
	v->a[103125] = state(3062);
	v->a[103126] = 1;
	v->a[103127] = sym__expression;
	v->a[103128] = actions(1129);
	v->a[103129] = 2;
	v->a[103130] = anon_sym_LPAREN_LPAREN;
	v->a[103131] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[103132] = actions(1165);
	v->a[103133] = 2;
	v->a[103134] = anon_sym_LT_LPAREN;
	v->a[103135] = anon_sym_GT_LPAREN;
	v->a[103136] = actions(1175);
	v->a[103137] = 2;
	v->a[103138] = anon_sym_PLUS_PLUS2;
	v->a[103139] = anon_sym_DASH_DASH2;
	small_parse_table_5157(v);
}

void	small_parse_table_5157(t_small_parse_table_array *v)
{
	v->a[103140] = actions(1177);
	v->a[103141] = 2;
	v->a[103142] = anon_sym_DASH2;
	v->a[103143] = anon_sym_PLUS2;
	v->a[103144] = actions(1183);
	v->a[103145] = 2;
	v->a[103146] = sym_raw_string;
	v->a[103147] = sym_ansi_c_string;
	v->a[103148] = state(2594);
	v->a[103149] = 6;
	v->a[103150] = sym_binary_expression;
	v->a[103151] = sym_ternary_expression;
	v->a[103152] = sym_unary_expression;
	v->a[103153] = sym_postfix_expression;
	v->a[103154] = sym_parenthesized_expression;
	v->a[103155] = sym_concatenation;
	v->a[103156] = state(2456);
	v->a[103157] = 9;
	v->a[103158] = sym_arithmetic_expansion;
	v->a[103159] = sym_brace_expression;
	small_parse_table_5158(v);
}

void	small_parse_table_5158(t_small_parse_table_array *v)
{
	v->a[103160] = sym_string;
	v->a[103161] = sym_translated_string;
	v->a[103162] = sym_number;
	v->a[103163] = sym_simple_expansion;
	v->a[103164] = sym_expansion;
	v->a[103165] = sym_command_substitution;
	v->a[103166] = sym_process_substitution;
	v->a[103167] = 3;
	v->a[103168] = actions(71);
	v->a[103169] = 1;
	v->a[103170] = sym_comment;
	v->a[103171] = actions(1300);
	v->a[103172] = 16;
	v->a[103173] = anon_sym_PIPE;
	v->a[103174] = anon_sym_EQ_EQ;
	v->a[103175] = anon_sym_LT;
	v->a[103176] = anon_sym_GT;
	v->a[103177] = anon_sym_LT_LT;
	v->a[103178] = anon_sym_LPAREN;
	v->a[103179] = anon_sym_EQ_TILDE;
	small_parse_table_5159(v);
}

void	small_parse_table_5159(t_small_parse_table_array *v)
{
	v->a[103180] = anon_sym_AMP_GT;
	v->a[103181] = anon_sym_LT_AMP;
	v->a[103182] = anon_sym_GT_AMP;
	v->a[103183] = anon_sym_DOLLAR;
	v->a[103184] = aux_sym_number_token1;
	v->a[103185] = aux_sym_number_token2;
	v->a[103186] = anon_sym_DOLLAR_LPAREN;
	v->a[103187] = anon_sym_BQUOTE;
	v->a[103188] = sym_word;
	v->a[103189] = actions(1302);
	v->a[103190] = 27;
	v->a[103191] = sym_file_descriptor;
	v->a[103192] = sym__concat;
	v->a[103193] = sym_test_operator;
	v->a[103194] = sym__bare_dollar;
	v->a[103195] = sym__brace_start;
	v->a[103196] = anon_sym_LPAREN_LPAREN;
	v->a[103197] = anon_sym_PIPE_PIPE;
	v->a[103198] = anon_sym_AMP_AMP;
	v->a[103199] = anon_sym_GT_GT;
	small_parse_table_5160(v);
}

/* EOF small_parse_table_1031.c */
