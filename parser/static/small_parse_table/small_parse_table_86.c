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
	v->a[8600] = 1;
	v->a[8601] = sym_comment;
	v->a[8602] = actions(9);
	v->a[8603] = 1;
	v->a[8604] = anon_sym_for;
	v->a[8605] = actions(13);
	v->a[8606] = 1;
	v->a[8607] = anon_sym_if;
	v->a[8608] = actions(15);
	v->a[8609] = 1;
	v->a[8610] = anon_sym_case;
	v->a[8611] = actions(17);
	v->a[8612] = 1;
	v->a[8613] = anon_sym_LPAREN;
	v->a[8614] = actions(19);
	v->a[8615] = 1;
	v->a[8616] = anon_sym_LBRACE;
	v->a[8617] = actions(53);
	v->a[8618] = 1;
	v->a[8619] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_431(v);
}

void	small_parse_table_431(t_small_parse_table_array *v)
{
	v->a[8620] = actions(55);
	v->a[8621] = 1;
	v->a[8622] = anon_sym_DOLLAR;
	v->a[8623] = actions(57);
	v->a[8624] = 1;
	v->a[8625] = anon_sym_DQUOTE;
	v->a[8626] = actions(61);
	v->a[8627] = 1;
	v->a[8628] = anon_sym_DOLLAR_LBRACE;
	v->a[8629] = actions(63);
	v->a[8630] = 1;
	v->a[8631] = anon_sym_DOLLAR_LPAREN;
	v->a[8632] = actions(65);
	v->a[8633] = 1;
	v->a[8634] = anon_sym_BQUOTE;
	v->a[8635] = actions(208);
	v->a[8636] = 1;
	v->a[8637] = sym_word;
	v->a[8638] = actions(210);
	v->a[8639] = 1;
	small_parse_table_432(v);
}

void	small_parse_table_432(t_small_parse_table_array *v)
{
	v->a[8640] = anon_sym_BANG;
	v->a[8641] = actions(216);
	v->a[8642] = 1;
	v->a[8643] = sym_variable_name;
	v->a[8644] = state(112);
	v->a[8645] = 1;
	v->a[8646] = aux_sym__statements_repeat1;
	v->a[8647] = state(158);
	v->a[8648] = 1;
	v->a[8649] = sym_command_name;
	v->a[8650] = state(186);
	v->a[8651] = 1;
	v->a[8652] = sym_variable_assignment;
	v->a[8653] = state(298);
	v->a[8654] = 1;
	v->a[8655] = aux_sym_command_repeat1;
	v->a[8656] = state(532);
	v->a[8657] = 1;
	v->a[8658] = sym_file_redirect;
	v->a[8659] = state(555);
	small_parse_table_433(v);
}

void	small_parse_table_433(t_small_parse_table_array *v)
{
	v->a[8660] = 1;
	v->a[8661] = sym_concatenation;
	v->a[8662] = state(937);
	v->a[8663] = 1;
	v->a[8664] = sym_pipeline;
	v->a[8665] = state(1019);
	v->a[8666] = 1;
	v->a[8667] = aux_sym_redirected_statement_repeat2;
	v->a[8668] = state(1557);
	v->a[8669] = 1;
	v->a[8670] = sym__statement_not_pipeline;
	v->a[8671] = state(1745);
	v->a[8672] = 1;
	v->a[8673] = sym__statements;
	v->a[8674] = actions(11);
	v->a[8675] = 2;
	v->a[8676] = anon_sym_while;
	v->a[8677] = anon_sym_until;
	v->a[8678] = actions(214);
	v->a[8679] = 2;
	small_parse_table_434(v);
}

void	small_parse_table_434(t_small_parse_table_array *v)
{
	v->a[8680] = sym_raw_string;
	v->a[8681] = sym_number;
	v->a[8682] = actions(212);
	v->a[8683] = 3;
	v->a[8684] = anon_sym_LT;
	v->a[8685] = anon_sym_GT;
	v->a[8686] = anon_sym_GT_GT;
	v->a[8687] = state(277);
	v->a[8688] = 5;
	v->a[8689] = sym_arithmetic_expansion;
	v->a[8690] = sym_string;
	v->a[8691] = sym_simple_expansion;
	v->a[8692] = sym_expansion;
	v->a[8693] = sym_command_substitution;
	v->a[8694] = state(877);
	v->a[8695] = 12;
	v->a[8696] = sym_redirected_statement;
	v->a[8697] = sym_for_statement;
	v->a[8698] = sym_while_statement;
	v->a[8699] = sym_if_statement;
	small_parse_table_435(v);
}

/* EOF small_parse_table_86.c */
