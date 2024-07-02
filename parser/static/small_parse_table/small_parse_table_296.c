/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_296.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1480(t_small_parse_table_array *v)
{
	v->a[29600] = 1;
	v->a[29601] = sym_file_descriptor;
	v->a[29602] = actions(1130);
	v->a[29603] = 1;
	v->a[29604] = aux_sym_heredoc_redirect_token1;
	v->a[29605] = state(1297);
	v->a[29606] = 1;
	v->a[29607] = aux_sym__heredoc_command;
	v->a[29608] = state(1725);
	v->a[29609] = 1;
	v->a[29610] = sym_concatenation;
	v->a[29611] = state(1946);
	v->a[29612] = 1;
	v->a[29613] = sym__heredoc_pipeline;
	v->a[29614] = state(1947);
	v->a[29615] = 1;
	v->a[29616] = sym__heredoc_expression;
	v->a[29617] = actions(1061);
	v->a[29618] = 2;
	v->a[29619] = anon_sym_AMP_AMP;
	small_parse_table_1481(v);
}

void	small_parse_table_1481(t_small_parse_table_array *v)
{
	v->a[29620] = anon_sym_PIPE_PIPE;
	v->a[29621] = state(1527);
	v->a[29622] = 2;
	v->a[29623] = sym_file_redirect;
	v->a[29624] = aux_sym_redirected_statement_repeat2;
	v->a[29625] = actions(1057);
	v->a[29626] = 3;
	v->a[29627] = sym_raw_string;
	v->a[29628] = sym_number;
	v->a[29629] = sym_word;
	v->a[29630] = state(1589);
	v->a[29631] = 5;
	v->a[29632] = sym_arithmetic_expansion;
	v->a[29633] = sym_string;
	v->a[29634] = sym_simple_expansion;
	v->a[29635] = sym_expansion;
	v->a[29636] = sym_command_substitution;
	v->a[29637] = actions(1063);
	v->a[29638] = 7;
	v->a[29639] = anon_sym_LT;
	small_parse_table_1482(v);
}

void	small_parse_table_1482(t_small_parse_table_array *v)
{
	v->a[29640] = anon_sym_GT;
	v->a[29641] = anon_sym_GT_GT;
	v->a[29642] = anon_sym_LT_AMP;
	v->a[29643] = anon_sym_GT_AMP;
	v->a[29644] = anon_sym_GT_PIPE;
	v->a[29645] = anon_sym_LT_GT;
	v->a[29646] = 16;
	v->a[29647] = actions(3);
	v->a[29648] = 1;
	v->a[29649] = sym_comment;
	v->a[29650] = actions(321);
	v->a[29651] = 1;
	v->a[29652] = anon_sym_LPAREN;
	v->a[29653] = actions(459);
	v->a[29654] = 1;
	v->a[29655] = sym_file_descriptor;
	v->a[29656] = actions(1114);
	v->a[29657] = 1;
	v->a[29658] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29659] = actions(1116);
	small_parse_table_1483(v);
}

void	small_parse_table_1483(t_small_parse_table_array *v)
{
	v->a[29660] = 1;
	v->a[29661] = anon_sym_DOLLAR;
	v->a[29662] = actions(1118);
	v->a[29663] = 1;
	v->a[29664] = anon_sym_DQUOTE;
	v->a[29665] = actions(1120);
	v->a[29666] = 1;
	v->a[29667] = anon_sym_DOLLAR_LBRACE;
	v->a[29668] = actions(1122);
	v->a[29669] = 1;
	v->a[29670] = anon_sym_DOLLAR_LPAREN;
	v->a[29671] = actions(1124);
	v->a[29672] = 1;
	v->a[29673] = anon_sym_BQUOTE;
	v->a[29674] = actions(1126);
	v->a[29675] = 1;
	v->a[29676] = sym__bare_dollar;
	v->a[29677] = state(510);
	v->a[29678] = 1;
	v->a[29679] = aux_sym_command_repeat2;
	small_parse_table_1484(v);
}

void	small_parse_table_1484(t_small_parse_table_array *v)
{
	v->a[29680] = state(924);
	v->a[29681] = 1;
	v->a[29682] = sym_concatenation;
	v->a[29683] = state(1582);
	v->a[29684] = 1;
	v->a[29685] = sym_subshell;
	v->a[29686] = actions(1112);
	v->a[29687] = 3;
	v->a[29688] = sym_raw_string;
	v->a[29689] = sym_number;
	v->a[29690] = sym_word;
	v->a[29691] = state(826);
	v->a[29692] = 5;
	v->a[29693] = sym_arithmetic_expansion;
	v->a[29694] = sym_string;
	v->a[29695] = sym_simple_expansion;
	v->a[29696] = sym_expansion;
	v->a[29697] = sym_command_substitution;
	v->a[29698] = actions(457);
	v->a[29699] = 12;
	small_parse_table_1485(v);
}

/* EOF small_parse_table_296.c */
