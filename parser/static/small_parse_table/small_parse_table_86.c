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
	v->a[8600] = state(290);
	v->a[8601] = 1;
	v->a[8602] = sym_variable_assignment;
	v->a[8603] = state(584);
	v->a[8604] = 1;
	v->a[8605] = sym_concatenation;
	v->a[8606] = state(674);
	v->a[8607] = 1;
	v->a[8608] = aux_sym_command_repeat1;
	v->a[8609] = state(723);
	v->a[8610] = 1;
	v->a[8611] = sym_file_redirect;
	v->a[8612] = state(1087);
	v->a[8613] = 1;
	v->a[8614] = sym_pipeline;
	v->a[8615] = state(1099);
	v->a[8616] = 1;
	v->a[8617] = aux_sym_redirected_statement_repeat2;
	v->a[8618] = state(1914);
	v->a[8619] = 1;
	small_parse_table_431(v);
}

void	small_parse_table_431(t_small_parse_table_array *v)
{
	v->a[8620] = sym__statement_not_pipeline;
	v->a[8621] = state(1963);
	v->a[8622] = 1;
	v->a[8623] = sym__statements;
	v->a[8624] = actions(11);
	v->a[8625] = 2;
	v->a[8626] = anon_sym_while;
	v->a[8627] = anon_sym_until;
	v->a[8628] = actions(61);
	v->a[8629] = 2;
	v->a[8630] = sym_raw_string;
	v->a[8631] = sym_number;
	v->a[8632] = state(433);
	v->a[8633] = 5;
	v->a[8634] = sym_arithmetic_expansion;
	v->a[8635] = sym_string;
	v->a[8636] = sym_simple_expansion;
	v->a[8637] = sym_expansion;
	v->a[8638] = sym_command_substitution;
	v->a[8639] = actions(53);
	small_parse_table_432(v);
}

void	small_parse_table_432(t_small_parse_table_array *v)
{
	v->a[8640] = 7;
	v->a[8641] = anon_sym_LT;
	v->a[8642] = anon_sym_GT;
	v->a[8643] = anon_sym_GT_GT;
	v->a[8644] = anon_sym_LT_AMP;
	v->a[8645] = anon_sym_GT_AMP;
	v->a[8646] = anon_sym_GT_PIPE;
	v->a[8647] = anon_sym_LT_GT;
	v->a[8648] = state(935);
	v->a[8649] = 12;
	v->a[8650] = sym_redirected_statement;
	v->a[8651] = sym_for_statement;
	v->a[8652] = sym_while_statement;
	v->a[8653] = sym_if_statement;
	v->a[8654] = sym_case_statement;
	v->a[8655] = sym_function_definition;
	v->a[8656] = sym_compound_statement;
	v->a[8657] = sym_subshell;
	v->a[8658] = sym_list;
	v->a[8659] = sym_negated_command;
	small_parse_table_433(v);
}

void	small_parse_table_433(t_small_parse_table_array *v)
{
	v->a[8660] = sym_command;
	v->a[8661] = sym__variable_assignments;
	v->a[8662] = 31;
	v->a[8663] = actions(3);
	v->a[8664] = 1;
	v->a[8665] = sym_comment;
	v->a[8666] = actions(9);
	v->a[8667] = 1;
	v->a[8668] = anon_sym_for;
	v->a[8669] = actions(13);
	v->a[8670] = 1;
	v->a[8671] = anon_sym_if;
	v->a[8672] = actions(15);
	v->a[8673] = 1;
	v->a[8674] = anon_sym_case;
	v->a[8675] = actions(17);
	v->a[8676] = 1;
	v->a[8677] = anon_sym_LPAREN;
	v->a[8678] = actions(19);
	v->a[8679] = 1;
	small_parse_table_434(v);
}

void	small_parse_table_434(t_small_parse_table_array *v)
{
	v->a[8680] = anon_sym_LBRACE;
	v->a[8681] = actions(55);
	v->a[8682] = 1;
	v->a[8683] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8684] = actions(57);
	v->a[8685] = 1;
	v->a[8686] = anon_sym_DOLLAR;
	v->a[8687] = actions(59);
	v->a[8688] = 1;
	v->a[8689] = anon_sym_DQUOTE;
	v->a[8690] = actions(63);
	v->a[8691] = 1;
	v->a[8692] = anon_sym_DOLLAR_LBRACE;
	v->a[8693] = actions(65);
	v->a[8694] = 1;
	v->a[8695] = anon_sym_DOLLAR_LPAREN;
	v->a[8696] = actions(67);
	v->a[8697] = 1;
	v->a[8698] = anon_sym_BQUOTE;
	v->a[8699] = actions(69);
	small_parse_table_435(v);
}

/* EOF small_parse_table_86.c */
