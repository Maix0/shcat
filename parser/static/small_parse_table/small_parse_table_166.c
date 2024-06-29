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
	v->a[16600] = sym__statement_not_pipeline;
	v->a[16601] = actions(11);
	v->a[16602] = 2;
	v->a[16603] = anon_sym_while;
	v->a[16604] = anon_sym_until;
	v->a[16605] = actions(57);
	v->a[16606] = 2;
	v->a[16607] = anon_sym_LT_AMP_DASH;
	v->a[16608] = anon_sym_GT_AMP_DASH;
	v->a[16609] = actions(65);
	v->a[16610] = 2;
	v->a[16611] = sym_raw_string;
	v->a[16612] = sym_number;
	v->a[16613] = state(420);
	v->a[16614] = 5;
	v->a[16615] = sym_arithmetic_expansion;
	v->a[16616] = sym_string;
	v->a[16617] = sym_simple_expansion;
	v->a[16618] = sym_expansion;
	v->a[16619] = sym_command_substitution;
	small_parse_table_831(v);
}

void	small_parse_table_831(t_small_parse_table_array *v)
{
	v->a[16620] = actions(55);
	v->a[16621] = 8;
	v->a[16622] = anon_sym_LT;
	v->a[16623] = anon_sym_GT;
	v->a[16624] = anon_sym_GT_GT;
	v->a[16625] = anon_sym_AMP_GT;
	v->a[16626] = anon_sym_AMP_GT_GT;
	v->a[16627] = anon_sym_LT_AMP;
	v->a[16628] = anon_sym_GT_AMP;
	v->a[16629] = anon_sym_GT_PIPE;
	v->a[16630] = state(1141);
	v->a[16631] = 12;
	v->a[16632] = sym_redirected_statement;
	v->a[16633] = sym_for_statement;
	v->a[16634] = sym_while_statement;
	v->a[16635] = sym_if_statement;
	v->a[16636] = sym_case_statement;
	v->a[16637] = sym_function_definition;
	v->a[16638] = sym_compound_statement;
	v->a[16639] = sym_subshell;
	small_parse_table_832(v);
}

void	small_parse_table_832(t_small_parse_table_array *v)
{
	v->a[16640] = sym_list;
	v->a[16641] = sym_negated_command;
	v->a[16642] = sym_command;
	v->a[16643] = sym__variable_assignments;
	v->a[16644] = 31;
	v->a[16645] = actions(3);
	v->a[16646] = 1;
	v->a[16647] = sym_comment;
	v->a[16648] = actions(9);
	v->a[16649] = 1;
	v->a[16650] = anon_sym_for;
	v->a[16651] = actions(13);
	v->a[16652] = 1;
	v->a[16653] = anon_sym_if;
	v->a[16654] = actions(15);
	v->a[16655] = 1;
	v->a[16656] = anon_sym_case;
	v->a[16657] = actions(17);
	v->a[16658] = 1;
	v->a[16659] = anon_sym_LPAREN;
	small_parse_table_833(v);
}

void	small_parse_table_833(t_small_parse_table_array *v)
{
	v->a[16660] = actions(19);
	v->a[16661] = 1;
	v->a[16662] = anon_sym_LBRACE;
	v->a[16663] = actions(45);
	v->a[16664] = 1;
	v->a[16665] = sym_word;
	v->a[16666] = actions(53);
	v->a[16667] = 1;
	v->a[16668] = anon_sym_BANG;
	v->a[16669] = actions(59);
	v->a[16670] = 1;
	v->a[16671] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16672] = actions(61);
	v->a[16673] = 1;
	v->a[16674] = anon_sym_DOLLAR;
	v->a[16675] = actions(63);
	v->a[16676] = 1;
	v->a[16677] = anon_sym_DQUOTE;
	v->a[16678] = actions(67);
	v->a[16679] = 1;
	small_parse_table_834(v);
}

void	small_parse_table_834(t_small_parse_table_array *v)
{
	v->a[16680] = anon_sym_DOLLAR_LBRACE;
	v->a[16681] = actions(69);
	v->a[16682] = 1;
	v->a[16683] = anon_sym_DOLLAR_LPAREN;
	v->a[16684] = actions(71);
	v->a[16685] = 1;
	v->a[16686] = anon_sym_BQUOTE;
	v->a[16687] = actions(73);
	v->a[16688] = 1;
	v->a[16689] = sym_file_descriptor;
	v->a[16690] = actions(75);
	v->a[16691] = 1;
	v->a[16692] = sym_variable_name;
	v->a[16693] = state(114);
	v->a[16694] = 1;
	v->a[16695] = aux_sym__terminated_statement;
	v->a[16696] = state(191);
	v->a[16697] = 1;
	v->a[16698] = sym_command_name;
	v->a[16699] = state(252);
	small_parse_table_835(v);
}

/* EOF small_parse_table_166.c */
