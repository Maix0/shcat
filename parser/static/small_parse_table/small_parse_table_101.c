/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_101.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_505(t_small_parse_table_array *v)
{
	v->a[10100] = sym__statement_not_pipeline;
	v->a[10101] = state(1680);
	v->a[10102] = 1;
	v->a[10103] = sym__statements;
	v->a[10104] = actions(11);
	v->a[10105] = 2;
	v->a[10106] = anon_sym_while;
	v->a[10107] = anon_sym_until;
	v->a[10108] = actions(59);
	v->a[10109] = 2;
	v->a[10110] = sym_raw_string;
	v->a[10111] = sym_number;
	v->a[10112] = actions(51);
	v->a[10113] = 3;
	v->a[10114] = anon_sym_LT;
	v->a[10115] = anon_sym_GT;
	v->a[10116] = anon_sym_GT_GT;
	v->a[10117] = state(401);
	v->a[10118] = 5;
	v->a[10119] = sym_arithmetic_expansion;
	small_parse_table_506(v);
}

void	small_parse_table_506(t_small_parse_table_array *v)
{
	v->a[10120] = sym_string;
	v->a[10121] = sym_simple_expansion;
	v->a[10122] = sym_expansion;
	v->a[10123] = sym_command_substitution;
	v->a[10124] = state(820);
	v->a[10125] = 12;
	v->a[10126] = sym_redirected_statement;
	v->a[10127] = sym_for_statement;
	v->a[10128] = sym_while_statement;
	v->a[10129] = sym_if_statement;
	v->a[10130] = sym_case_statement;
	v->a[10131] = sym_function_definition;
	v->a[10132] = sym_compound_statement;
	v->a[10133] = sym_subshell;
	v->a[10134] = sym_list;
	v->a[10135] = sym_negated_command;
	v->a[10136] = sym_command;
	v->a[10137] = sym__variable_assignments;
	v->a[10138] = 30;
	v->a[10139] = actions(3);
	small_parse_table_507(v);
}

void	small_parse_table_507(t_small_parse_table_array *v)
{
	v->a[10140] = 1;
	v->a[10141] = sym_comment;
	v->a[10142] = actions(9);
	v->a[10143] = 1;
	v->a[10144] = anon_sym_for;
	v->a[10145] = actions(13);
	v->a[10146] = 1;
	v->a[10147] = anon_sym_if;
	v->a[10148] = actions(15);
	v->a[10149] = 1;
	v->a[10150] = anon_sym_case;
	v->a[10151] = actions(17);
	v->a[10152] = 1;
	v->a[10153] = anon_sym_LPAREN;
	v->a[10154] = actions(19);
	v->a[10155] = 1;
	v->a[10156] = anon_sym_LBRACE;
	v->a[10157] = actions(53);
	v->a[10158] = 1;
	v->a[10159] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_508(v);
}

void	small_parse_table_508(t_small_parse_table_array *v)
{
	v->a[10160] = actions(55);
	v->a[10161] = 1;
	v->a[10162] = anon_sym_DOLLAR;
	v->a[10163] = actions(57);
	v->a[10164] = 1;
	v->a[10165] = anon_sym_DQUOTE;
	v->a[10166] = actions(61);
	v->a[10167] = 1;
	v->a[10168] = anon_sym_DOLLAR_LBRACE;
	v->a[10169] = actions(63);
	v->a[10170] = 1;
	v->a[10171] = anon_sym_DOLLAR_LPAREN;
	v->a[10172] = actions(65);
	v->a[10173] = 1;
	v->a[10174] = anon_sym_BQUOTE;
	v->a[10175] = actions(208);
	v->a[10176] = 1;
	v->a[10177] = sym_word;
	v->a[10178] = actions(210);
	v->a[10179] = 1;
	small_parse_table_509(v);
}

void	small_parse_table_509(t_small_parse_table_array *v)
{
	v->a[10180] = anon_sym_BANG;
	v->a[10181] = actions(216);
	v->a[10182] = 1;
	v->a[10183] = sym_variable_name;
	v->a[10184] = state(112);
	v->a[10185] = 1;
	v->a[10186] = aux_sym__statements_repeat1;
	v->a[10187] = state(158);
	v->a[10188] = 1;
	v->a[10189] = sym_command_name;
	v->a[10190] = state(186);
	v->a[10191] = 1;
	v->a[10192] = sym_variable_assignment;
	v->a[10193] = state(298);
	v->a[10194] = 1;
	v->a[10195] = aux_sym_command_repeat1;
	v->a[10196] = state(551);
	v->a[10197] = 1;
	v->a[10198] = sym_file_redirect;
	v->a[10199] = state(555);
	small_parse_table_510(v);
}

/* EOF small_parse_table_101.c */
