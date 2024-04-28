/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_431.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2155(t_small_parse_table_array *v)
{
	v->a[43100] = anon_sym_LT_AMP;
	v->a[43101] = anon_sym_GT_AMP;
	v->a[43102] = anon_sym_GT_PIPE;
	v->a[43103] = anon_sym_LT_AMP_DASH;
	v->a[43104] = anon_sym_GT_AMP_DASH;
	v->a[43105] = anon_sym_LT_LT_DASH;
	v->a[43106] = anon_sym_LT_LT_LT;
	v->a[43107] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43108] = anon_sym_DOLLAR_LBRACK;
	v->a[43109] = anon_sym_DOLLAR;
	v->a[43110] = sym__special_character;
	v->a[43111] = anon_sym_DQUOTE;
	v->a[43112] = sym_raw_string;
	v->a[43113] = sym_ansi_c_string;
	v->a[43114] = aux_sym_number_token1;
	v->a[43115] = aux_sym_number_token2;
	v->a[43116] = anon_sym_DOLLAR_LBRACE;
	v->a[43117] = anon_sym_DOLLAR_LPAREN;
	v->a[43118] = anon_sym_BQUOTE;
	v->a[43119] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2156(v);
}

void	small_parse_table_2156(t_small_parse_table_array *v)
{
	v->a[43120] = anon_sym_LT_LPAREN;
	v->a[43121] = anon_sym_GT_LPAREN;
	v->a[43122] = sym_word;
	v->a[43123] = 22;
	v->a[43124] = actions(71);
	v->a[43125] = 1;
	v->a[43126] = sym_comment;
	v->a[43127] = actions(5108);
	v->a[43128] = 1;
	v->a[43129] = sym_word;
	v->a[43130] = actions(5112);
	v->a[43131] = 1;
	v->a[43132] = anon_sym_DOLLAR_LBRACK;
	v->a[43133] = actions(5114);
	v->a[43134] = 1;
	v->a[43135] = anon_sym_DOLLAR;
	v->a[43136] = actions(5116);
	v->a[43137] = 1;
	v->a[43138] = sym__special_character;
	v->a[43139] = actions(5118);
	small_parse_table_2157(v);
}

void	small_parse_table_2157(t_small_parse_table_array *v)
{
	v->a[43140] = 1;
	v->a[43141] = anon_sym_DQUOTE;
	v->a[43142] = actions(5122);
	v->a[43143] = 1;
	v->a[43144] = aux_sym_number_token1;
	v->a[43145] = actions(5124);
	v->a[43146] = 1;
	v->a[43147] = aux_sym_number_token2;
	v->a[43148] = actions(5126);
	v->a[43149] = 1;
	v->a[43150] = anon_sym_DOLLAR_LBRACE;
	v->a[43151] = actions(5128);
	v->a[43152] = 1;
	v->a[43153] = anon_sym_DOLLAR_LPAREN;
	v->a[43154] = actions(5130);
	v->a[43155] = 1;
	v->a[43156] = anon_sym_BQUOTE;
	v->a[43157] = actions(5132);
	v->a[43158] = 1;
	v->a[43159] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2158(v);
}

void	small_parse_table_2158(t_small_parse_table_array *v)
{
	v->a[43160] = actions(5136);
	v->a[43161] = 1;
	v->a[43162] = sym_test_operator;
	v->a[43163] = actions(5138);
	v->a[43164] = 1;
	v->a[43165] = sym__brace_start;
	v->a[43166] = state(3114);
	v->a[43167] = 1;
	v->a[43168] = aux_sym__literal_repeat1;
	v->a[43169] = actions(5110);
	v->a[43170] = 2;
	v->a[43171] = anon_sym_LPAREN_LPAREN;
	v->a[43172] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43173] = actions(5120);
	v->a[43174] = 2;
	v->a[43175] = sym_raw_string;
	v->a[43176] = sym_ansi_c_string;
	v->a[43177] = actions(5134);
	v->a[43178] = 2;
	v->a[43179] = anon_sym_LT_LPAREN;
	small_parse_table_2159(v);
}

void	small_parse_table_2159(t_small_parse_table_array *v)
{
	v->a[43180] = anon_sym_GT_LPAREN;
	v->a[43181] = state(1075);
	v->a[43182] = 2;
	v->a[43183] = sym_concatenation;
	v->a[43184] = aux_sym_for_statement_repeat1;
	v->a[43185] = actions(2072);
	v->a[43186] = 7;
	v->a[43187] = anon_sym_PIPE;
	v->a[43188] = anon_sym_LT;
	v->a[43189] = anon_sym_GT;
	v->a[43190] = anon_sym_LT_LT;
	v->a[43191] = anon_sym_AMP_GT;
	v->a[43192] = anon_sym_LT_AMP;
	v->a[43193] = anon_sym_GT_AMP;
	v->a[43194] = state(2613);
	v->a[43195] = 9;
	v->a[43196] = sym_arithmetic_expansion;
	v->a[43197] = sym_brace_expression;
	v->a[43198] = sym_string;
	v->a[43199] = sym_translated_string;
	small_parse_table_2160(v);
}

/* EOF small_parse_table_431.c */
