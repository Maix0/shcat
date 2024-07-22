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
	v->a[29600] = anon_sym_LT_LT_DASH;
	v->a[29601] = aux_sym_heredoc_redirect_token1;
	v->a[29602] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29603] = anon_sym_DOLLAR;
	v->a[29604] = anon_sym_DQUOTE;
	v->a[29605] = sym_raw_string;
	v->a[29606] = sym_number;
	v->a[29607] = anon_sym_DOLLAR_LBRACE;
	v->a[29608] = anon_sym_DOLLAR_LPAREN;
	v->a[29609] = anon_sym_BQUOTE;
	v->a[29610] = sym_word;
	v->a[29611] = anon_sym_SEMI;
	v->a[29612] = 20;
	v->a[29613] = actions(3);
	v->a[29614] = 1;
	v->a[29615] = sym_comment;
	v->a[29616] = actions(17);
	v->a[29617] = 1;
	v->a[29618] = anon_sym_LPAREN;
	v->a[29619] = actions(55);
	small_parse_table_1481(v);
}

void	small_parse_table_1481(t_small_parse_table_array *v)
{
	v->a[29620] = 1;
	v->a[29621] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29622] = actions(57);
	v->a[29623] = 1;
	v->a[29624] = anon_sym_DOLLAR;
	v->a[29625] = actions(59);
	v->a[29626] = 1;
	v->a[29627] = anon_sym_DQUOTE;
	v->a[29628] = actions(63);
	v->a[29629] = 1;
	v->a[29630] = anon_sym_DOLLAR_LBRACE;
	v->a[29631] = actions(65);
	v->a[29632] = 1;
	v->a[29633] = anon_sym_DOLLAR_LPAREN;
	v->a[29634] = actions(67);
	v->a[29635] = 1;
	v->a[29636] = anon_sym_BQUOTE;
	v->a[29637] = actions(71);
	v->a[29638] = 1;
	v->a[29639] = sym_variable_name;
	small_parse_table_1482(v);
}

void	small_parse_table_1482(t_small_parse_table_array *v)
{
	v->a[29640] = actions(1095);
	v->a[29641] = 1;
	v->a[29642] = sym_file_descriptor;
	v->a[29643] = state(178);
	v->a[29644] = 1;
	v->a[29645] = sym_command_name;
	v->a[29646] = state(585);
	v->a[29647] = 1;
	v->a[29648] = aux_sym_command_repeat1;
	v->a[29649] = state(661);
	v->a[29650] = 1;
	v->a[29651] = sym_concatenation;
	v->a[29652] = state(784);
	v->a[29653] = 1;
	v->a[29654] = sym_variable_assignment;
	v->a[29655] = state(1121);
	v->a[29656] = 1;
	v->a[29657] = sym_command;
	v->a[29658] = state(1171);
	v->a[29659] = 1;
	small_parse_table_1483(v);
}

void	small_parse_table_1483(t_small_parse_table_array *v)
{
	v->a[29660] = sym_subshell;
	v->a[29661] = state(1203);
	v->a[29662] = 1;
	v->a[29663] = sym_file_redirect;
	v->a[29664] = actions(61);
	v->a[29665] = 3;
	v->a[29666] = sym_raw_string;
	v->a[29667] = sym_number;
	v->a[29668] = sym_word;
	v->a[29669] = state(455);
	v->a[29670] = 5;
	v->a[29671] = sym_arithmetic_expansion;
	v->a[29672] = sym_string;
	v->a[29673] = sym_simple_expansion;
	v->a[29674] = sym_expansion;
	v->a[29675] = sym_command_substitution;
	v->a[29676] = actions(1093);
	v->a[29677] = 7;
	v->a[29678] = anon_sym_LT;
	v->a[29679] = anon_sym_GT;
	small_parse_table_1484(v);
}

void	small_parse_table_1484(t_small_parse_table_array *v)
{
	v->a[29680] = anon_sym_GT_GT;
	v->a[29681] = anon_sym_LT_AMP;
	v->a[29682] = anon_sym_GT_AMP;
	v->a[29683] = anon_sym_GT_PIPE;
	v->a[29684] = anon_sym_LT_GT;
	v->a[29685] = 5;
	v->a[29686] = actions(3);
	v->a[29687] = 1;
	v->a[29688] = sym_comment;
	v->a[29689] = actions(678);
	v->a[29690] = 2;
	v->a[29691] = sym_file_descriptor;
	v->a[29692] = sym_variable_name;
	v->a[29693] = state(368);
	v->a[29694] = 2;
	v->a[29695] = sym_concatenation;
	v->a[29696] = aux_sym_for_statement_repeat1;
	v->a[29697] = state(685);
	v->a[29698] = 5;
	v->a[29699] = sym_arithmetic_expansion;
	small_parse_table_1485(v);
}

/* EOF small_parse_table_296.c */
