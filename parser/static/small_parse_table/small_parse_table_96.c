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
	v->a[9600] = 1;
	v->a[9601] = anon_sym_LPAREN;
	v->a[9602] = actions(19);
	v->a[9603] = 1;
	v->a[9604] = anon_sym_LBRACE;
	v->a[9605] = actions(53);
	v->a[9606] = 1;
	v->a[9607] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9608] = actions(55);
	v->a[9609] = 1;
	v->a[9610] = anon_sym_DOLLAR;
	v->a[9611] = actions(57);
	v->a[9612] = 1;
	v->a[9613] = anon_sym_DQUOTE;
	v->a[9614] = actions(61);
	v->a[9615] = 1;
	v->a[9616] = anon_sym_DOLLAR_LBRACE;
	v->a[9617] = actions(63);
	v->a[9618] = 1;
	v->a[9619] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_481(v);
}

void	small_parse_table_481(t_small_parse_table_array *v)
{
	v->a[9620] = actions(65);
	v->a[9621] = 1;
	v->a[9622] = anon_sym_BQUOTE;
	v->a[9623] = actions(67);
	v->a[9624] = 1;
	v->a[9625] = sym_variable_name;
	v->a[9626] = actions(202);
	v->a[9627] = 1;
	v->a[9628] = sym_word;
	v->a[9629] = actions(204);
	v->a[9630] = 1;
	v->a[9631] = anon_sym_BANG;
	v->a[9632] = state(119);
	v->a[9633] = 1;
	v->a[9634] = aux_sym__statements_repeat1;
	v->a[9635] = state(272);
	v->a[9636] = 1;
	v->a[9637] = sym_command_name;
	v->a[9638] = state(283);
	v->a[9639] = 1;
	small_parse_table_482(v);
}

void	small_parse_table_482(t_small_parse_table_array *v)
{
	v->a[9640] = sym_variable_assignment;
	v->a[9641] = state(486);
	v->a[9642] = 1;
	v->a[9643] = aux_sym_command_repeat1;
	v->a[9644] = state(602);
	v->a[9645] = 1;
	v->a[9646] = sym_concatenation;
	v->a[9647] = state(636);
	v->a[9648] = 1;
	v->a[9649] = sym_file_redirect;
	v->a[9650] = state(951);
	v->a[9651] = 1;
	v->a[9652] = sym_pipeline;
	v->a[9653] = state(1006);
	v->a[9654] = 1;
	v->a[9655] = aux_sym_redirected_statement_repeat2;
	v->a[9656] = state(1605);
	v->a[9657] = 1;
	v->a[9658] = sym__statement_not_pipeline;
	v->a[9659] = state(1690);
	small_parse_table_483(v);
}

void	small_parse_table_483(t_small_parse_table_array *v)
{
	v->a[9660] = 1;
	v->a[9661] = sym__statements;
	v->a[9662] = actions(11);
	v->a[9663] = 2;
	v->a[9664] = anon_sym_while;
	v->a[9665] = anon_sym_until;
	v->a[9666] = actions(59);
	v->a[9667] = 2;
	v->a[9668] = sym_raw_string;
	v->a[9669] = sym_number;
	v->a[9670] = state(425);
	v->a[9671] = 5;
	v->a[9672] = sym_arithmetic_expansion;
	v->a[9673] = sym_string;
	v->a[9674] = sym_simple_expansion;
	v->a[9675] = sym_expansion;
	v->a[9676] = sym_command_substitution;
	v->a[9677] = actions(51);
	v->a[9678] = 7;
	v->a[9679] = anon_sym_LT;
	small_parse_table_484(v);
}

void	small_parse_table_484(t_small_parse_table_array *v)
{
	v->a[9680] = anon_sym_GT;
	v->a[9681] = anon_sym_GT_GT;
	v->a[9682] = anon_sym_LT_AMP;
	v->a[9683] = anon_sym_GT_AMP;
	v->a[9684] = anon_sym_GT_PIPE;
	v->a[9685] = anon_sym_LT_GT;
	v->a[9686] = state(849);
	v->a[9687] = 12;
	v->a[9688] = sym_redirected_statement;
	v->a[9689] = sym_for_statement;
	v->a[9690] = sym_while_statement;
	v->a[9691] = sym_if_statement;
	v->a[9692] = sym_case_statement;
	v->a[9693] = sym_function_definition;
	v->a[9694] = sym_compound_statement;
	v->a[9695] = sym_subshell;
	v->a[9696] = sym_list;
	v->a[9697] = sym_negated_command;
	v->a[9698] = sym_command;
	v->a[9699] = sym__variable_assignments;
	small_parse_table_485(v);
}

/* EOF small_parse_table_96.c */
