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
	v->a[16600] = sym_while_statement;
	v->a[16601] = sym_if_statement;
	v->a[16602] = sym_case_statement;
	v->a[16603] = sym_function_definition;
	v->a[16604] = sym_compound_statement;
	v->a[16605] = sym_subshell;
	v->a[16606] = sym_list;
	v->a[16607] = sym_negated_command;
	v->a[16608] = sym_command;
	v->a[16609] = sym_variable_assignments;
	v->a[16610] = 33;
	v->a[16611] = actions(3);
	v->a[16612] = 1;
	v->a[16613] = sym_comment;
	v->a[16614] = actions(9);
	v->a[16615] = 1;
	v->a[16616] = anon_sym_for;
	v->a[16617] = actions(13);
	v->a[16618] = 1;
	v->a[16619] = anon_sym_if;
	small_parse_table_831(v);
}

void	small_parse_table_831(t_small_parse_table_array *v)
{
	v->a[16620] = actions(15);
	v->a[16621] = 1;
	v->a[16622] = anon_sym_case;
	v->a[16623] = actions(17);
	v->a[16624] = 1;
	v->a[16625] = anon_sym_LPAREN;
	v->a[16626] = actions(19);
	v->a[16627] = 1;
	v->a[16628] = anon_sym_LBRACE;
	v->a[16629] = actions(49);
	v->a[16630] = 1;
	v->a[16631] = sym_word;
	v->a[16632] = actions(57);
	v->a[16633] = 1;
	v->a[16634] = anon_sym_BANG;
	v->a[16635] = actions(63);
	v->a[16636] = 1;
	v->a[16637] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16638] = actions(65);
	v->a[16639] = 1;
	small_parse_table_832(v);
}

void	small_parse_table_832(t_small_parse_table_array *v)
{
	v->a[16640] = anon_sym_DOLLAR;
	v->a[16641] = actions(67);
	v->a[16642] = 1;
	v->a[16643] = anon_sym_DQUOTE;
	v->a[16644] = actions(69);
	v->a[16645] = 1;
	v->a[16646] = sym_raw_string;
	v->a[16647] = actions(71);
	v->a[16648] = 1;
	v->a[16649] = aux_sym_number_token1;
	v->a[16650] = actions(73);
	v->a[16651] = 1;
	v->a[16652] = aux_sym_number_token2;
	v->a[16653] = actions(75);
	v->a[16654] = 1;
	v->a[16655] = anon_sym_DOLLAR_LBRACE;
	v->a[16656] = actions(77);
	v->a[16657] = 1;
	v->a[16658] = anon_sym_DOLLAR_LPAREN;
	v->a[16659] = actions(79);
	small_parse_table_833(v);
}

void	small_parse_table_833(t_small_parse_table_array *v)
{
	v->a[16660] = 1;
	v->a[16661] = anon_sym_BQUOTE;
	v->a[16662] = actions(81);
	v->a[16663] = 1;
	v->a[16664] = sym_file_descriptor;
	v->a[16665] = actions(83);
	v->a[16666] = 1;
	v->a[16667] = sym_variable_name;
	v->a[16668] = state(56);
	v->a[16669] = 1;
	v->a[16670] = aux_sym__terminated_statement;
	v->a[16671] = state(190);
	v->a[16672] = 1;
	v->a[16673] = sym_command_name;
	v->a[16674] = state(303);
	v->a[16675] = 1;
	v->a[16676] = sym_variable_assignment;
	v->a[16677] = state(582);
	v->a[16678] = 1;
	v->a[16679] = sym_concatenation;
	small_parse_table_834(v);
}

void	small_parse_table_834(t_small_parse_table_array *v)
{
	v->a[16680] = state(587);
	v->a[16681] = 1;
	v->a[16682] = aux_sym_command_repeat1;
	v->a[16683] = state(718);
	v->a[16684] = 1;
	v->a[16685] = sym_file_redirect;
	v->a[16686] = state(1213);
	v->a[16687] = 1;
	v->a[16688] = aux_sym_redirected_statement_repeat2;
	v->a[16689] = state(1225);
	v->a[16690] = 1;
	v->a[16691] = sym_pipeline;
	v->a[16692] = state(2035);
	v->a[16693] = 1;
	v->a[16694] = sym__statement_not_pipeline;
	v->a[16695] = actions(11);
	v->a[16696] = 2;
	v->a[16697] = anon_sym_while;
	v->a[16698] = anon_sym_until;
	v->a[16699] = actions(61);
	small_parse_table_835(v);
}

/* EOF small_parse_table_166.c */
