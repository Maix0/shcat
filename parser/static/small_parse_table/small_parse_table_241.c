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
	v->a[24100] = 2;
	v->a[24101] = sym_concatenation;
	v->a[24102] = aux_sym_for_statement_repeat1;
	v->a[24103] = actions(821);
	v->a[24104] = 3;
	v->a[24105] = sym_raw_string;
	v->a[24106] = sym_number;
	v->a[24107] = sym_word;
	v->a[24108] = state(520);
	v->a[24109] = 5;
	v->a[24110] = sym_arithmetic_expansion;
	v->a[24111] = sym_string;
	v->a[24112] = sym_simple_expansion;
	v->a[24113] = sym_expansion;
	v->a[24114] = sym_command_substitution;
	v->a[24115] = actions(582);
	v->a[24116] = 18;
	v->a[24117] = anon_sym_PIPE;
	v->a[24118] = anon_sym_RPAREN;
	v->a[24119] = anon_sym_SEMI_SEMI;
	small_parse_table_1206(v);
}

void	small_parse_table_1206(t_small_parse_table_array *v)
{
	v->a[24120] = anon_sym_AMP_AMP;
	v->a[24121] = anon_sym_PIPE_PIPE;
	v->a[24122] = anon_sym_LT;
	v->a[24123] = anon_sym_GT;
	v->a[24124] = anon_sym_GT_GT;
	v->a[24125] = anon_sym_LT_AMP;
	v->a[24126] = anon_sym_GT_AMP;
	v->a[24127] = anon_sym_GT_PIPE;
	v->a[24128] = anon_sym_LT_AMP_DASH;
	v->a[24129] = anon_sym_GT_AMP_DASH;
	v->a[24130] = anon_sym_LT_LT;
	v->a[24131] = anon_sym_LT_LT_DASH;
	v->a[24132] = aux_sym_heredoc_redirect_token1;
	v->a[24133] = anon_sym_AMP;
	v->a[24134] = anon_sym_SEMI;
	v->a[24135] = 5;
	v->a[24136] = actions(3);
	v->a[24137] = 1;
	v->a[24138] = sym_comment;
	v->a[24139] = state(697);
	small_parse_table_1207(v);
}

void	small_parse_table_1207(t_small_parse_table_array *v)
{
	v->a[24140] = 1;
	v->a[24141] = sym_concatenation;
	v->a[24142] = actions(790);
	v->a[24143] = 3;
	v->a[24144] = sym_file_descriptor;
	v->a[24145] = sym_variable_name;
	v->a[24146] = ts_builtin_sym_end;
	v->a[24147] = state(453);
	v->a[24148] = 5;
	v->a[24149] = sym_arithmetic_expansion;
	v->a[24150] = sym_string;
	v->a[24151] = sym_simple_expansion;
	v->a[24152] = sym_expansion;
	v->a[24153] = sym_command_substitution;
	v->a[24154] = actions(788);
	v->a[24155] = 26;
	v->a[24156] = anon_sym_PIPE;
	v->a[24157] = anon_sym_SEMI_SEMI;
	v->a[24158] = anon_sym_AMP_AMP;
	v->a[24159] = anon_sym_PIPE_PIPE;
	small_parse_table_1208(v);
}

void	small_parse_table_1208(t_small_parse_table_array *v)
{
	v->a[24160] = anon_sym_LT;
	v->a[24161] = anon_sym_GT;
	v->a[24162] = anon_sym_GT_GT;
	v->a[24163] = anon_sym_LT_AMP;
	v->a[24164] = anon_sym_GT_AMP;
	v->a[24165] = anon_sym_GT_PIPE;
	v->a[24166] = anon_sym_LT_AMP_DASH;
	v->a[24167] = anon_sym_GT_AMP_DASH;
	v->a[24168] = anon_sym_LT_LT;
	v->a[24169] = anon_sym_LT_LT_DASH;
	v->a[24170] = aux_sym_heredoc_redirect_token1;
	v->a[24171] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24172] = anon_sym_AMP;
	v->a[24173] = anon_sym_DOLLAR;
	v->a[24174] = anon_sym_DQUOTE;
	v->a[24175] = sym_raw_string;
	v->a[24176] = sym_number;
	v->a[24177] = anon_sym_DOLLAR_LBRACE;
	v->a[24178] = anon_sym_DOLLAR_LPAREN;
	v->a[24179] = anon_sym_BQUOTE;
	small_parse_table_1209(v);
}

void	small_parse_table_1209(t_small_parse_table_array *v)
{
	v->a[24180] = sym_word;
	v->a[24181] = anon_sym_SEMI;
	v->a[24182] = 15;
	v->a[24183] = actions(842);
	v->a[24184] = 1;
	v->a[24185] = anon_sym_PIPE;
	v->a[24186] = actions(844);
	v->a[24187] = 1;
	v->a[24188] = anon_sym_AMP_AMP;
	v->a[24189] = actions(846);
	v->a[24190] = 1;
	v->a[24191] = anon_sym_PIPE_PIPE;
	v->a[24192] = actions(848);
	v->a[24193] = 1;
	v->a[24194] = anon_sym_EQ;
	v->a[24195] = actions(856);
	v->a[24196] = 1;
	v->a[24197] = anon_sym_CARET;
	v->a[24198] = actions(858);
	v->a[24199] = 1;
	small_parse_table_1210(v);
}

/* EOF small_parse_table_241.c */
