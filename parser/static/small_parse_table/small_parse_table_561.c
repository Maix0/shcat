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
	v->a[56100] = actions(1922);
	v->a[56101] = 1;
	v->a[56102] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56103] = actions(1926);
	v->a[56104] = 1;
	v->a[56105] = anon_sym_DQUOTE;
	v->a[56106] = actions(1928);
	v->a[56107] = 1;
	v->a[56108] = anon_sym_DOLLAR_LBRACE;
	v->a[56109] = actions(1930);
	v->a[56110] = 1;
	v->a[56111] = anon_sym_DOLLAR_LPAREN;
	v->a[56112] = actions(1932);
	v->a[56113] = 1;
	v->a[56114] = anon_sym_BQUOTE;
	v->a[56115] = actions(1934);
	v->a[56116] = 1;
	v->a[56117] = sym__bare_dollar;
	v->a[56118] = actions(2267);
	v->a[56119] = 1;
	small_parse_table_2806(v);
}

void	small_parse_table_2806(t_small_parse_table_array *v)
{
	v->a[56120] = anon_sym_DOLLAR;
	v->a[56121] = actions(1920);
	v->a[56122] = 5;
	v->a[56123] = aux_sym_concatenation_token1;
	v->a[56124] = sym_raw_string;
	v->a[56125] = sym_number;
	v->a[56126] = sym__comment_word;
	v->a[56127] = sym_word;
	v->a[56128] = state(810);
	v->a[56129] = 5;
	v->a[56130] = sym_arithmetic_expansion;
	v->a[56131] = sym_string;
	v->a[56132] = sym_simple_expansion;
	v->a[56133] = sym_expansion;
	v->a[56134] = sym_command_substitution;
	v->a[56135] = 10;
	v->a[56136] = actions(3);
	v->a[56137] = 1;
	v->a[56138] = sym_comment;
	v->a[56139] = actions(53);
	small_parse_table_2807(v);
}

void	small_parse_table_2807(t_small_parse_table_array *v)
{
	v->a[56140] = 1;
	v->a[56141] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56142] = actions(57);
	v->a[56143] = 1;
	v->a[56144] = anon_sym_DQUOTE;
	v->a[56145] = actions(61);
	v->a[56146] = 1;
	v->a[56147] = anon_sym_DOLLAR_LBRACE;
	v->a[56148] = actions(63);
	v->a[56149] = 1;
	v->a[56150] = anon_sym_DOLLAR_LPAREN;
	v->a[56151] = actions(65);
	v->a[56152] = 1;
	v->a[56153] = anon_sym_BQUOTE;
	v->a[56154] = actions(2179);
	v->a[56155] = 1;
	v->a[56156] = sym__bare_dollar;
	v->a[56157] = actions(2269);
	v->a[56158] = 1;
	v->a[56159] = anon_sym_DOLLAR;
	small_parse_table_2808(v);
}

void	small_parse_table_2808(t_small_parse_table_array *v)
{
	v->a[56160] = actions(2175);
	v->a[56161] = 5;
	v->a[56162] = aux_sym_concatenation_token1;
	v->a[56163] = sym_raw_string;
	v->a[56164] = sym_number;
	v->a[56165] = sym__comment_word;
	v->a[56166] = sym_word;
	v->a[56167] = state(396);
	v->a[56168] = 5;
	v->a[56169] = sym_arithmetic_expansion;
	v->a[56170] = sym_string;
	v->a[56171] = sym_simple_expansion;
	v->a[56172] = sym_expansion;
	v->a[56173] = sym_command_substitution;
	v->a[56174] = 5;
	v->a[56175] = actions(3);
	v->a[56176] = 1;
	v->a[56177] = sym_comment;
	v->a[56178] = actions(1781);
	v->a[56179] = 1;
	small_parse_table_2809(v);
}

void	small_parse_table_2809(t_small_parse_table_array *v)
{
	v->a[56180] = aux_sym_heredoc_redirect_token1;
	v->a[56181] = state(1121);
	v->a[56182] = 2;
	v->a[56183] = sym_file_redirect;
	v->a[56184] = aux_sym_redirected_statement_repeat2;
	v->a[56185] = actions(1776);
	v->a[56186] = 7;
	v->a[56187] = anon_sym_PIPE;
	v->a[56188] = anon_sym_SEMI_SEMI;
	v->a[56189] = anon_sym_AMP_AMP;
	v->a[56190] = anon_sym_PIPE_PIPE;
	v->a[56191] = anon_sym_LT_LT;
	v->a[56192] = anon_sym_LT_LT_DASH;
	v->a[56193] = anon_sym_SEMI;
	v->a[56194] = actions(2271);
	v->a[56195] = 7;
	v->a[56196] = anon_sym_LT;
	v->a[56197] = anon_sym_GT;
	v->a[56198] = anon_sym_GT_GT;
	v->a[56199] = anon_sym_LT_AMP;
	small_parse_table_2810(v);
}

/* EOF small_parse_table_561.c */
