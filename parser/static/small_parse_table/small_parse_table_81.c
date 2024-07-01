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
	v->a[8101] = sym_concatenation;
	v->a[8102] = state(712);
	v->a[8103] = 1;
	v->a[8104] = sym_file_redirect;
	v->a[8105] = state(713);
	v->a[8106] = 1;
	v->a[8107] = aux_sym_command_repeat1;
	v->a[8108] = state(1251);
	v->a[8109] = 1;
	v->a[8110] = sym_pipeline;
	v->a[8111] = state(1333);
	v->a[8112] = 1;
	v->a[8113] = aux_sym_redirected_statement_repeat2;
	v->a[8114] = state(2103);
	v->a[8115] = 1;
	v->a[8116] = sym__statement_not_pipeline;
	v->a[8117] = actions(11);
	v->a[8118] = 2;
	v->a[8119] = anon_sym_while;
	small_parse_table_406(v);
}

void	small_parse_table_406(t_small_parse_table_array *v)
{
	v->a[8120] = anon_sym_until;
	v->a[8121] = actions(57);
	v->a[8122] = 2;
	v->a[8123] = anon_sym_LT_AMP_DASH;
	v->a[8124] = anon_sym_GT_AMP_DASH;
	v->a[8125] = actions(65);
	v->a[8126] = 2;
	v->a[8127] = sym_raw_string;
	v->a[8128] = sym_number;
	v->a[8129] = state(443);
	v->a[8130] = 5;
	v->a[8131] = sym_arithmetic_expansion;
	v->a[8132] = sym_string;
	v->a[8133] = sym_simple_expansion;
	v->a[8134] = sym_expansion;
	v->a[8135] = sym_command_substitution;
	v->a[8136] = actions(55);
	v->a[8137] = 6;
	v->a[8138] = anon_sym_LT;
	v->a[8139] = anon_sym_GT;
	small_parse_table_407(v);
}

void	small_parse_table_407(t_small_parse_table_array *v)
{
	v->a[8140] = anon_sym_GT_GT;
	v->a[8141] = anon_sym_LT_AMP;
	v->a[8142] = anon_sym_GT_AMP;
	v->a[8143] = anon_sym_GT_PIPE;
	v->a[8144] = state(1094);
	v->a[8145] = 12;
	v->a[8146] = sym_redirected_statement;
	v->a[8147] = sym_for_statement;
	v->a[8148] = sym_while_statement;
	v->a[8149] = sym_if_statement;
	v->a[8150] = sym_case_statement;
	v->a[8151] = sym_function_definition;
	v->a[8152] = sym_compound_statement;
	v->a[8153] = sym_subshell;
	v->a[8154] = sym_list;
	v->a[8155] = sym_negated_command;
	v->a[8156] = sym_command;
	v->a[8157] = sym__variable_assignments;
	v->a[8158] = 32;
	v->a[8159] = actions(3);
	small_parse_table_408(v);
}

void	small_parse_table_408(t_small_parse_table_array *v)
{
	v->a[8160] = 1;
	v->a[8161] = sym_comment;
	v->a[8162] = actions(9);
	v->a[8163] = 1;
	v->a[8164] = anon_sym_for;
	v->a[8165] = actions(13);
	v->a[8166] = 1;
	v->a[8167] = anon_sym_if;
	v->a[8168] = actions(15);
	v->a[8169] = 1;
	v->a[8170] = anon_sym_case;
	v->a[8171] = actions(17);
	v->a[8172] = 1;
	v->a[8173] = anon_sym_LPAREN;
	v->a[8174] = actions(19);
	v->a[8175] = 1;
	v->a[8176] = anon_sym_LBRACE;
	v->a[8177] = actions(59);
	v->a[8178] = 1;
	v->a[8179] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_409(v);
}

void	small_parse_table_409(t_small_parse_table_array *v)
{
	v->a[8180] = actions(61);
	v->a[8181] = 1;
	v->a[8182] = anon_sym_DOLLAR;
	v->a[8183] = actions(63);
	v->a[8184] = 1;
	v->a[8185] = anon_sym_DQUOTE;
	v->a[8186] = actions(67);
	v->a[8187] = 1;
	v->a[8188] = anon_sym_DOLLAR_LBRACE;
	v->a[8189] = actions(69);
	v->a[8190] = 1;
	v->a[8191] = anon_sym_DOLLAR_LPAREN;
	v->a[8192] = actions(71);
	v->a[8193] = 1;
	v->a[8194] = anon_sym_BQUOTE;
	v->a[8195] = actions(73);
	v->a[8196] = 1;
	v->a[8197] = sym_file_descriptor;
	v->a[8198] = actions(75);
	v->a[8199] = 1;
	small_parse_table_410(v);
}

/* EOF small_parse_table_81.c */
