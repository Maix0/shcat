/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1021.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5105(t_small_parse_table_array *v)
{
	v->a[102100] = sym__special_character;
	v->a[102101] = state(2472);
	v->a[102102] = 1;
	v->a[102103] = aux_sym__literal_repeat1;
	v->a[102104] = state(2816);
	v->a[102105] = 1;
	v->a[102106] = sym__expression;
	v->a[102107] = actions(352);
	v->a[102108] = 2;
	v->a[102109] = anon_sym_LPAREN_LPAREN;
	v->a[102110] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[102111] = actions(387);
	v->a[102112] = 2;
	v->a[102113] = anon_sym_LT_LPAREN;
	v->a[102114] = anon_sym_GT_LPAREN;
	v->a[102115] = actions(1099);
	v->a[102116] = 2;
	v->a[102117] = anon_sym_PLUS_PLUS2;
	v->a[102118] = anon_sym_DASH_DASH2;
	v->a[102119] = actions(1101);
	small_parse_table_5106(v);
}

void	small_parse_table_5106(t_small_parse_table_array *v)
{
	v->a[102120] = 2;
	v->a[102121] = anon_sym_DASH2;
	v->a[102122] = anon_sym_PLUS2;
	v->a[102123] = actions(1109);
	v->a[102124] = 2;
	v->a[102125] = sym_raw_string;
	v->a[102126] = sym_ansi_c_string;
	v->a[102127] = state(2863);
	v->a[102128] = 6;
	v->a[102129] = sym_binary_expression;
	v->a[102130] = sym_ternary_expression;
	v->a[102131] = sym_unary_expression;
	v->a[102132] = sym_postfix_expression;
	v->a[102133] = sym_parenthesized_expression;
	v->a[102134] = sym_concatenation;
	v->a[102135] = state(2451);
	v->a[102136] = 9;
	v->a[102137] = sym_arithmetic_expansion;
	v->a[102138] = sym_brace_expression;
	v->a[102139] = sym_string;
	small_parse_table_5107(v);
}

void	small_parse_table_5107(t_small_parse_table_array *v)
{
	v->a[102140] = sym_translated_string;
	v->a[102141] = sym_number;
	v->a[102142] = sym_simple_expansion;
	v->a[102143] = sym_expansion;
	v->a[102144] = sym_command_substitution;
	v->a[102145] = sym_process_substitution;
	v->a[102146] = 26;
	v->a[102147] = actions(71);
	v->a[102148] = 1;
	v->a[102149] = sym_comment;
	v->a[102150] = actions(1127);
	v->a[102151] = 1;
	v->a[102152] = sym_word;
	v->a[102153] = actions(1131);
	v->a[102154] = 1;
	v->a[102155] = anon_sym_LPAREN;
	v->a[102156] = actions(1133);
	v->a[102157] = 1;
	v->a[102158] = anon_sym_BANG;
	v->a[102159] = actions(1139);
	small_parse_table_5108(v);
}

void	small_parse_table_5108(t_small_parse_table_array *v)
{
	v->a[102160] = 1;
	v->a[102161] = anon_sym_TILDE;
	v->a[102162] = actions(1141);
	v->a[102163] = 1;
	v->a[102164] = anon_sym_DOLLAR_LBRACK;
	v->a[102165] = actions(1145);
	v->a[102166] = 1;
	v->a[102167] = anon_sym_DOLLAR;
	v->a[102168] = actions(1147);
	v->a[102169] = 1;
	v->a[102170] = sym__special_character;
	v->a[102171] = actions(1149);
	v->a[102172] = 1;
	v->a[102173] = anon_sym_DQUOTE;
	v->a[102174] = actions(1153);
	v->a[102175] = 1;
	v->a[102176] = aux_sym_number_token1;
	v->a[102177] = actions(1155);
	v->a[102178] = 1;
	v->a[102179] = aux_sym_number_token2;
	small_parse_table_5109(v);
}

void	small_parse_table_5109(t_small_parse_table_array *v)
{
	v->a[102180] = actions(1157);
	v->a[102181] = 1;
	v->a[102182] = anon_sym_DOLLAR_LBRACE;
	v->a[102183] = actions(1159);
	v->a[102184] = 1;
	v->a[102185] = anon_sym_DOLLAR_LPAREN;
	v->a[102186] = actions(1163);
	v->a[102187] = 1;
	v->a[102188] = anon_sym_DOLLAR_BQUOTE;
	v->a[102189] = actions(1167);
	v->a[102190] = 1;
	v->a[102191] = sym_test_operator;
	v->a[102192] = actions(1169);
	v->a[102193] = 1;
	v->a[102194] = sym__brace_start;
	v->a[102195] = actions(3060);
	v->a[102196] = 1;
	v->a[102197] = anon_sym_BQUOTE;
	v->a[102198] = state(2484);
	v->a[102199] = 1;
	small_parse_table_5110(v);
}

/* EOF small_parse_table_1021.c */
