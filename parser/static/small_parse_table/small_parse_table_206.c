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
	v->a[20601] = aux_sym_command_repeat2;
	v->a[20602] = state(570);
	v->a[20603] = 1;
	v->a[20604] = sym_concatenation;
	v->a[20605] = actions(843);
	v->a[20606] = 3;
	v->a[20607] = sym_raw_string;
	v->a[20608] = sym_number;
	v->a[20609] = sym_word;
	v->a[20610] = state(574);
	v->a[20611] = 5;
	v->a[20612] = sym_arithmetic_expansion;
	v->a[20613] = sym_string;
	v->a[20614] = sym_simple_expansion;
	v->a[20615] = sym_expansion;
	v->a[20616] = sym_command_substitution;
	v->a[20617] = actions(455);
	v->a[20618] = 8;
	v->a[20619] = anon_sym_PIPE;
	small_parse_table_1031(v);
}

void	small_parse_table_1031(t_small_parse_table_array *v)
{
	v->a[20620] = anon_sym_AMP_AMP;
	v->a[20621] = anon_sym_PIPE_PIPE;
	v->a[20622] = anon_sym_LT;
	v->a[20623] = anon_sym_GT;
	v->a[20624] = anon_sym_GT_GT;
	v->a[20625] = anon_sym_LT_LT;
	v->a[20626] = aux_sym_heredoc_redirect_token1;
	v->a[20627] = 12;
	v->a[20628] = actions(3);
	v->a[20629] = 1;
	v->a[20630] = sym_comment;
	v->a[20631] = actions(448);
	v->a[20632] = 1;
	v->a[20633] = sym_variable_name;
	v->a[20634] = actions(558);
	v->a[20635] = 1;
	v->a[20636] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20637] = actions(561);
	v->a[20638] = 1;
	v->a[20639] = anon_sym_DOLLAR;
	small_parse_table_1032(v);
}

void	small_parse_table_1032(t_small_parse_table_array *v)
{
	v->a[20640] = actions(564);
	v->a[20641] = 1;
	v->a[20642] = anon_sym_DQUOTE;
	v->a[20643] = actions(567);
	v->a[20644] = 1;
	v->a[20645] = anon_sym_DOLLAR_LBRACE;
	v->a[20646] = actions(570);
	v->a[20647] = 1;
	v->a[20648] = anon_sym_DOLLAR_LPAREN;
	v->a[20649] = actions(573);
	v->a[20650] = 1;
	v->a[20651] = anon_sym_BQUOTE;
	v->a[20652] = state(242);
	v->a[20653] = 2;
	v->a[20654] = sym_concatenation;
	v->a[20655] = aux_sym_for_statement_repeat1;
	v->a[20656] = actions(846);
	v->a[20657] = 3;
	v->a[20658] = sym_raw_string;
	v->a[20659] = sym_number;
	small_parse_table_1033(v);
}

void	small_parse_table_1033(t_small_parse_table_array *v)
{
	v->a[20660] = sym_word;
	v->a[20661] = state(530);
	v->a[20662] = 5;
	v->a[20663] = sym_arithmetic_expansion;
	v->a[20664] = sym_string;
	v->a[20665] = sym_simple_expansion;
	v->a[20666] = sym_expansion;
	v->a[20667] = sym_command_substitution;
	v->a[20668] = actions(428);
	v->a[20669] = 8;
	v->a[20670] = anon_sym_PIPE;
	v->a[20671] = anon_sym_AMP_AMP;
	v->a[20672] = anon_sym_PIPE_PIPE;
	v->a[20673] = anon_sym_LT;
	v->a[20674] = anon_sym_GT;
	v->a[20675] = anon_sym_GT_GT;
	v->a[20676] = anon_sym_LT_LT;
	v->a[20677] = aux_sym_heredoc_redirect_token1;
	v->a[20678] = 7;
	v->a[20679] = actions(3);
	small_parse_table_1034(v);
}

void	small_parse_table_1034(t_small_parse_table_array *v)
{
	v->a[20680] = 1;
	v->a[20681] = sym_comment;
	v->a[20682] = actions(849);
	v->a[20683] = 1;
	v->a[20684] = anon_sym_LPAREN;
	v->a[20685] = actions(851);
	v->a[20686] = 1;
	v->a[20687] = aux_sym_concatenation_token1;
	v->a[20688] = actions(853);
	v->a[20689] = 1;
	v->a[20690] = sym__concat;
	v->a[20691] = state(266);
	v->a[20692] = 1;
	v->a[20693] = aux_sym_concatenation_repeat1;
	v->a[20694] = actions(841);
	v->a[20695] = 2;
	v->a[20696] = sym__bare_dollar;
	v->a[20697] = ts_builtin_sym_end;
	v->a[20698] = actions(833);
	v->a[20699] = 19;
	small_parse_table_1035(v);
}

/* EOF small_parse_table_206.c */
