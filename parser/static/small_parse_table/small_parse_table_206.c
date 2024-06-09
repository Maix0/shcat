/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_206.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1030(t_small_parse_table_array *v)
{
	v->a[20600] = actions(43);
	v->a[20601] = 1;
	v->a[20602] = anon_sym_BQUOTE;
	v->a[20603] = actions(45);
	v->a[20604] = 1;
	v->a[20605] = sym_file_descriptor;
	v->a[20606] = actions(405);
	v->a[20607] = 1;
	v->a[20608] = sym_variable_name;
	v->a[20609] = state(182);
	v->a[20610] = 1;
	v->a[20611] = sym_command_name;
	v->a[20612] = state(565);
	v->a[20613] = 1;
	v->a[20614] = sym_concatenation;
	v->a[20615] = state(572);
	v->a[20616] = 1;
	v->a[20617] = aux_sym_command_repeat1;
	v->a[20618] = state(698);
	v->a[20619] = 1;
	small_parse_table_1031(v);
}

void	small_parse_table_1031(t_small_parse_table_array *v)
{
	v->a[20620] = sym_file_redirect;
	v->a[20621] = state(1070);
	v->a[20622] = 1;
	v->a[20623] = sym_variable_assignment;
	v->a[20624] = state(1147);
	v->a[20625] = 1;
	v->a[20626] = aux_sym_redirected_statement_repeat2;
	v->a[20627] = actions(11);
	v->a[20628] = 2;
	v->a[20629] = anon_sym_while;
	v->a[20630] = anon_sym_until;
	v->a[20631] = actions(25);
	v->a[20632] = 2;
	v->a[20633] = anon_sym_LT_AMP_DASH;
	v->a[20634] = anon_sym_GT_AMP_DASH;
	v->a[20635] = actions(33);
	v->a[20636] = 2;
	v->a[20637] = sym_raw_string;
	v->a[20638] = sym_word;
	v->a[20639] = state(311);
	small_parse_table_1032(v);
}

void	small_parse_table_1032(t_small_parse_table_array *v)
{
	v->a[20640] = 6;
	v->a[20641] = sym_arithmetic_expansion;
	v->a[20642] = sym_string;
	v->a[20643] = sym_number;
	v->a[20644] = sym_simple_expansion;
	v->a[20645] = sym_expansion;
	v->a[20646] = sym_command_substitution;
	v->a[20647] = state(1141);
	v->a[20648] = 7;
	v->a[20649] = sym_for_statement;
	v->a[20650] = sym_while_statement;
	v->a[20651] = sym_if_statement;
	v->a[20652] = sym_compound_statement;
	v->a[20653] = sym_subshell;
	v->a[20654] = sym_command;
	v->a[20655] = sym_variable_assignments;
	v->a[20656] = actions(23);
	v->a[20657] = 8;
	v->a[20658] = anon_sym_LT;
	v->a[20659] = anon_sym_GT;
	small_parse_table_1033(v);
}

void	small_parse_table_1033(t_small_parse_table_array *v)
{
	v->a[20660] = anon_sym_GT_GT;
	v->a[20661] = anon_sym_AMP_GT;
	v->a[20662] = anon_sym_AMP_GT_GT;
	v->a[20663] = anon_sym_LT_AMP;
	v->a[20664] = anon_sym_GT_AMP;
	v->a[20665] = anon_sym_GT_PIPE;
	v->a[20666] = 27;
	v->a[20667] = actions(3);
	v->a[20668] = 1;
	v->a[20669] = sym_comment;
	v->a[20670] = actions(9);
	v->a[20671] = 1;
	v->a[20672] = anon_sym_for;
	v->a[20673] = actions(13);
	v->a[20674] = 1;
	v->a[20675] = anon_sym_if;
	v->a[20676] = actions(17);
	v->a[20677] = 1;
	v->a[20678] = anon_sym_LPAREN;
	v->a[20679] = actions(19);
	small_parse_table_1034(v);
}

void	small_parse_table_1034(t_small_parse_table_array *v)
{
	v->a[20680] = 1;
	v->a[20681] = anon_sym_LBRACE;
	v->a[20682] = actions(63);
	v->a[20683] = 1;
	v->a[20684] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20685] = actions(65);
	v->a[20686] = 1;
	v->a[20687] = anon_sym_DOLLAR;
	v->a[20688] = actions(67);
	v->a[20689] = 1;
	v->a[20690] = anon_sym_DQUOTE;
	v->a[20691] = actions(71);
	v->a[20692] = 1;
	v->a[20693] = aux_sym_number_token1;
	v->a[20694] = actions(73);
	v->a[20695] = 1;
	v->a[20696] = aux_sym_number_token2;
	v->a[20697] = actions(75);
	v->a[20698] = 1;
	v->a[20699] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1035(v);
}

/* EOF small_parse_table_206.c */
