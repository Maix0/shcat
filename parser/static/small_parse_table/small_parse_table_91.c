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
	v->a[9100] = anon_sym_GT_GT;
	v->a[9101] = anon_sym_LT_AMP;
	v->a[9102] = anon_sym_GT_AMP;
	v->a[9103] = anon_sym_GT_PIPE;
	v->a[9104] = state(1087);
	v->a[9105] = 12;
	v->a[9106] = sym_redirected_statement;
	v->a[9107] = sym_for_statement;
	v->a[9108] = sym_while_statement;
	v->a[9109] = sym_if_statement;
	v->a[9110] = sym_case_statement;
	v->a[9111] = sym_function_definition;
	v->a[9112] = sym_compound_statement;
	v->a[9113] = sym_subshell;
	v->a[9114] = sym_list;
	v->a[9115] = sym_negated_command;
	v->a[9116] = sym_command;
	v->a[9117] = sym__variable_assignments;
	v->a[9118] = 32;
	v->a[9119] = actions(3);
	small_parse_table_456(v);
}

void	small_parse_table_456(t_small_parse_table_array *v)
{
	v->a[9120] = 1;
	v->a[9121] = sym_comment;
	v->a[9122] = actions(9);
	v->a[9123] = 1;
	v->a[9124] = anon_sym_for;
	v->a[9125] = actions(13);
	v->a[9126] = 1;
	v->a[9127] = anon_sym_if;
	v->a[9128] = actions(15);
	v->a[9129] = 1;
	v->a[9130] = anon_sym_case;
	v->a[9131] = actions(17);
	v->a[9132] = 1;
	v->a[9133] = anon_sym_LPAREN;
	v->a[9134] = actions(19);
	v->a[9135] = 1;
	v->a[9136] = anon_sym_LBRACE;
	v->a[9137] = actions(45);
	v->a[9138] = 1;
	v->a[9139] = sym_word;
	small_parse_table_457(v);
}

void	small_parse_table_457(t_small_parse_table_array *v)
{
	v->a[9140] = actions(53);
	v->a[9141] = 1;
	v->a[9142] = anon_sym_BANG;
	v->a[9143] = actions(59);
	v->a[9144] = 1;
	v->a[9145] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9146] = actions(61);
	v->a[9147] = 1;
	v->a[9148] = anon_sym_DOLLAR;
	v->a[9149] = actions(63);
	v->a[9150] = 1;
	v->a[9151] = anon_sym_DQUOTE;
	v->a[9152] = actions(67);
	v->a[9153] = 1;
	v->a[9154] = anon_sym_DOLLAR_LBRACE;
	v->a[9155] = actions(69);
	v->a[9156] = 1;
	v->a[9157] = anon_sym_DOLLAR_LPAREN;
	v->a[9158] = actions(71);
	v->a[9159] = 1;
	small_parse_table_458(v);
}

void	small_parse_table_458(t_small_parse_table_array *v)
{
	v->a[9160] = anon_sym_BQUOTE;
	v->a[9161] = actions(73);
	v->a[9162] = 1;
	v->a[9163] = sym_file_descriptor;
	v->a[9164] = actions(75);
	v->a[9165] = 1;
	v->a[9166] = sym_variable_name;
	v->a[9167] = actions(258);
	v->a[9168] = 1;
	v->a[9169] = anon_sym_fi;
	v->a[9170] = state(70);
	v->a[9171] = 1;
	v->a[9172] = aux_sym__terminated_statement;
	v->a[9173] = state(189);
	v->a[9174] = 1;
	v->a[9175] = sym_command_name;
	v->a[9176] = state(307);
	v->a[9177] = 1;
	v->a[9178] = sym_variable_assignment;
	v->a[9179] = state(650);
	small_parse_table_459(v);
}

void	small_parse_table_459(t_small_parse_table_array *v)
{
	v->a[9180] = 1;
	v->a[9181] = sym_concatenation;
	v->a[9182] = state(712);
	v->a[9183] = 1;
	v->a[9184] = sym_file_redirect;
	v->a[9185] = state(713);
	v->a[9186] = 1;
	v->a[9187] = aux_sym_command_repeat1;
	v->a[9188] = state(1205);
	v->a[9189] = 1;
	v->a[9190] = sym_pipeline;
	v->a[9191] = state(1333);
	v->a[9192] = 1;
	v->a[9193] = aux_sym_redirected_statement_repeat2;
	v->a[9194] = state(2103);
	v->a[9195] = 1;
	v->a[9196] = sym__statement_not_pipeline;
	v->a[9197] = actions(11);
	v->a[9198] = 2;
	v->a[9199] = anon_sym_while;
	small_parse_table_460(v);
}

/* EOF small_parse_table_91.c */
