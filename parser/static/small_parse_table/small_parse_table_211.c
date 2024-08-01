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
	v->a[21100] = 1;
	v->a[21101] = anon_sym_DOLLAR;
	v->a[21102] = actions(57);
	v->a[21103] = 1;
	v->a[21104] = anon_sym_DQUOTE;
	v->a[21105] = actions(61);
	v->a[21106] = 1;
	v->a[21107] = anon_sym_DOLLAR_LBRACE;
	v->a[21108] = actions(63);
	v->a[21109] = 1;
	v->a[21110] = anon_sym_DOLLAR_LPAREN;
	v->a[21111] = actions(65);
	v->a[21112] = 1;
	v->a[21113] = anon_sym_BQUOTE;
	v->a[21114] = actions(419);
	v->a[21115] = 1;
	v->a[21116] = sym__bare_dollar;
	v->a[21117] = state(251);
	v->a[21118] = 1;
	v->a[21119] = aux_sym_command_repeat2;
	small_parse_table_1056(v);
}

void	small_parse_table_1056(t_small_parse_table_array *v)
{
	v->a[21120] = state(570);
	v->a[21121] = 1;
	v->a[21122] = sym_concatenation;
	v->a[21123] = actions(871);
	v->a[21124] = 3;
	v->a[21125] = sym_raw_string;
	v->a[21126] = sym_number;
	v->a[21127] = sym_word;
	v->a[21128] = state(574);
	v->a[21129] = 5;
	v->a[21130] = sym_arithmetic_expansion;
	v->a[21131] = sym_string;
	v->a[21132] = sym_simple_expansion;
	v->a[21133] = sym_expansion;
	v->a[21134] = sym_command_substitution;
	v->a[21135] = actions(450);
	v->a[21136] = 8;
	v->a[21137] = anon_sym_PIPE;
	v->a[21138] = anon_sym_AMP_AMP;
	v->a[21139] = anon_sym_PIPE_PIPE;
	small_parse_table_1057(v);
}

void	small_parse_table_1057(t_small_parse_table_array *v)
{
	v->a[21140] = anon_sym_LT;
	v->a[21141] = anon_sym_GT;
	v->a[21142] = anon_sym_GT_GT;
	v->a[21143] = anon_sym_LT_LT;
	v->a[21144] = aux_sym_heredoc_redirect_token1;
	v->a[21145] = 7;
	v->a[21146] = actions(3);
	v->a[21147] = 1;
	v->a[21148] = sym_comment;
	v->a[21149] = actions(580);
	v->a[21150] = 1;
	v->a[21151] = anon_sym_PIPE;
	v->a[21152] = actions(764);
	v->a[21153] = 1;
	v->a[21154] = sym_variable_name;
	v->a[21155] = state(967);
	v->a[21156] = 2;
	v->a[21157] = sym_variable_assignment;
	v->a[21158] = aux_sym__variable_assignments_repeat1;
	v->a[21159] = state(925);
	small_parse_table_1058(v);
}

void	small_parse_table_1058(t_small_parse_table_array *v)
{
	v->a[21160] = 3;
	v->a[21161] = sym_file_redirect;
	v->a[21162] = sym_heredoc_redirect;
	v->a[21163] = aux_sym_redirected_statement_repeat1;
	v->a[21164] = actions(816);
	v->a[21165] = 6;
	v->a[21166] = anon_sym_SEMI_SEMI;
	v->a[21167] = anon_sym_AMP_AMP;
	v->a[21168] = anon_sym_PIPE_PIPE;
	v->a[21169] = anon_sym_LT_LT;
	v->a[21170] = aux_sym_heredoc_redirect_token1;
	v->a[21171] = anon_sym_SEMI;
	v->a[21172] = actions(576);
	v->a[21173] = 12;
	v->a[21174] = anon_sym_LT;
	v->a[21175] = anon_sym_GT;
	v->a[21176] = anon_sym_GT_GT;
	v->a[21177] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21178] = anon_sym_DOLLAR;
	v->a[21179] = anon_sym_DQUOTE;
	small_parse_table_1059(v);
}

void	small_parse_table_1059(t_small_parse_table_array *v)
{
	v->a[21180] = sym_raw_string;
	v->a[21181] = sym_number;
	v->a[21182] = anon_sym_DOLLAR_LBRACE;
	v->a[21183] = anon_sym_DOLLAR_LPAREN;
	v->a[21184] = anon_sym_BQUOTE;
	v->a[21185] = sym_word;
	v->a[21186] = 13;
	v->a[21187] = actions(3);
	v->a[21188] = 1;
	v->a[21189] = sym_comment;
	v->a[21190] = actions(53);
	v->a[21191] = 1;
	v->a[21192] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21193] = actions(55);
	v->a[21194] = 1;
	v->a[21195] = anon_sym_DOLLAR;
	v->a[21196] = actions(57);
	v->a[21197] = 1;
	v->a[21198] = anon_sym_DQUOTE;
	v->a[21199] = actions(61);
	small_parse_table_1060(v);
}

/* EOF small_parse_table_211.c */
