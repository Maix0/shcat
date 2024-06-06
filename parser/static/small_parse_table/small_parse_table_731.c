/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_731.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3655(t_small_parse_table_array *v)
{
	v->a[73100] = 3;
	v->a[73101] = anon_sym_SEMI_SEMI;
	v->a[73102] = anon_sym_AMP;
	v->a[73103] = anon_sym_SEMI;
	v->a[73104] = state(3295);
	v->a[73105] = 7;
	v->a[73106] = sym_arithmetic_expansion;
	v->a[73107] = sym_brace_expression;
	v->a[73108] = sym_string;
	v->a[73109] = sym_number;
	v->a[73110] = sym_simple_expansion;
	v->a[73111] = sym_expansion;
	v->a[73112] = sym_command_substitution;
	v->a[73113] = 3;
	v->a[73114] = actions(57);
	v->a[73115] = 1;
	v->a[73116] = sym_comment;
	v->a[73117] = actions(3032);
	v->a[73118] = 13;
	v->a[73119] = anon_sym_PIPE;
	small_parse_table_3656(v);
}

void	small_parse_table_3656(t_small_parse_table_array *v)
{
	v->a[73120] = anon_sym_LT;
	v->a[73121] = anon_sym_GT;
	v->a[73122] = anon_sym_AMP_GT;
	v->a[73123] = anon_sym_LT_AMP;
	v->a[73124] = anon_sym_GT_AMP;
	v->a[73125] = anon_sym_LT_LT;
	v->a[73126] = anon_sym_DOLLAR;
	v->a[73127] = aux_sym_number_token1;
	v->a[73128] = aux_sym_number_token2;
	v->a[73129] = anon_sym_DOLLAR_LPAREN;
	v->a[73130] = anon_sym_BQUOTE;
	v->a[73131] = sym_word;
	v->a[73132] = actions(3034);
	v->a[73133] = 21;
	v->a[73134] = sym_file_descriptor;
	v->a[73135] = sym__concat;
	v->a[73136] = sym_test_operator;
	v->a[73137] = sym__bare_dollar;
	v->a[73138] = sym__brace_start;
	v->a[73139] = anon_sym_PIPE_AMP;
	small_parse_table_3657(v);
}

void	small_parse_table_3657(t_small_parse_table_array *v)
{
	v->a[73140] = anon_sym_AMP_AMP;
	v->a[73141] = anon_sym_PIPE_PIPE;
	v->a[73142] = anon_sym_GT_GT;
	v->a[73143] = anon_sym_AMP_GT_GT;
	v->a[73144] = anon_sym_GT_PIPE;
	v->a[73145] = anon_sym_LT_AMP_DASH;
	v->a[73146] = anon_sym_GT_AMP_DASH;
	v->a[73147] = anon_sym_LT_LT_DASH;
	v->a[73148] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[73149] = aux_sym_concatenation_token1;
	v->a[73150] = sym__special_character;
	v->a[73151] = anon_sym_DQUOTE;
	v->a[73152] = sym_raw_string;
	v->a[73153] = anon_sym_DOLLAR_LBRACE;
	v->a[73154] = anon_sym_DOLLAR_BQUOTE;
	v->a[73155] = 6;
	v->a[73156] = actions(3);
	v->a[73157] = 1;
	v->a[73158] = sym_comment;
	v->a[73159] = actions(4324);
	small_parse_table_3658(v);
}

void	small_parse_table_3658(t_small_parse_table_array *v)
{
	v->a[73160] = 1;
	v->a[73161] = sym_variable_name;
	v->a[73162] = actions(816);
	v->a[73163] = 2;
	v->a[73164] = sym_file_descriptor;
	v->a[73165] = ts_builtin_sym_end;
	v->a[73166] = actions(4322);
	v->a[73167] = 2;
	v->a[73168] = aux_sym__simple_variable_name_token1;
	v->a[73169] = aux_sym__multiline_variable_name_token1;
	v->a[73170] = actions(4320);
	v->a[73171] = 9;
	v->a[73172] = anon_sym_BANG;
	v->a[73173] = anon_sym_DASH;
	v->a[73174] = anon_sym_STAR;
	v->a[73175] = anon_sym_QMARK;
	v->a[73176] = anon_sym_DOLLAR;
	v->a[73177] = anon_sym_POUND;
	v->a[73178] = anon_sym_AT;
	v->a[73179] = anon_sym_0;
	small_parse_table_3659(v);
}

void	small_parse_table_3659(t_small_parse_table_array *v)
{
	v->a[73180] = anon_sym__;
	v->a[73181] = actions(810);
	v->a[73182] = 20;
	v->a[73183] = anon_sym_PIPE;
	v->a[73184] = anon_sym_SEMI_SEMI;
	v->a[73185] = anon_sym_PIPE_AMP;
	v->a[73186] = anon_sym_AMP_AMP;
	v->a[73187] = anon_sym_PIPE_PIPE;
	v->a[73188] = anon_sym_LT;
	v->a[73189] = anon_sym_GT;
	v->a[73190] = anon_sym_GT_GT;
	v->a[73191] = anon_sym_AMP_GT;
	v->a[73192] = anon_sym_AMP_GT_GT;
	v->a[73193] = anon_sym_LT_AMP;
	v->a[73194] = anon_sym_GT_AMP;
	v->a[73195] = anon_sym_GT_PIPE;
	v->a[73196] = anon_sym_LT_AMP_DASH;
	v->a[73197] = anon_sym_GT_AMP_DASH;
	v->a[73198] = anon_sym_LT_LT;
	v->a[73199] = anon_sym_LT_LT_DASH;
	small_parse_table_3660(v);
}

/* EOF small_parse_table_731.c */
