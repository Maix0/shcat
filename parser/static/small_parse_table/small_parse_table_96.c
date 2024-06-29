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
	v->a[9601] = state(299);
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
	v->a[9618] = state(1072);
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
	v->a[9631] = sym__variable_assignments;
	v->a[9632] = 32;
	v->a[9633] = actions(3);
	v->a[9634] = 1;
	v->a[9635] = sym_comment;
	v->a[9636] = actions(141);
	v->a[9637] = 1;
	v->a[9638] = sym_word;
	v->a[9639] = actions(144);
	small_parse_table_482(v);
}

void	small_parse_table_482(t_small_parse_table_array *v)
{
	v->a[9640] = 1;
	v->a[9641] = anon_sym_for;
	v->a[9642] = actions(150);
	v->a[9643] = 1;
	v->a[9644] = anon_sym_if;
	v->a[9645] = actions(153);
	v->a[9646] = 1;
	v->a[9647] = anon_sym_fi;
	v->a[9648] = actions(155);
	v->a[9649] = 1;
	v->a[9650] = anon_sym_case;
	v->a[9651] = actions(158);
	v->a[9652] = 1;
	v->a[9653] = anon_sym_LPAREN;
	v->a[9654] = actions(161);
	v->a[9655] = 1;
	v->a[9656] = anon_sym_LBRACE;
	v->a[9657] = actions(164);
	v->a[9658] = 1;
	v->a[9659] = anon_sym_BANG;
	small_parse_table_483(v);
}

void	small_parse_table_483(t_small_parse_table_array *v)
{
	v->a[9660] = actions(173);
	v->a[9661] = 1;
	v->a[9662] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9663] = actions(176);
	v->a[9664] = 1;
	v->a[9665] = anon_sym_DOLLAR;
	v->a[9666] = actions(179);
	v->a[9667] = 1;
	v->a[9668] = anon_sym_DQUOTE;
	v->a[9669] = actions(185);
	v->a[9670] = 1;
	v->a[9671] = anon_sym_DOLLAR_LBRACE;
	v->a[9672] = actions(188);
	v->a[9673] = 1;
	v->a[9674] = anon_sym_DOLLAR_LPAREN;
	v->a[9675] = actions(191);
	v->a[9676] = 1;
	v->a[9677] = anon_sym_BQUOTE;
	v->a[9678] = actions(194);
	v->a[9679] = 1;
	small_parse_table_484(v);
}

void	small_parse_table_484(t_small_parse_table_array *v)
{
	v->a[9680] = sym_file_descriptor;
	v->a[9681] = actions(197);
	v->a[9682] = 1;
	v->a[9683] = sym_variable_name;
	v->a[9684] = state(79);
	v->a[9685] = 1;
	v->a[9686] = aux_sym__terminated_statement;
	v->a[9687] = state(191);
	v->a[9688] = 1;
	v->a[9689] = sym_command_name;
	v->a[9690] = state(256);
	v->a[9691] = 1;
	v->a[9692] = sym_variable_assignment;
	v->a[9693] = state(624);
	v->a[9694] = 1;
	v->a[9695] = sym_concatenation;
	v->a[9696] = state(726);
	v->a[9697] = 1;
	v->a[9698] = sym_file_redirect;
	v->a[9699] = state(733);
	small_parse_table_485(v);
}

/* EOF small_parse_table_96.c */
