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
	v->a[13101] = sym_command_name;
	v->a[13102] = state(278);
	v->a[13103] = 1;
	v->a[13104] = sym_variable_assignment;
	v->a[13105] = state(567);
	v->a[13106] = 1;
	v->a[13107] = aux_sym_command_repeat1;
	v->a[13108] = state(582);
	v->a[13109] = 1;
	v->a[13110] = sym_concatenation;
	v->a[13111] = state(716);
	v->a[13112] = 1;
	v->a[13113] = sym_file_redirect;
	v->a[13114] = state(1100);
	v->a[13115] = 1;
	v->a[13116] = sym_pipeline;
	v->a[13117] = state(1196);
	v->a[13118] = 1;
	v->a[13119] = aux_sym_redirected_statement_repeat2;
	small_parse_table_656(v);
}

void	small_parse_table_656(t_small_parse_table_array *v)
{
	v->a[13120] = state(2037);
	v->a[13121] = 1;
	v->a[13122] = sym__statement_not_pipeline;
	v->a[13123] = state(2165);
	v->a[13124] = 1;
	v->a[13125] = sym__statements;
	v->a[13126] = actions(11);
	v->a[13127] = 2;
	v->a[13128] = anon_sym_while;
	v->a[13129] = anon_sym_until;
	v->a[13130] = actions(254);
	v->a[13131] = 2;
	v->a[13132] = anon_sym_LT_AMP_DASH;
	v->a[13133] = anon_sym_GT_AMP_DASH;
	v->a[13134] = state(295);
	v->a[13135] = 6;
	v->a[13136] = sym_arithmetic_expansion;
	v->a[13137] = sym_string;
	v->a[13138] = sym_number;
	v->a[13139] = sym_simple_expansion;
	small_parse_table_657(v);
}

void	small_parse_table_657(t_small_parse_table_array *v)
{
	v->a[13140] = sym_expansion;
	v->a[13141] = sym_command_substitution;
	v->a[13142] = actions(252);
	v->a[13143] = 8;
	v->a[13144] = anon_sym_LT;
	v->a[13145] = anon_sym_GT;
	v->a[13146] = anon_sym_GT_GT;
	v->a[13147] = anon_sym_AMP_GT;
	v->a[13148] = anon_sym_AMP_GT_GT;
	v->a[13149] = anon_sym_LT_AMP;
	v->a[13150] = anon_sym_GT_AMP;
	v->a[13151] = anon_sym_GT_PIPE;
	v->a[13152] = state(1031);
	v->a[13153] = 12;
	v->a[13154] = sym_redirected_statement;
	v->a[13155] = sym_for_statement;
	v->a[13156] = sym_while_statement;
	v->a[13157] = sym_if_statement;
	v->a[13158] = sym_case_statement;
	v->a[13159] = sym_function_definition;
	small_parse_table_658(v);
}

void	small_parse_table_658(t_small_parse_table_array *v)
{
	v->a[13160] = sym_compound_statement;
	v->a[13161] = sym_subshell;
	v->a[13162] = sym_list;
	v->a[13163] = sym_negated_command;
	v->a[13164] = sym_command;
	v->a[13165] = sym_variable_assignments;
	v->a[13166] = 34;
	v->a[13167] = actions(3);
	v->a[13168] = 1;
	v->a[13169] = sym_comment;
	v->a[13170] = actions(9);
	v->a[13171] = 1;
	v->a[13172] = anon_sym_for;
	v->a[13173] = actions(13);
	v->a[13174] = 1;
	v->a[13175] = anon_sym_if;
	v->a[13176] = actions(15);
	v->a[13177] = 1;
	v->a[13178] = anon_sym_case;
	v->a[13179] = actions(17);
	small_parse_table_659(v);
}

void	small_parse_table_659(t_small_parse_table_array *v)
{
	v->a[13180] = 1;
	v->a[13181] = anon_sym_LPAREN;
	v->a[13182] = actions(19);
	v->a[13183] = 1;
	v->a[13184] = anon_sym_LBRACE;
	v->a[13185] = actions(63);
	v->a[13186] = 1;
	v->a[13187] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13188] = actions(65);
	v->a[13189] = 1;
	v->a[13190] = anon_sym_DOLLAR;
	v->a[13191] = actions(67);
	v->a[13192] = 1;
	v->a[13193] = anon_sym_DQUOTE;
	v->a[13194] = actions(69);
	v->a[13195] = 1;
	v->a[13196] = sym_raw_string;
	v->a[13197] = actions(71);
	v->a[13198] = 1;
	v->a[13199] = aux_sym_number_token1;
	small_parse_table_660(v);
}

/* EOF small_parse_table_131.c */
