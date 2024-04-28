/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1731.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8655(t_small_parse_table_array *v)
{
	v->a[173100] = aux_sym_number_token1;
	v->a[173101] = actions(6496);
	v->a[173102] = 1;
	v->a[173103] = aux_sym_number_token2;
	v->a[173104] = actions(6500);
	v->a[173105] = 1;
	v->a[173106] = anon_sym_DOLLAR_LPAREN;
	v->a[173107] = actions(6508);
	v->a[173108] = 1;
	v->a[173109] = sym_test_operator;
	v->a[173110] = actions(6510);
	v->a[173111] = 1;
	v->a[173112] = sym_extglob_pattern;
	v->a[173113] = actions(6512);
	v->a[173114] = 1;
	v->a[173115] = sym__brace_start;
	v->a[173116] = actions(7226);
	v->a[173117] = 1;
	v->a[173118] = anon_sym_DOLLAR_LBRACK;
	v->a[173119] = actions(7228);
	small_parse_table_8656(v);
}

void	small_parse_table_8656(t_small_parse_table_array *v)
{
	v->a[173120] = 1;
	v->a[173121] = sym__special_character;
	v->a[173122] = actions(7230);
	v->a[173123] = 1;
	v->a[173124] = anon_sym_DQUOTE;
	v->a[173125] = actions(7234);
	v->a[173126] = 1;
	v->a[173127] = anon_sym_DOLLAR_LBRACE;
	v->a[173128] = actions(7236);
	v->a[173129] = 1;
	v->a[173130] = anon_sym_BQUOTE;
	v->a[173131] = actions(7238);
	v->a[173132] = 1;
	v->a[173133] = anon_sym_DOLLAR_BQUOTE;
	v->a[173134] = state(6426);
	v->a[173135] = 1;
	v->a[173136] = aux_sym__literal_repeat1;
	v->a[173137] = state(6824);
	v->a[173138] = 1;
	v->a[173139] = sym_last_case_item;
	small_parse_table_8657(v);
}

void	small_parse_table_8657(t_small_parse_table_array *v)
{
	v->a[173140] = actions(7224);
	v->a[173141] = 2;
	v->a[173142] = anon_sym_LPAREN_LPAREN;
	v->a[173143] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[173144] = actions(7232);
	v->a[173145] = 2;
	v->a[173146] = sym_raw_string;
	v->a[173147] = sym_ansi_c_string;
	v->a[173148] = actions(7240);
	v->a[173149] = 2;
	v->a[173150] = anon_sym_LT_LPAREN;
	v->a[173151] = anon_sym_GT_LPAREN;
	v->a[173152] = state(3477);
	v->a[173153] = 2;
	v->a[173154] = sym_case_item;
	v->a[173155] = aux_sym_case_statement_repeat1;
	v->a[173156] = state(6695);
	v->a[173157] = 2;
	v->a[173158] = sym_concatenation;
	v->a[173159] = sym__extglob_blob;
	small_parse_table_8658(v);
}

void	small_parse_table_8658(t_small_parse_table_array *v)
{
	v->a[173160] = state(6303);
	v->a[173161] = 9;
	v->a[173162] = sym_arithmetic_expansion;
	v->a[173163] = sym_brace_expression;
	v->a[173164] = sym_string;
	v->a[173165] = sym_translated_string;
	v->a[173166] = sym_number;
	v->a[173167] = sym_simple_expansion;
	v->a[173168] = sym_expansion;
	v->a[173169] = sym_command_substitution;
	v->a[173170] = sym_process_substitution;
	v->a[173171] = 8;
	v->a[173172] = actions(3);
	v->a[173173] = 1;
	v->a[173174] = sym_comment;
	v->a[173175] = actions(1241);
	v->a[173176] = 1;
	v->a[173177] = sym_file_descriptor;
	v->a[173178] = actions(7673);
	v->a[173179] = 1;
	small_parse_table_8659(v);
}

void	small_parse_table_8659(t_small_parse_table_array *v)
{
	v->a[173180] = anon_sym_DQUOTE;
	v->a[173181] = actions(7677);
	v->a[173182] = 1;
	v->a[173183] = sym_variable_name;
	v->a[173184] = state(4393);
	v->a[173185] = 1;
	v->a[173186] = sym_string;
	v->a[173187] = actions(7675);
	v->a[173188] = 2;
	v->a[173189] = aux_sym__simple_variable_name_token1;
	v->a[173190] = aux_sym__multiline_variable_name_token1;
	v->a[173191] = actions(7671);
	v->a[173192] = 9;
	v->a[173193] = anon_sym_DASH;
	v->a[173194] = anon_sym_STAR;
	v->a[173195] = anon_sym_BANG;
	v->a[173196] = anon_sym_QMARK;
	v->a[173197] = anon_sym_DOLLAR;
	v->a[173198] = anon_sym_POUND;
	v->a[173199] = anon_sym_AT2;
	small_parse_table_8660(v);
}

/* EOF small_parse_table_1731.c */
