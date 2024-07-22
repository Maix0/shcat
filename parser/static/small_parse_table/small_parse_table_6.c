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
	v->a[600] = 1;
	v->a[601] = aux_sym_redirected_statement_repeat2;
	v->a[602] = state(1901);
	v->a[603] = 1;
	v->a[604] = sym__statement_not_pipeline;
	v->a[605] = state(2009);
	v->a[606] = 1;
	v->a[607] = sym_else_clause;
	v->a[608] = actions(11);
	v->a[609] = 2;
	v->a[610] = anon_sym_while;
	v->a[611] = anon_sym_until;
	v->a[612] = actions(61);
	v->a[613] = 2;
	v->a[614] = sym_raw_string;
	v->a[615] = sym_number;
	v->a[616] = state(1775);
	v->a[617] = 2;
	v->a[618] = sym_elif_clause;
	v->a[619] = aux_sym_if_statement_repeat1;
	small_parse_table_31(v);
}

void	small_parse_table_31(t_small_parse_table_array *v)
{
	v->a[620] = state(455);
	v->a[621] = 5;
	v->a[622] = sym_arithmetic_expansion;
	v->a[623] = sym_string;
	v->a[624] = sym_simple_expansion;
	v->a[625] = sym_expansion;
	v->a[626] = sym_command_substitution;
	v->a[627] = actions(53);
	v->a[628] = 7;
	v->a[629] = anon_sym_LT;
	v->a[630] = anon_sym_GT;
	v->a[631] = anon_sym_GT_GT;
	v->a[632] = anon_sym_LT_AMP;
	v->a[633] = anon_sym_GT_AMP;
	v->a[634] = anon_sym_GT_PIPE;
	v->a[635] = anon_sym_LT_GT;
	v->a[636] = state(1075);
	v->a[637] = 12;
	v->a[638] = sym_redirected_statement;
	v->a[639] = sym_for_statement;
	small_parse_table_32(v);
}

void	small_parse_table_32(t_small_parse_table_array *v)
{
	v->a[640] = sym_while_statement;
	v->a[641] = sym_if_statement;
	v->a[642] = sym_case_statement;
	v->a[643] = sym_function_definition;
	v->a[644] = sym_compound_statement;
	v->a[645] = sym_subshell;
	v->a[646] = sym_list;
	v->a[647] = sym_negated_command;
	v->a[648] = sym_command;
	v->a[649] = sym__variable_assignments;
	v->a[650] = 35;
	v->a[651] = actions(3);
	v->a[652] = 1;
	v->a[653] = sym_comment;
	v->a[654] = actions(9);
	v->a[655] = 1;
	v->a[656] = anon_sym_for;
	v->a[657] = actions(13);
	v->a[658] = 1;
	v->a[659] = anon_sym_if;
	small_parse_table_33(v);
}

void	small_parse_table_33(t_small_parse_table_array *v)
{
	v->a[660] = actions(15);
	v->a[661] = 1;
	v->a[662] = anon_sym_case;
	v->a[663] = actions(17);
	v->a[664] = 1;
	v->a[665] = anon_sym_LPAREN;
	v->a[666] = actions(19);
	v->a[667] = 1;
	v->a[668] = anon_sym_LBRACE;
	v->a[669] = actions(43);
	v->a[670] = 1;
	v->a[671] = sym_word;
	v->a[672] = actions(47);
	v->a[673] = 1;
	v->a[674] = anon_sym_elif;
	v->a[675] = actions(49);
	v->a[676] = 1;
	v->a[677] = anon_sym_else;
	v->a[678] = actions(51);
	v->a[679] = 1;
	small_parse_table_34(v);
}

void	small_parse_table_34(t_small_parse_table_array *v)
{
	v->a[680] = anon_sym_BANG;
	v->a[681] = actions(55);
	v->a[682] = 1;
	v->a[683] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[684] = actions(57);
	v->a[685] = 1;
	v->a[686] = anon_sym_DOLLAR;
	v->a[687] = actions(59);
	v->a[688] = 1;
	v->a[689] = anon_sym_DQUOTE;
	v->a[690] = actions(63);
	v->a[691] = 1;
	v->a[692] = anon_sym_DOLLAR_LBRACE;
	v->a[693] = actions(65);
	v->a[694] = 1;
	v->a[695] = anon_sym_DOLLAR_LPAREN;
	v->a[696] = actions(67);
	v->a[697] = 1;
	v->a[698] = anon_sym_BQUOTE;
	v->a[699] = actions(69);
	small_parse_table_35(v);
}

/* EOF small_parse_table_6.c */
