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
	v->a[20600] = actions(3735);
	v->a[20601] = 1;
	v->a[20602] = anon_sym_DQUOTE;
	v->a[20603] = actions(3737);
	v->a[20604] = 1;
	v->a[20605] = aux_sym_number_token1;
	v->a[20606] = actions(3739);
	v->a[20607] = 1;
	v->a[20608] = aux_sym_number_token2;
	v->a[20609] = actions(3741);
	v->a[20610] = 1;
	v->a[20611] = anon_sym_DOLLAR_LBRACE;
	v->a[20612] = actions(3743);
	v->a[20613] = 1;
	v->a[20614] = anon_sym_DOLLAR_LPAREN;
	v->a[20615] = actions(3745);
	v->a[20616] = 1;
	v->a[20617] = anon_sym_BQUOTE;
	v->a[20618] = actions(3747);
	v->a[20619] = 1;
	small_parse_table_1031(v);
}

void	small_parse_table_1031(t_small_parse_table_array *v)
{
	v->a[20620] = anon_sym_DOLLAR_BQUOTE;
	v->a[20621] = actions(3751);
	v->a[20622] = 1;
	v->a[20623] = sym_file_descriptor;
	v->a[20624] = actions(3753);
	v->a[20625] = 1;
	v->a[20626] = sym_test_operator;
	v->a[20627] = actions(3755);
	v->a[20628] = 1;
	v->a[20629] = sym__brace_start;
	v->a[20630] = actions(3906);
	v->a[20631] = 1;
	v->a[20632] = aux_sym_heredoc_redirect_token1;
	v->a[20633] = state(3585);
	v->a[20634] = 1;
	v->a[20635] = aux_sym__heredoc_command;
	v->a[20636] = state(5351);
	v->a[20637] = 1;
	v->a[20638] = aux_sym__literal_repeat1;
	v->a[20639] = state(5456);
	small_parse_table_1032(v);
}

void	small_parse_table_1032(t_small_parse_table_array *v)
{
	v->a[20640] = 1;
	v->a[20641] = sym_concatenation;
	v->a[20642] = state(6935);
	v->a[20643] = 1;
	v->a[20644] = sym__heredoc_expression;
	v->a[20645] = state(6936);
	v->a[20646] = 1;
	v->a[20647] = sym__heredoc_pipeline;
	v->a[20648] = actions(3715);
	v->a[20649] = 2;
	v->a[20650] = anon_sym_LPAREN_LPAREN;
	v->a[20651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20652] = actions(3717);
	v->a[20653] = 2;
	v->a[20654] = anon_sym_PIPE_PIPE;
	v->a[20655] = anon_sym_AMP_AMP;
	v->a[20656] = actions(3719);
	v->a[20657] = 2;
	v->a[20658] = anon_sym_PIPE;
	v->a[20659] = anon_sym_PIPE_AMP;
	small_parse_table_1033(v);
}

void	small_parse_table_1033(t_small_parse_table_array *v)
{
	v->a[20660] = actions(3723);
	v->a[20661] = 2;
	v->a[20662] = anon_sym_LT_AMP_DASH;
	v->a[20663] = anon_sym_GT_AMP_DASH;
	v->a[20664] = actions(3749);
	v->a[20665] = 2;
	v->a[20666] = anon_sym_LT_LPAREN;
	v->a[20667] = anon_sym_GT_LPAREN;
	v->a[20668] = actions(3713);
	v->a[20669] = 3;
	v->a[20670] = sym_raw_string;
	v->a[20671] = sym_ansi_c_string;
	v->a[20672] = sym_word;
	v->a[20673] = state(5516);
	v->a[20674] = 3;
	v->a[20675] = sym_file_redirect;
	v->a[20676] = sym_herestring_redirect;
	v->a[20677] = aux_sym_redirected_statement_repeat2;
	v->a[20678] = actions(3721);
	v->a[20679] = 8;
	small_parse_table_1034(v);
}

void	small_parse_table_1034(t_small_parse_table_array *v)
{
	v->a[20680] = anon_sym_LT;
	v->a[20681] = anon_sym_GT;
	v->a[20682] = anon_sym_GT_GT;
	v->a[20683] = anon_sym_AMP_GT;
	v->a[20684] = anon_sym_AMP_GT_GT;
	v->a[20685] = anon_sym_LT_AMP;
	v->a[20686] = anon_sym_GT_AMP;
	v->a[20687] = anon_sym_GT_PIPE;
	v->a[20688] = state(5062);
	v->a[20689] = 9;
	v->a[20690] = sym_arithmetic_expansion;
	v->a[20691] = sym_brace_expression;
	v->a[20692] = sym_string;
	v->a[20693] = sym_translated_string;
	v->a[20694] = sym_number;
	v->a[20695] = sym_simple_expansion;
	v->a[20696] = sym_expansion;
	v->a[20697] = sym_command_substitution;
	v->a[20698] = sym_process_substitution;
	v->a[20699] = 24;
	small_parse_table_1035(v);
}

/* EOF small_parse_table_206.c */
