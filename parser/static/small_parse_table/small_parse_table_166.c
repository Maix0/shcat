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
	v->a[16600] = anon_sym_case;
	v->a[16601] = actions(17);
	v->a[16602] = 1;
	v->a[16603] = anon_sym_LPAREN;
	v->a[16604] = actions(19);
	v->a[16605] = 1;
	v->a[16606] = anon_sym_LBRACE;
	v->a[16607] = actions(45);
	v->a[16608] = 1;
	v->a[16609] = sym_word;
	v->a[16610] = actions(53);
	v->a[16611] = 1;
	v->a[16612] = anon_sym_BANG;
	v->a[16613] = actions(59);
	v->a[16614] = 1;
	v->a[16615] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16616] = actions(61);
	v->a[16617] = 1;
	v->a[16618] = anon_sym_DOLLAR;
	v->a[16619] = actions(63);
	small_parse_table_831(v);
}

void	small_parse_table_831(t_small_parse_table_array *v)
{
	v->a[16620] = 1;
	v->a[16621] = anon_sym_DQUOTE;
	v->a[16622] = actions(67);
	v->a[16623] = 1;
	v->a[16624] = anon_sym_DOLLAR_LBRACE;
	v->a[16625] = actions(69);
	v->a[16626] = 1;
	v->a[16627] = anon_sym_DOLLAR_LPAREN;
	v->a[16628] = actions(71);
	v->a[16629] = 1;
	v->a[16630] = anon_sym_BQUOTE;
	v->a[16631] = actions(73);
	v->a[16632] = 1;
	v->a[16633] = sym_file_descriptor;
	v->a[16634] = actions(75);
	v->a[16635] = 1;
	v->a[16636] = sym_variable_name;
	v->a[16637] = state(115);
	v->a[16638] = 1;
	v->a[16639] = aux_sym__terminated_statement;
	small_parse_table_832(v);
}

void	small_parse_table_832(t_small_parse_table_array *v)
{
	v->a[16640] = state(189);
	v->a[16641] = 1;
	v->a[16642] = sym_command_name;
	v->a[16643] = state(249);
	v->a[16644] = 1;
	v->a[16645] = sym_variable_assignment;
	v->a[16646] = state(650);
	v->a[16647] = 1;
	v->a[16648] = sym_concatenation;
	v->a[16649] = state(712);
	v->a[16650] = 1;
	v->a[16651] = sym_file_redirect;
	v->a[16652] = state(713);
	v->a[16653] = 1;
	v->a[16654] = aux_sym_command_repeat1;
	v->a[16655] = state(1236);
	v->a[16656] = 1;
	v->a[16657] = sym_pipeline;
	v->a[16658] = state(1333);
	v->a[16659] = 1;
	small_parse_table_833(v);
}

void	small_parse_table_833(t_small_parse_table_array *v)
{
	v->a[16660] = aux_sym_redirected_statement_repeat2;
	v->a[16661] = state(2103);
	v->a[16662] = 1;
	v->a[16663] = sym__statement_not_pipeline;
	v->a[16664] = actions(11);
	v->a[16665] = 2;
	v->a[16666] = anon_sym_while;
	v->a[16667] = anon_sym_until;
	v->a[16668] = actions(57);
	v->a[16669] = 2;
	v->a[16670] = anon_sym_LT_AMP_DASH;
	v->a[16671] = anon_sym_GT_AMP_DASH;
	v->a[16672] = actions(65);
	v->a[16673] = 2;
	v->a[16674] = sym_raw_string;
	v->a[16675] = sym_number;
	v->a[16676] = state(443);
	v->a[16677] = 5;
	v->a[16678] = sym_arithmetic_expansion;
	v->a[16679] = sym_string;
	small_parse_table_834(v);
}

void	small_parse_table_834(t_small_parse_table_array *v)
{
	v->a[16680] = sym_simple_expansion;
	v->a[16681] = sym_expansion;
	v->a[16682] = sym_command_substitution;
	v->a[16683] = actions(55);
	v->a[16684] = 6;
	v->a[16685] = anon_sym_LT;
	v->a[16686] = anon_sym_GT;
	v->a[16687] = anon_sym_GT_GT;
	v->a[16688] = anon_sym_LT_AMP;
	v->a[16689] = anon_sym_GT_AMP;
	v->a[16690] = anon_sym_GT_PIPE;
	v->a[16691] = state(1157);
	v->a[16692] = 12;
	v->a[16693] = sym_redirected_statement;
	v->a[16694] = sym_for_statement;
	v->a[16695] = sym_while_statement;
	v->a[16696] = sym_if_statement;
	v->a[16697] = sym_case_statement;
	v->a[16698] = sym_function_definition;
	v->a[16699] = sym_compound_statement;
	small_parse_table_835(v);
}

/* EOF small_parse_table_166.c */
