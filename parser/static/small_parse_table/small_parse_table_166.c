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
	v->a[16600] = sym_command_substitution;
	v->a[16601] = actions(327);
	v->a[16602] = 7;
	v->a[16603] = anon_sym_LT;
	v->a[16604] = anon_sym_GT;
	v->a[16605] = anon_sym_GT_GT;
	v->a[16606] = anon_sym_LT_AMP;
	v->a[16607] = anon_sym_GT_AMP;
	v->a[16608] = anon_sym_GT_PIPE;
	v->a[16609] = anon_sym_LT_GT;
	v->a[16610] = state(1409);
	v->a[16611] = 12;
	v->a[16612] = sym_redirected_statement;
	v->a[16613] = sym_for_statement;
	v->a[16614] = sym_while_statement;
	v->a[16615] = sym_if_statement;
	v->a[16616] = sym_case_statement;
	v->a[16617] = sym_function_definition;
	v->a[16618] = sym_compound_statement;
	v->a[16619] = sym_subshell;
	small_parse_table_831(v);
}

void	small_parse_table_831(t_small_parse_table_array *v)
{
	v->a[16620] = sym_list;
	v->a[16621] = sym_negated_command;
	v->a[16622] = sym_command;
	v->a[16623] = sym__variable_assignments;
	v->a[16624] = 29;
	v->a[16625] = actions(3);
	v->a[16626] = 1;
	v->a[16627] = sym_comment;
	v->a[16628] = actions(87);
	v->a[16629] = 1;
	v->a[16630] = sym_word;
	v->a[16631] = actions(89);
	v->a[16632] = 1;
	v->a[16633] = anon_sym_for;
	v->a[16634] = actions(93);
	v->a[16635] = 1;
	v->a[16636] = anon_sym_if;
	v->a[16637] = actions(95);
	v->a[16638] = 1;
	v->a[16639] = anon_sym_case;
	small_parse_table_832(v);
}

void	small_parse_table_832(t_small_parse_table_array *v)
{
	v->a[16640] = actions(97);
	v->a[16641] = 1;
	v->a[16642] = anon_sym_LPAREN;
	v->a[16643] = actions(101);
	v->a[16644] = 1;
	v->a[16645] = anon_sym_LBRACE;
	v->a[16646] = actions(103);
	v->a[16647] = 1;
	v->a[16648] = anon_sym_BANG;
	v->a[16649] = actions(107);
	v->a[16650] = 1;
	v->a[16651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16652] = actions(109);
	v->a[16653] = 1;
	v->a[16654] = anon_sym_DOLLAR;
	v->a[16655] = actions(111);
	v->a[16656] = 1;
	v->a[16657] = anon_sym_DQUOTE;
	v->a[16658] = actions(115);
	v->a[16659] = 1;
	small_parse_table_833(v);
}

void	small_parse_table_833(t_small_parse_table_array *v)
{
	v->a[16660] = anon_sym_DOLLAR_LBRACE;
	v->a[16661] = actions(117);
	v->a[16662] = 1;
	v->a[16663] = anon_sym_DOLLAR_LPAREN;
	v->a[16664] = actions(119);
	v->a[16665] = 1;
	v->a[16666] = anon_sym_BQUOTE;
	v->a[16667] = actions(121);
	v->a[16668] = 1;
	v->a[16669] = sym_file_descriptor;
	v->a[16670] = actions(123);
	v->a[16671] = 1;
	v->a[16672] = sym_variable_name;
	v->a[16673] = state(173);
	v->a[16674] = 1;
	v->a[16675] = sym_command_name;
	v->a[16676] = state(336);
	v->a[16677] = 1;
	v->a[16678] = sym_variable_assignment;
	v->a[16679] = state(597);
	small_parse_table_834(v);
}

void	small_parse_table_834(t_small_parse_table_array *v)
{
	v->a[16680] = 1;
	v->a[16681] = aux_sym_command_repeat1;
	v->a[16682] = state(598);
	v->a[16683] = 1;
	v->a[16684] = sym_concatenation;
	v->a[16685] = state(714);
	v->a[16686] = 1;
	v->a[16687] = sym_file_redirect;
	v->a[16688] = state(1027);
	v->a[16689] = 1;
	v->a[16690] = sym_pipeline;
	v->a[16691] = state(1123);
	v->a[16692] = 1;
	v->a[16693] = aux_sym_redirected_statement_repeat2;
	v->a[16694] = state(1903);
	v->a[16695] = 1;
	v->a[16696] = sym__statement_not_pipeline;
	v->a[16697] = actions(91);
	v->a[16698] = 2;
	v->a[16699] = anon_sym_while;
	small_parse_table_835(v);
}

/* EOF small_parse_table_166.c */
