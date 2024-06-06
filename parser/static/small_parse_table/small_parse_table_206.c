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
	v->a[20600] = sym_comment;
	v->a[20601] = state(1230);
	v->a[20602] = 1;
	v->a[20603] = aux_sym__literal_repeat1;
	v->a[20604] = state(1259);
	v->a[20605] = 1;
	v->a[20606] = sym_concatenation;
	v->a[20607] = actions(1534);
	v->a[20608] = 5;
	v->a[20609] = sym_file_descriptor;
	v->a[20610] = sym_variable_name;
	v->a[20611] = sym_test_operator;
	v->a[20612] = sym__brace_start;
	v->a[20613] = aux_sym_heredoc_redirect_token1;
	v->a[20614] = state(1357);
	v->a[20615] = 7;
	v->a[20616] = sym_arithmetic_expansion;
	v->a[20617] = sym_brace_expression;
	v->a[20618] = sym_string;
	v->a[20619] = sym_number;
	small_parse_table_1031(v);
}

void	small_parse_table_1031(t_small_parse_table_array *v)
{
	v->a[20620] = sym_simple_expansion;
	v->a[20621] = sym_expansion;
	v->a[20622] = sym_command_substitution;
	v->a[20623] = actions(1532);
	v->a[20624] = 28;
	v->a[20625] = anon_sym_PIPE;
	v->a[20626] = anon_sym_PIPE_AMP;
	v->a[20627] = anon_sym_AMP_AMP;
	v->a[20628] = anon_sym_PIPE_PIPE;
	v->a[20629] = anon_sym_LT;
	v->a[20630] = anon_sym_GT;
	v->a[20631] = anon_sym_GT_GT;
	v->a[20632] = anon_sym_AMP_GT;
	v->a[20633] = anon_sym_AMP_GT_GT;
	v->a[20634] = anon_sym_LT_AMP;
	v->a[20635] = anon_sym_GT_AMP;
	v->a[20636] = anon_sym_GT_PIPE;
	v->a[20637] = anon_sym_LT_AMP_DASH;
	v->a[20638] = anon_sym_GT_AMP_DASH;
	v->a[20639] = anon_sym_LT_LT;
	small_parse_table_1032(v);
}

void	small_parse_table_1032(t_small_parse_table_array *v)
{
	v->a[20640] = anon_sym_LT_LT_DASH;
	v->a[20641] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20642] = anon_sym_DOLLAR;
	v->a[20643] = sym__special_character;
	v->a[20644] = anon_sym_DQUOTE;
	v->a[20645] = sym_raw_string;
	v->a[20646] = aux_sym_number_token1;
	v->a[20647] = aux_sym_number_token2;
	v->a[20648] = anon_sym_DOLLAR_LBRACE;
	v->a[20649] = anon_sym_DOLLAR_LPAREN;
	v->a[20650] = anon_sym_BQUOTE;
	v->a[20651] = anon_sym_DOLLAR_BQUOTE;
	v->a[20652] = sym_word;
	v->a[20653] = 6;
	v->a[20654] = actions(3);
	v->a[20655] = 1;
	v->a[20656] = sym_comment;
	v->a[20657] = actions(2952);
	v->a[20658] = 1;
	v->a[20659] = aux_sym_concatenation_token1;
	small_parse_table_1033(v);
}

void	small_parse_table_1033(t_small_parse_table_array *v)
{
	v->a[20660] = actions(2954);
	v->a[20661] = 1;
	v->a[20662] = sym__concat;
	v->a[20663] = state(606);
	v->a[20664] = 1;
	v->a[20665] = aux_sym_concatenation_repeat1;
	v->a[20666] = actions(2690);
	v->a[20667] = 5;
	v->a[20668] = sym_file_descriptor;
	v->a[20669] = sym_test_operator;
	v->a[20670] = sym__bare_dollar;
	v->a[20671] = sym__brace_start;
	v->a[20672] = aux_sym_heredoc_redirect_token1;
	v->a[20673] = actions(2688);
	v->a[20674] = 34;
	v->a[20675] = anon_sym_esac;
	v->a[20676] = anon_sym_PIPE;
	v->a[20677] = anon_sym_SEMI_SEMI;
	v->a[20678] = anon_sym_SEMI_AMP;
	v->a[20679] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_1034(v);
}

void	small_parse_table_1034(t_small_parse_table_array *v)
{
	v->a[20680] = anon_sym_PIPE_AMP;
	v->a[20681] = anon_sym_AMP_AMP;
	v->a[20682] = anon_sym_PIPE_PIPE;
	v->a[20683] = anon_sym_LT;
	v->a[20684] = anon_sym_GT;
	v->a[20685] = anon_sym_GT_GT;
	v->a[20686] = anon_sym_AMP_GT;
	v->a[20687] = anon_sym_AMP_GT_GT;
	v->a[20688] = anon_sym_LT_AMP;
	v->a[20689] = anon_sym_GT_AMP;
	v->a[20690] = anon_sym_GT_PIPE;
	v->a[20691] = anon_sym_LT_AMP_DASH;
	v->a[20692] = anon_sym_GT_AMP_DASH;
	v->a[20693] = anon_sym_LT_LT;
	v->a[20694] = anon_sym_LT_LT_DASH;
	v->a[20695] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20696] = anon_sym_AMP;
	v->a[20697] = anon_sym_DOLLAR;
	v->a[20698] = sym__special_character;
	v->a[20699] = anon_sym_DQUOTE;
	small_parse_table_1035(v);
}

/* EOF small_parse_table_206.c */
