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
	v->a[9601] = sym_comment;
	v->a[9602] = actions(9);
	v->a[9603] = 1;
	v->a[9604] = anon_sym_for;
	v->a[9605] = actions(13);
	v->a[9606] = 1;
	v->a[9607] = anon_sym_if;
	v->a[9608] = actions(15);
	v->a[9609] = 1;
	v->a[9610] = anon_sym_case;
	v->a[9611] = actions(17);
	v->a[9612] = 1;
	v->a[9613] = anon_sym_LPAREN;
	v->a[9614] = actions(19);
	v->a[9615] = 1;
	v->a[9616] = anon_sym_LBRACE;
	v->a[9617] = actions(45);
	v->a[9618] = 1;
	v->a[9619] = sym_word;
	small_parse_table_481(v);
}

void	small_parse_table_481(t_small_parse_table_array *v)
{
	v->a[9620] = actions(53);
	v->a[9621] = 1;
	v->a[9622] = anon_sym_BANG;
	v->a[9623] = actions(59);
	v->a[9624] = 1;
	v->a[9625] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9626] = actions(61);
	v->a[9627] = 1;
	v->a[9628] = anon_sym_DOLLAR;
	v->a[9629] = actions(63);
	v->a[9630] = 1;
	v->a[9631] = anon_sym_DQUOTE;
	v->a[9632] = actions(67);
	v->a[9633] = 1;
	v->a[9634] = anon_sym_DOLLAR_LBRACE;
	v->a[9635] = actions(69);
	v->a[9636] = 1;
	v->a[9637] = anon_sym_DOLLAR_LPAREN;
	v->a[9638] = actions(71);
	v->a[9639] = 1;
	small_parse_table_482(v);
}

void	small_parse_table_482(t_small_parse_table_array *v)
{
	v->a[9640] = anon_sym_BQUOTE;
	v->a[9641] = actions(73);
	v->a[9642] = 1;
	v->a[9643] = sym_file_descriptor;
	v->a[9644] = actions(75);
	v->a[9645] = 1;
	v->a[9646] = sym_variable_name;
	v->a[9647] = actions(260);
	v->a[9648] = 1;
	v->a[9649] = anon_sym_RBRACE;
	v->a[9650] = state(42);
	v->a[9651] = 1;
	v->a[9652] = aux_sym__terminated_statement;
	v->a[9653] = state(189);
	v->a[9654] = 1;
	v->a[9655] = sym_command_name;
	v->a[9656] = state(249);
	v->a[9657] = 1;
	v->a[9658] = sym_variable_assignment;
	v->a[9659] = state(650);
	small_parse_table_483(v);
}

void	small_parse_table_483(t_small_parse_table_array *v)
{
	v->a[9660] = 1;
	v->a[9661] = sym_concatenation;
	v->a[9662] = state(712);
	v->a[9663] = 1;
	v->a[9664] = sym_file_redirect;
	v->a[9665] = state(713);
	v->a[9666] = 1;
	v->a[9667] = aux_sym_command_repeat1;
	v->a[9668] = state(1236);
	v->a[9669] = 1;
	v->a[9670] = sym_pipeline;
	v->a[9671] = state(1333);
	v->a[9672] = 1;
	v->a[9673] = aux_sym_redirected_statement_repeat2;
	v->a[9674] = state(2103);
	v->a[9675] = 1;
	v->a[9676] = sym__statement_not_pipeline;
	v->a[9677] = actions(11);
	v->a[9678] = 2;
	v->a[9679] = anon_sym_while;
	small_parse_table_484(v);
}

void	small_parse_table_484(t_small_parse_table_array *v)
{
	v->a[9680] = anon_sym_until;
	v->a[9681] = actions(57);
	v->a[9682] = 2;
	v->a[9683] = anon_sym_LT_AMP_DASH;
	v->a[9684] = anon_sym_GT_AMP_DASH;
	v->a[9685] = actions(65);
	v->a[9686] = 2;
	v->a[9687] = sym_raw_string;
	v->a[9688] = sym_number;
	v->a[9689] = state(443);
	v->a[9690] = 5;
	v->a[9691] = sym_arithmetic_expansion;
	v->a[9692] = sym_string;
	v->a[9693] = sym_simple_expansion;
	v->a[9694] = sym_expansion;
	v->a[9695] = sym_command_substitution;
	v->a[9696] = actions(55);
	v->a[9697] = 6;
	v->a[9698] = anon_sym_LT;
	v->a[9699] = anon_sym_GT;
	small_parse_table_485(v);
}

/* EOF small_parse_table_96.c */
