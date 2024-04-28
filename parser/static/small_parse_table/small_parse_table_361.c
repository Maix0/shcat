/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_361.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1805(t_small_parse_table_array *v)
{
	v->a[36100] = state(962);
	v->a[36101] = 2;
	v->a[36102] = sym_concatenation;
	v->a[36103] = aux_sym_unset_command_repeat1;
	v->a[36104] = actions(2297);
	v->a[36105] = 7;
	v->a[36106] = anon_sym_PIPE;
	v->a[36107] = anon_sym_LT;
	v->a[36108] = anon_sym_GT;
	v->a[36109] = anon_sym_LT_LT;
	v->a[36110] = anon_sym_AMP_GT;
	v->a[36111] = anon_sym_LT_AMP;
	v->a[36112] = anon_sym_GT_AMP;
	v->a[36113] = state(2539);
	v->a[36114] = 9;
	v->a[36115] = sym_arithmetic_expansion;
	v->a[36116] = sym_brace_expression;
	v->a[36117] = sym_string;
	v->a[36118] = sym_translated_string;
	v->a[36119] = sym_number;
	small_parse_table_1806(v);
}

void	small_parse_table_1806(t_small_parse_table_array *v)
{
	v->a[36120] = sym_simple_expansion;
	v->a[36121] = sym_expansion;
	v->a[36122] = sym_command_substitution;
	v->a[36123] = sym_process_substitution;
	v->a[36124] = actions(2299);
	v->a[36125] = 10;
	v->a[36126] = sym_file_descriptor;
	v->a[36127] = anon_sym_PIPE_PIPE;
	v->a[36128] = anon_sym_AMP_AMP;
	v->a[36129] = anon_sym_GT_GT;
	v->a[36130] = anon_sym_PIPE_AMP;
	v->a[36131] = anon_sym_AMP_GT_GT;
	v->a[36132] = anon_sym_GT_PIPE;
	v->a[36133] = anon_sym_LT_AMP_DASH;
	v->a[36134] = anon_sym_GT_AMP_DASH;
	v->a[36135] = anon_sym_LT_LT_DASH;
	v->a[36136] = 30;
	v->a[36137] = actions(71);
	v->a[36138] = 1;
	v->a[36139] = sym_comment;
	small_parse_table_1807(v);
}

void	small_parse_table_1807(t_small_parse_table_array *v)
{
	v->a[36140] = actions(314);
	v->a[36141] = 1;
	v->a[36142] = anon_sym_DOLLAR_LBRACK;
	v->a[36143] = actions(316);
	v->a[36144] = 1;
	v->a[36145] = anon_sym_DOLLAR;
	v->a[36146] = actions(320);
	v->a[36147] = 1;
	v->a[36148] = anon_sym_DQUOTE;
	v->a[36149] = actions(324);
	v->a[36150] = 1;
	v->a[36151] = aux_sym_number_token1;
	v->a[36152] = actions(326);
	v->a[36153] = 1;
	v->a[36154] = aux_sym_number_token2;
	v->a[36155] = actions(328);
	v->a[36156] = 1;
	v->a[36157] = anon_sym_DOLLAR_LBRACE;
	v->a[36158] = actions(330);
	v->a[36159] = 1;
	small_parse_table_1808(v);
}

void	small_parse_table_1808(t_small_parse_table_array *v)
{
	v->a[36160] = anon_sym_DOLLAR_LPAREN;
	v->a[36161] = actions(332);
	v->a[36162] = 1;
	v->a[36163] = anon_sym_BQUOTE;
	v->a[36164] = actions(334);
	v->a[36165] = 1;
	v->a[36166] = anon_sym_DOLLAR_BQUOTE;
	v->a[36167] = actions(344);
	v->a[36168] = 1;
	v->a[36169] = sym__brace_start;
	v->a[36170] = actions(775);
	v->a[36171] = 1;
	v->a[36172] = sym_test_operator;
	v->a[36173] = actions(1394);
	v->a[36174] = 1;
	v->a[36175] = anon_sym_LT_LT_LT;
	v->a[36176] = actions(1396);
	v->a[36177] = 1;
	v->a[36178] = sym_file_descriptor;
	v->a[36179] = actions(2941);
	small_parse_table_1809(v);
}

void	small_parse_table_1809(t_small_parse_table_array *v)
{
	v->a[36180] = 1;
	v->a[36181] = sym_word;
	v->a[36182] = actions(4705);
	v->a[36183] = 1;
	v->a[36184] = sym_variable_name;
	v->a[36185] = actions(4850);
	v->a[36186] = 1;
	v->a[36187] = sym__special_character;
	v->a[36188] = state(536);
	v->a[36189] = 1;
	v->a[36190] = sym_command_name;
	v->a[36191] = state(1267);
	v->a[36192] = 1;
	v->a[36193] = aux_sym__literal_repeat1;
	v->a[36194] = state(1376);
	v->a[36195] = 1;
	v->a[36196] = sym_concatenation;
	v->a[36197] = state(6771);
	v->a[36198] = 1;
	v->a[36199] = sym_subscript;
	small_parse_table_1810(v);
}

/* EOF small_parse_table_361.c */
