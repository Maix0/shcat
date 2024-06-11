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
	v->a[83600] = anon_sym_LT_LT;
	v->a[83601] = actions(1094);
	v->a[83602] = 1;
	v->a[83603] = sym_comment;
	v->a[83604] = actions(2602);
	v->a[83605] = 1;
	v->a[83606] = sym_file_descriptor;
	v->a[83607] = actions(3076);
	v->a[83608] = 1;
	v->a[83609] = anon_sym_LT_LT_DASH;
	v->a[83610] = actions(3121);
	v->a[83611] = 2;
	v->a[83612] = anon_sym_AMP_AMP;
	v->a[83613] = anon_sym_PIPE_PIPE;
	v->a[83614] = actions(3125);
	v->a[83615] = 2;
	v->a[83616] = anon_sym_LT_AMP_DASH;
	v->a[83617] = anon_sym_GT_AMP_DASH;
	v->a[83618] = actions(3123);
	v->a[83619] = 3;
	small_parse_table_4181(v);
}

void	small_parse_table_4181(t_small_parse_table_array *v)
{
	v->a[83620] = anon_sym_GT_GT;
	v->a[83621] = anon_sym_AMP_GT_GT;
	v->a[83622] = anon_sym_GT_PIPE;
	v->a[83623] = state(1322);
	v->a[83624] = 3;
	v->a[83625] = sym_file_redirect;
	v->a[83626] = sym_heredoc_redirect;
	v->a[83627] = aux_sym_redirected_statement_repeat1;
	v->a[83628] = actions(2596);
	v->a[83629] = 5;
	v->a[83630] = anon_sym_LT;
	v->a[83631] = anon_sym_GT;
	v->a[83632] = anon_sym_AMP_GT;
	v->a[83633] = anon_sym_LT_AMP;
	v->a[83634] = anon_sym_GT_AMP;
	v->a[83635] = 12;
	v->a[83636] = actions(3);
	v->a[83637] = 1;
	v->a[83638] = sym_comment;
	v->a[83639] = actions(3130);
	small_parse_table_4182(v);
}

void	small_parse_table_4182(t_small_parse_table_array *v)
{
	v->a[83640] = 1;
	v->a[83641] = aux_sym_heredoc_redirect_token1;
	v->a[83642] = actions(3132);
	v->a[83643] = 1;
	v->a[83644] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83645] = actions(3135);
	v->a[83646] = 1;
	v->a[83647] = anon_sym_DOLLAR;
	v->a[83648] = actions(3138);
	v->a[83649] = 1;
	v->a[83650] = anon_sym_DQUOTE;
	v->a[83651] = actions(3141);
	v->a[83652] = 1;
	v->a[83653] = anon_sym_DOLLAR_LBRACE;
	v->a[83654] = actions(3144);
	v->a[83655] = 1;
	v->a[83656] = anon_sym_DOLLAR_LPAREN;
	v->a[83657] = actions(3147);
	v->a[83658] = 1;
	v->a[83659] = anon_sym_BQUOTE;
	small_parse_table_4183(v);
}

void	small_parse_table_4183(t_small_parse_table_array *v)
{
	v->a[83660] = state(1613);
	v->a[83661] = 1;
	v->a[83662] = aux_sym__heredoc_command;
	v->a[83663] = state(2098);
	v->a[83664] = 1;
	v->a[83665] = sym_concatenation;
	v->a[83666] = actions(3127);
	v->a[83667] = 3;
	v->a[83668] = sym_raw_string;
	v->a[83669] = sym_number;
	v->a[83670] = sym_word;
	v->a[83671] = state(1944);
	v->a[83672] = 5;
	v->a[83673] = sym_arithmetic_expansion;
	v->a[83674] = sym_string;
	v->a[83675] = sym_simple_expansion;
	v->a[83676] = sym_expansion;
	v->a[83677] = sym_command_substitution;
	v->a[83678] = 10;
	v->a[83679] = actions(3);
	small_parse_table_4184(v);
}

void	small_parse_table_4184(t_small_parse_table_array *v)
{
	v->a[83680] = 1;
	v->a[83681] = sym_comment;
	v->a[83682] = actions(59);
	v->a[83683] = 1;
	v->a[83684] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83685] = actions(61);
	v->a[83686] = 1;
	v->a[83687] = anon_sym_DOLLAR;
	v->a[83688] = actions(63);
	v->a[83689] = 1;
	v->a[83690] = anon_sym_DQUOTE;
	v->a[83691] = actions(67);
	v->a[83692] = 1;
	v->a[83693] = anon_sym_DOLLAR_LBRACE;
	v->a[83694] = actions(69);
	v->a[83695] = 1;
	v->a[83696] = anon_sym_DOLLAR_LPAREN;
	v->a[83697] = actions(71);
	v->a[83698] = 1;
	v->a[83699] = anon_sym_BQUOTE;
	small_parse_table_4185(v);
}

/* EOF small_parse_table_836.c */
