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
	v->a[21100] = anon_sym_QMARK;
	v->a[21101] = anon_sym_DOLLAR;
	v->a[21102] = anon_sym_POUND;
	v->a[21103] = anon_sym_AT2;
	v->a[21104] = anon_sym_0;
	v->a[21105] = anon_sym__;
	v->a[21106] = actions(1239);
	v->a[21107] = 36;
	v->a[21108] = anon_sym_LPAREN_LPAREN;
	v->a[21109] = anon_sym_SEMI;
	v->a[21110] = anon_sym_PIPE_PIPE;
	v->a[21111] = anon_sym_AMP_AMP;
	v->a[21112] = anon_sym_PIPE;
	v->a[21113] = anon_sym_AMP;
	v->a[21114] = anon_sym_LT;
	v->a[21115] = anon_sym_GT;
	v->a[21116] = anon_sym_LT_LT;
	v->a[21117] = anon_sym_GT_GT;
	v->a[21118] = anon_sym_SEMI_SEMI;
	v->a[21119] = anon_sym_PIPE_AMP;
	small_parse_table_1056(v);
}

void	small_parse_table_1056(t_small_parse_table_array *v)
{
	v->a[21120] = anon_sym_AMP_GT;
	v->a[21121] = anon_sym_AMP_GT_GT;
	v->a[21122] = anon_sym_LT_AMP;
	v->a[21123] = anon_sym_GT_AMP;
	v->a[21124] = anon_sym_GT_PIPE;
	v->a[21125] = anon_sym_LT_AMP_DASH;
	v->a[21126] = anon_sym_GT_AMP_DASH;
	v->a[21127] = anon_sym_LT_LT_DASH;
	v->a[21128] = aux_sym_heredoc_redirect_token1;
	v->a[21129] = anon_sym_LT_LT_LT;
	v->a[21130] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21131] = anon_sym_DOLLAR_LBRACK;
	v->a[21132] = sym__special_character;
	v->a[21133] = sym_raw_string;
	v->a[21134] = sym_ansi_c_string;
	v->a[21135] = aux_sym_number_token1;
	v->a[21136] = aux_sym_number_token2;
	v->a[21137] = anon_sym_DOLLAR_LBRACE;
	v->a[21138] = anon_sym_DOLLAR_LPAREN;
	v->a[21139] = anon_sym_BQUOTE;
	small_parse_table_1057(v);
}

void	small_parse_table_1057(t_small_parse_table_array *v)
{
	v->a[21140] = anon_sym_DOLLAR_BQUOTE;
	v->a[21141] = anon_sym_LT_LPAREN;
	v->a[21142] = anon_sym_GT_LPAREN;
	v->a[21143] = sym_word;
	v->a[21144] = 28;
	v->a[21145] = actions(71);
	v->a[21146] = 1;
	v->a[21147] = sym_comment;
	v->a[21148] = actions(3978);
	v->a[21149] = 1;
	v->a[21150] = sym_word;
	v->a[21151] = actions(3987);
	v->a[21152] = 1;
	v->a[21153] = anon_sym_LT_LT_LT;
	v->a[21154] = actions(3990);
	v->a[21155] = 1;
	v->a[21156] = anon_sym_DOLLAR_LBRACK;
	v->a[21157] = actions(3993);
	v->a[21158] = 1;
	v->a[21159] = anon_sym_DOLLAR;
	small_parse_table_1058(v);
}

void	small_parse_table_1058(t_small_parse_table_array *v)
{
	v->a[21160] = actions(3996);
	v->a[21161] = 1;
	v->a[21162] = sym__special_character;
	v->a[21163] = actions(3999);
	v->a[21164] = 1;
	v->a[21165] = anon_sym_DQUOTE;
	v->a[21166] = actions(4005);
	v->a[21167] = 1;
	v->a[21168] = aux_sym_number_token1;
	v->a[21169] = actions(4008);
	v->a[21170] = 1;
	v->a[21171] = aux_sym_number_token2;
	v->a[21172] = actions(4011);
	v->a[21173] = 1;
	v->a[21174] = anon_sym_DOLLAR_LBRACE;
	v->a[21175] = actions(4014);
	v->a[21176] = 1;
	v->a[21177] = anon_sym_DOLLAR_LPAREN;
	v->a[21178] = actions(4017);
	v->a[21179] = 1;
	small_parse_table_1059(v);
}

void	small_parse_table_1059(t_small_parse_table_array *v)
{
	v->a[21180] = anon_sym_BQUOTE;
	v->a[21181] = actions(4020);
	v->a[21182] = 1;
	v->a[21183] = anon_sym_DOLLAR_BQUOTE;
	v->a[21184] = actions(4026);
	v->a[21185] = 1;
	v->a[21186] = sym_file_descriptor;
	v->a[21187] = actions(4029);
	v->a[21188] = 1;
	v->a[21189] = sym_test_operator;
	v->a[21190] = actions(4032);
	v->a[21191] = 1;
	v->a[21192] = sym__bare_dollar;
	v->a[21193] = actions(4035);
	v->a[21194] = 1;
	v->a[21195] = sym__brace_start;
	v->a[21196] = state(751);
	v->a[21197] = 1;
	v->a[21198] = aux_sym_command_repeat2;
	v->a[21199] = state(2417);
	small_parse_table_1060(v);
}

/* EOF small_parse_table_211.c */
