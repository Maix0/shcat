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
	v->a[9100] = sym__statements;
	v->a[9101] = actions(11);
	v->a[9102] = 2;
	v->a[9103] = anon_sym_while;
	v->a[9104] = anon_sym_until;
	v->a[9105] = actions(226);
	v->a[9106] = 2;
	v->a[9107] = anon_sym_LT_AMP_DASH;
	v->a[9108] = anon_sym_GT_AMP_DASH;
	v->a[9109] = actions(228);
	v->a[9110] = 2;
	v->a[9111] = sym_raw_string;
	v->a[9112] = sym_number;
	v->a[9113] = state(299);
	v->a[9114] = 5;
	v->a[9115] = sym_arithmetic_expansion;
	v->a[9116] = sym_string;
	v->a[9117] = sym_simple_expansion;
	v->a[9118] = sym_expansion;
	v->a[9119] = sym_command_substitution;
	small_parse_table_456(v);
}

void	small_parse_table_456(t_small_parse_table_array *v)
{
	v->a[9120] = actions(224);
	v->a[9121] = 8;
	v->a[9122] = anon_sym_LT;
	v->a[9123] = anon_sym_GT;
	v->a[9124] = anon_sym_GT_GT;
	v->a[9125] = anon_sym_AMP_GT;
	v->a[9126] = anon_sym_AMP_GT_GT;
	v->a[9127] = anon_sym_LT_AMP;
	v->a[9128] = anon_sym_GT_AMP;
	v->a[9129] = anon_sym_GT_PIPE;
	v->a[9130] = state(1072);
	v->a[9131] = 12;
	v->a[9132] = sym_redirected_statement;
	v->a[9133] = sym_for_statement;
	v->a[9134] = sym_while_statement;
	v->a[9135] = sym_if_statement;
	v->a[9136] = sym_case_statement;
	v->a[9137] = sym_function_definition;
	v->a[9138] = sym_compound_statement;
	v->a[9139] = sym_subshell;
	small_parse_table_457(v);
}

void	small_parse_table_457(t_small_parse_table_array *v)
{
	v->a[9140] = sym_list;
	v->a[9141] = sym_negated_command;
	v->a[9142] = sym_command;
	v->a[9143] = sym__variable_assignments;
	v->a[9144] = 32;
	v->a[9145] = actions(3);
	v->a[9146] = 1;
	v->a[9147] = sym_comment;
	v->a[9148] = actions(9);
	v->a[9149] = 1;
	v->a[9150] = anon_sym_for;
	v->a[9151] = actions(13);
	v->a[9152] = 1;
	v->a[9153] = anon_sym_if;
	v->a[9154] = actions(15);
	v->a[9155] = 1;
	v->a[9156] = anon_sym_case;
	v->a[9157] = actions(17);
	v->a[9158] = 1;
	v->a[9159] = anon_sym_LPAREN;
	small_parse_table_458(v);
}

void	small_parse_table_458(t_small_parse_table_array *v)
{
	v->a[9160] = actions(19);
	v->a[9161] = 1;
	v->a[9162] = anon_sym_LBRACE;
	v->a[9163] = actions(59);
	v->a[9164] = 1;
	v->a[9165] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9166] = actions(61);
	v->a[9167] = 1;
	v->a[9168] = anon_sym_DOLLAR;
	v->a[9169] = actions(63);
	v->a[9170] = 1;
	v->a[9171] = anon_sym_DQUOTE;
	v->a[9172] = actions(67);
	v->a[9173] = 1;
	v->a[9174] = anon_sym_DOLLAR_LBRACE;
	v->a[9175] = actions(69);
	v->a[9176] = 1;
	v->a[9177] = anon_sym_DOLLAR_LPAREN;
	v->a[9178] = actions(71);
	v->a[9179] = 1;
	small_parse_table_459(v);
}

void	small_parse_table_459(t_small_parse_table_array *v)
{
	v->a[9180] = anon_sym_BQUOTE;
	v->a[9181] = actions(220);
	v->a[9182] = 1;
	v->a[9183] = sym_word;
	v->a[9184] = actions(222);
	v->a[9185] = 1;
	v->a[9186] = anon_sym_BANG;
	v->a[9187] = actions(230);
	v->a[9188] = 1;
	v->a[9189] = sym_file_descriptor;
	v->a[9190] = actions(232);
	v->a[9191] = 1;
	v->a[9192] = sym_variable_name;
	v->a[9193] = state(138);
	v->a[9194] = 1;
	v->a[9195] = aux_sym__statements_repeat1;
	v->a[9196] = state(185);
	v->a[9197] = 1;
	v->a[9198] = sym_command_name;
	v->a[9199] = state(235);
	small_parse_table_460(v);
}

/* EOF small_parse_table_91.c */
