/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_96.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_480(t_small_parse_table_array *v)
{
	v->a[9600] = sym_number;
	v->a[9601] = state(294);
	v->a[9602] = 5;
	v->a[9603] = sym_arithmetic_expansion;
	v->a[9604] = sym_string;
	v->a[9605] = sym_simple_expansion;
	v->a[9606] = sym_expansion;
	v->a[9607] = sym_command_substitution;
	v->a[9608] = actions(224);
	v->a[9609] = 8;
	v->a[9610] = anon_sym_LT;
	v->a[9611] = anon_sym_GT;
	v->a[9612] = anon_sym_GT_GT;
	v->a[9613] = anon_sym_AMP_GT;
	v->a[9614] = anon_sym_AMP_GT_GT;
	v->a[9615] = anon_sym_LT_AMP;
	v->a[9616] = anon_sym_GT_AMP;
	v->a[9617] = anon_sym_GT_PIPE;
	v->a[9618] = state(1188);
	v->a[9619] = 12;
	small_parse_table_481(v);
}

void	small_parse_table_481(t_small_parse_table_array *v)
{
	v->a[9620] = sym_redirected_statement;
	v->a[9621] = sym_for_statement;
	v->a[9622] = sym_while_statement;
	v->a[9623] = sym_if_statement;
	v->a[9624] = sym_case_statement;
	v->a[9625] = sym_function_definition;
	v->a[9626] = sym_compound_statement;
	v->a[9627] = sym_subshell;
	v->a[9628] = sym_list;
	v->a[9629] = sym_negated_command;
	v->a[9630] = sym_command;
	v->a[9631] = sym_variable_assignments;
	v->a[9632] = 32;
	v->a[9633] = actions(3);
	v->a[9634] = 1;
	v->a[9635] = sym_comment;
	v->a[9636] = actions(9);
	v->a[9637] = 1;
	v->a[9638] = anon_sym_for;
	v->a[9639] = actions(13);
	small_parse_table_482(v);
}

void	small_parse_table_482(t_small_parse_table_array *v)
{
	v->a[9640] = 1;
	v->a[9641] = anon_sym_if;
	v->a[9642] = actions(15);
	v->a[9643] = 1;
	v->a[9644] = anon_sym_case;
	v->a[9645] = actions(17);
	v->a[9646] = 1;
	v->a[9647] = anon_sym_LPAREN;
	v->a[9648] = actions(19);
	v->a[9649] = 1;
	v->a[9650] = anon_sym_LBRACE;
	v->a[9651] = actions(59);
	v->a[9652] = 1;
	v->a[9653] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9654] = actions(61);
	v->a[9655] = 1;
	v->a[9656] = anon_sym_DOLLAR;
	v->a[9657] = actions(63);
	v->a[9658] = 1;
	v->a[9659] = anon_sym_DQUOTE;
	small_parse_table_483(v);
}

void	small_parse_table_483(t_small_parse_table_array *v)
{
	v->a[9660] = actions(67);
	v->a[9661] = 1;
	v->a[9662] = anon_sym_DOLLAR_LBRACE;
	v->a[9663] = actions(69);
	v->a[9664] = 1;
	v->a[9665] = anon_sym_DOLLAR_LPAREN;
	v->a[9666] = actions(71);
	v->a[9667] = 1;
	v->a[9668] = anon_sym_BQUOTE;
	v->a[9669] = actions(73);
	v->a[9670] = 1;
	v->a[9671] = sym_file_descriptor;
	v->a[9672] = actions(75);
	v->a[9673] = 1;
	v->a[9674] = sym_variable_name;
	v->a[9675] = actions(236);
	v->a[9676] = 1;
	v->a[9677] = sym_word;
	v->a[9678] = actions(238);
	v->a[9679] = 1;
	small_parse_table_484(v);
}

void	small_parse_table_484(t_small_parse_table_array *v)
{
	v->a[9680] = anon_sym_BANG;
	v->a[9681] = state(140);
	v->a[9682] = 1;
	v->a[9683] = aux_sym__statements_repeat1;
	v->a[9684] = state(189);
	v->a[9685] = 1;
	v->a[9686] = sym_command_name;
	v->a[9687] = state(286);
	v->a[9688] = 1;
	v->a[9689] = sym_variable_assignment;
	v->a[9690] = state(647);
	v->a[9691] = 1;
	v->a[9692] = sym_concatenation;
	v->a[9693] = state(746);
	v->a[9694] = 1;
	v->a[9695] = aux_sym_command_repeat1;
	v->a[9696] = state(905);
	v->a[9697] = 1;
	v->a[9698] = sym_file_redirect;
	v->a[9699] = state(1422);
	small_parse_table_485(v);
}

/* EOF small_parse_table_96.c */
