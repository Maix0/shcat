/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_151.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_755(t_small_parse_table_array *v)
{
	v->a[15100] = 1;
	v->a[15101] = anon_sym_LPAREN;
	v->a[15102] = actions(19);
	v->a[15103] = 1;
	v->a[15104] = anon_sym_LBRACE;
	v->a[15105] = actions(63);
	v->a[15106] = 1;
	v->a[15107] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15108] = actions(65);
	v->a[15109] = 1;
	v->a[15110] = anon_sym_DOLLAR;
	v->a[15111] = actions(67);
	v->a[15112] = 1;
	v->a[15113] = anon_sym_DQUOTE;
	v->a[15114] = actions(69);
	v->a[15115] = 1;
	v->a[15116] = sym_raw_string;
	v->a[15117] = actions(71);
	v->a[15118] = 1;
	v->a[15119] = aux_sym_number_token1;
	small_parse_table_756(v);
}

void	small_parse_table_756(t_small_parse_table_array *v)
{
	v->a[15120] = actions(73);
	v->a[15121] = 1;
	v->a[15122] = aux_sym_number_token2;
	v->a[15123] = actions(75);
	v->a[15124] = 1;
	v->a[15125] = anon_sym_DOLLAR_LBRACE;
	v->a[15126] = actions(77);
	v->a[15127] = 1;
	v->a[15128] = anon_sym_DOLLAR_LPAREN;
	v->a[15129] = actions(79);
	v->a[15130] = 1;
	v->a[15131] = anon_sym_BQUOTE;
	v->a[15132] = actions(81);
	v->a[15133] = 1;
	v->a[15134] = sym_file_descriptor;
	v->a[15135] = actions(83);
	v->a[15136] = 1;
	v->a[15137] = sym_variable_name;
	v->a[15138] = actions(238);
	v->a[15139] = 1;
	small_parse_table_757(v);
}

void	small_parse_table_757(t_small_parse_table_array *v)
{
	v->a[15140] = sym_word;
	v->a[15141] = actions(240);
	v->a[15142] = 1;
	v->a[15143] = anon_sym_BANG;
	v->a[15144] = state(132);
	v->a[15145] = 1;
	v->a[15146] = aux_sym__statements_repeat1;
	v->a[15147] = state(185);
	v->a[15148] = 1;
	v->a[15149] = sym_command_name;
	v->a[15150] = state(297);
	v->a[15151] = 1;
	v->a[15152] = sym_variable_assignment;
	v->a[15153] = state(582);
	v->a[15154] = 1;
	v->a[15155] = sym_concatenation;
	v->a[15156] = state(614);
	v->a[15157] = 1;
	v->a[15158] = aux_sym_command_repeat1;
	v->a[15159] = state(769);
	small_parse_table_758(v);
}

void	small_parse_table_758(t_small_parse_table_array *v)
{
	v->a[15160] = 1;
	v->a[15161] = sym_file_redirect;
	v->a[15162] = state(1133);
	v->a[15163] = 1;
	v->a[15164] = aux_sym_redirected_statement_repeat2;
	v->a[15165] = state(1142);
	v->a[15166] = 1;
	v->a[15167] = sym_pipeline;
	v->a[15168] = state(2041);
	v->a[15169] = 1;
	v->a[15170] = sym__statement_not_pipeline;
	v->a[15171] = state(2154);
	v->a[15172] = 1;
	v->a[15173] = sym__statements;
	v->a[15174] = actions(11);
	v->a[15175] = 2;
	v->a[15176] = anon_sym_while;
	v->a[15177] = anon_sym_until;
	v->a[15178] = actions(61);
	v->a[15179] = 2;
	small_parse_table_759(v);
}

void	small_parse_table_759(t_small_parse_table_array *v)
{
	v->a[15180] = anon_sym_LT_AMP_DASH;
	v->a[15181] = anon_sym_GT_AMP_DASH;
	v->a[15182] = state(397);
	v->a[15183] = 6;
	v->a[15184] = sym_arithmetic_expansion;
	v->a[15185] = sym_string;
	v->a[15186] = sym_number;
	v->a[15187] = sym_simple_expansion;
	v->a[15188] = sym_expansion;
	v->a[15189] = sym_command_substitution;
	v->a[15190] = actions(59);
	v->a[15191] = 8;
	v->a[15192] = anon_sym_LT;
	v->a[15193] = anon_sym_GT;
	v->a[15194] = anon_sym_GT_GT;
	v->a[15195] = anon_sym_AMP_GT;
	v->a[15196] = anon_sym_AMP_GT_GT;
	v->a[15197] = anon_sym_LT_AMP;
	v->a[15198] = anon_sym_GT_AMP;
	v->a[15199] = anon_sym_GT_PIPE;
	small_parse_table_760(v);
}

/* EOF small_parse_table_151.c */
