/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_561.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2805(t_small_parse_table_array *v)
{
	v->a[56100] = actions(3);
	v->a[56101] = 1;
	v->a[56102] = sym_comment;
	v->a[56103] = actions(1390);
	v->a[56104] = 5;
	v->a[56105] = sym_file_descriptor;
	v->a[56106] = sym_variable_name;
	v->a[56107] = sym_test_operator;
	v->a[56108] = sym__brace_start;
	v->a[56109] = aux_sym_heredoc_redirect_token1;
	v->a[56110] = actions(1388);
	v->a[56111] = 33;
	v->a[56112] = anon_sym_PIPE;
	v->a[56113] = anon_sym_SEMI_SEMI;
	v->a[56114] = anon_sym_SEMI_AMP;
	v->a[56115] = anon_sym_SEMI_SEMI_AMP;
	v->a[56116] = anon_sym_PIPE_AMP;
	v->a[56117] = anon_sym_AMP_AMP;
	v->a[56118] = anon_sym_PIPE_PIPE;
	v->a[56119] = anon_sym_LT;
	small_parse_table_2806(v);
}

void	small_parse_table_2806(t_small_parse_table_array *v)
{
	v->a[56120] = anon_sym_GT;
	v->a[56121] = anon_sym_GT_GT;
	v->a[56122] = anon_sym_AMP_GT;
	v->a[56123] = anon_sym_AMP_GT_GT;
	v->a[56124] = anon_sym_LT_AMP;
	v->a[56125] = anon_sym_GT_AMP;
	v->a[56126] = anon_sym_GT_PIPE;
	v->a[56127] = anon_sym_LT_AMP_DASH;
	v->a[56128] = anon_sym_GT_AMP_DASH;
	v->a[56129] = anon_sym_LT_LT;
	v->a[56130] = anon_sym_LT_LT_DASH;
	v->a[56131] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56132] = anon_sym_AMP;
	v->a[56133] = anon_sym_DOLLAR;
	v->a[56134] = sym__special_character;
	v->a[56135] = anon_sym_DQUOTE;
	v->a[56136] = sym_raw_string;
	v->a[56137] = aux_sym_number_token1;
	v->a[56138] = aux_sym_number_token2;
	v->a[56139] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2807(v);
}

void	small_parse_table_2807(t_small_parse_table_array *v)
{
	v->a[56140] = anon_sym_DOLLAR_LPAREN;
	v->a[56141] = anon_sym_BQUOTE;
	v->a[56142] = anon_sym_DOLLAR_BQUOTE;
	v->a[56143] = sym_word;
	v->a[56144] = anon_sym_SEMI;
	v->a[56145] = 6;
	v->a[56146] = actions(3);
	v->a[56147] = 1;
	v->a[56148] = sym_comment;
	v->a[56149] = actions(3613);
	v->a[56150] = 1;
	v->a[56151] = aux_sym_concatenation_token1;
	v->a[56152] = actions(3674);
	v->a[56153] = 1;
	v->a[56154] = sym__concat;
	v->a[56155] = state(1164);
	v->a[56156] = 1;
	v->a[56157] = aux_sym_concatenation_repeat1;
	v->a[56158] = actions(3121);
	v->a[56159] = 4;
	small_parse_table_2808(v);
}

void	small_parse_table_2808(t_small_parse_table_array *v)
{
	v->a[56160] = sym_file_descriptor;
	v->a[56161] = sym_test_operator;
	v->a[56162] = sym__brace_start;
	v->a[56163] = aux_sym_heredoc_redirect_token1;
	v->a[56164] = actions(3119);
	v->a[56165] = 31;
	v->a[56166] = anon_sym_PIPE;
	v->a[56167] = anon_sym_SEMI_SEMI;
	v->a[56168] = anon_sym_PIPE_AMP;
	v->a[56169] = anon_sym_AMP_AMP;
	v->a[56170] = anon_sym_PIPE_PIPE;
	v->a[56171] = anon_sym_LT;
	v->a[56172] = anon_sym_GT;
	v->a[56173] = anon_sym_GT_GT;
	v->a[56174] = anon_sym_AMP_GT;
	v->a[56175] = anon_sym_AMP_GT_GT;
	v->a[56176] = anon_sym_LT_AMP;
	v->a[56177] = anon_sym_GT_AMP;
	v->a[56178] = anon_sym_GT_PIPE;
	v->a[56179] = anon_sym_LT_AMP_DASH;
	small_parse_table_2809(v);
}

void	small_parse_table_2809(t_small_parse_table_array *v)
{
	v->a[56180] = anon_sym_GT_AMP_DASH;
	v->a[56181] = anon_sym_LT_LT;
	v->a[56182] = anon_sym_LT_LT_DASH;
	v->a[56183] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56184] = anon_sym_AMP;
	v->a[56185] = anon_sym_DOLLAR;
	v->a[56186] = sym__special_character;
	v->a[56187] = anon_sym_DQUOTE;
	v->a[56188] = sym_raw_string;
	v->a[56189] = aux_sym_number_token1;
	v->a[56190] = aux_sym_number_token2;
	v->a[56191] = anon_sym_DOLLAR_LBRACE;
	v->a[56192] = anon_sym_DOLLAR_LPAREN;
	v->a[56193] = anon_sym_BQUOTE;
	v->a[56194] = anon_sym_DOLLAR_BQUOTE;
	v->a[56195] = sym_word;
	v->a[56196] = anon_sym_SEMI;
	v->a[56197] = 3;
	v->a[56198] = actions(3);
	v->a[56199] = 1;
	small_parse_table_2810(v);
}

/* EOF small_parse_table_561.c */
