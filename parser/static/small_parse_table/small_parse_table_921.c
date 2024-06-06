/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_921.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4605(t_small_parse_table_array *v)
{
	v->a[92100] = anon_sym_GT_PIPE;
	v->a[92101] = anon_sym_LT_AMP_DASH;
	v->a[92102] = anon_sym_GT_AMP_DASH;
	v->a[92103] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[92104] = anon_sym_DOLLAR;
	v->a[92105] = sym__special_character;
	v->a[92106] = anon_sym_DQUOTE;
	v->a[92107] = sym_raw_string;
	v->a[92108] = aux_sym_number_token1;
	v->a[92109] = aux_sym_number_token2;
	v->a[92110] = anon_sym_DOLLAR_LBRACE;
	v->a[92111] = anon_sym_DOLLAR_LPAREN;
	v->a[92112] = anon_sym_BQUOTE;
	v->a[92113] = anon_sym_DOLLAR_BQUOTE;
	v->a[92114] = sym_word;
	v->a[92115] = 20;
	v->a[92116] = actions(57);
	v->a[92117] = 1;
	v->a[92118] = sym_comment;
	v->a[92119] = actions(5098);
	small_parse_table_4606(v);
}

void	small_parse_table_4606(t_small_parse_table_array *v)
{
	v->a[92120] = 1;
	v->a[92121] = sym_word;
	v->a[92122] = actions(5101);
	v->a[92123] = 1;
	v->a[92124] = anon_sym_LPAREN;
	v->a[92125] = actions(5104);
	v->a[92126] = 1;
	v->a[92127] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[92128] = actions(5107);
	v->a[92129] = 1;
	v->a[92130] = anon_sym_DOLLAR;
	v->a[92131] = actions(5110);
	v->a[92132] = 1;
	v->a[92133] = sym__special_character;
	v->a[92134] = actions(5113);
	v->a[92135] = 1;
	v->a[92136] = anon_sym_DQUOTE;
	v->a[92137] = actions(5119);
	v->a[92138] = 1;
	v->a[92139] = aux_sym_number_token1;
	small_parse_table_4607(v);
}

void	small_parse_table_4607(t_small_parse_table_array *v)
{
	v->a[92140] = actions(5122);
	v->a[92141] = 1;
	v->a[92142] = aux_sym_number_token2;
	v->a[92143] = actions(5125);
	v->a[92144] = 1;
	v->a[92145] = anon_sym_DOLLAR_LBRACE;
	v->a[92146] = actions(5128);
	v->a[92147] = 1;
	v->a[92148] = anon_sym_DOLLAR_LPAREN;
	v->a[92149] = actions(5131);
	v->a[92150] = 1;
	v->a[92151] = anon_sym_BQUOTE;
	v->a[92152] = actions(5134);
	v->a[92153] = 1;
	v->a[92154] = anon_sym_DOLLAR_BQUOTE;
	v->a[92155] = actions(5137);
	v->a[92156] = 1;
	v->a[92157] = sym_extglob_pattern;
	v->a[92158] = actions(5140);
	v->a[92159] = 1;
	small_parse_table_4608(v);
}

void	small_parse_table_4608(t_small_parse_table_array *v)
{
	v->a[92160] = sym__brace_start;
	v->a[92161] = state(3415);
	v->a[92162] = 1;
	v->a[92163] = aux_sym__literal_repeat1;
	v->a[92164] = actions(5116);
	v->a[92165] = 2;
	v->a[92166] = sym_test_operator;
	v->a[92167] = sym_raw_string;
	v->a[92168] = state(1881);
	v->a[92169] = 2;
	v->a[92170] = sym_case_item;
	v->a[92171] = aux_sym_case_statement_repeat1;
	v->a[92172] = state(3497);
	v->a[92173] = 2;
	v->a[92174] = sym_concatenation;
	v->a[92175] = sym__extglob_blob;
	v->a[92176] = state(3311);
	v->a[92177] = 7;
	v->a[92178] = sym_arithmetic_expansion;
	v->a[92179] = sym_brace_expression;
	small_parse_table_4609(v);
}

void	small_parse_table_4609(t_small_parse_table_array *v)
{
	v->a[92180] = sym_string;
	v->a[92181] = sym_number;
	v->a[92182] = sym_simple_expansion;
	v->a[92183] = sym_expansion;
	v->a[92184] = sym_command_substitution;
	v->a[92185] = 3;
	v->a[92186] = actions(57);
	v->a[92187] = 1;
	v->a[92188] = sym_comment;
	v->a[92189] = actions(3157);
	v->a[92190] = 11;
	v->a[92191] = anon_sym_LT;
	v->a[92192] = anon_sym_GT;
	v->a[92193] = anon_sym_AMP_GT;
	v->a[92194] = anon_sym_LT_AMP;
	v->a[92195] = anon_sym_GT_AMP;
	v->a[92196] = anon_sym_DOLLAR;
	v->a[92197] = aux_sym_number_token1;
	v->a[92198] = aux_sym_number_token2;
	v->a[92199] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4610(v);
}

/* EOF small_parse_table_921.c */
