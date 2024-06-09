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
	v->a[29600] = 8;
	v->a[29601] = actions(3);
	v->a[29602] = 1;
	v->a[29603] = sym_comment;
	v->a[29604] = actions(1002);
	v->a[29605] = 1;
	v->a[29606] = anon_sym_PIPE;
	v->a[29607] = actions(1006);
	v->a[29608] = 1;
	v->a[29609] = sym_file_descriptor;
	v->a[29610] = actions(1095);
	v->a[29611] = 1;
	v->a[29612] = sym_variable_name;
	v->a[29613] = state(1151);
	v->a[29614] = 2;
	v->a[29615] = sym_variable_assignment;
	v->a[29616] = aux_sym_variable_assignments_repeat1;
	v->a[29617] = state(1160);
	v->a[29618] = 3;
	v->a[29619] = sym_file_redirect;
	small_parse_table_1481(v);
}

void	small_parse_table_1481(t_small_parse_table_array *v)
{
	v->a[29620] = sym_heredoc_redirect;
	v->a[29621] = aux_sym_redirected_statement_repeat1;
	v->a[29622] = actions(1004);
	v->a[29623] = 8;
	v->a[29624] = anon_sym_SEMI_SEMI;
	v->a[29625] = anon_sym_AMP_AMP;
	v->a[29626] = anon_sym_PIPE_PIPE;
	v->a[29627] = anon_sym_LT_LT;
	v->a[29628] = anon_sym_LT_LT_DASH;
	v->a[29629] = aux_sym_heredoc_redirect_token1;
	v->a[29630] = anon_sym_AMP;
	v->a[29631] = anon_sym_SEMI;
	v->a[29632] = actions(1000);
	v->a[29633] = 20;
	v->a[29634] = anon_sym_LT;
	v->a[29635] = anon_sym_GT;
	v->a[29636] = anon_sym_GT_GT;
	v->a[29637] = anon_sym_AMP_GT;
	v->a[29638] = anon_sym_AMP_GT_GT;
	v->a[29639] = anon_sym_LT_AMP;
	small_parse_table_1482(v);
}

void	small_parse_table_1482(t_small_parse_table_array *v)
{
	v->a[29640] = anon_sym_GT_AMP;
	v->a[29641] = anon_sym_GT_PIPE;
	v->a[29642] = anon_sym_LT_AMP_DASH;
	v->a[29643] = anon_sym_GT_AMP_DASH;
	v->a[29644] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29645] = anon_sym_DOLLAR;
	v->a[29646] = anon_sym_DQUOTE;
	v->a[29647] = sym_raw_string;
	v->a[29648] = aux_sym_number_token1;
	v->a[29649] = aux_sym_number_token2;
	v->a[29650] = anon_sym_DOLLAR_LBRACE;
	v->a[29651] = anon_sym_DOLLAR_LPAREN;
	v->a[29652] = anon_sym_BQUOTE;
	v->a[29653] = sym_word;
	v->a[29654] = 23;
	v->a[29655] = actions(3);
	v->a[29656] = 1;
	v->a[29657] = sym_comment;
	v->a[29658] = actions(105);
	v->a[29659] = 1;
	small_parse_table_1483(v);
}

void	small_parse_table_1483(t_small_parse_table_array *v)
{
	v->a[29660] = anon_sym_LPAREN;
	v->a[29661] = actions(117);
	v->a[29662] = 1;
	v->a[29663] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29664] = actions(119);
	v->a[29665] = 1;
	v->a[29666] = anon_sym_DOLLAR;
	v->a[29667] = actions(121);
	v->a[29668] = 1;
	v->a[29669] = anon_sym_DQUOTE;
	v->a[29670] = actions(125);
	v->a[29671] = 1;
	v->a[29672] = aux_sym_number_token1;
	v->a[29673] = actions(127);
	v->a[29674] = 1;
	v->a[29675] = aux_sym_number_token2;
	v->a[29676] = actions(129);
	v->a[29677] = 1;
	v->a[29678] = anon_sym_DOLLAR_LBRACE;
	v->a[29679] = actions(131);
	small_parse_table_1484(v);
}

void	small_parse_table_1484(t_small_parse_table_array *v)
{
	v->a[29680] = 1;
	v->a[29681] = anon_sym_DOLLAR_LPAREN;
	v->a[29682] = actions(133);
	v->a[29683] = 1;
	v->a[29684] = anon_sym_BQUOTE;
	v->a[29685] = actions(137);
	v->a[29686] = 1;
	v->a[29687] = sym_variable_name;
	v->a[29688] = actions(1102);
	v->a[29689] = 1;
	v->a[29690] = sym_file_descriptor;
	v->a[29691] = state(173);
	v->a[29692] = 1;
	v->a[29693] = sym_command_name;
	v->a[29694] = state(663);
	v->a[29695] = 1;
	v->a[29696] = aux_sym_command_repeat1;
	v->a[29697] = state(665);
	v->a[29698] = 1;
	v->a[29699] = sym_concatenation;
	small_parse_table_1485(v);
}

/* EOF small_parse_table_296.c */
