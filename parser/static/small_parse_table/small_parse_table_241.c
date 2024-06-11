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
	v->a[24100] = actions(3);
	v->a[24101] = 1;
	v->a[24102] = sym_comment;
	v->a[24103] = actions(543);
	v->a[24104] = 1;
	v->a[24105] = sym_file_descriptor;
	v->a[24106] = actions(701);
	v->a[24107] = 1;
	v->a[24108] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24109] = actions(703);
	v->a[24110] = 1;
	v->a[24111] = anon_sym_DOLLAR;
	v->a[24112] = actions(705);
	v->a[24113] = 1;
	v->a[24114] = anon_sym_DQUOTE;
	v->a[24115] = actions(707);
	v->a[24116] = 1;
	v->a[24117] = anon_sym_DOLLAR_LBRACE;
	v->a[24118] = actions(709);
	v->a[24119] = 1;
	small_parse_table_1206(v);
}

void	small_parse_table_1206(t_small_parse_table_array *v)
{
	v->a[24120] = anon_sym_DOLLAR_LPAREN;
	v->a[24121] = actions(711);
	v->a[24122] = 1;
	v->a[24123] = anon_sym_BQUOTE;
	v->a[24124] = state(237);
	v->a[24125] = 2;
	v->a[24126] = sym_concatenation;
	v->a[24127] = aux_sym_for_statement_repeat1;
	v->a[24128] = actions(699);
	v->a[24129] = 3;
	v->a[24130] = sym_raw_string;
	v->a[24131] = sym_number;
	v->a[24132] = sym_word;
	v->a[24133] = state(517);
	v->a[24134] = 5;
	v->a[24135] = sym_arithmetic_expansion;
	v->a[24136] = sym_string;
	v->a[24137] = sym_simple_expansion;
	v->a[24138] = sym_expansion;
	v->a[24139] = sym_command_substitution;
	small_parse_table_1207(v);
}

void	small_parse_table_1207(t_small_parse_table_array *v)
{
	v->a[24140] = actions(541);
	v->a[24141] = 20;
	v->a[24142] = anon_sym_esac;
	v->a[24143] = anon_sym_PIPE;
	v->a[24144] = anon_sym_SEMI_SEMI;
	v->a[24145] = anon_sym_AMP_AMP;
	v->a[24146] = anon_sym_PIPE_PIPE;
	v->a[24147] = anon_sym_LT;
	v->a[24148] = anon_sym_GT;
	v->a[24149] = anon_sym_GT_GT;
	v->a[24150] = anon_sym_AMP_GT;
	v->a[24151] = anon_sym_AMP_GT_GT;
	v->a[24152] = anon_sym_LT_AMP;
	v->a[24153] = anon_sym_GT_AMP;
	v->a[24154] = anon_sym_GT_PIPE;
	v->a[24155] = anon_sym_LT_AMP_DASH;
	v->a[24156] = anon_sym_GT_AMP_DASH;
	v->a[24157] = anon_sym_LT_LT;
	v->a[24158] = anon_sym_LT_LT_DASH;
	v->a[24159] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1208(v);
}

void	small_parse_table_1208(t_small_parse_table_array *v)
{
	v->a[24160] = anon_sym_AMP;
	v->a[24161] = anon_sym_SEMI;
	v->a[24162] = 12;
	v->a[24163] = actions(3);
	v->a[24164] = 1;
	v->a[24165] = sym_comment;
	v->a[24166] = actions(559);
	v->a[24167] = 1;
	v->a[24168] = sym_file_descriptor;
	v->a[24169] = actions(764);
	v->a[24170] = 1;
	v->a[24171] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24172] = actions(767);
	v->a[24173] = 1;
	v->a[24174] = anon_sym_DOLLAR;
	v->a[24175] = actions(770);
	v->a[24176] = 1;
	v->a[24177] = anon_sym_DQUOTE;
	v->a[24178] = actions(773);
	v->a[24179] = 1;
	small_parse_table_1209(v);
}

void	small_parse_table_1209(t_small_parse_table_array *v)
{
	v->a[24180] = anon_sym_DOLLAR_LBRACE;
	v->a[24181] = actions(776);
	v->a[24182] = 1;
	v->a[24183] = anon_sym_DOLLAR_LPAREN;
	v->a[24184] = actions(779);
	v->a[24185] = 1;
	v->a[24186] = anon_sym_BQUOTE;
	v->a[24187] = state(236);
	v->a[24188] = 2;
	v->a[24189] = sym_concatenation;
	v->a[24190] = aux_sym_for_statement_repeat1;
	v->a[24191] = actions(761);
	v->a[24192] = 3;
	v->a[24193] = sym_raw_string;
	v->a[24194] = sym_number;
	v->a[24195] = sym_word;
	v->a[24196] = state(595);
	v->a[24197] = 5;
	v->a[24198] = sym_arithmetic_expansion;
	v->a[24199] = sym_string;
	small_parse_table_1210(v);
}

/* EOF small_parse_table_241.c */
