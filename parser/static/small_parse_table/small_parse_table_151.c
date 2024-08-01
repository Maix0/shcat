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
	v->a[15100] = 23;
	v->a[15101] = actions(3);
	v->a[15102] = 1;
	v->a[15103] = sym_comment;
	v->a[15104] = actions(81);
	v->a[15105] = 1;
	v->a[15106] = anon_sym_for;
	v->a[15107] = actions(85);
	v->a[15108] = 1;
	v->a[15109] = anon_sym_if;
	v->a[15110] = actions(89);
	v->a[15111] = 1;
	v->a[15112] = anon_sym_LPAREN;
	v->a[15113] = actions(93);
	v->a[15114] = 1;
	v->a[15115] = anon_sym_LBRACE;
	v->a[15116] = actions(99);
	v->a[15117] = 1;
	v->a[15118] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15119] = actions(101);
	small_parse_table_756(v);
}

void	small_parse_table_756(t_small_parse_table_array *v)
{
	v->a[15120] = 1;
	v->a[15121] = anon_sym_DOLLAR;
	v->a[15122] = actions(103);
	v->a[15123] = 1;
	v->a[15124] = anon_sym_DQUOTE;
	v->a[15125] = actions(107);
	v->a[15126] = 1;
	v->a[15127] = anon_sym_DOLLAR_LBRACE;
	v->a[15128] = actions(109);
	v->a[15129] = 1;
	v->a[15130] = anon_sym_DOLLAR_LPAREN;
	v->a[15131] = actions(111);
	v->a[15132] = 1;
	v->a[15133] = anon_sym_BQUOTE;
	v->a[15134] = actions(341);
	v->a[15135] = 1;
	v->a[15136] = sym_variable_name;
	v->a[15137] = state(170);
	v->a[15138] = 1;
	v->a[15139] = sym_command_name;
	small_parse_table_757(v);
}

void	small_parse_table_757(t_small_parse_table_array *v)
{
	v->a[15140] = state(408);
	v->a[15141] = 1;
	v->a[15142] = aux_sym_command_repeat1;
	v->a[15143] = state(541);
	v->a[15144] = 1;
	v->a[15145] = sym_file_redirect;
	v->a[15146] = state(546);
	v->a[15147] = 1;
	v->a[15148] = sym_concatenation;
	v->a[15149] = state(880);
	v->a[15150] = 1;
	v->a[15151] = sym_variable_assignment;
	v->a[15152] = state(1015);
	v->a[15153] = 1;
	v->a[15154] = aux_sym_redirected_statement_repeat2;
	v->a[15155] = actions(83);
	v->a[15156] = 2;
	v->a[15157] = anon_sym_while;
	v->a[15158] = anon_sym_until;
	v->a[15159] = actions(97);
	small_parse_table_758(v);
}

void	small_parse_table_758(t_small_parse_table_array *v)
{
	v->a[15160] = 3;
	v->a[15161] = anon_sym_LT;
	v->a[15162] = anon_sym_GT;
	v->a[15163] = anon_sym_GT_GT;
	v->a[15164] = actions(105);
	v->a[15165] = 3;
	v->a[15166] = sym_raw_string;
	v->a[15167] = sym_number;
	v->a[15168] = sym_word;
	v->a[15169] = state(276);
	v->a[15170] = 5;
	v->a[15171] = sym_arithmetic_expansion;
	v->a[15172] = sym_string;
	v->a[15173] = sym_simple_expansion;
	v->a[15174] = sym_expansion;
	v->a[15175] = sym_command_substitution;
	v->a[15176] = state(1241);
	v->a[15177] = 7;
	v->a[15178] = sym_for_statement;
	v->a[15179] = sym_while_statement;
	small_parse_table_759(v);
}

void	small_parse_table_759(t_small_parse_table_array *v)
{
	v->a[15180] = sym_if_statement;
	v->a[15181] = sym_compound_statement;
	v->a[15182] = sym_subshell;
	v->a[15183] = sym_command;
	v->a[15184] = sym__variable_assignments;
	v->a[15185] = 23;
	v->a[15186] = actions(3);
	v->a[15187] = 1;
	v->a[15188] = sym_comment;
	v->a[15189] = actions(9);
	v->a[15190] = 1;
	v->a[15191] = anon_sym_for;
	v->a[15192] = actions(13);
	v->a[15193] = 1;
	v->a[15194] = anon_sym_if;
	v->a[15195] = actions(17);
	v->a[15196] = 1;
	v->a[15197] = anon_sym_LPAREN;
	v->a[15198] = actions(19);
	v->a[15199] = 1;
	small_parse_table_760(v);
}

/* EOF small_parse_table_151.c */
