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
	v->a[9100] = 1;
	v->a[9101] = sym_file_redirect;
	v->a[9102] = state(969);
	v->a[9103] = 1;
	v->a[9104] = sym_pipeline;
	v->a[9105] = state(1006);
	v->a[9106] = 1;
	v->a[9107] = aux_sym_redirected_statement_repeat2;
	v->a[9108] = state(1560);
	v->a[9109] = 1;
	v->a[9110] = sym__statement_not_pipeline;
	v->a[9111] = state(1582);
	v->a[9112] = 1;
	v->a[9113] = sym__statements;
	v->a[9114] = actions(11);
	v->a[9115] = 2;
	v->a[9116] = anon_sym_while;
	v->a[9117] = anon_sym_until;
	v->a[9118] = actions(59);
	v->a[9119] = 2;
	small_parse_table_456(v);
}

void	small_parse_table_456(t_small_parse_table_array *v)
{
	v->a[9120] = sym_raw_string;
	v->a[9121] = sym_number;
	v->a[9122] = actions(51);
	v->a[9123] = 3;
	v->a[9124] = anon_sym_LT;
	v->a[9125] = anon_sym_GT;
	v->a[9126] = anon_sym_GT_GT;
	v->a[9127] = state(401);
	v->a[9128] = 5;
	v->a[9129] = sym_arithmetic_expansion;
	v->a[9130] = sym_string;
	v->a[9131] = sym_simple_expansion;
	v->a[9132] = sym_expansion;
	v->a[9133] = sym_command_substitution;
	v->a[9134] = state(820);
	v->a[9135] = 12;
	v->a[9136] = sym_redirected_statement;
	v->a[9137] = sym_for_statement;
	v->a[9138] = sym_while_statement;
	v->a[9139] = sym_if_statement;
	small_parse_table_457(v);
}

void	small_parse_table_457(t_small_parse_table_array *v)
{
	v->a[9140] = sym_case_statement;
	v->a[9141] = sym_function_definition;
	v->a[9142] = sym_compound_statement;
	v->a[9143] = sym_subshell;
	v->a[9144] = sym_list;
	v->a[9145] = sym_negated_command;
	v->a[9146] = sym_command;
	v->a[9147] = sym__variable_assignments;
	v->a[9148] = 30;
	v->a[9149] = actions(3);
	v->a[9150] = 1;
	v->a[9151] = sym_comment;
	v->a[9152] = actions(9);
	v->a[9153] = 1;
	v->a[9154] = anon_sym_for;
	v->a[9155] = actions(13);
	v->a[9156] = 1;
	v->a[9157] = anon_sym_if;
	v->a[9158] = actions(15);
	v->a[9159] = 1;
	small_parse_table_458(v);
}

void	small_parse_table_458(t_small_parse_table_array *v)
{
	v->a[9160] = anon_sym_case;
	v->a[9161] = actions(17);
	v->a[9162] = 1;
	v->a[9163] = anon_sym_LPAREN;
	v->a[9164] = actions(19);
	v->a[9165] = 1;
	v->a[9166] = anon_sym_LBRACE;
	v->a[9167] = actions(53);
	v->a[9168] = 1;
	v->a[9169] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9170] = actions(55);
	v->a[9171] = 1;
	v->a[9172] = anon_sym_DOLLAR;
	v->a[9173] = actions(57);
	v->a[9174] = 1;
	v->a[9175] = anon_sym_DQUOTE;
	v->a[9176] = actions(61);
	v->a[9177] = 1;
	v->a[9178] = anon_sym_DOLLAR_LBRACE;
	v->a[9179] = actions(63);
	small_parse_table_459(v);
}

void	small_parse_table_459(t_small_parse_table_array *v)
{
	v->a[9180] = 1;
	v->a[9181] = anon_sym_DOLLAR_LPAREN;
	v->a[9182] = actions(65);
	v->a[9183] = 1;
	v->a[9184] = anon_sym_BQUOTE;
	v->a[9185] = actions(208);
	v->a[9186] = 1;
	v->a[9187] = sym_word;
	v->a[9188] = actions(210);
	v->a[9189] = 1;
	v->a[9190] = anon_sym_BANG;
	v->a[9191] = actions(216);
	v->a[9192] = 1;
	v->a[9193] = sym_variable_name;
	v->a[9194] = state(112);
	v->a[9195] = 1;
	v->a[9196] = aux_sym__statements_repeat1;
	v->a[9197] = state(158);
	v->a[9198] = 1;
	v->a[9199] = sym_command_name;
	small_parse_table_460(v);
}

/* EOF small_parse_table_91.c */
