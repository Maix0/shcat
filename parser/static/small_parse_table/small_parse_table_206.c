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
	v->a[20600] = anon_sym_LT_GT;
	v->a[20601] = anon_sym_LT_LT;
	v->a[20602] = anon_sym_LT_LT_DASH;
	v->a[20603] = aux_sym_heredoc_redirect_token1;
	v->a[20604] = anon_sym_SEMI;
	v->a[20605] = 14;
	v->a[20606] = actions(3);
	v->a[20607] = 1;
	v->a[20608] = sym_comment;
	v->a[20609] = actions(564);
	v->a[20610] = 1;
	v->a[20611] = sym_file_descriptor;
	v->a[20612] = actions(604);
	v->a[20613] = 1;
	v->a[20614] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20615] = actions(607);
	v->a[20616] = 1;
	v->a[20617] = anon_sym_DOLLAR;
	v->a[20618] = actions(610);
	v->a[20619] = 1;
	small_parse_table_1031(v);
}

void	small_parse_table_1031(t_small_parse_table_array *v)
{
	v->a[20620] = anon_sym_DQUOTE;
	v->a[20621] = actions(613);
	v->a[20622] = 1;
	v->a[20623] = anon_sym_DOLLAR_LBRACE;
	v->a[20624] = actions(616);
	v->a[20625] = 1;
	v->a[20626] = anon_sym_DOLLAR_LPAREN;
	v->a[20627] = actions(619);
	v->a[20628] = 1;
	v->a[20629] = anon_sym_BQUOTE;
	v->a[20630] = actions(622);
	v->a[20631] = 1;
	v->a[20632] = sym__bare_dollar;
	v->a[20633] = state(202);
	v->a[20634] = 1;
	v->a[20635] = aux_sym_command_repeat2;
	v->a[20636] = state(674);
	v->a[20637] = 1;
	v->a[20638] = sym_concatenation;
	v->a[20639] = actions(601);
	small_parse_table_1032(v);
}

void	small_parse_table_1032(t_small_parse_table_array *v)
{
	v->a[20640] = 3;
	v->a[20641] = sym_raw_string;
	v->a[20642] = sym_number;
	v->a[20643] = sym_word;
	v->a[20644] = state(446);
	v->a[20645] = 5;
	v->a[20646] = sym_arithmetic_expansion;
	v->a[20647] = sym_string;
	v->a[20648] = sym_simple_expansion;
	v->a[20649] = sym_expansion;
	v->a[20650] = sym_command_substitution;
	v->a[20651] = actions(544);
	v->a[20652] = 16;
	v->a[20653] = anon_sym_PIPE;
	v->a[20654] = anon_sym_RPAREN;
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
	v->a[20668] = anon_sym_SEMI;
	v->a[20669] = 12;
	v->a[20670] = actions(3);
	v->a[20671] = 1;
	v->a[20672] = sym_comment;
	v->a[20673] = actions(630);
	v->a[20674] = 1;
	v->a[20675] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20676] = actions(633);
	v->a[20677] = 1;
	v->a[20678] = anon_sym_DOLLAR;
	v->a[20679] = actions(636);
	small_parse_table_1034(v);
}

void	small_parse_table_1034(t_small_parse_table_array *v)
{
	v->a[20680] = 1;
	v->a[20681] = anon_sym_DQUOTE;
	v->a[20682] = actions(639);
	v->a[20683] = 1;
	v->a[20684] = anon_sym_DOLLAR_LBRACE;
	v->a[20685] = actions(642);
	v->a[20686] = 1;
	v->a[20687] = anon_sym_DOLLAR_LPAREN;
	v->a[20688] = actions(645);
	v->a[20689] = 1;
	v->a[20690] = anon_sym_BQUOTE;
	v->a[20691] = actions(648);
	v->a[20692] = 2;
	v->a[20693] = sym_file_descriptor;
	v->a[20694] = sym_variable_name;
	v->a[20695] = state(203);
	v->a[20696] = 2;
	v->a[20697] = sym_concatenation;
	v->a[20698] = aux_sym_for_statement_repeat1;
	v->a[20699] = actions(625);
	small_parse_table_1035(v);
}

/* EOF small_parse_table_206.c */
