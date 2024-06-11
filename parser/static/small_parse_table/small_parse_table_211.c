/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_211.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1055(t_small_parse_table_array *v)
{
	v->a[21100] = anon_sym_LT_LT;
	v->a[21101] = anon_sym_LT_LT_DASH;
	v->a[21102] = aux_sym_heredoc_redirect_token1;
	v->a[21103] = anon_sym_AMP;
	v->a[21104] = anon_sym_SEMI;
	v->a[21105] = 16;
	v->a[21106] = actions(3);
	v->a[21107] = 1;
	v->a[21108] = sym_comment;
	v->a[21109] = actions(17);
	v->a[21110] = 1;
	v->a[21111] = anon_sym_LPAREN;
	v->a[21112] = actions(477);
	v->a[21113] = 1;
	v->a[21114] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21115] = actions(479);
	v->a[21116] = 1;
	v->a[21117] = anon_sym_DOLLAR;
	v->a[21118] = actions(481);
	v->a[21119] = 1;
	small_parse_table_1056(v);
}

void	small_parse_table_1056(t_small_parse_table_array *v)
{
	v->a[21120] = anon_sym_DQUOTE;
	v->a[21121] = actions(483);
	v->a[21122] = 1;
	v->a[21123] = anon_sym_DOLLAR_LBRACE;
	v->a[21124] = actions(485);
	v->a[21125] = 1;
	v->a[21126] = anon_sym_DOLLAR_LPAREN;
	v->a[21127] = actions(487);
	v->a[21128] = 1;
	v->a[21129] = anon_sym_BQUOTE;
	v->a[21130] = actions(489);
	v->a[21131] = 1;
	v->a[21132] = sym__bare_dollar;
	v->a[21133] = state(196);
	v->a[21134] = 1;
	v->a[21135] = aux_sym_command_repeat2;
	v->a[21136] = state(809);
	v->a[21137] = 1;
	v->a[21138] = sym_concatenation;
	v->a[21139] = state(1333);
	small_parse_table_1057(v);
}

void	small_parse_table_1057(t_small_parse_table_array *v)
{
	v->a[21140] = 1;
	v->a[21141] = sym_subshell;
	v->a[21142] = actions(493);
	v->a[21143] = 2;
	v->a[21144] = sym_file_descriptor;
	v->a[21145] = ts_builtin_sym_end;
	v->a[21146] = actions(475);
	v->a[21147] = 3;
	v->a[21148] = sym_raw_string;
	v->a[21149] = sym_number;
	v->a[21150] = sym_word;
	v->a[21151] = state(339);
	v->a[21152] = 5;
	v->a[21153] = sym_arithmetic_expansion;
	v->a[21154] = sym_string;
	v->a[21155] = sym_simple_expansion;
	v->a[21156] = sym_expansion;
	v->a[21157] = sym_command_substitution;
	v->a[21158] = actions(491);
	v->a[21159] = 19;
	small_parse_table_1058(v);
}

void	small_parse_table_1058(t_small_parse_table_array *v)
{
	v->a[21160] = anon_sym_PIPE;
	v->a[21161] = anon_sym_SEMI_SEMI;
	v->a[21162] = anon_sym_AMP_AMP;
	v->a[21163] = anon_sym_PIPE_PIPE;
	v->a[21164] = anon_sym_LT;
	v->a[21165] = anon_sym_GT;
	v->a[21166] = anon_sym_GT_GT;
	v->a[21167] = anon_sym_AMP_GT;
	v->a[21168] = anon_sym_AMP_GT_GT;
	v->a[21169] = anon_sym_LT_AMP;
	v->a[21170] = anon_sym_GT_AMP;
	v->a[21171] = anon_sym_GT_PIPE;
	v->a[21172] = anon_sym_LT_AMP_DASH;
	v->a[21173] = anon_sym_GT_AMP_DASH;
	v->a[21174] = anon_sym_LT_LT;
	v->a[21175] = anon_sym_LT_LT_DASH;
	v->a[21176] = aux_sym_heredoc_redirect_token1;
	v->a[21177] = anon_sym_AMP;
	v->a[21178] = anon_sym_SEMI;
	v->a[21179] = 6;
	small_parse_table_1059(v);
}

void	small_parse_table_1059(t_small_parse_table_array *v)
{
	v->a[21180] = actions(3);
	v->a[21181] = 1;
	v->a[21182] = sym_comment;
	v->a[21183] = actions(379);
	v->a[21184] = 1;
	v->a[21185] = sym_file_descriptor;
	v->a[21186] = actions(435);
	v->a[21187] = 1;
	v->a[21188] = sym_variable_name;
	v->a[21189] = actions(433);
	v->a[21190] = 2;
	v->a[21191] = aux_sym__simple_variable_name_token1;
	v->a[21192] = aux_sym__multiline_variable_name_token1;
	v->a[21193] = actions(431);
	v->a[21194] = 9;
	v->a[21195] = anon_sym_BANG;
	v->a[21196] = anon_sym_DASH;
	v->a[21197] = anon_sym_STAR;
	v->a[21198] = anon_sym_QMARK;
	v->a[21199] = anon_sym_DOLLAR;
	small_parse_table_1060(v);
}

/* EOF small_parse_table_211.c */
