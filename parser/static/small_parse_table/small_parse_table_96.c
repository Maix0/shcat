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
	v->a[9600] = anon_sym_case;
	v->a[9601] = actions(17);
	v->a[9602] = 1;
	v->a[9603] = anon_sym_LPAREN;
	v->a[9604] = actions(19);
	v->a[9605] = 1;
	v->a[9606] = anon_sym_LBRACE;
	v->a[9607] = actions(53);
	v->a[9608] = 1;
	v->a[9609] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9610] = actions(55);
	v->a[9611] = 1;
	v->a[9612] = anon_sym_DOLLAR;
	v->a[9613] = actions(57);
	v->a[9614] = 1;
	v->a[9615] = anon_sym_DQUOTE;
	v->a[9616] = actions(61);
	v->a[9617] = 1;
	v->a[9618] = anon_sym_DOLLAR_LBRACE;
	v->a[9619] = actions(63);
	small_parse_table_481(v);
}

void	small_parse_table_481(t_small_parse_table_array *v)
{
	v->a[9620] = 1;
	v->a[9621] = anon_sym_DOLLAR_LPAREN;
	v->a[9622] = actions(65);
	v->a[9623] = 1;
	v->a[9624] = anon_sym_BQUOTE;
	v->a[9625] = actions(67);
	v->a[9626] = 1;
	v->a[9627] = sym_variable_name;
	v->a[9628] = actions(204);
	v->a[9629] = 1;
	v->a[9630] = sym_word;
	v->a[9631] = actions(206);
	v->a[9632] = 1;
	v->a[9633] = anon_sym_BANG;
	v->a[9634] = state(116);
	v->a[9635] = 1;
	v->a[9636] = aux_sym__statements_repeat1;
	v->a[9637] = state(179);
	v->a[9638] = 1;
	v->a[9639] = sym_command_name;
	small_parse_table_482(v);
}

void	small_parse_table_482(t_small_parse_table_array *v)
{
	v->a[9640] = state(208);
	v->a[9641] = 1;
	v->a[9642] = sym_variable_assignment;
	v->a[9643] = state(385);
	v->a[9644] = 1;
	v->a[9645] = aux_sym_command_repeat1;
	v->a[9646] = state(555);
	v->a[9647] = 1;
	v->a[9648] = sym_concatenation;
	v->a[9649] = state(599);
	v->a[9650] = 1;
	v->a[9651] = sym_file_redirect;
	v->a[9652] = state(969);
	v->a[9653] = 1;
	v->a[9654] = sym_pipeline;
	v->a[9655] = state(1006);
	v->a[9656] = 1;
	v->a[9657] = aux_sym_redirected_statement_repeat2;
	v->a[9658] = state(1560);
	v->a[9659] = 1;
	small_parse_table_483(v);
}

void	small_parse_table_483(t_small_parse_table_array *v)
{
	v->a[9660] = sym__statement_not_pipeline;
	v->a[9661] = state(1691);
	v->a[9662] = 1;
	v->a[9663] = sym__statements;
	v->a[9664] = actions(11);
	v->a[9665] = 2;
	v->a[9666] = anon_sym_while;
	v->a[9667] = anon_sym_until;
	v->a[9668] = actions(59);
	v->a[9669] = 2;
	v->a[9670] = sym_raw_string;
	v->a[9671] = sym_number;
	v->a[9672] = actions(51);
	v->a[9673] = 3;
	v->a[9674] = anon_sym_LT;
	v->a[9675] = anon_sym_GT;
	v->a[9676] = anon_sym_GT_GT;
	v->a[9677] = state(401);
	v->a[9678] = 5;
	v->a[9679] = sym_arithmetic_expansion;
	small_parse_table_484(v);
}

void	small_parse_table_484(t_small_parse_table_array *v)
{
	v->a[9680] = sym_string;
	v->a[9681] = sym_simple_expansion;
	v->a[9682] = sym_expansion;
	v->a[9683] = sym_command_substitution;
	v->a[9684] = state(820);
	v->a[9685] = 12;
	v->a[9686] = sym_redirected_statement;
	v->a[9687] = sym_for_statement;
	v->a[9688] = sym_while_statement;
	v->a[9689] = sym_if_statement;
	v->a[9690] = sym_case_statement;
	v->a[9691] = sym_function_definition;
	v->a[9692] = sym_compound_statement;
	v->a[9693] = sym_subshell;
	v->a[9694] = sym_list;
	v->a[9695] = sym_negated_command;
	v->a[9696] = sym_command;
	v->a[9697] = sym__variable_assignments;
	v->a[9698] = 30;
	v->a[9699] = actions(3);
	small_parse_table_485(v);
}

/* EOF small_parse_table_96.c */
