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
	v->a[15100] = state(433);
	v->a[15101] = 5;
	v->a[15102] = sym_arithmetic_expansion;
	v->a[15103] = sym_string;
	v->a[15104] = sym_simple_expansion;
	v->a[15105] = sym_expansion;
	v->a[15106] = sym_command_substitution;
	v->a[15107] = actions(53);
	v->a[15108] = 7;
	v->a[15109] = anon_sym_LT;
	v->a[15110] = anon_sym_GT;
	v->a[15111] = anon_sym_GT_GT;
	v->a[15112] = anon_sym_LT_AMP;
	v->a[15113] = anon_sym_GT_AMP;
	v->a[15114] = anon_sym_GT_PIPE;
	v->a[15115] = anon_sym_LT_GT;
	v->a[15116] = state(1077);
	v->a[15117] = 12;
	v->a[15118] = sym_redirected_statement;
	v->a[15119] = sym_for_statement;
	small_parse_table_756(v);
}

void	small_parse_table_756(t_small_parse_table_array *v)
{
	v->a[15120] = sym_while_statement;
	v->a[15121] = sym_if_statement;
	v->a[15122] = sym_case_statement;
	v->a[15123] = sym_function_definition;
	v->a[15124] = sym_compound_statement;
	v->a[15125] = sym_subshell;
	v->a[15126] = sym_list;
	v->a[15127] = sym_negated_command;
	v->a[15128] = sym_command;
	v->a[15129] = sym__variable_assignments;
	v->a[15130] = 41;
	v->a[15131] = actions(3);
	v->a[15132] = 1;
	v->a[15133] = sym_comment;
	v->a[15134] = actions(9);
	v->a[15135] = 1;
	v->a[15136] = anon_sym_for;
	v->a[15137] = actions(13);
	v->a[15138] = 1;
	v->a[15139] = anon_sym_if;
	small_parse_table_757(v);
}

void	small_parse_table_757(t_small_parse_table_array *v)
{
	v->a[15140] = actions(15);
	v->a[15141] = 1;
	v->a[15142] = anon_sym_case;
	v->a[15143] = actions(17);
	v->a[15144] = 1;
	v->a[15145] = anon_sym_LPAREN;
	v->a[15146] = actions(19);
	v->a[15147] = 1;
	v->a[15148] = anon_sym_LBRACE;
	v->a[15149] = actions(43);
	v->a[15150] = 1;
	v->a[15151] = sym_word;
	v->a[15152] = actions(51);
	v->a[15153] = 1;
	v->a[15154] = anon_sym_BANG;
	v->a[15155] = actions(55);
	v->a[15156] = 1;
	v->a[15157] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15158] = actions(57);
	v->a[15159] = 1;
	small_parse_table_758(v);
}

void	small_parse_table_758(t_small_parse_table_array *v)
{
	v->a[15160] = anon_sym_DOLLAR;
	v->a[15161] = actions(59);
	v->a[15162] = 1;
	v->a[15163] = anon_sym_DQUOTE;
	v->a[15164] = actions(63);
	v->a[15165] = 1;
	v->a[15166] = anon_sym_DOLLAR_LBRACE;
	v->a[15167] = actions(65);
	v->a[15168] = 1;
	v->a[15169] = anon_sym_DOLLAR_LPAREN;
	v->a[15170] = actions(67);
	v->a[15171] = 1;
	v->a[15172] = anon_sym_BQUOTE;
	v->a[15173] = actions(69);
	v->a[15174] = 1;
	v->a[15175] = sym_file_descriptor;
	v->a[15176] = actions(71);
	v->a[15177] = 1;
	v->a[15178] = sym_variable_name;
	v->a[15179] = state(127);
	small_parse_table_759(v);
}

void	small_parse_table_759(t_small_parse_table_array *v)
{
	v->a[15180] = 1;
	v->a[15181] = aux_sym__statements_repeat1;
	v->a[15182] = state(182);
	v->a[15183] = 1;
	v->a[15184] = sym_command_name;
	v->a[15185] = state(298);
	v->a[15186] = 1;
	v->a[15187] = sym_variable_assignment;
	v->a[15188] = state(584);
	v->a[15189] = 1;
	v->a[15190] = sym_concatenation;
	v->a[15191] = state(620);
	v->a[15192] = 1;
	v->a[15193] = sym_file_redirect;
	v->a[15194] = state(623);
	v->a[15195] = 1;
	v->a[15196] = aux_sym_command_repeat1;
	v->a[15197] = state(1061);
	v->a[15198] = 1;
	v->a[15199] = sym_redirected_statement;
	small_parse_table_760(v);
}

/* EOF small_parse_table_151.c */
