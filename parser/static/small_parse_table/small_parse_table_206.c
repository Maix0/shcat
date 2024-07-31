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
	v->a[20600] = sym_string;
	v->a[20601] = sym_simple_expansion;
	v->a[20602] = sym_expansion;
	v->a[20603] = sym_command_substitution;
	v->a[20604] = actions(497);
	v->a[20605] = 16;
	v->a[20606] = anon_sym_PIPE;
	v->a[20607] = anon_sym_RPAREN;
	v->a[20608] = anon_sym_SEMI_SEMI;
	v->a[20609] = anon_sym_AMP_AMP;
	v->a[20610] = anon_sym_PIPE_PIPE;
	v->a[20611] = anon_sym_LT;
	v->a[20612] = anon_sym_GT;
	v->a[20613] = anon_sym_GT_GT;
	v->a[20614] = anon_sym_LT_AMP;
	v->a[20615] = anon_sym_GT_AMP;
	v->a[20616] = anon_sym_GT_PIPE;
	v->a[20617] = anon_sym_LT_GT;
	v->a[20618] = anon_sym_LT_LT;
	v->a[20619] = anon_sym_LT_LT_DASH;
	small_parse_table_1031(v);
}

void	small_parse_table_1031(t_small_parse_table_array *v)
{
	v->a[20620] = aux_sym_heredoc_redirect_token1;
	v->a[20621] = anon_sym_SEMI;
	v->a[20622] = 13;
	v->a[20623] = actions(3);
	v->a[20624] = 1;
	v->a[20625] = sym_comment;
	v->a[20626] = actions(99);
	v->a[20627] = 1;
	v->a[20628] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20629] = actions(101);
	v->a[20630] = 1;
	v->a[20631] = anon_sym_DOLLAR;
	v->a[20632] = actions(103);
	v->a[20633] = 1;
	v->a[20634] = anon_sym_DQUOTE;
	v->a[20635] = actions(107);
	v->a[20636] = 1;
	v->a[20637] = anon_sym_DOLLAR_LBRACE;
	v->a[20638] = actions(109);
	v->a[20639] = 1;
	small_parse_table_1032(v);
}

void	small_parse_table_1032(t_small_parse_table_array *v)
{
	v->a[20640] = anon_sym_DOLLAR_LPAREN;
	v->a[20641] = actions(111);
	v->a[20642] = 1;
	v->a[20643] = anon_sym_BQUOTE;
	v->a[20644] = actions(499);
	v->a[20645] = 1;
	v->a[20646] = sym__bare_dollar;
	v->a[20647] = state(239);
	v->a[20648] = 1;
	v->a[20649] = aux_sym_command_repeat2;
	v->a[20650] = state(592);
	v->a[20651] = 1;
	v->a[20652] = sym_concatenation;
	v->a[20653] = actions(495);
	v->a[20654] = 3;
	v->a[20655] = sym_raw_string;
	v->a[20656] = sym_number;
	v->a[20657] = sym_word;
	v->a[20658] = state(357);
	v->a[20659] = 5;
	small_parse_table_1033(v);
}

void	small_parse_table_1033(t_small_parse_table_array *v)
{
	v->a[20660] = sym_arithmetic_expansion;
	v->a[20661] = sym_string;
	v->a[20662] = sym_simple_expansion;
	v->a[20663] = sym_expansion;
	v->a[20664] = sym_command_substitution;
	v->a[20665] = actions(565);
	v->a[20666] = 16;
	v->a[20667] = anon_sym_esac;
	v->a[20668] = anon_sym_PIPE;
	v->a[20669] = anon_sym_SEMI_SEMI;
	v->a[20670] = anon_sym_AMP_AMP;
	v->a[20671] = anon_sym_PIPE_PIPE;
	v->a[20672] = anon_sym_LT;
	v->a[20673] = anon_sym_GT;
	v->a[20674] = anon_sym_GT_GT;
	v->a[20675] = anon_sym_LT_AMP;
	v->a[20676] = anon_sym_GT_AMP;
	v->a[20677] = anon_sym_GT_PIPE;
	v->a[20678] = anon_sym_LT_GT;
	v->a[20679] = anon_sym_LT_LT;
	small_parse_table_1034(v);
}

void	small_parse_table_1034(t_small_parse_table_array *v)
{
	v->a[20680] = anon_sym_LT_LT_DASH;
	v->a[20681] = aux_sym_heredoc_redirect_token1;
	v->a[20682] = anon_sym_SEMI;
	v->a[20683] = 7;
	v->a[20684] = actions(407);
	v->a[20685] = 1;
	v->a[20686] = sym_comment;
	v->a[20687] = actions(579);
	v->a[20688] = 2;
	v->a[20689] = anon_sym_GT_GT;
	v->a[20690] = anon_sym_LT_LT;
	v->a[20691] = actions(591);
	v->a[20692] = 2;
	v->a[20693] = anon_sym_PLUS;
	v->a[20694] = anon_sym_DASH;
	v->a[20695] = actions(597);
	v->a[20696] = 2;
	v->a[20697] = anon_sym_PLUS_PLUS2;
	v->a[20698] = anon_sym_DASH_DASH2;
	v->a[20699] = actions(593);
	small_parse_table_1035(v);
}

/* EOF small_parse_table_206.c */
