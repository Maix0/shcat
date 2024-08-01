/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_6.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_30(t_small_parse_table_array *v)
{
	v->a[600] = sym_command_substitution;
	v->a[601] = state(905);
	v->a[602] = 12;
	v->a[603] = sym_redirected_statement;
	v->a[604] = sym_for_statement;
	v->a[605] = sym_while_statement;
	v->a[606] = sym_if_statement;
	v->a[607] = sym_case_statement;
	v->a[608] = sym_function_definition;
	v->a[609] = sym_compound_statement;
	v->a[610] = sym_subshell;
	v->a[611] = sym_list;
	v->a[612] = sym_negated_command;
	v->a[613] = sym_command;
	v->a[614] = sym__variable_assignments;
	v->a[615] = 34;
	v->a[616] = actions(3);
	v->a[617] = 1;
	v->a[618] = sym_comment;
	v->a[619] = actions(9);
	small_parse_table_31(v);
}

void	small_parse_table_31(t_small_parse_table_array *v)
{
	v->a[620] = 1;
	v->a[621] = anon_sym_for;
	v->a[622] = actions(13);
	v->a[623] = 1;
	v->a[624] = anon_sym_if;
	v->a[625] = actions(15);
	v->a[626] = 1;
	v->a[627] = anon_sym_case;
	v->a[628] = actions(17);
	v->a[629] = 1;
	v->a[630] = anon_sym_LPAREN;
	v->a[631] = actions(19);
	v->a[632] = 1;
	v->a[633] = anon_sym_LBRACE;
	v->a[634] = actions(41);
	v->a[635] = 1;
	v->a[636] = sym_word;
	v->a[637] = actions(45);
	v->a[638] = 1;
	v->a[639] = anon_sym_elif;
	small_parse_table_32(v);
}

void	small_parse_table_32(t_small_parse_table_array *v)
{
	v->a[640] = actions(47);
	v->a[641] = 1;
	v->a[642] = anon_sym_else;
	v->a[643] = actions(49);
	v->a[644] = 1;
	v->a[645] = anon_sym_BANG;
	v->a[646] = actions(53);
	v->a[647] = 1;
	v->a[648] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[649] = actions(55);
	v->a[650] = 1;
	v->a[651] = anon_sym_DOLLAR;
	v->a[652] = actions(57);
	v->a[653] = 1;
	v->a[654] = anon_sym_DQUOTE;
	v->a[655] = actions(61);
	v->a[656] = 1;
	v->a[657] = anon_sym_DOLLAR_LBRACE;
	v->a[658] = actions(63);
	v->a[659] = 1;
	small_parse_table_33(v);
}

void	small_parse_table_33(t_small_parse_table_array *v)
{
	v->a[660] = anon_sym_DOLLAR_LPAREN;
	v->a[661] = actions(65);
	v->a[662] = 1;
	v->a[663] = anon_sym_BQUOTE;
	v->a[664] = actions(67);
	v->a[665] = 1;
	v->a[666] = sym_variable_name;
	v->a[667] = actions(77);
	v->a[668] = 1;
	v->a[669] = anon_sym_fi;
	v->a[670] = state(4);
	v->a[671] = 1;
	v->a[672] = aux_sym__terminated_statement;
	v->a[673] = state(185);
	v->a[674] = 1;
	v->a[675] = sym_command_name;
	v->a[676] = state(231);
	v->a[677] = 1;
	v->a[678] = sym_variable_assignment;
	v->a[679] = state(411);
	small_parse_table_34(v);
}

void	small_parse_table_34(t_small_parse_table_array *v)
{
	v->a[680] = 1;
	v->a[681] = aux_sym_command_repeat1;
	v->a[682] = state(551);
	v->a[683] = 1;
	v->a[684] = sym_file_redirect;
	v->a[685] = state(555);
	v->a[686] = 1;
	v->a[687] = sym_concatenation;
	v->a[688] = state(1070);
	v->a[689] = 1;
	v->a[690] = sym_pipeline;
	v->a[691] = state(1126);
	v->a[692] = 1;
	v->a[693] = aux_sym_redirected_statement_repeat2;
	v->a[694] = state(1561);
	v->a[695] = 1;
	v->a[696] = sym__statement_not_pipeline;
	v->a[697] = state(1720);
	v->a[698] = 1;
	v->a[699] = sym_else_clause;
	small_parse_table_35(v);
}

/* EOF small_parse_table_6.c */
