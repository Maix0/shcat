/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_836.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4180(t_small_parse_table_array *v)
{
	v->a[83600] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83601] = anon_sym_DOLLAR_LBRACK;
	v->a[83602] = anon_sym_DOLLAR;
	v->a[83603] = anon_sym_DQUOTE;
	v->a[83604] = sym_raw_string;
	v->a[83605] = sym_ansi_c_string;
	v->a[83606] = aux_sym_number_token1;
	v->a[83607] = aux_sym_number_token2;
	v->a[83608] = anon_sym_DOLLAR_LBRACE;
	v->a[83609] = anon_sym_DOLLAR_LPAREN;
	v->a[83610] = anon_sym_BQUOTE;
	v->a[83611] = anon_sym_DOLLAR_BQUOTE;
	v->a[83612] = anon_sym_LT_LPAREN;
	v->a[83613] = anon_sym_GT_LPAREN;
	v->a[83614] = sym_word;
	v->a[83615] = 6;
	v->a[83616] = actions(3);
	v->a[83617] = 1;
	v->a[83618] = sym_comment;
	v->a[83619] = actions(5080);
	small_parse_table_4181(v);
}

void	small_parse_table_4181(t_small_parse_table_array *v)
{
	v->a[83620] = 1;
	v->a[83621] = aux_sym_concatenation_token1;
	v->a[83622] = actions(5082);
	v->a[83623] = 1;
	v->a[83624] = sym__concat;
	v->a[83625] = state(1822);
	v->a[83626] = 1;
	v->a[83627] = aux_sym_concatenation_repeat1;
	v->a[83628] = actions(4372);
	v->a[83629] = 5;
	v->a[83630] = sym_file_descriptor;
	v->a[83631] = sym_test_operator;
	v->a[83632] = sym__bare_dollar;
	v->a[83633] = sym__brace_start;
	v->a[83634] = aux_sym_heredoc_redirect_token1;
	v->a[83635] = actions(4370);
	v->a[83636] = 36;
	v->a[83637] = anon_sym_LPAREN_LPAREN;
	v->a[83638] = anon_sym_PIPE_PIPE;
	v->a[83639] = anon_sym_AMP_AMP;
	small_parse_table_4182(v);
}

void	small_parse_table_4182(t_small_parse_table_array *v)
{
	v->a[83640] = anon_sym_PIPE;
	v->a[83641] = anon_sym_EQ_EQ;
	v->a[83642] = anon_sym_LT;
	v->a[83643] = anon_sym_GT;
	v->a[83644] = anon_sym_LT_LT;
	v->a[83645] = anon_sym_GT_GT;
	v->a[83646] = anon_sym_PIPE_AMP;
	v->a[83647] = anon_sym_EQ_TILDE;
	v->a[83648] = anon_sym_AMP_GT;
	v->a[83649] = anon_sym_AMP_GT_GT;
	v->a[83650] = anon_sym_LT_AMP;
	v->a[83651] = anon_sym_GT_AMP;
	v->a[83652] = anon_sym_GT_PIPE;
	v->a[83653] = anon_sym_LT_AMP_DASH;
	v->a[83654] = anon_sym_GT_AMP_DASH;
	v->a[83655] = anon_sym_LT_LT_DASH;
	v->a[83656] = anon_sym_LT_LT_LT;
	v->a[83657] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83658] = anon_sym_DOLLAR_LBRACK;
	v->a[83659] = anon_sym_DOLLAR;
	small_parse_table_4183(v);
}

void	small_parse_table_4183(t_small_parse_table_array *v)
{
	v->a[83660] = sym__special_character;
	v->a[83661] = anon_sym_DQUOTE;
	v->a[83662] = sym_raw_string;
	v->a[83663] = sym_ansi_c_string;
	v->a[83664] = aux_sym_number_token1;
	v->a[83665] = aux_sym_number_token2;
	v->a[83666] = anon_sym_DOLLAR_LBRACE;
	v->a[83667] = anon_sym_DOLLAR_LPAREN;
	v->a[83668] = anon_sym_BQUOTE;
	v->a[83669] = anon_sym_DOLLAR_BQUOTE;
	v->a[83670] = anon_sym_LT_LPAREN;
	v->a[83671] = anon_sym_GT_LPAREN;
	v->a[83672] = sym_word;
	v->a[83673] = 3;
	v->a[83674] = actions(3);
	v->a[83675] = 1;
	v->a[83676] = sym_comment;
	v->a[83677] = actions(1294);
	v->a[83678] = 5;
	v->a[83679] = sym_file_descriptor;
	small_parse_table_4184(v);
}

void	small_parse_table_4184(t_small_parse_table_array *v)
{
	v->a[83680] = sym__concat;
	v->a[83681] = sym_test_operator;
	v->a[83682] = sym__brace_start;
	v->a[83683] = aux_sym_heredoc_redirect_token1;
	v->a[83684] = actions(1292);
	v->a[83685] = 39;
	v->a[83686] = anon_sym_LPAREN_LPAREN;
	v->a[83687] = anon_sym_SEMI;
	v->a[83688] = anon_sym_PIPE_PIPE;
	v->a[83689] = anon_sym_AMP_AMP;
	v->a[83690] = anon_sym_PIPE;
	v->a[83691] = anon_sym_AMP;
	v->a[83692] = anon_sym_LT;
	v->a[83693] = anon_sym_GT;
	v->a[83694] = anon_sym_LT_LT;
	v->a[83695] = anon_sym_GT_GT;
	v->a[83696] = anon_sym_RPAREN;
	v->a[83697] = anon_sym_SEMI_SEMI;
	v->a[83698] = anon_sym_PIPE_AMP;
	v->a[83699] = anon_sym_AMP_GT;
	small_parse_table_4185(v);
}

/* EOF small_parse_table_836.c */
