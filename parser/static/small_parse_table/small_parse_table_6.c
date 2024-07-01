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
	v->a[601] = sym_concatenation;
	v->a[602] = state(712);
	v->a[603] = 1;
	v->a[604] = sym_file_redirect;
	v->a[605] = state(713);
	v->a[606] = 1;
	v->a[607] = aux_sym_command_repeat1;
	v->a[608] = state(1196);
	v->a[609] = 1;
	v->a[610] = sym_pipeline;
	v->a[611] = state(1333);
	v->a[612] = 1;
	v->a[613] = aux_sym_redirected_statement_repeat2;
	v->a[614] = state(2103);
	v->a[615] = 1;
	v->a[616] = sym__statement_not_pipeline;
	v->a[617] = state(2304);
	v->a[618] = 1;
	v->a[619] = sym_else_clause;
	small_parse_table_31(v);
}

void	small_parse_table_31(t_small_parse_table_array *v)
{
	v->a[620] = actions(11);
	v->a[621] = 2;
	v->a[622] = anon_sym_while;
	v->a[623] = anon_sym_until;
	v->a[624] = actions(57);
	v->a[625] = 2;
	v->a[626] = anon_sym_LT_AMP_DASH;
	v->a[627] = anon_sym_GT_AMP_DASH;
	v->a[628] = actions(65);
	v->a[629] = 2;
	v->a[630] = sym_raw_string;
	v->a[631] = sym_number;
	v->a[632] = state(2008);
	v->a[633] = 2;
	v->a[634] = sym_elif_clause;
	v->a[635] = aux_sym_if_statement_repeat1;
	v->a[636] = state(443);
	v->a[637] = 5;
	v->a[638] = sym_arithmetic_expansion;
	v->a[639] = sym_string;
	small_parse_table_32(v);
}

void	small_parse_table_32(t_small_parse_table_array *v)
{
	v->a[640] = sym_simple_expansion;
	v->a[641] = sym_expansion;
	v->a[642] = sym_command_substitution;
	v->a[643] = actions(55);
	v->a[644] = 6;
	v->a[645] = anon_sym_LT;
	v->a[646] = anon_sym_GT;
	v->a[647] = anon_sym_GT_GT;
	v->a[648] = anon_sym_LT_AMP;
	v->a[649] = anon_sym_GT_AMP;
	v->a[650] = anon_sym_GT_PIPE;
	v->a[651] = state(1187);
	v->a[652] = 12;
	v->a[653] = sym_redirected_statement;
	v->a[654] = sym_for_statement;
	v->a[655] = sym_while_statement;
	v->a[656] = sym_if_statement;
	v->a[657] = sym_case_statement;
	v->a[658] = sym_function_definition;
	v->a[659] = sym_compound_statement;
	small_parse_table_33(v);
}

void	small_parse_table_33(t_small_parse_table_array *v)
{
	v->a[660] = sym_subshell;
	v->a[661] = sym_list;
	v->a[662] = sym_negated_command;
	v->a[663] = sym_command;
	v->a[664] = sym__variable_assignments;
	v->a[665] = 36;
	v->a[666] = actions(3);
	v->a[667] = 1;
	v->a[668] = sym_comment;
	v->a[669] = actions(9);
	v->a[670] = 1;
	v->a[671] = anon_sym_for;
	v->a[672] = actions(13);
	v->a[673] = 1;
	v->a[674] = anon_sym_if;
	v->a[675] = actions(15);
	v->a[676] = 1;
	v->a[677] = anon_sym_case;
	v->a[678] = actions(17);
	v->a[679] = 1;
	small_parse_table_34(v);
}

void	small_parse_table_34(t_small_parse_table_array *v)
{
	v->a[680] = anon_sym_LPAREN;
	v->a[681] = actions(19);
	v->a[682] = 1;
	v->a[683] = anon_sym_LBRACE;
	v->a[684] = actions(45);
	v->a[685] = 1;
	v->a[686] = sym_word;
	v->a[687] = actions(49);
	v->a[688] = 1;
	v->a[689] = anon_sym_elif;
	v->a[690] = actions(51);
	v->a[691] = 1;
	v->a[692] = anon_sym_else;
	v->a[693] = actions(53);
	v->a[694] = 1;
	v->a[695] = anon_sym_BANG;
	v->a[696] = actions(59);
	v->a[697] = 1;
	v->a[698] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[699] = actions(61);
	small_parse_table_35(v);
}

/* EOF small_parse_table_6.c */
