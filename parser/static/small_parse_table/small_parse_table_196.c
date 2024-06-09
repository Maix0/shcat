/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_196.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_980(t_small_parse_table_array *v)
{
	v->a[19600] = actions(389);
	v->a[19601] = 1;
	v->a[19602] = sym_raw_string;
	v->a[19603] = actions(391);
	v->a[19604] = 1;
	v->a[19605] = aux_sym_number_token1;
	v->a[19606] = actions(393);
	v->a[19607] = 1;
	v->a[19608] = aux_sym_number_token2;
	v->a[19609] = actions(395);
	v->a[19610] = 1;
	v->a[19611] = anon_sym_DOLLAR_LBRACE;
	v->a[19612] = actions(397);
	v->a[19613] = 1;
	v->a[19614] = anon_sym_DOLLAR_LPAREN;
	v->a[19615] = actions(399);
	v->a[19616] = 1;
	v->a[19617] = anon_sym_BQUOTE;
	v->a[19618] = actions(401);
	v->a[19619] = 1;
	small_parse_table_981(v);
}

void	small_parse_table_981(t_small_parse_table_array *v)
{
	v->a[19620] = sym_file_descriptor;
	v->a[19621] = actions(403);
	v->a[19622] = 1;
	v->a[19623] = sym_variable_name;
	v->a[19624] = state(271);
	v->a[19625] = 1;
	v->a[19626] = sym_command_name;
	v->a[19627] = state(581);
	v->a[19628] = 1;
	v->a[19629] = aux_sym_command_repeat1;
	v->a[19630] = state(742);
	v->a[19631] = 1;
	v->a[19632] = sym_variable_assignment;
	v->a[19633] = state(889);
	v->a[19634] = 1;
	v->a[19635] = sym_concatenation;
	v->a[19636] = state(938);
	v->a[19637] = 1;
	v->a[19638] = sym_file_redirect;
	v->a[19639] = state(1404);
	small_parse_table_982(v);
}

void	small_parse_table_982(t_small_parse_table_array *v)
{
	v->a[19640] = 1;
	v->a[19641] = aux_sym_redirected_statement_repeat2;
	v->a[19642] = state(1427);
	v->a[19643] = 1;
	v->a[19644] = sym_pipeline;
	v->a[19645] = actions(367);
	v->a[19646] = 2;
	v->a[19647] = anon_sym_while;
	v->a[19648] = anon_sym_until;
	v->a[19649] = actions(381);
	v->a[19650] = 2;
	v->a[19651] = anon_sym_LT_AMP_DASH;
	v->a[19652] = anon_sym_GT_AMP_DASH;
	v->a[19653] = state(768);
	v->a[19654] = 6;
	v->a[19655] = sym_arithmetic_expansion;
	v->a[19656] = sym_string;
	v->a[19657] = sym_number;
	v->a[19658] = sym_simple_expansion;
	v->a[19659] = sym_expansion;
	small_parse_table_983(v);
}

void	small_parse_table_983(t_small_parse_table_array *v)
{
	v->a[19660] = sym_command_substitution;
	v->a[19661] = actions(379);
	v->a[19662] = 8;
	v->a[19663] = anon_sym_LT;
	v->a[19664] = anon_sym_GT;
	v->a[19665] = anon_sym_GT_GT;
	v->a[19666] = anon_sym_AMP_GT;
	v->a[19667] = anon_sym_AMP_GT_GT;
	v->a[19668] = anon_sym_LT_AMP;
	v->a[19669] = anon_sym_GT_AMP;
	v->a[19670] = anon_sym_GT_PIPE;
	v->a[19671] = state(1510);
	v->a[19672] = 13;
	v->a[19673] = sym__statement_not_pipeline;
	v->a[19674] = sym_redirected_statement;
	v->a[19675] = sym_for_statement;
	v->a[19676] = sym_while_statement;
	v->a[19677] = sym_if_statement;
	v->a[19678] = sym_case_statement;
	v->a[19679] = sym_function_definition;
	small_parse_table_984(v);
}

void	small_parse_table_984(t_small_parse_table_array *v)
{
	v->a[19680] = sym_compound_statement;
	v->a[19681] = sym_subshell;
	v->a[19682] = sym_list;
	v->a[19683] = sym_negated_command;
	v->a[19684] = sym_command;
	v->a[19685] = sym_variable_assignments;
	v->a[19686] = 31;
	v->a[19687] = actions(3);
	v->a[19688] = 1;
	v->a[19689] = sym_comment;
	v->a[19690] = actions(9);
	v->a[19691] = 1;
	v->a[19692] = anon_sym_for;
	v->a[19693] = actions(13);
	v->a[19694] = 1;
	v->a[19695] = anon_sym_if;
	v->a[19696] = actions(15);
	v->a[19697] = 1;
	v->a[19698] = anon_sym_case;
	v->a[19699] = actions(17);
	small_parse_table_985(v);
}

/* EOF small_parse_table_196.c */
