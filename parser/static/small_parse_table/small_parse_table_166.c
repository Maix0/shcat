/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_166.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_830(t_small_parse_table_array *v)
{
	v->a[16600] = 42;
	v->a[16601] = actions(3);
	v->a[16602] = 1;
	v->a[16603] = sym_comment;
	v->a[16604] = actions(9);
	v->a[16605] = 1;
	v->a[16606] = anon_sym_for;
	v->a[16607] = actions(13);
	v->a[16608] = 1;
	v->a[16609] = anon_sym_if;
	v->a[16610] = actions(15);
	v->a[16611] = 1;
	v->a[16612] = anon_sym_case;
	v->a[16613] = actions(17);
	v->a[16614] = 1;
	v->a[16615] = anon_sym_LPAREN;
	v->a[16616] = actions(19);
	v->a[16617] = 1;
	v->a[16618] = anon_sym_LBRACE;
	v->a[16619] = actions(45);
	small_parse_table_831(v);
}

void	small_parse_table_831(t_small_parse_table_array *v)
{
	v->a[16620] = 1;
	v->a[16621] = sym_word;
	v->a[16622] = actions(53);
	v->a[16623] = 1;
	v->a[16624] = anon_sym_BANG;
	v->a[16625] = actions(59);
	v->a[16626] = 1;
	v->a[16627] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16628] = actions(61);
	v->a[16629] = 1;
	v->a[16630] = anon_sym_DOLLAR;
	v->a[16631] = actions(63);
	v->a[16632] = 1;
	v->a[16633] = anon_sym_DQUOTE;
	v->a[16634] = actions(67);
	v->a[16635] = 1;
	v->a[16636] = anon_sym_DOLLAR_LBRACE;
	v->a[16637] = actions(69);
	v->a[16638] = 1;
	v->a[16639] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_832(v);
}

void	small_parse_table_832(t_small_parse_table_array *v)
{
	v->a[16640] = actions(71);
	v->a[16641] = 1;
	v->a[16642] = anon_sym_BQUOTE;
	v->a[16643] = actions(73);
	v->a[16644] = 1;
	v->a[16645] = sym_file_descriptor;
	v->a[16646] = actions(75);
	v->a[16647] = 1;
	v->a[16648] = sym_variable_name;
	v->a[16649] = state(133);
	v->a[16650] = 1;
	v->a[16651] = aux_sym__statements_repeat1;
	v->a[16652] = state(187);
	v->a[16653] = 1;
	v->a[16654] = sym_command_name;
	v->a[16655] = state(279);
	v->a[16656] = 1;
	v->a[16657] = sym_variable_assignment;
	v->a[16658] = state(647);
	v->a[16659] = 1;
	small_parse_table_833(v);
}

void	small_parse_table_833(t_small_parse_table_array *v)
{
	v->a[16660] = sym_concatenation;
	v->a[16661] = state(736);
	v->a[16662] = 1;
	v->a[16663] = aux_sym_command_repeat1;
	v->a[16664] = state(738);
	v->a[16665] = 1;
	v->a[16666] = sym_file_redirect;
	v->a[16667] = state(1381);
	v->a[16668] = 1;
	v->a[16669] = sym_redirected_statement;
	v->a[16670] = state(1383);
	v->a[16671] = 1;
	v->a[16672] = sym_for_statement;
	v->a[16673] = state(1384);
	v->a[16674] = 1;
	v->a[16675] = sym_while_statement;
	v->a[16676] = state(1387);
	v->a[16677] = 1;
	v->a[16678] = sym_if_statement;
	v->a[16679] = state(1390);
	small_parse_table_834(v);
}

void	small_parse_table_834(t_small_parse_table_array *v)
{
	v->a[16680] = 1;
	v->a[16681] = sym_case_statement;
	v->a[16682] = state(1395);
	v->a[16683] = 1;
	v->a[16684] = sym_function_definition;
	v->a[16685] = state(1396);
	v->a[16686] = 1;
	v->a[16687] = sym_compound_statement;
	v->a[16688] = state(1398);
	v->a[16689] = 1;
	v->a[16690] = sym_subshell;
	v->a[16691] = state(1403);
	v->a[16692] = 1;
	v->a[16693] = sym_list;
	v->a[16694] = state(1404);
	v->a[16695] = 1;
	v->a[16696] = sym_negated_command;
	v->a[16697] = state(1405);
	v->a[16698] = 1;
	v->a[16699] = sym_command;
	small_parse_table_835(v);
}

/* EOF small_parse_table_166.c */
