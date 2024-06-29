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
	v->a[20600] = anon_sym_SEMI_SEMI;
	v->a[20601] = anon_sym_AMP_AMP;
	v->a[20602] = anon_sym_PIPE_PIPE;
	v->a[20603] = anon_sym_LT;
	v->a[20604] = anon_sym_GT;
	v->a[20605] = anon_sym_GT_GT;
	v->a[20606] = anon_sym_AMP_GT;
	v->a[20607] = anon_sym_AMP_GT_GT;
	v->a[20608] = anon_sym_LT_AMP;
	v->a[20609] = anon_sym_GT_AMP;
	v->a[20610] = anon_sym_GT_PIPE;
	v->a[20611] = anon_sym_LT_AMP_DASH;
	v->a[20612] = anon_sym_GT_AMP_DASH;
	v->a[20613] = anon_sym_LT_LT;
	v->a[20614] = anon_sym_LT_LT_DASH;
	v->a[20615] = aux_sym_heredoc_redirect_token1;
	v->a[20616] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20617] = anon_sym_AMP;
	v->a[20618] = anon_sym_DQUOTE;
	v->a[20619] = sym_raw_string;
	small_parse_table_1031(v);
}

void	small_parse_table_1031(t_small_parse_table_array *v)
{
	v->a[20620] = sym_number;
	v->a[20621] = anon_sym_DOLLAR_LBRACE;
	v->a[20622] = anon_sym_DOLLAR_LPAREN;
	v->a[20623] = anon_sym_BQUOTE;
	v->a[20624] = sym_word;
	v->a[20625] = anon_sym_SEMI;
	v->a[20626] = 6;
	v->a[20627] = actions(3);
	v->a[20628] = 1;
	v->a[20629] = sym_comment;
	v->a[20630] = actions(385);
	v->a[20631] = 1;
	v->a[20632] = sym_file_descriptor;
	v->a[20633] = actions(453);
	v->a[20634] = 1;
	v->a[20635] = sym_variable_name;
	v->a[20636] = actions(451);
	v->a[20637] = 2;
	v->a[20638] = aux_sym__simple_variable_name_token1;
	v->a[20639] = aux_sym__multiline_variable_name_token1;
	small_parse_table_1032(v);
}

void	small_parse_table_1032(t_small_parse_table_array *v)
{
	v->a[20640] = actions(449);
	v->a[20641] = 9;
	v->a[20642] = anon_sym_BANG;
	v->a[20643] = anon_sym_DASH;
	v->a[20644] = anon_sym_STAR;
	v->a[20645] = anon_sym_QMARK;
	v->a[20646] = anon_sym_DOLLAR;
	v->a[20647] = anon_sym_POUND;
	v->a[20648] = anon_sym_AT;
	v->a[20649] = anon_sym_0;
	v->a[20650] = anon_sym__;
	v->a[20651] = actions(379);
	v->a[20652] = 28;
	v->a[20653] = anon_sym_esac;
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
	v->a[20661] = anon_sym_AMP_GT;
	v->a[20662] = anon_sym_AMP_GT_GT;
	v->a[20663] = anon_sym_LT_AMP;
	v->a[20664] = anon_sym_GT_AMP;
	v->a[20665] = anon_sym_GT_PIPE;
	v->a[20666] = anon_sym_LT_AMP_DASH;
	v->a[20667] = anon_sym_GT_AMP_DASH;
	v->a[20668] = anon_sym_LT_LT;
	v->a[20669] = anon_sym_LT_LT_DASH;
	v->a[20670] = aux_sym_heredoc_redirect_token1;
	v->a[20671] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20672] = anon_sym_AMP;
	v->a[20673] = anon_sym_DQUOTE;
	v->a[20674] = sym_raw_string;
	v->a[20675] = sym_number;
	v->a[20676] = anon_sym_DOLLAR_LBRACE;
	v->a[20677] = anon_sym_DOLLAR_LPAREN;
	v->a[20678] = anon_sym_BQUOTE;
	v->a[20679] = sym_word;
	small_parse_table_1034(v);
}

void	small_parse_table_1034(t_small_parse_table_array *v)
{
	v->a[20680] = anon_sym_SEMI;
	v->a[20681] = 16;
	v->a[20682] = actions(3);
	v->a[20683] = 1;
	v->a[20684] = sym_comment;
	v->a[20685] = actions(17);
	v->a[20686] = 1;
	v->a[20687] = anon_sym_LPAREN;
	v->a[20688] = actions(461);
	v->a[20689] = 1;
	v->a[20690] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20691] = actions(463);
	v->a[20692] = 1;
	v->a[20693] = anon_sym_DOLLAR;
	v->a[20694] = actions(465);
	v->a[20695] = 1;
	v->a[20696] = anon_sym_DQUOTE;
	v->a[20697] = actions(467);
	v->a[20698] = 1;
	v->a[20699] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1035(v);
}

/* EOF small_parse_table_206.c */
