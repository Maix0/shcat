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
	v->a[600] = anon_sym_DOLLAR;
	v->a[601] = actions(67);
	v->a[602] = 1;
	v->a[603] = anon_sym_DQUOTE;
	v->a[604] = actions(69);
	v->a[605] = 1;
	v->a[606] = sym_raw_string;
	v->a[607] = actions(71);
	v->a[608] = 1;
	v->a[609] = aux_sym_number_token1;
	v->a[610] = actions(73);
	v->a[611] = 1;
	v->a[612] = aux_sym_number_token2;
	v->a[613] = actions(75);
	v->a[614] = 1;
	v->a[615] = anon_sym_DOLLAR_LBRACE;
	v->a[616] = actions(77);
	v->a[617] = 1;
	v->a[618] = anon_sym_DOLLAR_LPAREN;
	v->a[619] = actions(79);
	small_parse_table_31(v);
}

void	small_parse_table_31(t_small_parse_table_array *v)
{
	v->a[620] = 1;
	v->a[621] = anon_sym_BQUOTE;
	v->a[622] = actions(81);
	v->a[623] = 1;
	v->a[624] = sym_file_descriptor;
	v->a[625] = actions(83);
	v->a[626] = 1;
	v->a[627] = sym_variable_name;
	v->a[628] = actions(91);
	v->a[629] = 1;
	v->a[630] = anon_sym_fi;
	v->a[631] = state(21);
	v->a[632] = 1;
	v->a[633] = aux_sym__terminated_statement;
	v->a[634] = state(190);
	v->a[635] = 1;
	v->a[636] = sym_command_name;
	v->a[637] = state(299);
	v->a[638] = 1;
	v->a[639] = sym_variable_assignment;
	small_parse_table_32(v);
}

void	small_parse_table_32(t_small_parse_table_array *v)
{
	v->a[640] = state(582);
	v->a[641] = 1;
	v->a[642] = sym_concatenation;
	v->a[643] = state(587);
	v->a[644] = 1;
	v->a[645] = aux_sym_command_repeat1;
	v->a[646] = state(718);
	v->a[647] = 1;
	v->a[648] = sym_file_redirect;
	v->a[649] = state(1212);
	v->a[650] = 1;
	v->a[651] = sym_pipeline;
	v->a[652] = state(1213);
	v->a[653] = 1;
	v->a[654] = aux_sym_redirected_statement_repeat2;
	v->a[655] = state(2035);
	v->a[656] = 1;
	v->a[657] = sym__statement_not_pipeline;
	v->a[658] = state(2250);
	v->a[659] = 1;
	small_parse_table_33(v);
}

void	small_parse_table_33(t_small_parse_table_array *v)
{
	v->a[660] = sym_else_clause;
	v->a[661] = actions(11);
	v->a[662] = 2;
	v->a[663] = anon_sym_while;
	v->a[664] = anon_sym_until;
	v->a[665] = actions(61);
	v->a[666] = 2;
	v->a[667] = anon_sym_LT_AMP_DASH;
	v->a[668] = anon_sym_GT_AMP_DASH;
	v->a[669] = state(1902);
	v->a[670] = 2;
	v->a[671] = sym_elif_clause;
	v->a[672] = aux_sym_if_statement_repeat1;
	v->a[673] = state(397);
	v->a[674] = 6;
	v->a[675] = sym_arithmetic_expansion;
	v->a[676] = sym_string;
	v->a[677] = sym_number;
	v->a[678] = sym_simple_expansion;
	v->a[679] = sym_expansion;
	small_parse_table_34(v);
}

void	small_parse_table_34(t_small_parse_table_array *v)
{
	v->a[680] = sym_command_substitution;
	v->a[681] = actions(59);
	v->a[682] = 8;
	v->a[683] = anon_sym_LT;
	v->a[684] = anon_sym_GT;
	v->a[685] = anon_sym_GT_GT;
	v->a[686] = anon_sym_AMP_GT;
	v->a[687] = anon_sym_AMP_GT_GT;
	v->a[688] = anon_sym_LT_AMP;
	v->a[689] = anon_sym_GT_AMP;
	v->a[690] = anon_sym_GT_PIPE;
	v->a[691] = state(1183);
	v->a[692] = 12;
	v->a[693] = sym_redirected_statement;
	v->a[694] = sym_for_statement;
	v->a[695] = sym_while_statement;
	v->a[696] = sym_if_statement;
	v->a[697] = sym_case_statement;
	v->a[698] = sym_function_definition;
	v->a[699] = sym_compound_statement;
	small_parse_table_35(v);
}

/* EOF small_parse_table_6.c */
