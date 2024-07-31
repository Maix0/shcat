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
	v->a[15101] = sym_pipeline;
	v->a[15102] = state(1001);
	v->a[15103] = 1;
	v->a[15104] = aux_sym_redirected_statement_repeat2;
	v->a[15105] = state(1606);
	v->a[15106] = 1;
	v->a[15107] = sym__statement_not_pipeline;
	v->a[15108] = actions(11);
	v->a[15109] = 2;
	v->a[15110] = anon_sym_while;
	v->a[15111] = anon_sym_until;
	v->a[15112] = actions(212);
	v->a[15113] = 2;
	v->a[15114] = sym_raw_string;
	v->a[15115] = sym_number;
	v->a[15116] = state(327);
	v->a[15117] = 5;
	v->a[15118] = sym_arithmetic_expansion;
	v->a[15119] = sym_string;
	small_parse_table_756(v);
}

void	small_parse_table_756(t_small_parse_table_array *v)
{
	v->a[15120] = sym_simple_expansion;
	v->a[15121] = sym_expansion;
	v->a[15122] = sym_command_substitution;
	v->a[15123] = actions(210);
	v->a[15124] = 7;
	v->a[15125] = anon_sym_LT;
	v->a[15126] = anon_sym_GT;
	v->a[15127] = anon_sym_GT_GT;
	v->a[15128] = anon_sym_LT_AMP;
	v->a[15129] = anon_sym_GT_AMP;
	v->a[15130] = anon_sym_GT_PIPE;
	v->a[15131] = anon_sym_LT_GT;
	v->a[15132] = state(915);
	v->a[15133] = 12;
	v->a[15134] = sym_redirected_statement;
	v->a[15135] = sym_for_statement;
	v->a[15136] = sym_while_statement;
	v->a[15137] = sym_if_statement;
	v->a[15138] = sym_case_statement;
	v->a[15139] = sym_function_definition;
	small_parse_table_757(v);
}

void	small_parse_table_757(t_small_parse_table_array *v)
{
	v->a[15140] = sym_compound_statement;
	v->a[15141] = sym_subshell;
	v->a[15142] = sym_list;
	v->a[15143] = sym_negated_command;
	v->a[15144] = sym_command;
	v->a[15145] = sym__variable_assignments;
	v->a[15146] = 27;
	v->a[15147] = actions(3);
	v->a[15148] = 1;
	v->a[15149] = sym_comment;
	v->a[15150] = actions(9);
	v->a[15151] = 1;
	v->a[15152] = anon_sym_for;
	v->a[15153] = actions(13);
	v->a[15154] = 1;
	v->a[15155] = anon_sym_if;
	v->a[15156] = actions(15);
	v->a[15157] = 1;
	v->a[15158] = anon_sym_case;
	v->a[15159] = actions(17);
	small_parse_table_758(v);
}

void	small_parse_table_758(t_small_parse_table_array *v)
{
	v->a[15160] = 1;
	v->a[15161] = anon_sym_LPAREN;
	v->a[15162] = actions(19);
	v->a[15163] = 1;
	v->a[15164] = anon_sym_LBRACE;
	v->a[15165] = actions(41);
	v->a[15166] = 1;
	v->a[15167] = sym_word;
	v->a[15168] = actions(49);
	v->a[15169] = 1;
	v->a[15170] = anon_sym_BANG;
	v->a[15171] = actions(53);
	v->a[15172] = 1;
	v->a[15173] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15174] = actions(55);
	v->a[15175] = 1;
	v->a[15176] = anon_sym_DOLLAR;
	v->a[15177] = actions(57);
	v->a[15178] = 1;
	v->a[15179] = anon_sym_DQUOTE;
	small_parse_table_759(v);
}

void	small_parse_table_759(t_small_parse_table_array *v)
{
	v->a[15180] = actions(61);
	v->a[15181] = 1;
	v->a[15182] = anon_sym_DOLLAR_LBRACE;
	v->a[15183] = actions(63);
	v->a[15184] = 1;
	v->a[15185] = anon_sym_DOLLAR_LPAREN;
	v->a[15186] = actions(65);
	v->a[15187] = 1;
	v->a[15188] = anon_sym_BQUOTE;
	v->a[15189] = actions(67);
	v->a[15190] = 1;
	v->a[15191] = sym_variable_name;
	v->a[15192] = state(271);
	v->a[15193] = 1;
	v->a[15194] = sym_command_name;
	v->a[15195] = state(314);
	v->a[15196] = 1;
	v->a[15197] = sym_variable_assignment;
	v->a[15198] = state(482);
	v->a[15199] = 1;
	small_parse_table_760(v);
}

/* EOF small_parse_table_151.c */
