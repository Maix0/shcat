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
	v->a[20600] = 1;
	v->a[20601] = sym_file_descriptor;
	v->a[20602] = actions(435);
	v->a[20603] = 1;
	v->a[20604] = sym_variable_name;
	v->a[20605] = actions(433);
	v->a[20606] = 2;
	v->a[20607] = aux_sym__simple_variable_name_token1;
	v->a[20608] = aux_sym__multiline_variable_name_token1;
	v->a[20609] = actions(431);
	v->a[20610] = 9;
	v->a[20611] = anon_sym_BANG;
	v->a[20612] = anon_sym_DASH;
	v->a[20613] = anon_sym_STAR;
	v->a[20614] = anon_sym_QMARK;
	v->a[20615] = anon_sym_DOLLAR;
	v->a[20616] = anon_sym_POUND;
	v->a[20617] = anon_sym_AT;
	v->a[20618] = anon_sym_0;
	v->a[20619] = anon_sym__;
	small_parse_table_1031(v);
}

void	small_parse_table_1031(t_small_parse_table_array *v)
{
	v->a[20620] = actions(381);
	v->a[20621] = 25;
	v->a[20622] = anon_sym_PIPE;
	v->a[20623] = anon_sym_SEMI_SEMI;
	v->a[20624] = anon_sym_AMP_AMP;
	v->a[20625] = anon_sym_PIPE_PIPE;
	v->a[20626] = anon_sym_LT;
	v->a[20627] = anon_sym_GT;
	v->a[20628] = anon_sym_GT_GT;
	v->a[20629] = anon_sym_LT_AMP;
	v->a[20630] = anon_sym_GT_AMP;
	v->a[20631] = anon_sym_GT_PIPE;
	v->a[20632] = anon_sym_LT_AMP_DASH;
	v->a[20633] = anon_sym_GT_AMP_DASH;
	v->a[20634] = anon_sym_LT_LT;
	v->a[20635] = anon_sym_LT_LT_DASH;
	v->a[20636] = aux_sym_heredoc_redirect_token1;
	v->a[20637] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20638] = anon_sym_AMP;
	v->a[20639] = anon_sym_DQUOTE;
	small_parse_table_1032(v);
}

void	small_parse_table_1032(t_small_parse_table_array *v)
{
	v->a[20640] = sym_raw_string;
	v->a[20641] = sym_number;
	v->a[20642] = anon_sym_DOLLAR_LBRACE;
	v->a[20643] = anon_sym_DOLLAR_LPAREN;
	v->a[20644] = anon_sym_BQUOTE;
	v->a[20645] = sym_word;
	v->a[20646] = anon_sym_SEMI;
	v->a[20647] = 16;
	v->a[20648] = actions(3);
	v->a[20649] = 1;
	v->a[20650] = sym_comment;
	v->a[20651] = actions(166);
	v->a[20652] = 1;
	v->a[20653] = anon_sym_LPAREN;
	v->a[20654] = actions(493);
	v->a[20655] = 1;
	v->a[20656] = sym_file_descriptor;
	v->a[20657] = actions(497);
	v->a[20658] = 1;
	v->a[20659] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1033(v);
}

void	small_parse_table_1033(t_small_parse_table_array *v)
{
	v->a[20660] = actions(499);
	v->a[20661] = 1;
	v->a[20662] = anon_sym_DOLLAR;
	v->a[20663] = actions(501);
	v->a[20664] = 1;
	v->a[20665] = anon_sym_DQUOTE;
	v->a[20666] = actions(503);
	v->a[20667] = 1;
	v->a[20668] = anon_sym_DOLLAR_LBRACE;
	v->a[20669] = actions(505);
	v->a[20670] = 1;
	v->a[20671] = anon_sym_DOLLAR_LPAREN;
	v->a[20672] = actions(507);
	v->a[20673] = 1;
	v->a[20674] = anon_sym_BQUOTE;
	v->a[20675] = actions(509);
	v->a[20676] = 1;
	v->a[20677] = sym__bare_dollar;
	v->a[20678] = state(193);
	v->a[20679] = 1;
	small_parse_table_1034(v);
}

void	small_parse_table_1034(t_small_parse_table_array *v)
{
	v->a[20680] = aux_sym_command_repeat2;
	v->a[20681] = state(725);
	v->a[20682] = 1;
	v->a[20683] = sym_concatenation;
	v->a[20684] = state(1354);
	v->a[20685] = 1;
	v->a[20686] = sym_subshell;
	v->a[20687] = actions(495);
	v->a[20688] = 3;
	v->a[20689] = sym_raw_string;
	v->a[20690] = sym_number;
	v->a[20691] = sym_word;
	v->a[20692] = state(438);
	v->a[20693] = 5;
	v->a[20694] = sym_arithmetic_expansion;
	v->a[20695] = sym_string;
	v->a[20696] = sym_simple_expansion;
	v->a[20697] = sym_expansion;
	v->a[20698] = sym_command_substitution;
	v->a[20699] = actions(491);
	small_parse_table_1035(v);
}

/* EOF small_parse_table_206.c */
