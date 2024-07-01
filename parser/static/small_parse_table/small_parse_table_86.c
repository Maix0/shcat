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
	v->a[8600] = anon_sym_until;
	v->a[8601] = actions(57);
	v->a[8602] = 2;
	v->a[8603] = anon_sym_LT_AMP_DASH;
	v->a[8604] = anon_sym_GT_AMP_DASH;
	v->a[8605] = actions(65);
	v->a[8606] = 2;
	v->a[8607] = sym_raw_string;
	v->a[8608] = sym_number;
	v->a[8609] = state(443);
	v->a[8610] = 5;
	v->a[8611] = sym_arithmetic_expansion;
	v->a[8612] = sym_string;
	v->a[8613] = sym_simple_expansion;
	v->a[8614] = sym_expansion;
	v->a[8615] = sym_command_substitution;
	v->a[8616] = actions(55);
	v->a[8617] = 6;
	v->a[8618] = anon_sym_LT;
	v->a[8619] = anon_sym_GT;
	small_parse_table_431(v);
}

void	small_parse_table_431(t_small_parse_table_array *v)
{
	v->a[8620] = anon_sym_GT_GT;
	v->a[8621] = anon_sym_LT_AMP;
	v->a[8622] = anon_sym_GT_AMP;
	v->a[8623] = anon_sym_GT_PIPE;
	v->a[8624] = state(1030);
	v->a[8625] = 12;
	v->a[8626] = sym_redirected_statement;
	v->a[8627] = sym_for_statement;
	v->a[8628] = sym_while_statement;
	v->a[8629] = sym_if_statement;
	v->a[8630] = sym_case_statement;
	v->a[8631] = sym_function_definition;
	v->a[8632] = sym_compound_statement;
	v->a[8633] = sym_subshell;
	v->a[8634] = sym_list;
	v->a[8635] = sym_negated_command;
	v->a[8636] = sym_command;
	v->a[8637] = sym__variable_assignments;
	v->a[8638] = 32;
	v->a[8639] = actions(3);
	small_parse_table_432(v);
}

void	small_parse_table_432(t_small_parse_table_array *v)
{
	v->a[8640] = 1;
	v->a[8641] = sym_comment;
	v->a[8642] = actions(9);
	v->a[8643] = 1;
	v->a[8644] = anon_sym_for;
	v->a[8645] = actions(13);
	v->a[8646] = 1;
	v->a[8647] = anon_sym_if;
	v->a[8648] = actions(15);
	v->a[8649] = 1;
	v->a[8650] = anon_sym_case;
	v->a[8651] = actions(17);
	v->a[8652] = 1;
	v->a[8653] = anon_sym_LPAREN;
	v->a[8654] = actions(19);
	v->a[8655] = 1;
	v->a[8656] = anon_sym_LBRACE;
	v->a[8657] = actions(59);
	v->a[8658] = 1;
	v->a[8659] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_433(v);
}

void	small_parse_table_433(t_small_parse_table_array *v)
{
	v->a[8660] = actions(61);
	v->a[8661] = 1;
	v->a[8662] = anon_sym_DOLLAR;
	v->a[8663] = actions(63);
	v->a[8664] = 1;
	v->a[8665] = anon_sym_DQUOTE;
	v->a[8666] = actions(67);
	v->a[8667] = 1;
	v->a[8668] = anon_sym_DOLLAR_LBRACE;
	v->a[8669] = actions(69);
	v->a[8670] = 1;
	v->a[8671] = anon_sym_DOLLAR_LPAREN;
	v->a[8672] = actions(71);
	v->a[8673] = 1;
	v->a[8674] = anon_sym_BQUOTE;
	v->a[8675] = actions(220);
	v->a[8676] = 1;
	v->a[8677] = sym_word;
	v->a[8678] = actions(222);
	v->a[8679] = 1;
	small_parse_table_434(v);
}

void	small_parse_table_434(t_small_parse_table_array *v)
{
	v->a[8680] = anon_sym_BANG;
	v->a[8681] = actions(230);
	v->a[8682] = 1;
	v->a[8683] = sym_file_descriptor;
	v->a[8684] = actions(232);
	v->a[8685] = 1;
	v->a[8686] = sym_variable_name;
	v->a[8687] = state(133);
	v->a[8688] = 1;
	v->a[8689] = aux_sym__statements_repeat1;
	v->a[8690] = state(180);
	v->a[8691] = 1;
	v->a[8692] = sym_command_name;
	v->a[8693] = state(231);
	v->a[8694] = 1;
	v->a[8695] = sym_variable_assignment;
	v->a[8696] = state(650);
	v->a[8697] = 1;
	v->a[8698] = sym_concatenation;
	v->a[8699] = state(710);
	small_parse_table_435(v);
}

/* EOF small_parse_table_86.c */
