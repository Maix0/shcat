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
	v->a[24100] = anon_sym_AMP;
	v->a[24101] = anon_sym_SEMI;
	v->a[24102] = 14;
	v->a[24103] = actions(3);
	v->a[24104] = 1;
	v->a[24105] = sym_comment;
	v->a[24106] = actions(555);
	v->a[24107] = 1;
	v->a[24108] = sym_file_descriptor;
	v->a[24109] = actions(761);
	v->a[24110] = 1;
	v->a[24111] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24112] = actions(763);
	v->a[24113] = 1;
	v->a[24114] = anon_sym_DOLLAR;
	v->a[24115] = actions(765);
	v->a[24116] = 1;
	v->a[24117] = anon_sym_DQUOTE;
	v->a[24118] = actions(767);
	v->a[24119] = 1;
	small_parse_table_1206(v);
}

void	small_parse_table_1206(t_small_parse_table_array *v)
{
	v->a[24120] = aux_sym_number_token1;
	v->a[24121] = actions(769);
	v->a[24122] = 1;
	v->a[24123] = aux_sym_number_token2;
	v->a[24124] = actions(771);
	v->a[24125] = 1;
	v->a[24126] = anon_sym_DOLLAR_LBRACE;
	v->a[24127] = actions(773);
	v->a[24128] = 1;
	v->a[24129] = anon_sym_DOLLAR_LPAREN;
	v->a[24130] = actions(775);
	v->a[24131] = 1;
	v->a[24132] = anon_sym_BQUOTE;
	v->a[24133] = actions(759);
	v->a[24134] = 2;
	v->a[24135] = sym_raw_string;
	v->a[24136] = sym_word;
	v->a[24137] = state(228);
	v->a[24138] = 2;
	v->a[24139] = sym_concatenation;
	small_parse_table_1207(v);
}

void	small_parse_table_1207(t_small_parse_table_array *v)
{
	v->a[24140] = aux_sym_for_statement_repeat1;
	v->a[24141] = state(541);
	v->a[24142] = 6;
	v->a[24143] = sym_arithmetic_expansion;
	v->a[24144] = sym_string;
	v->a[24145] = sym_number;
	v->a[24146] = sym_simple_expansion;
	v->a[24147] = sym_expansion;
	v->a[24148] = sym_command_substitution;
	v->a[24149] = actions(553);
	v->a[24150] = 20;
	v->a[24151] = anon_sym_PIPE;
	v->a[24152] = anon_sym_RPAREN;
	v->a[24153] = anon_sym_SEMI_SEMI;
	v->a[24154] = anon_sym_AMP_AMP;
	v->a[24155] = anon_sym_PIPE_PIPE;
	v->a[24156] = anon_sym_LT;
	v->a[24157] = anon_sym_GT;
	v->a[24158] = anon_sym_GT_GT;
	v->a[24159] = anon_sym_AMP_GT;
	small_parse_table_1208(v);
}

void	small_parse_table_1208(t_small_parse_table_array *v)
{
	v->a[24160] = anon_sym_AMP_GT_GT;
	v->a[24161] = anon_sym_LT_AMP;
	v->a[24162] = anon_sym_GT_AMP;
	v->a[24163] = anon_sym_GT_PIPE;
	v->a[24164] = anon_sym_LT_AMP_DASH;
	v->a[24165] = anon_sym_GT_AMP_DASH;
	v->a[24166] = anon_sym_LT_LT;
	v->a[24167] = anon_sym_LT_LT_DASH;
	v->a[24168] = aux_sym_heredoc_redirect_token1;
	v->a[24169] = anon_sym_AMP;
	v->a[24170] = anon_sym_SEMI;
	v->a[24171] = 14;
	v->a[24172] = actions(3);
	v->a[24173] = 1;
	v->a[24174] = sym_comment;
	v->a[24175] = actions(779);
	v->a[24176] = 1;
	v->a[24177] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24178] = actions(781);
	v->a[24179] = 1;
	small_parse_table_1209(v);
}

void	small_parse_table_1209(t_small_parse_table_array *v)
{
	v->a[24180] = anon_sym_DOLLAR;
	v->a[24181] = actions(783);
	v->a[24182] = 1;
	v->a[24183] = anon_sym_DQUOTE;
	v->a[24184] = actions(785);
	v->a[24185] = 1;
	v->a[24186] = aux_sym_number_token1;
	v->a[24187] = actions(787);
	v->a[24188] = 1;
	v->a[24189] = aux_sym_number_token2;
	v->a[24190] = actions(789);
	v->a[24191] = 1;
	v->a[24192] = anon_sym_DOLLAR_LBRACE;
	v->a[24193] = actions(791);
	v->a[24194] = 1;
	v->a[24195] = anon_sym_DOLLAR_LPAREN;
	v->a[24196] = actions(793);
	v->a[24197] = 1;
	v->a[24198] = anon_sym_BQUOTE;
	v->a[24199] = actions(555);
	small_parse_table_1210(v);
}

/* EOF small_parse_table_241.c */
