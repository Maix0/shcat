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
	v->a[35100] = actions(59);
	v->a[35101] = 1;
	v->a[35102] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35103] = actions(61);
	v->a[35104] = 1;
	v->a[35105] = anon_sym_DOLLAR;
	v->a[35106] = actions(63);
	v->a[35107] = 1;
	v->a[35108] = anon_sym_DQUOTE;
	v->a[35109] = actions(67);
	v->a[35110] = 1;
	v->a[35111] = anon_sym_DOLLAR_LBRACE;
	v->a[35112] = actions(69);
	v->a[35113] = 1;
	v->a[35114] = anon_sym_DOLLAR_LPAREN;
	v->a[35115] = actions(71);
	v->a[35116] = 1;
	v->a[35117] = anon_sym_BQUOTE;
	v->a[35118] = actions(75);
	v->a[35119] = 1;
	small_parse_table_1756(v);
}

void	small_parse_table_1756(t_small_parse_table_array *v)
{
	v->a[35120] = sym_variable_name;
	v->a[35121] = actions(1256);
	v->a[35122] = 1;
	v->a[35123] = sym_file_descriptor;
	v->a[35124] = state(189);
	v->a[35125] = 1;
	v->a[35126] = sym_command_name;
	v->a[35127] = state(650);
	v->a[35128] = 1;
	v->a[35129] = sym_concatenation;
	v->a[35130] = state(713);
	v->a[35131] = 1;
	v->a[35132] = aux_sym_command_repeat1;
	v->a[35133] = state(714);
	v->a[35134] = 1;
	v->a[35135] = sym_variable_assignment;
	v->a[35136] = state(1216);
	v->a[35137] = 1;
	v->a[35138] = sym_subshell;
	v->a[35139] = state(1220);
	small_parse_table_1757(v);
}

void	small_parse_table_1757(t_small_parse_table_array *v)
{
	v->a[35140] = 1;
	v->a[35141] = sym_command;
	v->a[35142] = state(1385);
	v->a[35143] = 1;
	v->a[35144] = sym_file_redirect;
	v->a[35145] = actions(1254);
	v->a[35146] = 2;
	v->a[35147] = anon_sym_LT_AMP_DASH;
	v->a[35148] = anon_sym_GT_AMP_DASH;
	v->a[35149] = actions(65);
	v->a[35150] = 3;
	v->a[35151] = sym_raw_string;
	v->a[35152] = sym_number;
	v->a[35153] = sym_word;
	v->a[35154] = state(443);
	v->a[35155] = 5;
	v->a[35156] = sym_arithmetic_expansion;
	v->a[35157] = sym_string;
	v->a[35158] = sym_simple_expansion;
	v->a[35159] = sym_expansion;
	small_parse_table_1758(v);
}

void	small_parse_table_1758(t_small_parse_table_array *v)
{
	v->a[35160] = sym_command_substitution;
	v->a[35161] = actions(1252);
	v->a[35162] = 6;
	v->a[35163] = anon_sym_LT;
	v->a[35164] = anon_sym_GT;
	v->a[35165] = anon_sym_GT_GT;
	v->a[35166] = anon_sym_LT_AMP;
	v->a[35167] = anon_sym_GT_AMP;
	v->a[35168] = anon_sym_GT_PIPE;
	v->a[35169] = 6;
	v->a[35170] = actions(3);
	v->a[35171] = 1;
	v->a[35172] = sym_comment;
	v->a[35173] = actions(1311);
	v->a[35174] = 1;
	v->a[35175] = aux_sym_concatenation_token1;
	v->a[35176] = actions(1315);
	v->a[35177] = 1;
	v->a[35178] = sym__concat;
	v->a[35179] = state(425);
	small_parse_table_1759(v);
}

void	small_parse_table_1759(t_small_parse_table_array *v)
{
	v->a[35180] = 1;
	v->a[35181] = aux_sym_concatenation_repeat1;
	v->a[35182] = actions(1085);
	v->a[35183] = 2;
	v->a[35184] = sym_file_descriptor;
	v->a[35185] = sym__bare_dollar;
	v->a[35186] = actions(1081);
	v->a[35187] = 27;
	v->a[35188] = anon_sym_PIPE;
	v->a[35189] = anon_sym_RPAREN;
	v->a[35190] = anon_sym_SEMI_SEMI;
	v->a[35191] = anon_sym_AMP_AMP;
	v->a[35192] = anon_sym_PIPE_PIPE;
	v->a[35193] = anon_sym_LT;
	v->a[35194] = anon_sym_GT;
	v->a[35195] = anon_sym_GT_GT;
	v->a[35196] = anon_sym_LT_AMP;
	v->a[35197] = anon_sym_GT_AMP;
	v->a[35198] = anon_sym_GT_PIPE;
	v->a[35199] = anon_sym_LT_AMP_DASH;
	small_parse_table_1760(v);
}

/* EOF small_parse_table_351.c */
