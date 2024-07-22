/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_81.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_405(t_small_parse_table_array *v)
{
	v->a[8100] = 1;
	v->a[8101] = anon_sym_DOLLAR;
	v->a[8102] = actions(59);
	v->a[8103] = 1;
	v->a[8104] = anon_sym_DQUOTE;
	v->a[8105] = actions(63);
	v->a[8106] = 1;
	v->a[8107] = anon_sym_DOLLAR_LBRACE;
	v->a[8108] = actions(65);
	v->a[8109] = 1;
	v->a[8110] = anon_sym_DOLLAR_LPAREN;
	v->a[8111] = actions(67);
	v->a[8112] = 1;
	v->a[8113] = anon_sym_BQUOTE;
	v->a[8114] = actions(211);
	v->a[8115] = 1;
	v->a[8116] = sym_word;
	v->a[8117] = actions(213);
	v->a[8118] = 1;
	v->a[8119] = anon_sym_BANG;
	small_parse_table_406(v);
}

void	small_parse_table_406(t_small_parse_table_array *v)
{
	v->a[8120] = actions(219);
	v->a[8121] = 1;
	v->a[8122] = sym_file_descriptor;
	v->a[8123] = actions(221);
	v->a[8124] = 1;
	v->a[8125] = sym_variable_name;
	v->a[8126] = state(127);
	v->a[8127] = 1;
	v->a[8128] = aux_sym__statements_repeat1;
	v->a[8129] = state(170);
	v->a[8130] = 1;
	v->a[8131] = sym_command_name;
	v->a[8132] = state(241);
	v->a[8133] = 1;
	v->a[8134] = sym_variable_assignment;
	v->a[8135] = state(617);
	v->a[8136] = 1;
	v->a[8137] = aux_sym_command_repeat1;
	v->a[8138] = state(661);
	v->a[8139] = 1;
	small_parse_table_407(v);
}

void	small_parse_table_407(t_small_parse_table_array *v)
{
	v->a[8140] = sym_concatenation;
	v->a[8141] = state(679);
	v->a[8142] = 1;
	v->a[8143] = sym_file_redirect;
	v->a[8144] = state(1070);
	v->a[8145] = 1;
	v->a[8146] = sym_pipeline;
	v->a[8147] = state(1177);
	v->a[8148] = 1;
	v->a[8149] = aux_sym_redirected_statement_repeat2;
	v->a[8150] = state(1919);
	v->a[8151] = 1;
	v->a[8152] = sym__statement_not_pipeline;
	v->a[8153] = state(2087);
	v->a[8154] = 1;
	v->a[8155] = sym__statements;
	v->a[8156] = actions(11);
	v->a[8157] = 2;
	v->a[8158] = anon_sym_while;
	v->a[8159] = anon_sym_until;
	small_parse_table_408(v);
}

void	small_parse_table_408(t_small_parse_table_array *v)
{
	v->a[8160] = actions(217);
	v->a[8161] = 2;
	v->a[8162] = sym_raw_string;
	v->a[8163] = sym_number;
	v->a[8164] = state(374);
	v->a[8165] = 5;
	v->a[8166] = sym_arithmetic_expansion;
	v->a[8167] = sym_string;
	v->a[8168] = sym_simple_expansion;
	v->a[8169] = sym_expansion;
	v->a[8170] = sym_command_substitution;
	v->a[8171] = actions(215);
	v->a[8172] = 7;
	v->a[8173] = anon_sym_LT;
	v->a[8174] = anon_sym_GT;
	v->a[8175] = anon_sym_GT_GT;
	v->a[8176] = anon_sym_LT_AMP;
	v->a[8177] = anon_sym_GT_AMP;
	v->a[8178] = anon_sym_GT_PIPE;
	v->a[8179] = anon_sym_LT_GT;
	small_parse_table_409(v);
}

void	small_parse_table_409(t_small_parse_table_array *v)
{
	v->a[8180] = state(989);
	v->a[8181] = 12;
	v->a[8182] = sym_redirected_statement;
	v->a[8183] = sym_for_statement;
	v->a[8184] = sym_while_statement;
	v->a[8185] = sym_if_statement;
	v->a[8186] = sym_case_statement;
	v->a[8187] = sym_function_definition;
	v->a[8188] = sym_compound_statement;
	v->a[8189] = sym_subshell;
	v->a[8190] = sym_list;
	v->a[8191] = sym_negated_command;
	v->a[8192] = sym_command;
	v->a[8193] = sym__variable_assignments;
	v->a[8194] = 31;
	v->a[8195] = actions(3);
	v->a[8196] = 1;
	v->a[8197] = sym_comment;
	v->a[8198] = actions(9);
	v->a[8199] = 1;
	small_parse_table_410(v);
}

/* EOF small_parse_table_81.c */
