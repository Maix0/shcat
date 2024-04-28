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
	v->a[9600] = aux_sym_number_token2;
	v->a[9601] = anon_sym_DOLLAR_LPAREN;
	v->a[9602] = sym_word;
	v->a[9603] = 37;
	v->a[9604] = actions(19);
	v->a[9605] = 1;
	v->a[9606] = anon_sym_LPAREN;
	v->a[9607] = actions(33);
	v->a[9608] = 1;
	v->a[9609] = anon_sym_LBRACK;
	v->a[9610] = actions(35);
	v->a[9611] = 1;
	v->a[9612] = anon_sym_LBRACK_LBRACK;
	v->a[9613] = actions(71);
	v->a[9614] = 1;
	v->a[9615] = sym_comment;
	v->a[9616] = actions(288);
	v->a[9617] = 1;
	v->a[9618] = anon_sym_LPAREN_LPAREN;
	v->a[9619] = actions(312);
	small_parse_table_481(v);
}

void	small_parse_table_481(t_small_parse_table_array *v)
{
	v->a[9620] = 1;
	v->a[9621] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9622] = actions(314);
	v->a[9623] = 1;
	v->a[9624] = anon_sym_DOLLAR_LBRACK;
	v->a[9625] = actions(316);
	v->a[9626] = 1;
	v->a[9627] = anon_sym_DOLLAR;
	v->a[9628] = actions(318);
	v->a[9629] = 1;
	v->a[9630] = sym__special_character;
	v->a[9631] = actions(320);
	v->a[9632] = 1;
	v->a[9633] = anon_sym_DQUOTE;
	v->a[9634] = actions(324);
	v->a[9635] = 1;
	v->a[9636] = aux_sym_number_token1;
	v->a[9637] = actions(326);
	v->a[9638] = 1;
	v->a[9639] = aux_sym_number_token2;
	small_parse_table_482(v);
}

void	small_parse_table_482(t_small_parse_table_array *v)
{
	v->a[9640] = actions(328);
	v->a[9641] = 1;
	v->a[9642] = anon_sym_DOLLAR_LBRACE;
	v->a[9643] = actions(330);
	v->a[9644] = 1;
	v->a[9645] = anon_sym_DOLLAR_LPAREN;
	v->a[9646] = actions(332);
	v->a[9647] = 1;
	v->a[9648] = anon_sym_BQUOTE;
	v->a[9649] = actions(334);
	v->a[9650] = 1;
	v->a[9651] = anon_sym_DOLLAR_BQUOTE;
	v->a[9652] = actions(340);
	v->a[9653] = 1;
	v->a[9654] = sym_variable_name;
	v->a[9655] = actions(342);
	v->a[9656] = 1;
	v->a[9657] = sym_test_operator;
	v->a[9658] = actions(344);
	v->a[9659] = 1;
	small_parse_table_483(v);
}

void	small_parse_table_483(t_small_parse_table_array *v)
{
	v->a[9660] = sym__brace_start;
	v->a[9661] = actions(1394);
	v->a[9662] = 1;
	v->a[9663] = anon_sym_LT_LT_LT;
	v->a[9664] = actions(1396);
	v->a[9665] = 1;
	v->a[9666] = sym_file_descriptor;
	v->a[9667] = actions(2723);
	v->a[9668] = 1;
	v->a[9669] = sym_word;
	v->a[9670] = state(554);
	v->a[9671] = 1;
	v->a[9672] = sym_command_name;
	v->a[9673] = state(958);
	v->a[9674] = 1;
	v->a[9675] = aux_sym_command_repeat1;
	v->a[9676] = state(1267);
	v->a[9677] = 1;
	v->a[9678] = aux_sym__literal_repeat1;
	v->a[9679] = state(1376);
	small_parse_table_484(v);
}

void	small_parse_table_484(t_small_parse_table_array *v)
{
	v->a[9680] = 1;
	v->a[9681] = sym_concatenation;
	v->a[9682] = state(2286);
	v->a[9683] = 1;
	v->a[9684] = sym_variable_assignment;
	v->a[9685] = state(5026);
	v->a[9686] = 1;
	v->a[9687] = sym_command;
	v->a[9688] = state(6790);
	v->a[9689] = 1;
	v->a[9690] = sym_subscript;
	v->a[9691] = actions(322);
	v->a[9692] = 2;
	v->a[9693] = sym_raw_string;
	v->a[9694] = sym_ansi_c_string;
	v->a[9695] = actions(336);
	v->a[9696] = 2;
	v->a[9697] = anon_sym_LT_LPAREN;
	v->a[9698] = anon_sym_GT_LPAREN;
	v->a[9699] = actions(1392);
	small_parse_table_485(v);
}

/* EOF small_parse_table_96.c */
