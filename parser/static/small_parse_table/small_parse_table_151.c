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
	v->a[15100] = anon_sym_GT_GT;
	v->a[15101] = anon_sym_LT_AMP;
	v->a[15102] = anon_sym_GT_AMP;
	v->a[15103] = anon_sym_GT_PIPE;
	v->a[15104] = state(1094);
	v->a[15105] = 12;
	v->a[15106] = sym_redirected_statement;
	v->a[15107] = sym_for_statement;
	v->a[15108] = sym_while_statement;
	v->a[15109] = sym_if_statement;
	v->a[15110] = sym_case_statement;
	v->a[15111] = sym_function_definition;
	v->a[15112] = sym_compound_statement;
	v->a[15113] = sym_subshell;
	v->a[15114] = sym_list;
	v->a[15115] = sym_negated_command;
	v->a[15116] = sym_command;
	v->a[15117] = sym__variable_assignments;
	v->a[15118] = 31;
	v->a[15119] = actions(3);
	small_parse_table_756(v);
}

void	small_parse_table_756(t_small_parse_table_array *v)
{
	v->a[15120] = 1;
	v->a[15121] = sym_comment;
	v->a[15122] = actions(9);
	v->a[15123] = 1;
	v->a[15124] = anon_sym_for;
	v->a[15125] = actions(13);
	v->a[15126] = 1;
	v->a[15127] = anon_sym_if;
	v->a[15128] = actions(15);
	v->a[15129] = 1;
	v->a[15130] = anon_sym_case;
	v->a[15131] = actions(17);
	v->a[15132] = 1;
	v->a[15133] = anon_sym_LPAREN;
	v->a[15134] = actions(19);
	v->a[15135] = 1;
	v->a[15136] = anon_sym_LBRACE;
	v->a[15137] = actions(45);
	v->a[15138] = 1;
	v->a[15139] = sym_word;
	small_parse_table_757(v);
}

void	small_parse_table_757(t_small_parse_table_array *v)
{
	v->a[15140] = actions(53);
	v->a[15141] = 1;
	v->a[15142] = anon_sym_BANG;
	v->a[15143] = actions(59);
	v->a[15144] = 1;
	v->a[15145] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15146] = actions(61);
	v->a[15147] = 1;
	v->a[15148] = anon_sym_DOLLAR;
	v->a[15149] = actions(63);
	v->a[15150] = 1;
	v->a[15151] = anon_sym_DQUOTE;
	v->a[15152] = actions(67);
	v->a[15153] = 1;
	v->a[15154] = anon_sym_DOLLAR_LBRACE;
	v->a[15155] = actions(69);
	v->a[15156] = 1;
	v->a[15157] = anon_sym_DOLLAR_LPAREN;
	v->a[15158] = actions(71);
	v->a[15159] = 1;
	small_parse_table_758(v);
}

void	small_parse_table_758(t_small_parse_table_array *v)
{
	v->a[15160] = anon_sym_BQUOTE;
	v->a[15161] = actions(73);
	v->a[15162] = 1;
	v->a[15163] = sym_file_descriptor;
	v->a[15164] = actions(75);
	v->a[15165] = 1;
	v->a[15166] = sym_variable_name;
	v->a[15167] = state(43);
	v->a[15168] = 1;
	v->a[15169] = aux_sym__terminated_statement;
	v->a[15170] = state(189);
	v->a[15171] = 1;
	v->a[15172] = sym_command_name;
	v->a[15173] = state(291);
	v->a[15174] = 1;
	v->a[15175] = sym_variable_assignment;
	v->a[15176] = state(650);
	v->a[15177] = 1;
	v->a[15178] = sym_concatenation;
	v->a[15179] = state(712);
	small_parse_table_759(v);
}

void	small_parse_table_759(t_small_parse_table_array *v)
{
	v->a[15180] = 1;
	v->a[15181] = sym_file_redirect;
	v->a[15182] = state(713);
	v->a[15183] = 1;
	v->a[15184] = aux_sym_command_repeat1;
	v->a[15185] = state(1251);
	v->a[15186] = 1;
	v->a[15187] = sym_pipeline;
	v->a[15188] = state(1333);
	v->a[15189] = 1;
	v->a[15190] = aux_sym_redirected_statement_repeat2;
	v->a[15191] = state(2103);
	v->a[15192] = 1;
	v->a[15193] = sym__statement_not_pipeline;
	v->a[15194] = actions(11);
	v->a[15195] = 2;
	v->a[15196] = anon_sym_while;
	v->a[15197] = anon_sym_until;
	v->a[15198] = actions(57);
	v->a[15199] = 2;
	small_parse_table_760(v);
}

/* EOF small_parse_table_151.c */
