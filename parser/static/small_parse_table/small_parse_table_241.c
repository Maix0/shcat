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
	v->a[24100] = sym_number;
	v->a[24101] = sym_word;
	v->a[24102] = state(506);
	v->a[24103] = 5;
	v->a[24104] = sym_arithmetic_expansion;
	v->a[24105] = sym_string;
	v->a[24106] = sym_simple_expansion;
	v->a[24107] = sym_expansion;
	v->a[24108] = sym_command_substitution;
	v->a[24109] = actions(540);
	v->a[24110] = 20;
	v->a[24111] = anon_sym_esac;
	v->a[24112] = anon_sym_PIPE;
	v->a[24113] = anon_sym_SEMI_SEMI;
	v->a[24114] = anon_sym_AMP_AMP;
	v->a[24115] = anon_sym_PIPE_PIPE;
	v->a[24116] = anon_sym_LT;
	v->a[24117] = anon_sym_GT;
	v->a[24118] = anon_sym_GT_GT;
	v->a[24119] = anon_sym_AMP_GT;
	small_parse_table_1206(v);
}

void	small_parse_table_1206(t_small_parse_table_array *v)
{
	v->a[24120] = anon_sym_AMP_GT_GT;
	v->a[24121] = anon_sym_LT_AMP;
	v->a[24122] = anon_sym_GT_AMP;
	v->a[24123] = anon_sym_GT_PIPE;
	v->a[24124] = anon_sym_LT_AMP_DASH;
	v->a[24125] = anon_sym_GT_AMP_DASH;
	v->a[24126] = anon_sym_LT_LT;
	v->a[24127] = anon_sym_LT_LT_DASH;
	v->a[24128] = aux_sym_heredoc_redirect_token1;
	v->a[24129] = anon_sym_AMP;
	v->a[24130] = anon_sym_SEMI;
	v->a[24131] = 12;
	v->a[24132] = actions(3);
	v->a[24133] = 1;
	v->a[24134] = sym_comment;
	v->a[24135] = actions(766);
	v->a[24136] = 1;
	v->a[24137] = anon_sym_PIPE;
	v->a[24138] = actions(774);
	v->a[24139] = 1;
	small_parse_table_1207(v);
}

void	small_parse_table_1207(t_small_parse_table_array *v)
{
	v->a[24140] = sym_file_descriptor;
	v->a[24141] = actions(806);
	v->a[24142] = 1;
	v->a[24143] = sym_variable_name;
	v->a[24144] = actions(809);
	v->a[24145] = 1;
	v->a[24146] = anon_sym_RPAREN;
	v->a[24147] = state(728);
	v->a[24148] = 1;
	v->a[24149] = sym_terminator;
	v->a[24150] = actions(802);
	v->a[24151] = 2;
	v->a[24152] = anon_sym_AMP_AMP;
	v->a[24153] = anon_sym_PIPE_PIPE;
	v->a[24154] = actions(804);
	v->a[24155] = 2;
	v->a[24156] = anon_sym_LT_LT;
	v->a[24157] = anon_sym_LT_LT_DASH;
	v->a[24158] = state(1143);
	v->a[24159] = 2;
	small_parse_table_1208(v);
}

void	small_parse_table_1208(t_small_parse_table_array *v)
{
	v->a[24160] = sym_variable_assignment;
	v->a[24161] = aux_sym__variable_assignments_repeat1;
	v->a[24162] = state(1137);
	v->a[24163] = 3;
	v->a[24164] = sym_file_redirect;
	v->a[24165] = sym_heredoc_redirect;
	v->a[24166] = aux_sym_redirected_statement_repeat1;
	v->a[24167] = actions(800);
	v->a[24168] = 4;
	v->a[24169] = anon_sym_SEMI_SEMI;
	v->a[24170] = aux_sym_heredoc_redirect_token1;
	v->a[24171] = anon_sym_AMP;
	v->a[24172] = anon_sym_SEMI;
	v->a[24173] = actions(762);
	v->a[24174] = 19;
	v->a[24175] = anon_sym_LT;
	v->a[24176] = anon_sym_GT;
	v->a[24177] = anon_sym_GT_GT;
	v->a[24178] = anon_sym_AMP_GT;
	v->a[24179] = anon_sym_AMP_GT_GT;
	small_parse_table_1209(v);
}

void	small_parse_table_1209(t_small_parse_table_array *v)
{
	v->a[24180] = anon_sym_LT_AMP;
	v->a[24181] = anon_sym_GT_AMP;
	v->a[24182] = anon_sym_GT_PIPE;
	v->a[24183] = anon_sym_LT_AMP_DASH;
	v->a[24184] = anon_sym_GT_AMP_DASH;
	v->a[24185] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24186] = anon_sym_DOLLAR;
	v->a[24187] = anon_sym_DQUOTE;
	v->a[24188] = sym_raw_string;
	v->a[24189] = sym_number;
	v->a[24190] = anon_sym_DOLLAR_LBRACE;
	v->a[24191] = anon_sym_DOLLAR_LPAREN;
	v->a[24192] = anon_sym_BQUOTE;
	v->a[24193] = sym_word;
	v->a[24194] = 12;
	v->a[24195] = actions(3);
	v->a[24196] = 1;
	v->a[24197] = sym_comment;
	v->a[24198] = actions(766);
	v->a[24199] = 1;
	small_parse_table_1210(v);
}

/* EOF small_parse_table_241.c */
