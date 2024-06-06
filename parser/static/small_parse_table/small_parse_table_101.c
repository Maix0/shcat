/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_101.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_505(t_small_parse_table_array *v)
{
	v->a[10100] = aux_sym_command_repeat2;
	v->a[10101] = state(1232);
	v->a[10102] = 1;
	v->a[10103] = aux_sym__literal_repeat1;
	v->a[10104] = state(1293);
	v->a[10105] = 1;
	v->a[10106] = sym_concatenation;
	v->a[10107] = actions(1250);
	v->a[10108] = 2;
	v->a[10109] = sym_raw_string;
	v->a[10110] = sym_word;
	v->a[10111] = actions(1339);
	v->a[10112] = 2;
	v->a[10113] = sym_file_descriptor;
	v->a[10114] = aux_sym_heredoc_redirect_token1;
	v->a[10115] = state(770);
	v->a[10116] = 7;
	v->a[10117] = sym_arithmetic_expansion;
	v->a[10118] = sym_brace_expression;
	v->a[10119] = sym_string;
	small_parse_table_506(v);
}

void	small_parse_table_506(t_small_parse_table_array *v)
{
	v->a[10120] = sym_number;
	v->a[10121] = sym_simple_expansion;
	v->a[10122] = sym_expansion;
	v->a[10123] = sym_command_substitution;
	v->a[10124] = actions(1337);
	v->a[10125] = 20;
	v->a[10126] = anon_sym_PIPE;
	v->a[10127] = anon_sym_RPAREN;
	v->a[10128] = anon_sym_SEMI_SEMI;
	v->a[10129] = anon_sym_PIPE_AMP;
	v->a[10130] = anon_sym_AMP_AMP;
	v->a[10131] = anon_sym_PIPE_PIPE;
	v->a[10132] = anon_sym_LT;
	v->a[10133] = anon_sym_GT;
	v->a[10134] = anon_sym_GT_GT;
	v->a[10135] = anon_sym_AMP_GT;
	v->a[10136] = anon_sym_AMP_GT_GT;
	v->a[10137] = anon_sym_LT_AMP;
	v->a[10138] = anon_sym_GT_AMP;
	v->a[10139] = anon_sym_GT_PIPE;
	small_parse_table_507(v);
}

void	small_parse_table_507(t_small_parse_table_array *v)
{
	v->a[10140] = anon_sym_LT_AMP_DASH;
	v->a[10141] = anon_sym_GT_AMP_DASH;
	v->a[10142] = anon_sym_LT_LT;
	v->a[10143] = anon_sym_LT_LT_DASH;
	v->a[10144] = anon_sym_AMP;
	v->a[10145] = anon_sym_SEMI;
	v->a[10146] = 21;
	v->a[10147] = actions(3);
	v->a[10148] = 1;
	v->a[10149] = sym_comment;
	v->a[10150] = actions(2111);
	v->a[10151] = 1;
	v->a[10152] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10153] = actions(2114);
	v->a[10154] = 1;
	v->a[10155] = anon_sym_DOLLAR;
	v->a[10156] = actions(2117);
	v->a[10157] = 1;
	v->a[10158] = sym__special_character;
	v->a[10159] = actions(2120);
	small_parse_table_508(v);
}

void	small_parse_table_508(t_small_parse_table_array *v)
{
	v->a[10160] = 1;
	v->a[10161] = anon_sym_DQUOTE;
	v->a[10162] = actions(2123);
	v->a[10163] = 1;
	v->a[10164] = aux_sym_number_token1;
	v->a[10165] = actions(2126);
	v->a[10166] = 1;
	v->a[10167] = aux_sym_number_token2;
	v->a[10168] = actions(2129);
	v->a[10169] = 1;
	v->a[10170] = anon_sym_DOLLAR_LBRACE;
	v->a[10171] = actions(2132);
	v->a[10172] = 1;
	v->a[10173] = anon_sym_DOLLAR_LPAREN;
	v->a[10174] = actions(2135);
	v->a[10175] = 1;
	v->a[10176] = anon_sym_BQUOTE;
	v->a[10177] = actions(2138);
	v->a[10178] = 1;
	v->a[10179] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_509(v);
}

void	small_parse_table_509(t_small_parse_table_array *v)
{
	v->a[10180] = actions(2141);
	v->a[10181] = 1;
	v->a[10182] = sym_test_operator;
	v->a[10183] = actions(2144);
	v->a[10184] = 1;
	v->a[10185] = sym__bare_dollar;
	v->a[10186] = actions(2147);
	v->a[10187] = 1;
	v->a[10188] = sym__brace_start;
	v->a[10189] = state(390);
	v->a[10190] = 1;
	v->a[10191] = aux_sym_command_repeat2;
	v->a[10192] = state(1232);
	v->a[10193] = 1;
	v->a[10194] = aux_sym__literal_repeat1;
	v->a[10195] = state(1293);
	v->a[10196] = 1;
	v->a[10197] = sym_concatenation;
	v->a[10198] = actions(1195);
	v->a[10199] = 2;
	small_parse_table_510(v);
}

/* EOF small_parse_table_101.c */
