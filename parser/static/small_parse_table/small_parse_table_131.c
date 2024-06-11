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
	v->a[13100] = state(189);
	v->a[13101] = 1;
	v->a[13102] = sym_command_name;
	v->a[13103] = state(286);
	v->a[13104] = 1;
	v->a[13105] = sym_variable_assignment;
	v->a[13106] = state(647);
	v->a[13107] = 1;
	v->a[13108] = sym_concatenation;
	v->a[13109] = state(746);
	v->a[13110] = 1;
	v->a[13111] = aux_sym_command_repeat1;
	v->a[13112] = state(905);
	v->a[13113] = 1;
	v->a[13114] = sym_file_redirect;
	v->a[13115] = state(1422);
	v->a[13116] = 1;
	v->a[13117] = sym_pipeline;
	v->a[13118] = state(1429);
	v->a[13119] = 1;
	small_parse_table_656(v);
}

void	small_parse_table_656(t_small_parse_table_array *v)
{
	v->a[13120] = aux_sym_redirected_statement_repeat2;
	v->a[13121] = state(2271);
	v->a[13122] = 1;
	v->a[13123] = sym__statement_not_pipeline;
	v->a[13124] = state(2450);
	v->a[13125] = 1;
	v->a[13126] = sym__statements;
	v->a[13127] = actions(11);
	v->a[13128] = 2;
	v->a[13129] = anon_sym_while;
	v->a[13130] = anon_sym_until;
	v->a[13131] = actions(57);
	v->a[13132] = 2;
	v->a[13133] = anon_sym_LT_AMP_DASH;
	v->a[13134] = anon_sym_GT_AMP_DASH;
	v->a[13135] = actions(65);
	v->a[13136] = 2;
	v->a[13137] = sym_raw_string;
	v->a[13138] = sym_number;
	v->a[13139] = state(394);
	small_parse_table_657(v);
}

void	small_parse_table_657(t_small_parse_table_array *v)
{
	v->a[13140] = 5;
	v->a[13141] = sym_arithmetic_expansion;
	v->a[13142] = sym_string;
	v->a[13143] = sym_simple_expansion;
	v->a[13144] = sym_expansion;
	v->a[13145] = sym_command_substitution;
	v->a[13146] = actions(55);
	v->a[13147] = 8;
	v->a[13148] = anon_sym_LT;
	v->a[13149] = anon_sym_GT;
	v->a[13150] = anon_sym_GT_GT;
	v->a[13151] = anon_sym_AMP_GT;
	v->a[13152] = anon_sym_AMP_GT_GT;
	v->a[13153] = anon_sym_LT_AMP;
	v->a[13154] = anon_sym_GT_AMP;
	v->a[13155] = anon_sym_GT_PIPE;
	v->a[13156] = state(1211);
	v->a[13157] = 12;
	v->a[13158] = sym_redirected_statement;
	v->a[13159] = sym_for_statement;
	small_parse_table_658(v);
}

void	small_parse_table_658(t_small_parse_table_array *v)
{
	v->a[13160] = sym_while_statement;
	v->a[13161] = sym_if_statement;
	v->a[13162] = sym_case_statement;
	v->a[13163] = sym_function_definition;
	v->a[13164] = sym_compound_statement;
	v->a[13165] = sym_subshell;
	v->a[13166] = sym_list;
	v->a[13167] = sym_negated_command;
	v->a[13168] = sym_command;
	v->a[13169] = sym_variable_assignments;
	v->a[13170] = 32;
	v->a[13171] = actions(3);
	v->a[13172] = 1;
	v->a[13173] = sym_comment;
	v->a[13174] = actions(9);
	v->a[13175] = 1;
	v->a[13176] = anon_sym_for;
	v->a[13177] = actions(13);
	v->a[13178] = 1;
	v->a[13179] = anon_sym_if;
	small_parse_table_659(v);
}

void	small_parse_table_659(t_small_parse_table_array *v)
{
	v->a[13180] = actions(15);
	v->a[13181] = 1;
	v->a[13182] = anon_sym_case;
	v->a[13183] = actions(17);
	v->a[13184] = 1;
	v->a[13185] = anon_sym_LPAREN;
	v->a[13186] = actions(19);
	v->a[13187] = 1;
	v->a[13188] = anon_sym_LBRACE;
	v->a[13189] = actions(59);
	v->a[13190] = 1;
	v->a[13191] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13192] = actions(61);
	v->a[13193] = 1;
	v->a[13194] = anon_sym_DOLLAR;
	v->a[13195] = actions(63);
	v->a[13196] = 1;
	v->a[13197] = anon_sym_DQUOTE;
	v->a[13198] = actions(67);
	v->a[13199] = 1;
	small_parse_table_660(v);
}

/* EOF small_parse_table_131.c */
