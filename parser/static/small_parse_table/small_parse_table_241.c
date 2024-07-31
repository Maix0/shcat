/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_241.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1205(t_small_parse_table_array *v)
{
	v->a[24100] = actions(900);
	v->a[24101] = 1;
	v->a[24102] = sym_variable_name;
	v->a[24103] = state(465);
	v->a[24104] = 1;
	v->a[24105] = sym_terminator;
	v->a[24106] = actions(850);
	v->a[24107] = 2;
	v->a[24108] = anon_sym_LT_LT;
	v->a[24109] = anon_sym_LT_LT_DASH;
	v->a[24110] = actions(858);
	v->a[24111] = 2;
	v->a[24112] = aux_sym_heredoc_redirect_token1;
	v->a[24113] = anon_sym_SEMI;
	v->a[24114] = actions(898);
	v->a[24115] = 2;
	v->a[24116] = anon_sym_AMP_AMP;
	v->a[24117] = anon_sym_PIPE_PIPE;
	v->a[24118] = state(1002);
	v->a[24119] = 2;
	small_parse_table_1206(v);
}

void	small_parse_table_1206(t_small_parse_table_array *v)
{
	v->a[24120] = sym_variable_assignment;
	v->a[24121] = aux_sym__variable_assignments_repeat1;
	v->a[24122] = state(984);
	v->a[24123] = 3;
	v->a[24124] = sym_file_redirect;
	v->a[24125] = sym_heredoc_redirect;
	v->a[24126] = aux_sym_redirected_statement_repeat1;
	v->a[24127] = actions(742);
	v->a[24128] = 16;
	v->a[24129] = anon_sym_LT;
	v->a[24130] = anon_sym_GT;
	v->a[24131] = anon_sym_GT_GT;
	v->a[24132] = anon_sym_LT_AMP;
	v->a[24133] = anon_sym_GT_AMP;
	v->a[24134] = anon_sym_GT_PIPE;
	v->a[24135] = anon_sym_LT_GT;
	v->a[24136] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24137] = anon_sym_DOLLAR;
	v->a[24138] = anon_sym_DQUOTE;
	v->a[24139] = sym_raw_string;
	small_parse_table_1207(v);
}

void	small_parse_table_1207(t_small_parse_table_array *v)
{
	v->a[24140] = sym_number;
	v->a[24141] = anon_sym_DOLLAR_LBRACE;
	v->a[24142] = anon_sym_DOLLAR_LPAREN;
	v->a[24143] = anon_sym_BQUOTE;
	v->a[24144] = sym_word;
	v->a[24145] = 8;
	v->a[24146] = actions(3);
	v->a[24147] = 1;
	v->a[24148] = sym_comment;
	v->a[24149] = actions(746);
	v->a[24150] = 1;
	v->a[24151] = anon_sym_PIPE;
	v->a[24152] = actions(852);
	v->a[24153] = 1;
	v->a[24154] = sym_variable_name;
	v->a[24155] = actions(942);
	v->a[24156] = 1;
	v->a[24157] = ts_builtin_sym_end;
	v->a[24158] = state(919);
	v->a[24159] = 2;
	small_parse_table_1208(v);
}

void	small_parse_table_1208(t_small_parse_table_array *v)
{
	v->a[24160] = sym_variable_assignment;
	v->a[24161] = aux_sym__variable_assignments_repeat1;
	v->a[24162] = state(924);
	v->a[24163] = 3;
	v->a[24164] = sym_file_redirect;
	v->a[24165] = sym_heredoc_redirect;
	v->a[24166] = aux_sym_redirected_statement_repeat1;
	v->a[24167] = actions(916);
	v->a[24168] = 7;
	v->a[24169] = anon_sym_SEMI_SEMI;
	v->a[24170] = anon_sym_AMP_AMP;
	v->a[24171] = anon_sym_PIPE_PIPE;
	v->a[24172] = anon_sym_LT_LT;
	v->a[24173] = anon_sym_LT_LT_DASH;
	v->a[24174] = aux_sym_heredoc_redirect_token1;
	v->a[24175] = anon_sym_SEMI;
	v->a[24176] = actions(742);
	v->a[24177] = 16;
	v->a[24178] = anon_sym_LT;
	v->a[24179] = anon_sym_GT;
	small_parse_table_1209(v);
}

void	small_parse_table_1209(t_small_parse_table_array *v)
{
	v->a[24180] = anon_sym_GT_GT;
	v->a[24181] = anon_sym_LT_AMP;
	v->a[24182] = anon_sym_GT_AMP;
	v->a[24183] = anon_sym_GT_PIPE;
	v->a[24184] = anon_sym_LT_GT;
	v->a[24185] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24186] = anon_sym_DOLLAR;
	v->a[24187] = anon_sym_DQUOTE;
	v->a[24188] = sym_raw_string;
	v->a[24189] = sym_number;
	v->a[24190] = anon_sym_DOLLAR_LBRACE;
	v->a[24191] = anon_sym_DOLLAR_LPAREN;
	v->a[24192] = anon_sym_BQUOTE;
	v->a[24193] = sym_word;
	v->a[24194] = 11;
	v->a[24195] = actions(3);
	v->a[24196] = 1;
	v->a[24197] = sym_comment;
	v->a[24198] = actions(886);
	v->a[24199] = 1;
	small_parse_table_1210(v);
}

/* EOF small_parse_table_241.c */
