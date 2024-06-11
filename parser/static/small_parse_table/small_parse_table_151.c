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
	v->a[15100] = anon_sym_LT;
	v->a[15101] = anon_sym_GT;
	v->a[15102] = anon_sym_GT_GT;
	v->a[15103] = anon_sym_AMP_GT;
	v->a[15104] = anon_sym_AMP_GT_GT;
	v->a[15105] = anon_sym_LT_AMP;
	v->a[15106] = anon_sym_GT_AMP;
	v->a[15107] = anon_sym_GT_PIPE;
	v->a[15108] = state(1188);
	v->a[15109] = 12;
	v->a[15110] = sym_redirected_statement;
	v->a[15111] = sym_for_statement;
	v->a[15112] = sym_while_statement;
	v->a[15113] = sym_if_statement;
	v->a[15114] = sym_case_statement;
	v->a[15115] = sym_function_definition;
	v->a[15116] = sym_compound_statement;
	v->a[15117] = sym_subshell;
	v->a[15118] = sym_list;
	v->a[15119] = sym_negated_command;
	small_parse_table_756(v);
}

void	small_parse_table_756(t_small_parse_table_array *v)
{
	v->a[15120] = sym_command;
	v->a[15121] = sym_variable_assignments;
	v->a[15122] = 32;
	v->a[15123] = actions(3);
	v->a[15124] = 1;
	v->a[15125] = sym_comment;
	v->a[15126] = actions(9);
	v->a[15127] = 1;
	v->a[15128] = anon_sym_for;
	v->a[15129] = actions(13);
	v->a[15130] = 1;
	v->a[15131] = anon_sym_if;
	v->a[15132] = actions(15);
	v->a[15133] = 1;
	v->a[15134] = anon_sym_case;
	v->a[15135] = actions(17);
	v->a[15136] = 1;
	v->a[15137] = anon_sym_LPAREN;
	v->a[15138] = actions(19);
	v->a[15139] = 1;
	small_parse_table_757(v);
}

void	small_parse_table_757(t_small_parse_table_array *v)
{
	v->a[15140] = anon_sym_LBRACE;
	v->a[15141] = actions(59);
	v->a[15142] = 1;
	v->a[15143] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15144] = actions(61);
	v->a[15145] = 1;
	v->a[15146] = anon_sym_DOLLAR;
	v->a[15147] = actions(63);
	v->a[15148] = 1;
	v->a[15149] = anon_sym_DQUOTE;
	v->a[15150] = actions(67);
	v->a[15151] = 1;
	v->a[15152] = anon_sym_DOLLAR_LBRACE;
	v->a[15153] = actions(69);
	v->a[15154] = 1;
	v->a[15155] = anon_sym_DOLLAR_LPAREN;
	v->a[15156] = actions(71);
	v->a[15157] = 1;
	v->a[15158] = anon_sym_BQUOTE;
	v->a[15159] = actions(220);
	small_parse_table_758(v);
}

void	small_parse_table_758(t_small_parse_table_array *v)
{
	v->a[15160] = 1;
	v->a[15161] = sym_word;
	v->a[15162] = actions(222);
	v->a[15163] = 1;
	v->a[15164] = anon_sym_BANG;
	v->a[15165] = actions(230);
	v->a[15166] = 1;
	v->a[15167] = sym_file_descriptor;
	v->a[15168] = actions(232);
	v->a[15169] = 1;
	v->a[15170] = sym_variable_name;
	v->a[15171] = state(126);
	v->a[15172] = 1;
	v->a[15173] = aux_sym__statements_repeat1;
	v->a[15174] = state(184);
	v->a[15175] = 1;
	v->a[15176] = sym_command_name;
	v->a[15177] = state(268);
	v->a[15178] = 1;
	v->a[15179] = sym_variable_assignment;
	small_parse_table_759(v);
}

void	small_parse_table_759(t_small_parse_table_array *v)
{
	v->a[15180] = state(647);
	v->a[15181] = 1;
	v->a[15182] = sym_concatenation;
	v->a[15183] = state(815);
	v->a[15184] = 1;
	v->a[15185] = sym_file_redirect;
	v->a[15186] = state(828);
	v->a[15187] = 1;
	v->a[15188] = aux_sym_command_repeat1;
	v->a[15189] = state(1314);
	v->a[15190] = 1;
	v->a[15191] = sym_pipeline;
	v->a[15192] = state(1331);
	v->a[15193] = 1;
	v->a[15194] = aux_sym_redirected_statement_repeat2;
	v->a[15195] = state(2252);
	v->a[15196] = 1;
	v->a[15197] = sym__statement_not_pipeline;
	v->a[15198] = state(2273);
	v->a[15199] = 1;
	small_parse_table_760(v);
}

/* EOF small_parse_table_151.c */
