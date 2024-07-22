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
	v->a[9100] = state(374);
	v->a[9101] = 5;
	v->a[9102] = sym_arithmetic_expansion;
	v->a[9103] = sym_string;
	v->a[9104] = sym_simple_expansion;
	v->a[9105] = sym_expansion;
	v->a[9106] = sym_command_substitution;
	v->a[9107] = actions(215);
	v->a[9108] = 7;
	v->a[9109] = anon_sym_LT;
	v->a[9110] = anon_sym_GT;
	v->a[9111] = anon_sym_GT_GT;
	v->a[9112] = anon_sym_LT_AMP;
	v->a[9113] = anon_sym_GT_AMP;
	v->a[9114] = anon_sym_GT_PIPE;
	v->a[9115] = anon_sym_LT_GT;
	v->a[9116] = state(989);
	v->a[9117] = 12;
	v->a[9118] = sym_redirected_statement;
	v->a[9119] = sym_for_statement;
	small_parse_table_456(v);
}

void	small_parse_table_456(t_small_parse_table_array *v)
{
	v->a[9120] = sym_while_statement;
	v->a[9121] = sym_if_statement;
	v->a[9122] = sym_case_statement;
	v->a[9123] = sym_function_definition;
	v->a[9124] = sym_compound_statement;
	v->a[9125] = sym_subshell;
	v->a[9126] = sym_list;
	v->a[9127] = sym_negated_command;
	v->a[9128] = sym_command;
	v->a[9129] = sym__variable_assignments;
	v->a[9130] = 31;
	v->a[9131] = actions(3);
	v->a[9132] = 1;
	v->a[9133] = sym_comment;
	v->a[9134] = actions(9);
	v->a[9135] = 1;
	v->a[9136] = anon_sym_for;
	v->a[9137] = actions(13);
	v->a[9138] = 1;
	v->a[9139] = anon_sym_if;
	small_parse_table_457(v);
}

void	small_parse_table_457(t_small_parse_table_array *v)
{
	v->a[9140] = actions(15);
	v->a[9141] = 1;
	v->a[9142] = anon_sym_case;
	v->a[9143] = actions(17);
	v->a[9144] = 1;
	v->a[9145] = anon_sym_LPAREN;
	v->a[9146] = actions(19);
	v->a[9147] = 1;
	v->a[9148] = anon_sym_LBRACE;
	v->a[9149] = actions(55);
	v->a[9150] = 1;
	v->a[9151] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9152] = actions(57);
	v->a[9153] = 1;
	v->a[9154] = anon_sym_DOLLAR;
	v->a[9155] = actions(59);
	v->a[9156] = 1;
	v->a[9157] = anon_sym_DQUOTE;
	v->a[9158] = actions(63);
	v->a[9159] = 1;
	small_parse_table_458(v);
}

void	small_parse_table_458(t_small_parse_table_array *v)
{
	v->a[9160] = anon_sym_DOLLAR_LBRACE;
	v->a[9161] = actions(65);
	v->a[9162] = 1;
	v->a[9163] = anon_sym_DOLLAR_LPAREN;
	v->a[9164] = actions(67);
	v->a[9165] = 1;
	v->a[9166] = anon_sym_BQUOTE;
	v->a[9167] = actions(69);
	v->a[9168] = 1;
	v->a[9169] = sym_file_descriptor;
	v->a[9170] = actions(71);
	v->a[9171] = 1;
	v->a[9172] = sym_variable_name;
	v->a[9173] = actions(223);
	v->a[9174] = 1;
	v->a[9175] = sym_word;
	v->a[9176] = actions(225);
	v->a[9177] = 1;
	v->a[9178] = anon_sym_BANG;
	v->a[9179] = state(129);
	small_parse_table_459(v);
}

void	small_parse_table_459(t_small_parse_table_array *v)
{
	v->a[9180] = 1;
	v->a[9181] = aux_sym__statements_repeat1;
	v->a[9182] = state(178);
	v->a[9183] = 1;
	v->a[9184] = sym_command_name;
	v->a[9185] = state(339);
	v->a[9186] = 1;
	v->a[9187] = sym_variable_assignment;
	v->a[9188] = state(585);
	v->a[9189] = 1;
	v->a[9190] = aux_sym_command_repeat1;
	v->a[9191] = state(661);
	v->a[9192] = 1;
	v->a[9193] = sym_concatenation;
	v->a[9194] = state(774);
	v->a[9195] = 1;
	v->a[9196] = sym_file_redirect;
	v->a[9197] = state(1089);
	v->a[9198] = 1;
	v->a[9199] = sym_pipeline;
	small_parse_table_460(v);
}

/* EOF small_parse_table_91.c */
