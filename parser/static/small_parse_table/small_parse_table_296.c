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
	v->a[29600] = sym_raw_string;
	v->a[29601] = aux_sym_number_token1;
	v->a[29602] = aux_sym_number_token2;
	v->a[29603] = anon_sym_DOLLAR_LBRACE;
	v->a[29604] = anon_sym_DOLLAR_LPAREN;
	v->a[29605] = anon_sym_BQUOTE;
	v->a[29606] = anon_sym_DOLLAR_BQUOTE;
	v->a[29607] = aux_sym__simple_variable_name_token1;
	v->a[29608] = sym_word;
	v->a[29609] = anon_sym_SEMI;
	v->a[29610] = 3;
	v->a[29611] = actions(3);
	v->a[29612] = 1;
	v->a[29613] = sym_comment;
	v->a[29614] = actions(3050);
	v->a[29615] = 6;
	v->a[29616] = sym_file_descriptor;
	v->a[29617] = sym__concat;
	v->a[29618] = sym_variable_name;
	v->a[29619] = sym_test_operator;
	small_parse_table_1481(v);
}

void	small_parse_table_1481(t_small_parse_table_array *v)
{
	v->a[29620] = sym__brace_start;
	v->a[29621] = aux_sym_heredoc_redirect_token1;
	v->a[29622] = actions(3048);
	v->a[29623] = 35;
	v->a[29624] = anon_sym_PIPE;
	v->a[29625] = anon_sym_SEMI_SEMI;
	v->a[29626] = anon_sym_SEMI_AMP;
	v->a[29627] = anon_sym_SEMI_SEMI_AMP;
	v->a[29628] = anon_sym_PIPE_AMP;
	v->a[29629] = anon_sym_AMP_AMP;
	v->a[29630] = anon_sym_PIPE_PIPE;
	v->a[29631] = anon_sym_LT;
	v->a[29632] = anon_sym_GT;
	v->a[29633] = anon_sym_GT_GT;
	v->a[29634] = anon_sym_AMP_GT;
	v->a[29635] = anon_sym_AMP_GT_GT;
	v->a[29636] = anon_sym_LT_AMP;
	v->a[29637] = anon_sym_GT_AMP;
	v->a[29638] = anon_sym_GT_PIPE;
	v->a[29639] = anon_sym_LT_AMP_DASH;
	small_parse_table_1482(v);
}

void	small_parse_table_1482(t_small_parse_table_array *v)
{
	v->a[29640] = anon_sym_GT_AMP_DASH;
	v->a[29641] = anon_sym_LT_LT;
	v->a[29642] = anon_sym_LT_LT_DASH;
	v->a[29643] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29644] = anon_sym_AMP;
	v->a[29645] = aux_sym_concatenation_token1;
	v->a[29646] = anon_sym_DOLLAR;
	v->a[29647] = sym__special_character;
	v->a[29648] = anon_sym_DQUOTE;
	v->a[29649] = sym_raw_string;
	v->a[29650] = aux_sym_number_token1;
	v->a[29651] = aux_sym_number_token2;
	v->a[29652] = anon_sym_DOLLAR_LBRACE;
	v->a[29653] = anon_sym_DOLLAR_LPAREN;
	v->a[29654] = anon_sym_BQUOTE;
	v->a[29655] = anon_sym_DOLLAR_BQUOTE;
	v->a[29656] = aux_sym__simple_variable_name_token1;
	v->a[29657] = sym_word;
	v->a[29658] = anon_sym_SEMI;
	v->a[29659] = 3;
	small_parse_table_1483(v);
}

void	small_parse_table_1483(t_small_parse_table_array *v)
{
	v->a[29660] = actions(3);
	v->a[29661] = 1;
	v->a[29662] = sym_comment;
	v->a[29663] = actions(2774);
	v->a[29664] = 6;
	v->a[29665] = sym_file_descriptor;
	v->a[29666] = sym__concat;
	v->a[29667] = sym_test_operator;
	v->a[29668] = sym__bare_dollar;
	v->a[29669] = sym__brace_start;
	v->a[29670] = aux_sym_heredoc_redirect_token1;
	v->a[29671] = actions(2772);
	v->a[29672] = 35;
	v->a[29673] = anon_sym_LPAREN;
	v->a[29674] = anon_sym_PIPE;
	v->a[29675] = anon_sym_SEMI_SEMI;
	v->a[29676] = anon_sym_SEMI_AMP;
	v->a[29677] = anon_sym_SEMI_SEMI_AMP;
	v->a[29678] = anon_sym_PIPE_AMP;
	v->a[29679] = anon_sym_AMP_AMP;
	small_parse_table_1484(v);
}

void	small_parse_table_1484(t_small_parse_table_array *v)
{
	v->a[29680] = anon_sym_PIPE_PIPE;
	v->a[29681] = anon_sym_LT;
	v->a[29682] = anon_sym_GT;
	v->a[29683] = anon_sym_GT_GT;
	v->a[29684] = anon_sym_AMP_GT;
	v->a[29685] = anon_sym_AMP_GT_GT;
	v->a[29686] = anon_sym_LT_AMP;
	v->a[29687] = anon_sym_GT_AMP;
	v->a[29688] = anon_sym_GT_PIPE;
	v->a[29689] = anon_sym_LT_AMP_DASH;
	v->a[29690] = anon_sym_GT_AMP_DASH;
	v->a[29691] = anon_sym_LT_LT;
	v->a[29692] = anon_sym_LT_LT_DASH;
	v->a[29693] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29694] = anon_sym_AMP;
	v->a[29695] = aux_sym_concatenation_token1;
	v->a[29696] = anon_sym_DOLLAR;
	v->a[29697] = sym__special_character;
	v->a[29698] = anon_sym_DQUOTE;
	v->a[29699] = sym_raw_string;
	small_parse_table_1485(v);
}

/* EOF small_parse_table_296.c */
