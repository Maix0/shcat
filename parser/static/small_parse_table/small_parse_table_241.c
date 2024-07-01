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
	v->a[24100] = anon_sym_AMP_AMP;
	v->a[24101] = anon_sym_PIPE_PIPE;
	v->a[24102] = anon_sym_LT;
	v->a[24103] = anon_sym_GT;
	v->a[24104] = anon_sym_GT_GT;
	v->a[24105] = anon_sym_LT_AMP;
	v->a[24106] = anon_sym_GT_AMP;
	v->a[24107] = anon_sym_GT_PIPE;
	v->a[24108] = anon_sym_LT_GT;
	v->a[24109] = anon_sym_LT_LT;
	v->a[24110] = anon_sym_LT_LT_DASH;
	v->a[24111] = aux_sym_heredoc_redirect_token1;
	v->a[24112] = anon_sym_AMP;
	v->a[24113] = anon_sym_SEMI;
	v->a[24114] = 11;
	v->a[24115] = actions(3);
	v->a[24116] = 1;
	v->a[24117] = sym_comment;
	v->a[24118] = actions(495);
	v->a[24119] = 1;
	small_parse_table_1206(v);
}

void	small_parse_table_1206(t_small_parse_table_array *v)
{
	v->a[24120] = sym_file_descriptor;
	v->a[24121] = actions(871);
	v->a[24122] = 1;
	v->a[24123] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24124] = actions(873);
	v->a[24125] = 1;
	v->a[24126] = anon_sym_DOLLAR;
	v->a[24127] = actions(875);
	v->a[24128] = 1;
	v->a[24129] = anon_sym_DQUOTE;
	v->a[24130] = actions(877);
	v->a[24131] = 1;
	v->a[24132] = anon_sym_DOLLAR_LBRACE;
	v->a[24133] = actions(879);
	v->a[24134] = 1;
	v->a[24135] = anon_sym_DOLLAR_LPAREN;
	v->a[24136] = state(263);
	v->a[24137] = 2;
	v->a[24138] = sym_concatenation;
	v->a[24139] = aux_sym_for_statement_repeat1;
	small_parse_table_1207(v);
}

void	small_parse_table_1207(t_small_parse_table_array *v)
{
	v->a[24140] = actions(947);
	v->a[24141] = 3;
	v->a[24142] = sym_raw_string;
	v->a[24143] = sym_number;
	v->a[24144] = sym_word;
	v->a[24145] = state(616);
	v->a[24146] = 5;
	v->a[24147] = sym_arithmetic_expansion;
	v->a[24148] = sym_string;
	v->a[24149] = sym_simple_expansion;
	v->a[24150] = sym_expansion;
	v->a[24151] = sym_command_substitution;
	v->a[24152] = actions(497);
	v->a[24153] = 17;
	v->a[24154] = anon_sym_PIPE;
	v->a[24155] = anon_sym_SEMI_SEMI;
	v->a[24156] = anon_sym_AMP_AMP;
	v->a[24157] = anon_sym_PIPE_PIPE;
	v->a[24158] = anon_sym_LT;
	v->a[24159] = anon_sym_GT;
	small_parse_table_1208(v);
}

void	small_parse_table_1208(t_small_parse_table_array *v)
{
	v->a[24160] = anon_sym_GT_GT;
	v->a[24161] = anon_sym_LT_AMP;
	v->a[24162] = anon_sym_GT_AMP;
	v->a[24163] = anon_sym_GT_PIPE;
	v->a[24164] = anon_sym_LT_GT;
	v->a[24165] = anon_sym_LT_LT;
	v->a[24166] = anon_sym_LT_LT_DASH;
	v->a[24167] = aux_sym_heredoc_redirect_token1;
	v->a[24168] = anon_sym_AMP;
	v->a[24169] = anon_sym_BQUOTE;
	v->a[24170] = anon_sym_SEMI;
	v->a[24171] = 11;
	v->a[24172] = actions(3);
	v->a[24173] = 1;
	v->a[24174] = sym_comment;
	v->a[24175] = actions(552);
	v->a[24176] = 1;
	v->a[24177] = sym_file_descriptor;
	v->a[24178] = actions(871);
	v->a[24179] = 1;
	small_parse_table_1209(v);
}

void	small_parse_table_1209(t_small_parse_table_array *v)
{
	v->a[24180] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24181] = actions(873);
	v->a[24182] = 1;
	v->a[24183] = anon_sym_DOLLAR;
	v->a[24184] = actions(875);
	v->a[24185] = 1;
	v->a[24186] = anon_sym_DQUOTE;
	v->a[24187] = actions(877);
	v->a[24188] = 1;
	v->a[24189] = anon_sym_DOLLAR_LBRACE;
	v->a[24190] = actions(879);
	v->a[24191] = 1;
	v->a[24192] = anon_sym_DOLLAR_LPAREN;
	v->a[24193] = state(263);
	v->a[24194] = 2;
	v->a[24195] = sym_concatenation;
	v->a[24196] = aux_sym_for_statement_repeat1;
	v->a[24197] = actions(947);
	v->a[24198] = 3;
	v->a[24199] = sym_raw_string;
	small_parse_table_1210(v);
}

/* EOF small_parse_table_241.c */
