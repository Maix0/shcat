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
	v->a[35100] = anon_sym_BQUOTE;
	v->a[35101] = sym_word;
	v->a[35102] = anon_sym_SEMI;
	v->a[35103] = 7;
	v->a[35104] = actions(3);
	v->a[35105] = 1;
	v->a[35106] = sym_comment;
	v->a[35107] = actions(1075);
	v->a[35108] = 1;
	v->a[35109] = sym_file_descriptor;
	v->a[35110] = actions(1332);
	v->a[35111] = 1;
	v->a[35112] = sym_variable_name;
	v->a[35113] = state(1360);
	v->a[35114] = 2;
	v->a[35115] = sym_variable_assignment;
	v->a[35116] = aux_sym__variable_assignments_repeat1;
	v->a[35117] = state(1353);
	v->a[35118] = 3;
	v->a[35119] = sym_file_redirect;
	small_parse_table_1756(v);
}

void	small_parse_table_1756(t_small_parse_table_array *v)
{
	v->a[35120] = sym_heredoc_redirect;
	v->a[35121] = aux_sym_redirected_statement_repeat1;
	v->a[35122] = actions(780);
	v->a[35123] = 9;
	v->a[35124] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35125] = anon_sym_DOLLAR;
	v->a[35126] = anon_sym_DQUOTE;
	v->a[35127] = sym_raw_string;
	v->a[35128] = sym_number;
	v->a[35129] = anon_sym_DOLLAR_LBRACE;
	v->a[35130] = anon_sym_DOLLAR_LPAREN;
	v->a[35131] = anon_sym_BQUOTE;
	v->a[35132] = sym_word;
	v->a[35133] = actions(782);
	v->a[35134] = 13;
	v->a[35135] = anon_sym_PIPE;
	v->a[35136] = anon_sym_AMP_AMP;
	v->a[35137] = anon_sym_PIPE_PIPE;
	v->a[35138] = anon_sym_LT;
	v->a[35139] = anon_sym_GT;
	small_parse_table_1757(v);
}

void	small_parse_table_1757(t_small_parse_table_array *v)
{
	v->a[35140] = anon_sym_GT_GT;
	v->a[35141] = anon_sym_LT_AMP;
	v->a[35142] = anon_sym_GT_AMP;
	v->a[35143] = anon_sym_GT_PIPE;
	v->a[35144] = anon_sym_LT_GT;
	v->a[35145] = anon_sym_LT_LT;
	v->a[35146] = anon_sym_LT_LT_DASH;
	v->a[35147] = aux_sym_heredoc_redirect_token1;
	v->a[35148] = 3;
	v->a[35149] = actions(3);
	v->a[35150] = 1;
	v->a[35151] = sym_comment;
	v->a[35152] = actions(1110);
	v->a[35153] = 3;
	v->a[35154] = sym_file_descriptor;
	v->a[35155] = sym__concat;
	v->a[35156] = sym_variable_name;
	v->a[35157] = actions(1105);
	v->a[35158] = 26;
	v->a[35159] = anon_sym_PIPE;
	small_parse_table_1758(v);
}

void	small_parse_table_1758(t_small_parse_table_array *v)
{
	v->a[35160] = anon_sym_RPAREN;
	v->a[35161] = anon_sym_SEMI_SEMI;
	v->a[35162] = anon_sym_AMP_AMP;
	v->a[35163] = anon_sym_PIPE_PIPE;
	v->a[35164] = anon_sym_LT;
	v->a[35165] = anon_sym_GT;
	v->a[35166] = anon_sym_GT_GT;
	v->a[35167] = anon_sym_LT_AMP;
	v->a[35168] = anon_sym_GT_AMP;
	v->a[35169] = anon_sym_GT_PIPE;
	v->a[35170] = anon_sym_LT_GT;
	v->a[35171] = anon_sym_LT_LT;
	v->a[35172] = anon_sym_LT_LT_DASH;
	v->a[35173] = aux_sym_heredoc_redirect_token1;
	v->a[35174] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35175] = aux_sym_concatenation_token1;
	v->a[35176] = anon_sym_DOLLAR;
	v->a[35177] = anon_sym_DQUOTE;
	v->a[35178] = sym_raw_string;
	v->a[35179] = sym_number;
	small_parse_table_1759(v);
}

void	small_parse_table_1759(t_small_parse_table_array *v)
{
	v->a[35180] = anon_sym_DOLLAR_LBRACE;
	v->a[35181] = anon_sym_DOLLAR_LPAREN;
	v->a[35182] = anon_sym_BQUOTE;
	v->a[35183] = sym_word;
	v->a[35184] = anon_sym_SEMI;
	v->a[35185] = 3;
	v->a[35186] = actions(3);
	v->a[35187] = 1;
	v->a[35188] = sym_comment;
	v->a[35189] = actions(571);
	v->a[35190] = 4;
	v->a[35191] = sym_file_descriptor;
	v->a[35192] = sym__concat;
	v->a[35193] = sym__bare_dollar;
	v->a[35194] = ts_builtin_sym_end;
	v->a[35195] = actions(569);
	v->a[35196] = 25;
	v->a[35197] = anon_sym_PIPE;
	v->a[35198] = anon_sym_SEMI_SEMI;
	v->a[35199] = anon_sym_AMP_AMP;
	small_parse_table_1760(v);
}

/* EOF small_parse_table_351.c */
