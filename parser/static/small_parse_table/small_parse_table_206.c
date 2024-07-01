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
	v->a[20604] = actions(556);
	v->a[20605] = 17;
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
	v->a[20621] = anon_sym_AMP;
	v->a[20622] = anon_sym_SEMI;
	v->a[20623] = 5;
	v->a[20624] = actions(3);
	v->a[20625] = 1;
	v->a[20626] = sym_comment;
	v->a[20627] = actions(552);
	v->a[20628] = 2;
	v->a[20629] = sym_file_descriptor;
	v->a[20630] = sym_variable_name;
	v->a[20631] = state(196);
	v->a[20632] = 2;
	v->a[20633] = sym_concatenation;
	v->a[20634] = aux_sym_for_statement_repeat1;
	v->a[20635] = state(384);
	v->a[20636] = 5;
	v->a[20637] = sym_arithmetic_expansion;
	v->a[20638] = sym_string;
	v->a[20639] = sym_simple_expansion;
	small_parse_table_1032(v);
}

void	small_parse_table_1032(t_small_parse_table_array *v)
{
	v->a[20640] = sym_expansion;
	v->a[20641] = sym_command_substitution;
	v->a[20642] = actions(554);
	v->a[20643] = 26;
	v->a[20644] = anon_sym_PIPE;
	v->a[20645] = anon_sym_RPAREN;
	v->a[20646] = anon_sym_SEMI_SEMI;
	v->a[20647] = anon_sym_AMP_AMP;
	v->a[20648] = anon_sym_PIPE_PIPE;
	v->a[20649] = anon_sym_LT;
	v->a[20650] = anon_sym_GT;
	v->a[20651] = anon_sym_GT_GT;
	v->a[20652] = anon_sym_LT_AMP;
	v->a[20653] = anon_sym_GT_AMP;
	v->a[20654] = anon_sym_GT_PIPE;
	v->a[20655] = anon_sym_LT_GT;
	v->a[20656] = anon_sym_LT_LT;
	v->a[20657] = anon_sym_LT_LT_DASH;
	v->a[20658] = aux_sym_heredoc_redirect_token1;
	v->a[20659] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1033(v);
}

void	small_parse_table_1033(t_small_parse_table_array *v)
{
	v->a[20660] = anon_sym_AMP;
	v->a[20661] = anon_sym_DOLLAR;
	v->a[20662] = anon_sym_DQUOTE;
	v->a[20663] = sym_raw_string;
	v->a[20664] = sym_number;
	v->a[20665] = anon_sym_DOLLAR_LBRACE;
	v->a[20666] = anon_sym_DOLLAR_LPAREN;
	v->a[20667] = anon_sym_BQUOTE;
	v->a[20668] = sym_word;
	v->a[20669] = anon_sym_SEMI;
	v->a[20670] = 12;
	v->a[20671] = actions(3);
	v->a[20672] = 1;
	v->a[20673] = sym_comment;
	v->a[20674] = actions(642);
	v->a[20675] = 1;
	v->a[20676] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20677] = actions(645);
	v->a[20678] = 1;
	v->a[20679] = anon_sym_DOLLAR;
	small_parse_table_1034(v);
}

void	small_parse_table_1034(t_small_parse_table_array *v)
{
	v->a[20680] = actions(648);
	v->a[20681] = 1;
	v->a[20682] = anon_sym_DQUOTE;
	v->a[20683] = actions(651);
	v->a[20684] = 1;
	v->a[20685] = anon_sym_DOLLAR_LBRACE;
	v->a[20686] = actions(654);
	v->a[20687] = 1;
	v->a[20688] = anon_sym_DOLLAR_LPAREN;
	v->a[20689] = actions(657);
	v->a[20690] = 1;
	v->a[20691] = anon_sym_BQUOTE;
	v->a[20692] = actions(499);
	v->a[20693] = 2;
	v->a[20694] = sym_file_descriptor;
	v->a[20695] = sym_variable_name;
	v->a[20696] = state(200);
	v->a[20697] = 2;
	v->a[20698] = sym_concatenation;
	v->a[20699] = aux_sym_for_statement_repeat1;
	small_parse_table_1035(v);
}

/* EOF small_parse_table_206.c */
