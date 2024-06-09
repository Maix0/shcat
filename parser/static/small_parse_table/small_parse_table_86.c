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
	v->a[8600] = anon_sym_DOLLAR_LPAREN;
	v->a[8601] = actions(79);
	v->a[8602] = 1;
	v->a[8603] = anon_sym_BQUOTE;
	v->a[8604] = actions(81);
	v->a[8605] = 1;
	v->a[8606] = sym_file_descriptor;
	v->a[8607] = actions(83);
	v->a[8608] = 1;
	v->a[8609] = sym_variable_name;
	v->a[8610] = actions(238);
	v->a[8611] = 1;
	v->a[8612] = sym_word;
	v->a[8613] = actions(240);
	v->a[8614] = 1;
	v->a[8615] = anon_sym_BANG;
	v->a[8616] = state(132);
	v->a[8617] = 1;
	v->a[8618] = aux_sym__statements_repeat1;
	v->a[8619] = state(185);
	small_parse_table_431(v);
}

void	small_parse_table_431(t_small_parse_table_array *v)
{
	v->a[8620] = 1;
	v->a[8621] = sym_command_name;
	v->a[8622] = state(297);
	v->a[8623] = 1;
	v->a[8624] = sym_variable_assignment;
	v->a[8625] = state(582);
	v->a[8626] = 1;
	v->a[8627] = sym_concatenation;
	v->a[8628] = state(614);
	v->a[8629] = 1;
	v->a[8630] = aux_sym_command_repeat1;
	v->a[8631] = state(769);
	v->a[8632] = 1;
	v->a[8633] = sym_file_redirect;
	v->a[8634] = state(1133);
	v->a[8635] = 1;
	v->a[8636] = aux_sym_redirected_statement_repeat2;
	v->a[8637] = state(1142);
	v->a[8638] = 1;
	v->a[8639] = sym_pipeline;
	small_parse_table_432(v);
}

void	small_parse_table_432(t_small_parse_table_array *v)
{
	v->a[8640] = state(2041);
	v->a[8641] = 1;
	v->a[8642] = sym__statement_not_pipeline;
	v->a[8643] = state(2203);
	v->a[8644] = 1;
	v->a[8645] = sym__statements;
	v->a[8646] = actions(11);
	v->a[8647] = 2;
	v->a[8648] = anon_sym_while;
	v->a[8649] = anon_sym_until;
	v->a[8650] = actions(61);
	v->a[8651] = 2;
	v->a[8652] = anon_sym_LT_AMP_DASH;
	v->a[8653] = anon_sym_GT_AMP_DASH;
	v->a[8654] = state(397);
	v->a[8655] = 6;
	v->a[8656] = sym_arithmetic_expansion;
	v->a[8657] = sym_string;
	v->a[8658] = sym_number;
	v->a[8659] = sym_simple_expansion;
	small_parse_table_433(v);
}

void	small_parse_table_433(t_small_parse_table_array *v)
{
	v->a[8660] = sym_expansion;
	v->a[8661] = sym_command_substitution;
	v->a[8662] = actions(59);
	v->a[8663] = 8;
	v->a[8664] = anon_sym_LT;
	v->a[8665] = anon_sym_GT;
	v->a[8666] = anon_sym_GT_GT;
	v->a[8667] = anon_sym_AMP_GT;
	v->a[8668] = anon_sym_AMP_GT_GT;
	v->a[8669] = anon_sym_LT_AMP;
	v->a[8670] = anon_sym_GT_AMP;
	v->a[8671] = anon_sym_GT_PIPE;
	v->a[8672] = state(1071);
	v->a[8673] = 12;
	v->a[8674] = sym_redirected_statement;
	v->a[8675] = sym_for_statement;
	v->a[8676] = sym_while_statement;
	v->a[8677] = sym_if_statement;
	v->a[8678] = sym_case_statement;
	v->a[8679] = sym_function_definition;
	small_parse_table_434(v);
}

void	small_parse_table_434(t_small_parse_table_array *v)
{
	v->a[8680] = sym_compound_statement;
	v->a[8681] = sym_subshell;
	v->a[8682] = sym_list;
	v->a[8683] = sym_negated_command;
	v->a[8684] = sym_command;
	v->a[8685] = sym_variable_assignments;
	v->a[8686] = 34;
	v->a[8687] = actions(3);
	v->a[8688] = 1;
	v->a[8689] = sym_comment;
	v->a[8690] = actions(9);
	v->a[8691] = 1;
	v->a[8692] = anon_sym_for;
	v->a[8693] = actions(13);
	v->a[8694] = 1;
	v->a[8695] = anon_sym_if;
	v->a[8696] = actions(15);
	v->a[8697] = 1;
	v->a[8698] = anon_sym_case;
	v->a[8699] = actions(17);
	small_parse_table_435(v);
}

/* EOF small_parse_table_86.c */
