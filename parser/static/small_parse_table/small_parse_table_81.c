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
	v->a[8100] = sym_list;
	v->a[8101] = sym_negated_command;
	v->a[8102] = sym_command;
	v->a[8103] = sym__variable_assignments;
	v->a[8104] = 30;
	v->a[8105] = actions(3);
	v->a[8106] = 1;
	v->a[8107] = sym_comment;
	v->a[8108] = actions(9);
	v->a[8109] = 1;
	v->a[8110] = anon_sym_for;
	v->a[8111] = actions(13);
	v->a[8112] = 1;
	v->a[8113] = anon_sym_if;
	v->a[8114] = actions(15);
	v->a[8115] = 1;
	v->a[8116] = anon_sym_case;
	v->a[8117] = actions(17);
	v->a[8118] = 1;
	v->a[8119] = anon_sym_LPAREN;
	small_parse_table_406(v);
}

void	small_parse_table_406(t_small_parse_table_array *v)
{
	v->a[8120] = actions(19);
	v->a[8121] = 1;
	v->a[8122] = anon_sym_LBRACE;
	v->a[8123] = actions(53);
	v->a[8124] = 1;
	v->a[8125] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8126] = actions(55);
	v->a[8127] = 1;
	v->a[8128] = anon_sym_DOLLAR;
	v->a[8129] = actions(57);
	v->a[8130] = 1;
	v->a[8131] = anon_sym_DQUOTE;
	v->a[8132] = actions(61);
	v->a[8133] = 1;
	v->a[8134] = anon_sym_DOLLAR_LBRACE;
	v->a[8135] = actions(63);
	v->a[8136] = 1;
	v->a[8137] = anon_sym_DOLLAR_LPAREN;
	v->a[8138] = actions(65);
	v->a[8139] = 1;
	small_parse_table_407(v);
}

void	small_parse_table_407(t_small_parse_table_array *v)
{
	v->a[8140] = anon_sym_BQUOTE;
	v->a[8141] = actions(67);
	v->a[8142] = 1;
	v->a[8143] = sym_variable_name;
	v->a[8144] = actions(202);
	v->a[8145] = 1;
	v->a[8146] = sym_word;
	v->a[8147] = actions(204);
	v->a[8148] = 1;
	v->a[8149] = anon_sym_BANG;
	v->a[8150] = state(119);
	v->a[8151] = 1;
	v->a[8152] = aux_sym__statements_repeat1;
	v->a[8153] = state(272);
	v->a[8154] = 1;
	v->a[8155] = sym_command_name;
	v->a[8156] = state(283);
	v->a[8157] = 1;
	v->a[8158] = sym_variable_assignment;
	v->a[8159] = state(486);
	small_parse_table_408(v);
}

void	small_parse_table_408(t_small_parse_table_array *v)
{
	v->a[8160] = 1;
	v->a[8161] = aux_sym_command_repeat1;
	v->a[8162] = state(602);
	v->a[8163] = 1;
	v->a[8164] = sym_concatenation;
	v->a[8165] = state(636);
	v->a[8166] = 1;
	v->a[8167] = sym_file_redirect;
	v->a[8168] = state(951);
	v->a[8169] = 1;
	v->a[8170] = sym_pipeline;
	v->a[8171] = state(1006);
	v->a[8172] = 1;
	v->a[8173] = aux_sym_redirected_statement_repeat2;
	v->a[8174] = state(1605);
	v->a[8175] = 1;
	v->a[8176] = sym__statement_not_pipeline;
	v->a[8177] = state(1644);
	v->a[8178] = 1;
	v->a[8179] = sym__statements;
	small_parse_table_409(v);
}

void	small_parse_table_409(t_small_parse_table_array *v)
{
	v->a[8180] = actions(11);
	v->a[8181] = 2;
	v->a[8182] = anon_sym_while;
	v->a[8183] = anon_sym_until;
	v->a[8184] = actions(59);
	v->a[8185] = 2;
	v->a[8186] = sym_raw_string;
	v->a[8187] = sym_number;
	v->a[8188] = state(425);
	v->a[8189] = 5;
	v->a[8190] = sym_arithmetic_expansion;
	v->a[8191] = sym_string;
	v->a[8192] = sym_simple_expansion;
	v->a[8193] = sym_expansion;
	v->a[8194] = sym_command_substitution;
	v->a[8195] = actions(51);
	v->a[8196] = 7;
	v->a[8197] = anon_sym_LT;
	v->a[8198] = anon_sym_GT;
	v->a[8199] = anon_sym_GT_GT;
	small_parse_table_410(v);
}

/* EOF small_parse_table_81.c */
