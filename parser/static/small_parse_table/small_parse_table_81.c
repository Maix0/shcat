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
	v->a[8100] = sym_command_name;
	v->a[8101] = state(268);
	v->a[8102] = 1;
	v->a[8103] = sym_variable_assignment;
	v->a[8104] = state(647);
	v->a[8105] = 1;
	v->a[8106] = sym_concatenation;
	v->a[8107] = state(765);
	v->a[8108] = 1;
	v->a[8109] = sym_file_redirect;
	v->a[8110] = state(828);
	v->a[8111] = 1;
	v->a[8112] = aux_sym_command_repeat1;
	v->a[8113] = state(1314);
	v->a[8114] = 1;
	v->a[8115] = sym_pipeline;
	v->a[8116] = state(1331);
	v->a[8117] = 1;
	v->a[8118] = aux_sym_redirected_statement_repeat2;
	v->a[8119] = state(2252);
	small_parse_table_406(v);
}

void	small_parse_table_406(t_small_parse_table_array *v)
{
	v->a[8120] = 1;
	v->a[8121] = sym__statement_not_pipeline;
	v->a[8122] = state(2393);
	v->a[8123] = 1;
	v->a[8124] = sym__statements;
	v->a[8125] = actions(11);
	v->a[8126] = 2;
	v->a[8127] = anon_sym_while;
	v->a[8128] = anon_sym_until;
	v->a[8129] = actions(226);
	v->a[8130] = 2;
	v->a[8131] = anon_sym_LT_AMP_DASH;
	v->a[8132] = anon_sym_GT_AMP_DASH;
	v->a[8133] = actions(228);
	v->a[8134] = 2;
	v->a[8135] = sym_raw_string;
	v->a[8136] = sym_number;
	v->a[8137] = state(294);
	v->a[8138] = 5;
	v->a[8139] = sym_arithmetic_expansion;
	small_parse_table_407(v);
}

void	small_parse_table_407(t_small_parse_table_array *v)
{
	v->a[8140] = sym_string;
	v->a[8141] = sym_simple_expansion;
	v->a[8142] = sym_expansion;
	v->a[8143] = sym_command_substitution;
	v->a[8144] = actions(224);
	v->a[8145] = 8;
	v->a[8146] = anon_sym_LT;
	v->a[8147] = anon_sym_GT;
	v->a[8148] = anon_sym_GT_GT;
	v->a[8149] = anon_sym_AMP_GT;
	v->a[8150] = anon_sym_AMP_GT_GT;
	v->a[8151] = anon_sym_LT_AMP;
	v->a[8152] = anon_sym_GT_AMP;
	v->a[8153] = anon_sym_GT_PIPE;
	v->a[8154] = state(1188);
	v->a[8155] = 12;
	v->a[8156] = sym_redirected_statement;
	v->a[8157] = sym_for_statement;
	v->a[8158] = sym_while_statement;
	v->a[8159] = sym_if_statement;
	small_parse_table_408(v);
}

void	small_parse_table_408(t_small_parse_table_array *v)
{
	v->a[8160] = sym_case_statement;
	v->a[8161] = sym_function_definition;
	v->a[8162] = sym_compound_statement;
	v->a[8163] = sym_subshell;
	v->a[8164] = sym_list;
	v->a[8165] = sym_negated_command;
	v->a[8166] = sym_command;
	v->a[8167] = sym__variable_assignments;
	v->a[8168] = 32;
	v->a[8169] = actions(3);
	v->a[8170] = 1;
	v->a[8171] = sym_comment;
	v->a[8172] = actions(9);
	v->a[8173] = 1;
	v->a[8174] = anon_sym_for;
	v->a[8175] = actions(13);
	v->a[8176] = 1;
	v->a[8177] = anon_sym_if;
	v->a[8178] = actions(15);
	v->a[8179] = 1;
	small_parse_table_409(v);
}

void	small_parse_table_409(t_small_parse_table_array *v)
{
	v->a[8180] = anon_sym_case;
	v->a[8181] = actions(17);
	v->a[8182] = 1;
	v->a[8183] = anon_sym_LPAREN;
	v->a[8184] = actions(19);
	v->a[8185] = 1;
	v->a[8186] = anon_sym_LBRACE;
	v->a[8187] = actions(59);
	v->a[8188] = 1;
	v->a[8189] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8190] = actions(61);
	v->a[8191] = 1;
	v->a[8192] = anon_sym_DOLLAR;
	v->a[8193] = actions(63);
	v->a[8194] = 1;
	v->a[8195] = anon_sym_DQUOTE;
	v->a[8196] = actions(67);
	v->a[8197] = 1;
	v->a[8198] = anon_sym_DOLLAR_LBRACE;
	v->a[8199] = actions(69);
	small_parse_table_410(v);
}

/* EOF small_parse_table_81.c */
