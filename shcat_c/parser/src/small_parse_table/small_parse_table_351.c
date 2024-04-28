/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_351.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1755(t_small_parse_table_array *v)
{
	v->a[35100] = 1;
	v->a[35101] = sym_test_operator;
	v->a[35102] = actions(79);
	v->a[35103] = 1;
	v->a[35104] = sym__brace_start;
	v->a[35105] = actions(1394);
	v->a[35106] = 1;
	v->a[35107] = anon_sym_LT_LT_LT;
	v->a[35108] = actions(1396);
	v->a[35109] = 1;
	v->a[35110] = sym_file_descriptor;
	v->a[35111] = actions(2666);
	v->a[35112] = 1;
	v->a[35113] = sym_word;
	v->a[35114] = actions(4705);
	v->a[35115] = 1;
	v->a[35116] = sym_variable_name;
	v->a[35117] = actions(4761);
	v->a[35118] = 1;
	v->a[35119] = sym__special_character;
	small_parse_table_1756(v);
}

void	small_parse_table_1756(t_small_parse_table_array *v)
{
	v->a[35120] = state(537);
	v->a[35121] = 1;
	v->a[35122] = sym_command_name;
	v->a[35123] = state(1212);
	v->a[35124] = 1;
	v->a[35125] = aux_sym__literal_repeat1;
	v->a[35126] = state(1386);
	v->a[35127] = 1;
	v->a[35128] = sym_concatenation;
	v->a[35129] = state(6771);
	v->a[35130] = 1;
	v->a[35131] = sym_subscript;
	v->a[35132] = actions(45);
	v->a[35133] = 2;
	v->a[35134] = anon_sym_LPAREN_LPAREN;
	v->a[35135] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35136] = actions(55);
	v->a[35137] = 2;
	v->a[35138] = sym_raw_string;
	v->a[35139] = sym_ansi_c_string;
	small_parse_table_1757(v);
}

void	small_parse_table_1757(t_small_parse_table_array *v)
{
	v->a[35140] = actions(69);
	v->a[35141] = 2;
	v->a[35142] = anon_sym_LT_LPAREN;
	v->a[35143] = anon_sym_GT_LPAREN;
	v->a[35144] = actions(1392);
	v->a[35145] = 2;
	v->a[35146] = anon_sym_LT_AMP_DASH;
	v->a[35147] = anon_sym_GT_AMP_DASH;
	v->a[35148] = state(3127);
	v->a[35149] = 2;
	v->a[35150] = sym_variable_assignment;
	v->a[35151] = aux_sym_command_repeat1;
	v->a[35152] = state(3581);
	v->a[35153] = 2;
	v->a[35154] = sym_file_redirect;
	v->a[35155] = sym_herestring_redirect;
	v->a[35156] = actions(1390);
	v->a[35157] = 3;
	v->a[35158] = anon_sym_GT_GT;
	v->a[35159] = anon_sym_AMP_GT_GT;
	small_parse_table_1758(v);
}

void	small_parse_table_1758(t_small_parse_table_array *v)
{
	v->a[35160] = anon_sym_GT_PIPE;
	v->a[35161] = actions(1388);
	v->a[35162] = 5;
	v->a[35163] = anon_sym_LT;
	v->a[35164] = anon_sym_GT;
	v->a[35165] = anon_sym_AMP_GT;
	v->a[35166] = anon_sym_LT_AMP;
	v->a[35167] = anon_sym_GT_AMP;
	v->a[35168] = state(957);
	v->a[35169] = 9;
	v->a[35170] = sym_arithmetic_expansion;
	v->a[35171] = sym_brace_expression;
	v->a[35172] = sym_string;
	v->a[35173] = sym_translated_string;
	v->a[35174] = sym_number;
	v->a[35175] = sym_simple_expansion;
	v->a[35176] = sym_expansion;
	v->a[35177] = sym_command_substitution;
	v->a[35178] = sym_process_substitution;
	v->a[35179] = 6;
	small_parse_table_1759(v);
}

void	small_parse_table_1759(t_small_parse_table_array *v)
{
	v->a[35180] = actions(3);
	v->a[35181] = 1;
	v->a[35182] = sym_comment;
	v->a[35183] = actions(4699);
	v->a[35184] = 1;
	v->a[35185] = aux_sym_concatenation_token1;
	v->a[35186] = actions(4701);
	v->a[35187] = 1;
	v->a[35188] = sym__concat;
	v->a[35189] = state(947);
	v->a[35190] = 1;
	v->a[35191] = aux_sym_concatenation_repeat1;
	v->a[35192] = actions(1281);
	v->a[35193] = 5;
	v->a[35194] = sym_file_descriptor;
	v->a[35195] = sym_test_operator;
	v->a[35196] = sym__bare_dollar;
	v->a[35197] = sym__brace_start;
	v->a[35198] = aux_sym_heredoc_redirect_token1;
	v->a[35199] = actions(1271);
	small_parse_table_1760(v);
}

/* EOF small_parse_table_351.c */
