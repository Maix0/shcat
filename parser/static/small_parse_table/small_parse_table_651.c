/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_651.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3255(t_small_parse_table_array *v)
{
	v->a[65100] = sym_string;
	v->a[65101] = sym_simple_expansion;
	v->a[65102] = sym_expansion;
	v->a[65103] = state(328);
	v->a[65104] = 8;
	v->a[65105] = sym__arithmetic_expression;
	v->a[65106] = sym_arithmetic_literal;
	v->a[65107] = sym_arithmetic_binary_expression;
	v->a[65108] = sym_arithmetic_ternary_expression;
	v->a[65109] = sym_arithmetic_unary_expression;
	v->a[65110] = sym_arithmetic_postfix_expression;
	v->a[65111] = sym_arithmetic_parenthesized_expression;
	v->a[65112] = sym_command_substitution;
	v->a[65113] = 3;
	v->a[65114] = actions(3);
	v->a[65115] = 1;
	v->a[65116] = sym_comment;
	v->a[65117] = actions(1175);
	v->a[65118] = 2;
	v->a[65119] = sym_file_descriptor;
	small_parse_table_3256(v);
}

void	small_parse_table_3256(t_small_parse_table_array *v)
{
	v->a[65120] = sym_variable_name;
	v->a[65121] = actions(1173);
	v->a[65122] = 24;
	v->a[65123] = anon_sym_PIPE;
	v->a[65124] = anon_sym_AMP_AMP;
	v->a[65125] = anon_sym_PIPE_PIPE;
	v->a[65126] = anon_sym_LT;
	v->a[65127] = anon_sym_GT;
	v->a[65128] = anon_sym_GT_GT;
	v->a[65129] = anon_sym_AMP_GT;
	v->a[65130] = anon_sym_AMP_GT_GT;
	v->a[65131] = anon_sym_LT_AMP;
	v->a[65132] = anon_sym_GT_AMP;
	v->a[65133] = anon_sym_GT_PIPE;
	v->a[65134] = anon_sym_LT_AMP_DASH;
	v->a[65135] = anon_sym_GT_AMP_DASH;
	v->a[65136] = anon_sym_LT_LT;
	v->a[65137] = anon_sym_LT_LT_DASH;
	v->a[65138] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65139] = anon_sym_DOLLAR;
	small_parse_table_3257(v);
}

void	small_parse_table_3257(t_small_parse_table_array *v)
{
	v->a[65140] = anon_sym_DQUOTE;
	v->a[65141] = sym_raw_string;
	v->a[65142] = sym_number;
	v->a[65143] = anon_sym_DOLLAR_LBRACE;
	v->a[65144] = anon_sym_DOLLAR_LPAREN;
	v->a[65145] = anon_sym_BQUOTE;
	v->a[65146] = sym_word;
	v->a[65147] = 15;
	v->a[65148] = actions(1094);
	v->a[65149] = 1;
	v->a[65150] = sym_comment;
	v->a[65151] = actions(2003);
	v->a[65152] = 1;
	v->a[65153] = anon_sym_LPAREN;
	v->a[65154] = actions(2005);
	v->a[65155] = 1;
	v->a[65156] = anon_sym_BANG;
	v->a[65157] = actions(2011);
	v->a[65158] = 1;
	v->a[65159] = anon_sym_TILDE;
	small_parse_table_3258(v);
}

void	small_parse_table_3258(t_small_parse_table_array *v)
{
	v->a[65160] = actions(2013);
	v->a[65161] = 1;
	v->a[65162] = anon_sym_DOLLAR;
	v->a[65163] = actions(2015);
	v->a[65164] = 1;
	v->a[65165] = anon_sym_DQUOTE;
	v->a[65166] = actions(2019);
	v->a[65167] = 1;
	v->a[65168] = anon_sym_DOLLAR_LBRACE;
	v->a[65169] = actions(2021);
	v->a[65170] = 1;
	v->a[65171] = anon_sym_DOLLAR_LPAREN;
	v->a[65172] = actions(2023);
	v->a[65173] = 1;
	v->a[65174] = anon_sym_BQUOTE;
	v->a[65175] = actions(2025);
	v->a[65176] = 1;
	v->a[65177] = sym_variable_name;
	v->a[65178] = actions(2007);
	v->a[65179] = 2;
	small_parse_table_3259(v);
}

void	small_parse_table_3259(t_small_parse_table_array *v)
{
	v->a[65180] = anon_sym_PLUS_PLUS;
	v->a[65181] = anon_sym_DASH_DASH;
	v->a[65182] = actions(2009);
	v->a[65183] = 2;
	v->a[65184] = anon_sym_DASH2;
	v->a[65185] = anon_sym_PLUS2;
	v->a[65186] = actions(2017);
	v->a[65187] = 2;
	v->a[65188] = sym_number;
	v->a[65189] = aux_sym__simple_variable_name_token1;
	v->a[65190] = state(503);
	v->a[65191] = 3;
	v->a[65192] = sym_string;
	v->a[65193] = sym_simple_expansion;
	v->a[65194] = sym_expansion;
	v->a[65195] = state(438);
	v->a[65196] = 8;
	v->a[65197] = sym__arithmetic_expression;
	v->a[65198] = sym_arithmetic_literal;
	v->a[65199] = sym_arithmetic_binary_expression;
	small_parse_table_3260(v);
}

/* EOF small_parse_table_651.c */
