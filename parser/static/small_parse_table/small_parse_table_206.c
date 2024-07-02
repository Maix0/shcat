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
	v->a[20600] = anon_sym_LT_LT;
	v->a[20601] = anon_sym_LT_LT_DASH;
	v->a[20602] = aux_sym_heredoc_redirect_token1;
	v->a[20603] = anon_sym_AMP;
	v->a[20604] = anon_sym_SEMI;
	v->a[20605] = 14;
	v->a[20606] = actions(3);
	v->a[20607] = 1;
	v->a[20608] = sym_comment;
	v->a[20609] = actions(479);
	v->a[20610] = 1;
	v->a[20611] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20612] = actions(481);
	v->a[20613] = 1;
	v->a[20614] = anon_sym_DOLLAR;
	v->a[20615] = actions(483);
	v->a[20616] = 1;
	v->a[20617] = anon_sym_DQUOTE;
	v->a[20618] = actions(485);
	v->a[20619] = 1;
	small_parse_table_1031(v);
}

void	small_parse_table_1031(t_small_parse_table_array *v)
{
	v->a[20620] = anon_sym_DOLLAR_LBRACE;
	v->a[20621] = actions(487);
	v->a[20622] = 1;
	v->a[20623] = anon_sym_DOLLAR_LPAREN;
	v->a[20624] = actions(489);
	v->a[20625] = 1;
	v->a[20626] = anon_sym_BQUOTE;
	v->a[20627] = actions(491);
	v->a[20628] = 1;
	v->a[20629] = sym__bare_dollar;
	v->a[20630] = state(194);
	v->a[20631] = 1;
	v->a[20632] = aux_sym_command_repeat2;
	v->a[20633] = state(637);
	v->a[20634] = 1;
	v->a[20635] = sym_concatenation;
	v->a[20636] = actions(507);
	v->a[20637] = 2;
	v->a[20638] = sym_file_descriptor;
	v->a[20639] = ts_builtin_sym_end;
	small_parse_table_1032(v);
}

void	small_parse_table_1032(t_small_parse_table_array *v)
{
	v->a[20640] = actions(477);
	v->a[20641] = 3;
	v->a[20642] = sym_raw_string;
	v->a[20643] = sym_number;
	v->a[20644] = sym_word;
	v->a[20645] = state(431);
	v->a[20646] = 5;
	v->a[20647] = sym_arithmetic_expansion;
	v->a[20648] = sym_string;
	v->a[20649] = sym_simple_expansion;
	v->a[20650] = sym_expansion;
	v->a[20651] = sym_command_substitution;
	v->a[20652] = actions(505);
	v->a[20653] = 16;
	v->a[20654] = anon_sym_PIPE;
	v->a[20655] = anon_sym_SEMI_SEMI;
	v->a[20656] = anon_sym_AMP_AMP;
	v->a[20657] = anon_sym_PIPE_PIPE;
	v->a[20658] = anon_sym_LT;
	v->a[20659] = anon_sym_GT;
	small_parse_table_1033(v);
}

void	small_parse_table_1033(t_small_parse_table_array *v)
{
	v->a[20660] = anon_sym_GT_GT;
	v->a[20661] = anon_sym_LT_AMP;
	v->a[20662] = anon_sym_GT_AMP;
	v->a[20663] = anon_sym_GT_PIPE;
	v->a[20664] = anon_sym_LT_GT;
	v->a[20665] = anon_sym_LT_LT;
	v->a[20666] = anon_sym_LT_LT_DASH;
	v->a[20667] = aux_sym_heredoc_redirect_token1;
	v->a[20668] = anon_sym_AMP;
	v->a[20669] = anon_sym_SEMI;
	v->a[20670] = 5;
	v->a[20671] = actions(3);
	v->a[20672] = 1;
	v->a[20673] = sym_comment;
	v->a[20674] = actions(511);
	v->a[20675] = 2;
	v->a[20676] = sym_file_descriptor;
	v->a[20677] = sym_variable_name;
	v->a[20678] = state(195);
	v->a[20679] = 2;
	small_parse_table_1034(v);
}

void	small_parse_table_1034(t_small_parse_table_array *v)
{
	v->a[20680] = sym_concatenation;
	v->a[20681] = aux_sym_for_statement_repeat1;
	v->a[20682] = state(435);
	v->a[20683] = 5;
	v->a[20684] = sym_arithmetic_expansion;
	v->a[20685] = sym_string;
	v->a[20686] = sym_simple_expansion;
	v->a[20687] = sym_expansion;
	v->a[20688] = sym_command_substitution;
	v->a[20689] = actions(509);
	v->a[20690] = 26;
	v->a[20691] = anon_sym_PIPE;
	v->a[20692] = anon_sym_RPAREN;
	v->a[20693] = anon_sym_SEMI_SEMI;
	v->a[20694] = anon_sym_AMP_AMP;
	v->a[20695] = anon_sym_PIPE_PIPE;
	v->a[20696] = anon_sym_LT;
	v->a[20697] = anon_sym_GT;
	v->a[20698] = anon_sym_GT_GT;
	v->a[20699] = anon_sym_LT_AMP;
	small_parse_table_1035(v);
}

/* EOF small_parse_table_206.c */
