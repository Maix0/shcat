/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_131.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_655(t_small_parse_table_array *v)
{
	v->a[13100] = 1;
	v->a[13101] = aux_sym_command_repeat1;
	v->a[13102] = state(551);
	v->a[13103] = 1;
	v->a[13104] = sym_file_redirect;
	v->a[13105] = state(555);
	v->a[13106] = 1;
	v->a[13107] = sym_concatenation;
	v->a[13108] = state(938);
	v->a[13109] = 1;
	v->a[13110] = sym_redirected_statement;
	v->a[13111] = state(939);
	v->a[13112] = 1;
	v->a[13113] = sym_for_statement;
	v->a[13114] = state(941);
	v->a[13115] = 1;
	v->a[13116] = sym_while_statement;
	v->a[13117] = state(943);
	v->a[13118] = 1;
	v->a[13119] = sym_if_statement;
	small_parse_table_656(v);
}

void	small_parse_table_656(t_small_parse_table_array *v)
{
	v->a[13120] = state(944);
	v->a[13121] = 1;
	v->a[13122] = sym_case_statement;
	v->a[13123] = state(945);
	v->a[13124] = 1;
	v->a[13125] = sym_function_definition;
	v->a[13126] = state(946);
	v->a[13127] = 1;
	v->a[13128] = sym_compound_statement;
	v->a[13129] = state(947);
	v->a[13130] = 1;
	v->a[13131] = sym_subshell;
	v->a[13132] = state(948);
	v->a[13133] = 1;
	v->a[13134] = sym_list;
	v->a[13135] = state(951);
	v->a[13136] = 1;
	v->a[13137] = sym_negated_command;
	v->a[13138] = state(952);
	v->a[13139] = 1;
	small_parse_table_657(v);
}

void	small_parse_table_657(t_small_parse_table_array *v)
{
	v->a[13140] = sym_command;
	v->a[13141] = state(954);
	v->a[13142] = 1;
	v->a[13143] = sym__variable_assignments;
	v->a[13144] = state(1064);
	v->a[13145] = 1;
	v->a[13146] = sym_pipeline;
	v->a[13147] = state(1126);
	v->a[13148] = 1;
	v->a[13149] = aux_sym_redirected_statement_repeat2;
	v->a[13150] = state(1561);
	v->a[13151] = 1;
	v->a[13152] = sym__statement_not_pipeline;
	v->a[13153] = actions(11);
	v->a[13154] = 2;
	v->a[13155] = anon_sym_while;
	v->a[13156] = anon_sym_until;
	v->a[13157] = actions(59);
	v->a[13158] = 2;
	v->a[13159] = sym_raw_string;
	small_parse_table_658(v);
}

void	small_parse_table_658(t_small_parse_table_array *v)
{
	v->a[13160] = sym_number;
	v->a[13161] = actions(51);
	v->a[13162] = 3;
	v->a[13163] = anon_sym_LT;
	v->a[13164] = anon_sym_GT;
	v->a[13165] = anon_sym_GT_GT;
	v->a[13166] = state(401);
	v->a[13167] = 5;
	v->a[13168] = sym_arithmetic_expansion;
	v->a[13169] = sym_string;
	v->a[13170] = sym_simple_expansion;
	v->a[13171] = sym_expansion;
	v->a[13172] = sym_command_substitution;
	v->a[13173] = 29;
	v->a[13174] = actions(3);
	v->a[13175] = 1;
	v->a[13176] = sym_comment;
	v->a[13177] = actions(9);
	v->a[13178] = 1;
	v->a[13179] = anon_sym_for;
	small_parse_table_659(v);
}

void	small_parse_table_659(t_small_parse_table_array *v)
{
	v->a[13180] = actions(13);
	v->a[13181] = 1;
	v->a[13182] = anon_sym_if;
	v->a[13183] = actions(15);
	v->a[13184] = 1;
	v->a[13185] = anon_sym_case;
	v->a[13186] = actions(17);
	v->a[13187] = 1;
	v->a[13188] = anon_sym_LPAREN;
	v->a[13189] = actions(19);
	v->a[13190] = 1;
	v->a[13191] = anon_sym_LBRACE;
	v->a[13192] = actions(41);
	v->a[13193] = 1;
	v->a[13194] = sym_word;
	v->a[13195] = actions(49);
	v->a[13196] = 1;
	v->a[13197] = anon_sym_BANG;
	v->a[13198] = actions(53);
	v->a[13199] = 1;
	small_parse_table_660(v);
}

/* EOF small_parse_table_131.c */
