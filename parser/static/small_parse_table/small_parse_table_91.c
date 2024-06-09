/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_91.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_455(t_small_parse_table_array *v)
{
	v->a[9100] = sym_raw_string;
	v->a[9101] = actions(71);
	v->a[9102] = 1;
	v->a[9103] = aux_sym_number_token1;
	v->a[9104] = actions(73);
	v->a[9105] = 1;
	v->a[9106] = aux_sym_number_token2;
	v->a[9107] = actions(75);
	v->a[9108] = 1;
	v->a[9109] = anon_sym_DOLLAR_LBRACE;
	v->a[9110] = actions(77);
	v->a[9111] = 1;
	v->a[9112] = anon_sym_DOLLAR_LPAREN;
	v->a[9113] = actions(79);
	v->a[9114] = 1;
	v->a[9115] = anon_sym_BQUOTE;
	v->a[9116] = actions(81);
	v->a[9117] = 1;
	v->a[9118] = sym_file_descriptor;
	v->a[9119] = actions(83);
	small_parse_table_456(v);
}

void	small_parse_table_456(t_small_parse_table_array *v)
{
	v->a[9120] = 1;
	v->a[9121] = sym_variable_name;
	v->a[9122] = actions(238);
	v->a[9123] = 1;
	v->a[9124] = sym_word;
	v->a[9125] = actions(240);
	v->a[9126] = 1;
	v->a[9127] = anon_sym_BANG;
	v->a[9128] = state(132);
	v->a[9129] = 1;
	v->a[9130] = aux_sym__statements_repeat1;
	v->a[9131] = state(185);
	v->a[9132] = 1;
	v->a[9133] = sym_command_name;
	v->a[9134] = state(297);
	v->a[9135] = 1;
	v->a[9136] = sym_variable_assignment;
	v->a[9137] = state(582);
	v->a[9138] = 1;
	v->a[9139] = sym_concatenation;
	small_parse_table_457(v);
}

void	small_parse_table_457(t_small_parse_table_array *v)
{
	v->a[9140] = state(614);
	v->a[9141] = 1;
	v->a[9142] = aux_sym_command_repeat1;
	v->a[9143] = state(769);
	v->a[9144] = 1;
	v->a[9145] = sym_file_redirect;
	v->a[9146] = state(1133);
	v->a[9147] = 1;
	v->a[9148] = aux_sym_redirected_statement_repeat2;
	v->a[9149] = state(1142);
	v->a[9150] = 1;
	v->a[9151] = sym_pipeline;
	v->a[9152] = state(2041);
	v->a[9153] = 1;
	v->a[9154] = sym__statement_not_pipeline;
	v->a[9155] = state(2121);
	v->a[9156] = 1;
	v->a[9157] = sym__statements;
	v->a[9158] = actions(11);
	v->a[9159] = 2;
	small_parse_table_458(v);
}

void	small_parse_table_458(t_small_parse_table_array *v)
{
	v->a[9160] = anon_sym_while;
	v->a[9161] = anon_sym_until;
	v->a[9162] = actions(61);
	v->a[9163] = 2;
	v->a[9164] = anon_sym_LT_AMP_DASH;
	v->a[9165] = anon_sym_GT_AMP_DASH;
	v->a[9166] = state(397);
	v->a[9167] = 6;
	v->a[9168] = sym_arithmetic_expansion;
	v->a[9169] = sym_string;
	v->a[9170] = sym_number;
	v->a[9171] = sym_simple_expansion;
	v->a[9172] = sym_expansion;
	v->a[9173] = sym_command_substitution;
	v->a[9174] = actions(59);
	v->a[9175] = 8;
	v->a[9176] = anon_sym_LT;
	v->a[9177] = anon_sym_GT;
	v->a[9178] = anon_sym_GT_GT;
	v->a[9179] = anon_sym_AMP_GT;
	small_parse_table_459(v);
}

void	small_parse_table_459(t_small_parse_table_array *v)
{
	v->a[9180] = anon_sym_AMP_GT_GT;
	v->a[9181] = anon_sym_LT_AMP;
	v->a[9182] = anon_sym_GT_AMP;
	v->a[9183] = anon_sym_GT_PIPE;
	v->a[9184] = state(1071);
	v->a[9185] = 12;
	v->a[9186] = sym_redirected_statement;
	v->a[9187] = sym_for_statement;
	v->a[9188] = sym_while_statement;
	v->a[9189] = sym_if_statement;
	v->a[9190] = sym_case_statement;
	v->a[9191] = sym_function_definition;
	v->a[9192] = sym_compound_statement;
	v->a[9193] = sym_subshell;
	v->a[9194] = sym_list;
	v->a[9195] = sym_negated_command;
	v->a[9196] = sym_command;
	v->a[9197] = sym_variable_assignments;
	v->a[9198] = 34;
	v->a[9199] = actions(3);
	small_parse_table_460(v);
}

/* EOF small_parse_table_91.c */
