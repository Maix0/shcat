/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_86.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_430(t_small_parse_table_array *v)
{
	v->a[8600] = actions(202);
	v->a[8601] = 1;
	v->a[8602] = sym_word;
	v->a[8603] = actions(204);
	v->a[8604] = 1;
	v->a[8605] = anon_sym_BANG;
	v->a[8606] = state(119);
	v->a[8607] = 1;
	v->a[8608] = aux_sym__statements_repeat1;
	v->a[8609] = state(272);
	v->a[8610] = 1;
	v->a[8611] = sym_command_name;
	v->a[8612] = state(283);
	v->a[8613] = 1;
	v->a[8614] = sym_variable_assignment;
	v->a[8615] = state(486);
	v->a[8616] = 1;
	v->a[8617] = aux_sym_command_repeat1;
	v->a[8618] = state(602);
	v->a[8619] = 1;
	small_parse_table_431(v);
}

void	small_parse_table_431(t_small_parse_table_array *v)
{
	v->a[8620] = sym_concatenation;
	v->a[8621] = state(636);
	v->a[8622] = 1;
	v->a[8623] = sym_file_redirect;
	v->a[8624] = state(951);
	v->a[8625] = 1;
	v->a[8626] = sym_pipeline;
	v->a[8627] = state(1006);
	v->a[8628] = 1;
	v->a[8629] = aux_sym_redirected_statement_repeat2;
	v->a[8630] = state(1605);
	v->a[8631] = 1;
	v->a[8632] = sym__statement_not_pipeline;
	v->a[8633] = state(1791);
	v->a[8634] = 1;
	v->a[8635] = sym__statements;
	v->a[8636] = actions(11);
	v->a[8637] = 2;
	v->a[8638] = anon_sym_while;
	v->a[8639] = anon_sym_until;
	small_parse_table_432(v);
}

void	small_parse_table_432(t_small_parse_table_array *v)
{
	v->a[8640] = actions(59);
	v->a[8641] = 2;
	v->a[8642] = sym_raw_string;
	v->a[8643] = sym_number;
	v->a[8644] = state(425);
	v->a[8645] = 5;
	v->a[8646] = sym_arithmetic_expansion;
	v->a[8647] = sym_string;
	v->a[8648] = sym_simple_expansion;
	v->a[8649] = sym_expansion;
	v->a[8650] = sym_command_substitution;
	v->a[8651] = actions(51);
	v->a[8652] = 7;
	v->a[8653] = anon_sym_LT;
	v->a[8654] = anon_sym_GT;
	v->a[8655] = anon_sym_GT_GT;
	v->a[8656] = anon_sym_LT_AMP;
	v->a[8657] = anon_sym_GT_AMP;
	v->a[8658] = anon_sym_GT_PIPE;
	v->a[8659] = anon_sym_LT_GT;
	small_parse_table_433(v);
}

void	small_parse_table_433(t_small_parse_table_array *v)
{
	v->a[8660] = state(849);
	v->a[8661] = 12;
	v->a[8662] = sym_redirected_statement;
	v->a[8663] = sym_for_statement;
	v->a[8664] = sym_while_statement;
	v->a[8665] = sym_if_statement;
	v->a[8666] = sym_case_statement;
	v->a[8667] = sym_function_definition;
	v->a[8668] = sym_compound_statement;
	v->a[8669] = sym_subshell;
	v->a[8670] = sym_list;
	v->a[8671] = sym_negated_command;
	v->a[8672] = sym_command;
	v->a[8673] = sym__variable_assignments;
	v->a[8674] = 30;
	v->a[8675] = actions(3);
	v->a[8676] = 1;
	v->a[8677] = sym_comment;
	v->a[8678] = actions(9);
	v->a[8679] = 1;
	small_parse_table_434(v);
}

void	small_parse_table_434(t_small_parse_table_array *v)
{
	v->a[8680] = anon_sym_for;
	v->a[8681] = actions(13);
	v->a[8682] = 1;
	v->a[8683] = anon_sym_if;
	v->a[8684] = actions(15);
	v->a[8685] = 1;
	v->a[8686] = anon_sym_case;
	v->a[8687] = actions(17);
	v->a[8688] = 1;
	v->a[8689] = anon_sym_LPAREN;
	v->a[8690] = actions(19);
	v->a[8691] = 1;
	v->a[8692] = anon_sym_LBRACE;
	v->a[8693] = actions(41);
	v->a[8694] = 1;
	v->a[8695] = sym_word;
	v->a[8696] = actions(49);
	v->a[8697] = 1;
	v->a[8698] = anon_sym_BANG;
	v->a[8699] = actions(53);
	small_parse_table_435(v);
}

/* EOF small_parse_table_86.c */
