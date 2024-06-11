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
	v->a[600] = aux_sym__terminated_statement;
	v->a[601] = state(187);
	v->a[602] = 1;
	v->a[603] = sym_command_name;
	v->a[604] = state(288);
	v->a[605] = 1;
	v->a[606] = sym_variable_assignment;
	v->a[607] = state(647);
	v->a[608] = 1;
	v->a[609] = sym_concatenation;
	v->a[610] = state(736);
	v->a[611] = 1;
	v->a[612] = aux_sym_command_repeat1;
	v->a[613] = state(738);
	v->a[614] = 1;
	v->a[615] = sym_file_redirect;
	v->a[616] = state(1443);
	v->a[617] = 1;
	v->a[618] = sym_pipeline;
	v->a[619] = state(1460);
	small_parse_table_31(v);
}

void	small_parse_table_31(t_small_parse_table_array *v)
{
	v->a[620] = 1;
	v->a[621] = aux_sym_redirected_statement_repeat2;
	v->a[622] = state(2269);
	v->a[623] = 1;
	v->a[624] = sym__statement_not_pipeline;
	v->a[625] = state(2455);
	v->a[626] = 1;
	v->a[627] = sym_else_clause;
	v->a[628] = actions(11);
	v->a[629] = 2;
	v->a[630] = anon_sym_while;
	v->a[631] = anon_sym_until;
	v->a[632] = actions(57);
	v->a[633] = 2;
	v->a[634] = anon_sym_LT_AMP_DASH;
	v->a[635] = anon_sym_GT_AMP_DASH;
	v->a[636] = actions(65);
	v->a[637] = 2;
	v->a[638] = sym_raw_string;
	v->a[639] = sym_number;
	small_parse_table_32(v);
}

void	small_parse_table_32(t_small_parse_table_array *v)
{
	v->a[640] = state(2144);
	v->a[641] = 2;
	v->a[642] = sym_elif_clause;
	v->a[643] = aux_sym_if_statement_repeat1;
	v->a[644] = state(394);
	v->a[645] = 5;
	v->a[646] = sym_arithmetic_expansion;
	v->a[647] = sym_string;
	v->a[648] = sym_simple_expansion;
	v->a[649] = sym_expansion;
	v->a[650] = sym_command_substitution;
	v->a[651] = actions(55);
	v->a[652] = 8;
	v->a[653] = anon_sym_LT;
	v->a[654] = anon_sym_GT;
	v->a[655] = anon_sym_GT_GT;
	v->a[656] = anon_sym_AMP_GT;
	v->a[657] = anon_sym_AMP_GT_GT;
	v->a[658] = anon_sym_LT_AMP;
	v->a[659] = anon_sym_GT_AMP;
	small_parse_table_33(v);
}

void	small_parse_table_33(t_small_parse_table_array *v)
{
	v->a[660] = anon_sym_GT_PIPE;
	v->a[661] = state(1413);
	v->a[662] = 12;
	v->a[663] = sym_redirected_statement;
	v->a[664] = sym_for_statement;
	v->a[665] = sym_while_statement;
	v->a[666] = sym_if_statement;
	v->a[667] = sym_case_statement;
	v->a[668] = sym_function_definition;
	v->a[669] = sym_compound_statement;
	v->a[670] = sym_subshell;
	v->a[671] = sym_list;
	v->a[672] = sym_negated_command;
	v->a[673] = sym_command;
	v->a[674] = sym_variable_assignments;
	v->a[675] = 36;
	v->a[676] = actions(3);
	v->a[677] = 1;
	v->a[678] = sym_comment;
	v->a[679] = actions(9);
	small_parse_table_34(v);
}

void	small_parse_table_34(t_small_parse_table_array *v)
{
	v->a[680] = 1;
	v->a[681] = anon_sym_for;
	v->a[682] = actions(13);
	v->a[683] = 1;
	v->a[684] = anon_sym_if;
	v->a[685] = actions(15);
	v->a[686] = 1;
	v->a[687] = anon_sym_case;
	v->a[688] = actions(17);
	v->a[689] = 1;
	v->a[690] = anon_sym_LPAREN;
	v->a[691] = actions(19);
	v->a[692] = 1;
	v->a[693] = anon_sym_LBRACE;
	v->a[694] = actions(45);
	v->a[695] = 1;
	v->a[696] = sym_word;
	v->a[697] = actions(49);
	v->a[698] = 1;
	v->a[699] = anon_sym_elif;
	small_parse_table_35(v);
}

/* EOF small_parse_table_6.c */
