/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_111.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_555(t_small_parse_table_array *v)
{
	v->a[11100] = 1;
	v->a[11101] = anon_sym_DOLLAR_LPAREN;
	v->a[11102] = actions(65);
	v->a[11103] = 1;
	v->a[11104] = anon_sym_BQUOTE;
	v->a[11105] = actions(67);
	v->a[11106] = 1;
	v->a[11107] = sym_variable_name;
	v->a[11108] = actions(202);
	v->a[11109] = 1;
	v->a[11110] = sym_word;
	v->a[11111] = actions(204);
	v->a[11112] = 1;
	v->a[11113] = anon_sym_BANG;
	v->a[11114] = state(119);
	v->a[11115] = 1;
	v->a[11116] = aux_sym__statements_repeat1;
	v->a[11117] = state(272);
	v->a[11118] = 1;
	v->a[11119] = sym_command_name;
	small_parse_table_556(v);
}

void	small_parse_table_556(t_small_parse_table_array *v)
{
	v->a[11120] = state(283);
	v->a[11121] = 1;
	v->a[11122] = sym_variable_assignment;
	v->a[11123] = state(486);
	v->a[11124] = 1;
	v->a[11125] = aux_sym_command_repeat1;
	v->a[11126] = state(602);
	v->a[11127] = 1;
	v->a[11128] = sym_concatenation;
	v->a[11129] = state(636);
	v->a[11130] = 1;
	v->a[11131] = sym_file_redirect;
	v->a[11132] = state(951);
	v->a[11133] = 1;
	v->a[11134] = sym_pipeline;
	v->a[11135] = state(1006);
	v->a[11136] = 1;
	v->a[11137] = aux_sym_redirected_statement_repeat2;
	v->a[11138] = state(1605);
	v->a[11139] = 1;
	small_parse_table_557(v);
}

void	small_parse_table_557(t_small_parse_table_array *v)
{
	v->a[11140] = sym__statement_not_pipeline;
	v->a[11141] = state(1699);
	v->a[11142] = 1;
	v->a[11143] = sym__statements;
	v->a[11144] = actions(11);
	v->a[11145] = 2;
	v->a[11146] = anon_sym_while;
	v->a[11147] = anon_sym_until;
	v->a[11148] = actions(59);
	v->a[11149] = 2;
	v->a[11150] = sym_raw_string;
	v->a[11151] = sym_number;
	v->a[11152] = state(425);
	v->a[11153] = 5;
	v->a[11154] = sym_arithmetic_expansion;
	v->a[11155] = sym_string;
	v->a[11156] = sym_simple_expansion;
	v->a[11157] = sym_expansion;
	v->a[11158] = sym_command_substitution;
	v->a[11159] = actions(51);
	small_parse_table_558(v);
}

void	small_parse_table_558(t_small_parse_table_array *v)
{
	v->a[11160] = 7;
	v->a[11161] = anon_sym_LT;
	v->a[11162] = anon_sym_GT;
	v->a[11163] = anon_sym_GT_GT;
	v->a[11164] = anon_sym_LT_AMP;
	v->a[11165] = anon_sym_GT_AMP;
	v->a[11166] = anon_sym_GT_PIPE;
	v->a[11167] = anon_sym_LT_GT;
	v->a[11168] = state(849);
	v->a[11169] = 12;
	v->a[11170] = sym_redirected_statement;
	v->a[11171] = sym_for_statement;
	v->a[11172] = sym_while_statement;
	v->a[11173] = sym_if_statement;
	v->a[11174] = sym_case_statement;
	v->a[11175] = sym_function_definition;
	v->a[11176] = sym_compound_statement;
	v->a[11177] = sym_subshell;
	v->a[11178] = sym_list;
	v->a[11179] = sym_negated_command;
	small_parse_table_559(v);
}

void	small_parse_table_559(t_small_parse_table_array *v)
{
	v->a[11180] = sym_command;
	v->a[11181] = sym__variable_assignments;
	v->a[11182] = 30;
	v->a[11183] = actions(3);
	v->a[11184] = 1;
	v->a[11185] = sym_comment;
	v->a[11186] = actions(9);
	v->a[11187] = 1;
	v->a[11188] = anon_sym_for;
	v->a[11189] = actions(13);
	v->a[11190] = 1;
	v->a[11191] = anon_sym_if;
	v->a[11192] = actions(15);
	v->a[11193] = 1;
	v->a[11194] = anon_sym_case;
	v->a[11195] = actions(17);
	v->a[11196] = 1;
	v->a[11197] = anon_sym_LPAREN;
	v->a[11198] = actions(19);
	v->a[11199] = 1;
	small_parse_table_560(v);
}

/* EOF small_parse_table_111.c */
