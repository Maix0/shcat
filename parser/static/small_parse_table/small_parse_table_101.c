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
	v->a[10100] = state(482);
	v->a[10101] = 1;
	v->a[10102] = aux_sym_command_repeat1;
	v->a[10103] = state(600);
	v->a[10104] = 1;
	v->a[10105] = sym_file_redirect;
	v->a[10106] = state(602);
	v->a[10107] = 1;
	v->a[10108] = sym_concatenation;
	v->a[10109] = state(1013);
	v->a[10110] = 1;
	v->a[10111] = sym_pipeline;
	v->a[10112] = state(1068);
	v->a[10113] = 1;
	v->a[10114] = aux_sym_redirected_statement_repeat2;
	v->a[10115] = state(1609);
	v->a[10116] = 1;
	v->a[10117] = sym__statement_not_pipeline;
	v->a[10118] = actions(11);
	v->a[10119] = 2;
	small_parse_table_506(v);
}

void	small_parse_table_506(t_small_parse_table_array *v)
{
	v->a[10120] = anon_sym_while;
	v->a[10121] = anon_sym_until;
	v->a[10122] = actions(59);
	v->a[10123] = 2;
	v->a[10124] = sym_raw_string;
	v->a[10125] = sym_number;
	v->a[10126] = state(425);
	v->a[10127] = 5;
	v->a[10128] = sym_arithmetic_expansion;
	v->a[10129] = sym_string;
	v->a[10130] = sym_simple_expansion;
	v->a[10131] = sym_expansion;
	v->a[10132] = sym_command_substitution;
	v->a[10133] = actions(51);
	v->a[10134] = 7;
	v->a[10135] = anon_sym_LT;
	v->a[10136] = anon_sym_GT;
	v->a[10137] = anon_sym_GT_GT;
	v->a[10138] = anon_sym_LT_AMP;
	v->a[10139] = anon_sym_GT_AMP;
	small_parse_table_507(v);
}

void	small_parse_table_507(t_small_parse_table_array *v)
{
	v->a[10140] = anon_sym_GT_PIPE;
	v->a[10141] = anon_sym_LT_GT;
	v->a[10142] = state(939);
	v->a[10143] = 12;
	v->a[10144] = sym_redirected_statement;
	v->a[10145] = sym_for_statement;
	v->a[10146] = sym_while_statement;
	v->a[10147] = sym_if_statement;
	v->a[10148] = sym_case_statement;
	v->a[10149] = sym_function_definition;
	v->a[10150] = sym_compound_statement;
	v->a[10151] = sym_subshell;
	v->a[10152] = sym_list;
	v->a[10153] = sym_negated_command;
	v->a[10154] = sym_command;
	v->a[10155] = sym__variable_assignments;
	v->a[10156] = 30;
	v->a[10157] = actions(3);
	v->a[10158] = 1;
	v->a[10159] = sym_comment;
	small_parse_table_508(v);
}

void	small_parse_table_508(t_small_parse_table_array *v)
{
	v->a[10160] = actions(9);
	v->a[10161] = 1;
	v->a[10162] = anon_sym_for;
	v->a[10163] = actions(13);
	v->a[10164] = 1;
	v->a[10165] = anon_sym_if;
	v->a[10166] = actions(15);
	v->a[10167] = 1;
	v->a[10168] = anon_sym_case;
	v->a[10169] = actions(17);
	v->a[10170] = 1;
	v->a[10171] = anon_sym_LPAREN;
	v->a[10172] = actions(19);
	v->a[10173] = 1;
	v->a[10174] = anon_sym_LBRACE;
	v->a[10175] = actions(53);
	v->a[10176] = 1;
	v->a[10177] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10178] = actions(55);
	v->a[10179] = 1;
	small_parse_table_509(v);
}

void	small_parse_table_509(t_small_parse_table_array *v)
{
	v->a[10180] = anon_sym_DOLLAR;
	v->a[10181] = actions(57);
	v->a[10182] = 1;
	v->a[10183] = anon_sym_DQUOTE;
	v->a[10184] = actions(61);
	v->a[10185] = 1;
	v->a[10186] = anon_sym_DOLLAR_LBRACE;
	v->a[10187] = actions(63);
	v->a[10188] = 1;
	v->a[10189] = anon_sym_DOLLAR_LPAREN;
	v->a[10190] = actions(65);
	v->a[10191] = 1;
	v->a[10192] = anon_sym_BQUOTE;
	v->a[10193] = actions(206);
	v->a[10194] = 1;
	v->a[10195] = sym_word;
	v->a[10196] = actions(208);
	v->a[10197] = 1;
	v->a[10198] = anon_sym_BANG;
	v->a[10199] = actions(214);
	small_parse_table_510(v);
}

/* EOF small_parse_table_101.c */
