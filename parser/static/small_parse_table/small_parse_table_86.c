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
	v->a[8600] = aux_sym_command_repeat1;
	v->a[8601] = state(1314);
	v->a[8602] = 1;
	v->a[8603] = sym_pipeline;
	v->a[8604] = state(1331);
	v->a[8605] = 1;
	v->a[8606] = aux_sym_redirected_statement_repeat2;
	v->a[8607] = state(2252);
	v->a[8608] = 1;
	v->a[8609] = sym__statement_not_pipeline;
	v->a[8610] = state(2361);
	v->a[8611] = 1;
	v->a[8612] = sym__statements;
	v->a[8613] = actions(11);
	v->a[8614] = 2;
	v->a[8615] = anon_sym_while;
	v->a[8616] = anon_sym_until;
	v->a[8617] = actions(226);
	v->a[8618] = 2;
	v->a[8619] = anon_sym_LT_AMP_DASH;
	small_parse_table_431(v);
}

void	small_parse_table_431(t_small_parse_table_array *v)
{
	v->a[8620] = anon_sym_GT_AMP_DASH;
	v->a[8621] = actions(228);
	v->a[8622] = 2;
	v->a[8623] = sym_raw_string;
	v->a[8624] = sym_number;
	v->a[8625] = state(294);
	v->a[8626] = 5;
	v->a[8627] = sym_arithmetic_expansion;
	v->a[8628] = sym_string;
	v->a[8629] = sym_simple_expansion;
	v->a[8630] = sym_expansion;
	v->a[8631] = sym_command_substitution;
	v->a[8632] = actions(224);
	v->a[8633] = 8;
	v->a[8634] = anon_sym_LT;
	v->a[8635] = anon_sym_GT;
	v->a[8636] = anon_sym_GT_GT;
	v->a[8637] = anon_sym_AMP_GT;
	v->a[8638] = anon_sym_AMP_GT_GT;
	v->a[8639] = anon_sym_LT_AMP;
	small_parse_table_432(v);
}

void	small_parse_table_432(t_small_parse_table_array *v)
{
	v->a[8640] = anon_sym_GT_AMP;
	v->a[8641] = anon_sym_GT_PIPE;
	v->a[8642] = state(1188);
	v->a[8643] = 12;
	v->a[8644] = sym_redirected_statement;
	v->a[8645] = sym_for_statement;
	v->a[8646] = sym_while_statement;
	v->a[8647] = sym_if_statement;
	v->a[8648] = sym_case_statement;
	v->a[8649] = sym_function_definition;
	v->a[8650] = sym_compound_statement;
	v->a[8651] = sym_subshell;
	v->a[8652] = sym_list;
	v->a[8653] = sym_negated_command;
	v->a[8654] = sym_command;
	v->a[8655] = sym__variable_assignments;
	v->a[8656] = 32;
	v->a[8657] = actions(3);
	v->a[8658] = 1;
	v->a[8659] = sym_comment;
	small_parse_table_433(v);
}

void	small_parse_table_433(t_small_parse_table_array *v)
{
	v->a[8660] = actions(9);
	v->a[8661] = 1;
	v->a[8662] = anon_sym_for;
	v->a[8663] = actions(13);
	v->a[8664] = 1;
	v->a[8665] = anon_sym_if;
	v->a[8666] = actions(15);
	v->a[8667] = 1;
	v->a[8668] = anon_sym_case;
	v->a[8669] = actions(17);
	v->a[8670] = 1;
	v->a[8671] = anon_sym_LPAREN;
	v->a[8672] = actions(19);
	v->a[8673] = 1;
	v->a[8674] = anon_sym_LBRACE;
	v->a[8675] = actions(59);
	v->a[8676] = 1;
	v->a[8677] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8678] = actions(61);
	v->a[8679] = 1;
	small_parse_table_434(v);
}

void	small_parse_table_434(t_small_parse_table_array *v)
{
	v->a[8680] = anon_sym_DOLLAR;
	v->a[8681] = actions(63);
	v->a[8682] = 1;
	v->a[8683] = anon_sym_DQUOTE;
	v->a[8684] = actions(67);
	v->a[8685] = 1;
	v->a[8686] = anon_sym_DOLLAR_LBRACE;
	v->a[8687] = actions(69);
	v->a[8688] = 1;
	v->a[8689] = anon_sym_DOLLAR_LPAREN;
	v->a[8690] = actions(71);
	v->a[8691] = 1;
	v->a[8692] = anon_sym_BQUOTE;
	v->a[8693] = actions(73);
	v->a[8694] = 1;
	v->a[8695] = sym_file_descriptor;
	v->a[8696] = actions(75);
	v->a[8697] = 1;
	v->a[8698] = sym_variable_name;
	v->a[8699] = actions(236);
	small_parse_table_435(v);
}

/* EOF small_parse_table_86.c */
