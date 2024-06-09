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
	v->a[9600] = anon_sym_LBRACE;
	v->a[9601] = actions(63);
	v->a[9602] = 1;
	v->a[9603] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9604] = actions(65);
	v->a[9605] = 1;
	v->a[9606] = anon_sym_DOLLAR;
	v->a[9607] = actions(67);
	v->a[9608] = 1;
	v->a[9609] = anon_sym_DQUOTE;
	v->a[9610] = actions(69);
	v->a[9611] = 1;
	v->a[9612] = sym_raw_string;
	v->a[9613] = actions(71);
	v->a[9614] = 1;
	v->a[9615] = aux_sym_number_token1;
	v->a[9616] = actions(73);
	v->a[9617] = 1;
	v->a[9618] = aux_sym_number_token2;
	v->a[9619] = actions(75);
	small_parse_table_481(v);
}

void	small_parse_table_481(t_small_parse_table_array *v)
{
	v->a[9620] = 1;
	v->a[9621] = anon_sym_DOLLAR_LBRACE;
	v->a[9622] = actions(77);
	v->a[9623] = 1;
	v->a[9624] = anon_sym_DOLLAR_LPAREN;
	v->a[9625] = actions(79);
	v->a[9626] = 1;
	v->a[9627] = anon_sym_BQUOTE;
	v->a[9628] = actions(81);
	v->a[9629] = 1;
	v->a[9630] = sym_file_descriptor;
	v->a[9631] = actions(83);
	v->a[9632] = 1;
	v->a[9633] = sym_variable_name;
	v->a[9634] = actions(238);
	v->a[9635] = 1;
	v->a[9636] = sym_word;
	v->a[9637] = actions(240);
	v->a[9638] = 1;
	v->a[9639] = anon_sym_BANG;
	small_parse_table_482(v);
}

void	small_parse_table_482(t_small_parse_table_array *v)
{
	v->a[9640] = state(132);
	v->a[9641] = 1;
	v->a[9642] = aux_sym__statements_repeat1;
	v->a[9643] = state(185);
	v->a[9644] = 1;
	v->a[9645] = sym_command_name;
	v->a[9646] = state(297);
	v->a[9647] = 1;
	v->a[9648] = sym_variable_assignment;
	v->a[9649] = state(582);
	v->a[9650] = 1;
	v->a[9651] = sym_concatenation;
	v->a[9652] = state(614);
	v->a[9653] = 1;
	v->a[9654] = aux_sym_command_repeat1;
	v->a[9655] = state(769);
	v->a[9656] = 1;
	v->a[9657] = sym_file_redirect;
	v->a[9658] = state(1133);
	v->a[9659] = 1;
	small_parse_table_483(v);
}

void	small_parse_table_483(t_small_parse_table_array *v)
{
	v->a[9660] = aux_sym_redirected_statement_repeat2;
	v->a[9661] = state(1142);
	v->a[9662] = 1;
	v->a[9663] = sym_pipeline;
	v->a[9664] = state(2041);
	v->a[9665] = 1;
	v->a[9666] = sym__statement_not_pipeline;
	v->a[9667] = state(2254);
	v->a[9668] = 1;
	v->a[9669] = sym__statements;
	v->a[9670] = actions(11);
	v->a[9671] = 2;
	v->a[9672] = anon_sym_while;
	v->a[9673] = anon_sym_until;
	v->a[9674] = actions(61);
	v->a[9675] = 2;
	v->a[9676] = anon_sym_LT_AMP_DASH;
	v->a[9677] = anon_sym_GT_AMP_DASH;
	v->a[9678] = state(397);
	v->a[9679] = 6;
	small_parse_table_484(v);
}

void	small_parse_table_484(t_small_parse_table_array *v)
{
	v->a[9680] = sym_arithmetic_expansion;
	v->a[9681] = sym_string;
	v->a[9682] = sym_number;
	v->a[9683] = sym_simple_expansion;
	v->a[9684] = sym_expansion;
	v->a[9685] = sym_command_substitution;
	v->a[9686] = actions(59);
	v->a[9687] = 8;
	v->a[9688] = anon_sym_LT;
	v->a[9689] = anon_sym_GT;
	v->a[9690] = anon_sym_GT_GT;
	v->a[9691] = anon_sym_AMP_GT;
	v->a[9692] = anon_sym_AMP_GT_GT;
	v->a[9693] = anon_sym_LT_AMP;
	v->a[9694] = anon_sym_GT_AMP;
	v->a[9695] = anon_sym_GT_PIPE;
	v->a[9696] = state(1071);
	v->a[9697] = 12;
	v->a[9698] = sym_redirected_statement;
	v->a[9699] = sym_for_statement;
	small_parse_table_485(v);
}

/* EOF small_parse_table_96.c */
