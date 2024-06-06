/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_141.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_705(t_small_parse_table_array *v)
{
	v->a[14100] = 18;
	v->a[14101] = actions(3);
	v->a[14102] = 1;
	v->a[14103] = sym_comment;
	v->a[14104] = actions(2152);
	v->a[14105] = 1;
	v->a[14106] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14107] = actions(2154);
	v->a[14108] = 1;
	v->a[14109] = anon_sym_DOLLAR;
	v->a[14110] = actions(2158);
	v->a[14111] = 1;
	v->a[14112] = anon_sym_DQUOTE;
	v->a[14113] = actions(2160);
	v->a[14114] = 1;
	v->a[14115] = aux_sym_number_token1;
	v->a[14116] = actions(2162);
	v->a[14117] = 1;
	v->a[14118] = aux_sym_number_token2;
	v->a[14119] = actions(2164);
	small_parse_table_706(v);
}

void	small_parse_table_706(t_small_parse_table_array *v)
{
	v->a[14120] = 1;
	v->a[14121] = anon_sym_DOLLAR_LBRACE;
	v->a[14122] = actions(2166);
	v->a[14123] = 1;
	v->a[14124] = anon_sym_DOLLAR_LPAREN;
	v->a[14125] = actions(2170);
	v->a[14126] = 1;
	v->a[14127] = anon_sym_DOLLAR_BQUOTE;
	v->a[14128] = actions(2174);
	v->a[14129] = 1;
	v->a[14130] = sym__brace_start;
	v->a[14131] = actions(2386);
	v->a[14132] = 1;
	v->a[14133] = sym__special_character;
	v->a[14134] = actions(2388);
	v->a[14135] = 1;
	v->a[14136] = sym_test_operator;
	v->a[14137] = state(1270);
	v->a[14138] = 1;
	v->a[14139] = aux_sym__literal_repeat1;
	small_parse_table_707(v);
}

void	small_parse_table_707(t_small_parse_table_array *v)
{
	v->a[14140] = actions(1390);
	v->a[14141] = 2;
	v->a[14142] = sym_file_descriptor;
	v->a[14143] = aux_sym_heredoc_redirect_token1;
	v->a[14144] = actions(2384);
	v->a[14145] = 2;
	v->a[14146] = sym_raw_string;
	v->a[14147] = sym_word;
	v->a[14148] = state(428);
	v->a[14149] = 2;
	v->a[14150] = sym_concatenation;
	v->a[14151] = aux_sym_for_statement_repeat1;
	v->a[14152] = state(1222);
	v->a[14153] = 7;
	v->a[14154] = sym_arithmetic_expansion;
	v->a[14155] = sym_brace_expression;
	v->a[14156] = sym_string;
	v->a[14157] = sym_number;
	v->a[14158] = sym_simple_expansion;
	v->a[14159] = sym_expansion;
	small_parse_table_708(v);
}

void	small_parse_table_708(t_small_parse_table_array *v)
{
	v->a[14160] = sym_command_substitution;
	v->a[14161] = actions(1388);
	v->a[14162] = 20;
	v->a[14163] = anon_sym_PIPE;
	v->a[14164] = anon_sym_SEMI_SEMI;
	v->a[14165] = anon_sym_PIPE_AMP;
	v->a[14166] = anon_sym_AMP_AMP;
	v->a[14167] = anon_sym_PIPE_PIPE;
	v->a[14168] = anon_sym_LT;
	v->a[14169] = anon_sym_GT;
	v->a[14170] = anon_sym_GT_GT;
	v->a[14171] = anon_sym_AMP_GT;
	v->a[14172] = anon_sym_AMP_GT_GT;
	v->a[14173] = anon_sym_LT_AMP;
	v->a[14174] = anon_sym_GT_AMP;
	v->a[14175] = anon_sym_GT_PIPE;
	v->a[14176] = anon_sym_LT_AMP_DASH;
	v->a[14177] = anon_sym_GT_AMP_DASH;
	v->a[14178] = anon_sym_LT_LT;
	v->a[14179] = anon_sym_LT_LT_DASH;
	small_parse_table_709(v);
}

void	small_parse_table_709(t_small_parse_table_array *v)
{
	v->a[14180] = anon_sym_AMP;
	v->a[14181] = anon_sym_BQUOTE;
	v->a[14182] = anon_sym_SEMI;
	v->a[14183] = 19;
	v->a[14184] = actions(3);
	v->a[14185] = 1;
	v->a[14186] = sym_comment;
	v->a[14187] = actions(2354);
	v->a[14188] = 1;
	v->a[14189] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14190] = actions(2356);
	v->a[14191] = 1;
	v->a[14192] = anon_sym_DOLLAR;
	v->a[14193] = actions(2360);
	v->a[14194] = 1;
	v->a[14195] = anon_sym_DQUOTE;
	v->a[14196] = actions(2362);
	v->a[14197] = 1;
	v->a[14198] = aux_sym_number_token1;
	v->a[14199] = actions(2364);
	small_parse_table_710(v);
}

/* EOF small_parse_table_141.c */
