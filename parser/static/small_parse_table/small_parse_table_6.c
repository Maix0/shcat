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
	v->a[600] = sym_number;
	v->a[601] = state(1516);
	v->a[602] = 2;
	v->a[603] = sym_elif_clause;
	v->a[604] = aux_sym_if_statement_repeat1;
	v->a[605] = state(425);
	v->a[606] = 5;
	v->a[607] = sym_arithmetic_expansion;
	v->a[608] = sym_string;
	v->a[609] = sym_simple_expansion;
	v->a[610] = sym_expansion;
	v->a[611] = sym_command_substitution;
	v->a[612] = actions(51);
	v->a[613] = 7;
	v->a[614] = anon_sym_LT;
	v->a[615] = anon_sym_GT;
	v->a[616] = anon_sym_GT_GT;
	v->a[617] = anon_sym_LT_AMP;
	v->a[618] = anon_sym_GT_AMP;
	v->a[619] = anon_sym_GT_PIPE;
	small_parse_table_31(v);
}

void	small_parse_table_31(t_small_parse_table_array *v)
{
	v->a[620] = anon_sym_LT_GT;
	v->a[621] = state(949);
	v->a[622] = 12;
	v->a[623] = sym_redirected_statement;
	v->a[624] = sym_for_statement;
	v->a[625] = sym_while_statement;
	v->a[626] = sym_if_statement;
	v->a[627] = sym_case_statement;
	v->a[628] = sym_function_definition;
	v->a[629] = sym_compound_statement;
	v->a[630] = sym_subshell;
	v->a[631] = sym_list;
	v->a[632] = sym_negated_command;
	v->a[633] = sym_command;
	v->a[634] = sym__variable_assignments;
	v->a[635] = 34;
	v->a[636] = actions(3);
	v->a[637] = 1;
	v->a[638] = sym_comment;
	v->a[639] = actions(9);
	small_parse_table_32(v);
}

void	small_parse_table_32(t_small_parse_table_array *v)
{
	v->a[640] = 1;
	v->a[641] = anon_sym_for;
	v->a[642] = actions(13);
	v->a[643] = 1;
	v->a[644] = anon_sym_if;
	v->a[645] = actions(15);
	v->a[646] = 1;
	v->a[647] = anon_sym_case;
	v->a[648] = actions(17);
	v->a[649] = 1;
	v->a[650] = anon_sym_LPAREN;
	v->a[651] = actions(19);
	v->a[652] = 1;
	v->a[653] = anon_sym_LBRACE;
	v->a[654] = actions(41);
	v->a[655] = 1;
	v->a[656] = sym_word;
	v->a[657] = actions(45);
	v->a[658] = 1;
	v->a[659] = anon_sym_elif;
	small_parse_table_33(v);
}

void	small_parse_table_33(t_small_parse_table_array *v)
{
	v->a[660] = actions(47);
	v->a[661] = 1;
	v->a[662] = anon_sym_else;
	v->a[663] = actions(49);
	v->a[664] = 1;
	v->a[665] = anon_sym_BANG;
	v->a[666] = actions(53);
	v->a[667] = 1;
	v->a[668] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[669] = actions(55);
	v->a[670] = 1;
	v->a[671] = anon_sym_DOLLAR;
	v->a[672] = actions(57);
	v->a[673] = 1;
	v->a[674] = anon_sym_DQUOTE;
	v->a[675] = actions(61);
	v->a[676] = 1;
	v->a[677] = anon_sym_DOLLAR_LBRACE;
	v->a[678] = actions(63);
	v->a[679] = 1;
	small_parse_table_34(v);
}

void	small_parse_table_34(t_small_parse_table_array *v)
{
	v->a[680] = anon_sym_DOLLAR_LPAREN;
	v->a[681] = actions(65);
	v->a[682] = 1;
	v->a[683] = anon_sym_BQUOTE;
	v->a[684] = actions(67);
	v->a[685] = 1;
	v->a[686] = sym_variable_name;
	v->a[687] = actions(77);
	v->a[688] = 1;
	v->a[689] = anon_sym_fi;
	v->a[690] = state(5);
	v->a[691] = 1;
	v->a[692] = aux_sym__terminated_statement;
	v->a[693] = state(271);
	v->a[694] = 1;
	v->a[695] = sym_command_name;
	v->a[696] = state(291);
	v->a[697] = 1;
	v->a[698] = sym_variable_assignment;
	v->a[699] = state(482);
	small_parse_table_35(v);
}

/* EOF small_parse_table_6.c */
