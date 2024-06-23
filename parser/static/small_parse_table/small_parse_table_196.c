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
	v->a[19600] = actions(55);
	v->a[19601] = 8;
	v->a[19602] = anon_sym_LT;
	v->a[19603] = anon_sym_GT;
	v->a[19604] = anon_sym_GT_GT;
	v->a[19605] = anon_sym_AMP_GT;
	v->a[19606] = anon_sym_AMP_GT_GT;
	v->a[19607] = anon_sym_LT_AMP;
	v->a[19608] = anon_sym_GT_AMP;
	v->a[19609] = anon_sym_GT_PIPE;
	v->a[19610] = 25;
	v->a[19611] = actions(3);
	v->a[19612] = 1;
	v->a[19613] = sym_comment;
	v->a[19614] = actions(9);
	v->a[19615] = 1;
	v->a[19616] = anon_sym_for;
	v->a[19617] = actions(13);
	v->a[19618] = 1;
	v->a[19619] = anon_sym_if;
	small_parse_table_981(v);
}

void	small_parse_table_981(t_small_parse_table_array *v)
{
	v->a[19620] = actions(17);
	v->a[19621] = 1;
	v->a[19622] = anon_sym_LPAREN;
	v->a[19623] = actions(19);
	v->a[19624] = 1;
	v->a[19625] = anon_sym_LBRACE;
	v->a[19626] = actions(27);
	v->a[19627] = 1;
	v->a[19628] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19629] = actions(29);
	v->a[19630] = 1;
	v->a[19631] = anon_sym_DOLLAR;
	v->a[19632] = actions(31);
	v->a[19633] = 1;
	v->a[19634] = anon_sym_DQUOTE;
	v->a[19635] = actions(35);
	v->a[19636] = 1;
	v->a[19637] = anon_sym_DOLLAR_LBRACE;
	v->a[19638] = actions(37);
	v->a[19639] = 1;
	small_parse_table_982(v);
}

void	small_parse_table_982(t_small_parse_table_array *v)
{
	v->a[19640] = anon_sym_DOLLAR_LPAREN;
	v->a[19641] = actions(39);
	v->a[19642] = 1;
	v->a[19643] = anon_sym_BQUOTE;
	v->a[19644] = actions(41);
	v->a[19645] = 1;
	v->a[19646] = sym_file_descriptor;
	v->a[19647] = actions(377);
	v->a[19648] = 1;
	v->a[19649] = sym_variable_name;
	v->a[19650] = state(185);
	v->a[19651] = 1;
	v->a[19652] = sym_command_name;
	v->a[19653] = state(639);
	v->a[19654] = 1;
	v->a[19655] = sym_concatenation;
	v->a[19656] = state(745);
	v->a[19657] = 1;
	v->a[19658] = aux_sym_command_repeat1;
	v->a[19659] = state(760);
	small_parse_table_983(v);
}

void	small_parse_table_983(t_small_parse_table_array *v)
{
	v->a[19660] = 1;
	v->a[19661] = sym_file_redirect;
	v->a[19662] = state(1371);
	v->a[19663] = 1;
	v->a[19664] = aux_sym_redirected_statement_repeat2;
	v->a[19665] = state(1375);
	v->a[19666] = 1;
	v->a[19667] = sym_variable_assignment;
	v->a[19668] = actions(11);
	v->a[19669] = 2;
	v->a[19670] = anon_sym_while;
	v->a[19671] = anon_sym_until;
	v->a[19672] = actions(25);
	v->a[19673] = 2;
	v->a[19674] = anon_sym_LT_AMP_DASH;
	v->a[19675] = anon_sym_GT_AMP_DASH;
	v->a[19676] = actions(33);
	v->a[19677] = 3;
	v->a[19678] = sym_raw_string;
	v->a[19679] = sym_number;
	small_parse_table_984(v);
}

void	small_parse_table_984(t_small_parse_table_array *v)
{
	v->a[19680] = sym_word;
	v->a[19681] = state(291);
	v->a[19682] = 5;
	v->a[19683] = sym_arithmetic_expansion;
	v->a[19684] = sym_string;
	v->a[19685] = sym_simple_expansion;
	v->a[19686] = sym_expansion;
	v->a[19687] = sym_command_substitution;
	v->a[19688] = state(1379);
	v->a[19689] = 7;
	v->a[19690] = sym_for_statement;
	v->a[19691] = sym_while_statement;
	v->a[19692] = sym_if_statement;
	v->a[19693] = sym_compound_statement;
	v->a[19694] = sym_subshell;
	v->a[19695] = sym_command;
	v->a[19696] = sym__variable_assignments;
	v->a[19697] = actions(23);
	v->a[19698] = 8;
	v->a[19699] = anon_sym_LT;
	small_parse_table_985(v);
}

/* EOF small_parse_table_196.c */
