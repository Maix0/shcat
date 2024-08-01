/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_306.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1530(t_small_parse_table_array *v)
{
	v->a[30600] = 1;
	v->a[30601] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30602] = actions(784);
	v->a[30603] = 1;
	v->a[30604] = anon_sym_DOLLAR;
	v->a[30605] = actions(786);
	v->a[30606] = 1;
	v->a[30607] = anon_sym_DQUOTE;
	v->a[30608] = actions(788);
	v->a[30609] = 1;
	v->a[30610] = anon_sym_DOLLAR_LBRACE;
	v->a[30611] = actions(790);
	v->a[30612] = 1;
	v->a[30613] = anon_sym_DOLLAR_LPAREN;
	v->a[30614] = actions(792);
	v->a[30615] = 1;
	v->a[30616] = anon_sym_BQUOTE;
	v->a[30617] = actions(794);
	v->a[30618] = 1;
	v->a[30619] = sym_extglob_pattern;
	small_parse_table_1531(v);
}

void	small_parse_table_1531(t_small_parse_table_array *v)
{
	v->a[30620] = state(597);
	v->a[30621] = 1;
	v->a[30622] = aux_sym_case_statement_repeat1;
	v->a[30623] = state(1232);
	v->a[30624] = 1;
	v->a[30625] = sym_case_item;
	v->a[30626] = state(1604);
	v->a[30627] = 1;
	v->a[30628] = sym__case_item_last;
	v->a[30629] = state(1538);
	v->a[30630] = 2;
	v->a[30631] = sym_concatenation;
	v->a[30632] = sym__extglob_blob;
	v->a[30633] = actions(774);
	v->a[30634] = 3;
	v->a[30635] = sym_raw_string;
	v->a[30636] = sym_number;
	v->a[30637] = sym_word;
	v->a[30638] = state(1468);
	v->a[30639] = 5;
	small_parse_table_1532(v);
}

void	small_parse_table_1532(t_small_parse_table_array *v)
{
	v->a[30640] = sym_arithmetic_expansion;
	v->a[30641] = sym_string;
	v->a[30642] = sym_simple_expansion;
	v->a[30643] = sym_expansion;
	v->a[30644] = sym_command_substitution;
	v->a[30645] = 6;
	v->a[30646] = actions(3);
	v->a[30647] = 1;
	v->a[30648] = sym_comment;
	v->a[30649] = actions(841);
	v->a[30650] = 1;
	v->a[30651] = sym__bare_dollar;
	v->a[30652] = actions(857);
	v->a[30653] = 1;
	v->a[30654] = aux_sym_concatenation_token1;
	v->a[30655] = actions(859);
	v->a[30656] = 1;
	v->a[30657] = sym__concat;
	v->a[30658] = state(579);
	v->a[30659] = 1;
	small_parse_table_1533(v);
}

void	small_parse_table_1533(t_small_parse_table_array *v)
{
	v->a[30660] = aux_sym_concatenation_repeat1;
	v->a[30661] = actions(833);
	v->a[30662] = 17;
	v->a[30663] = anon_sym_PIPE;
	v->a[30664] = anon_sym_AMP_AMP;
	v->a[30665] = anon_sym_PIPE_PIPE;
	v->a[30666] = anon_sym_LT;
	v->a[30667] = anon_sym_GT;
	v->a[30668] = anon_sym_GT_GT;
	v->a[30669] = anon_sym_LT_LT;
	v->a[30670] = aux_sym_heredoc_redirect_token1;
	v->a[30671] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30672] = anon_sym_DOLLAR;
	v->a[30673] = anon_sym_DQUOTE;
	v->a[30674] = sym_raw_string;
	v->a[30675] = sym_number;
	v->a[30676] = anon_sym_DOLLAR_LBRACE;
	v->a[30677] = anon_sym_DOLLAR_LPAREN;
	v->a[30678] = anon_sym_BQUOTE;
	v->a[30679] = sym_word;
	small_parse_table_1534(v);
}

void	small_parse_table_1534(t_small_parse_table_array *v)
{
	v->a[30680] = 6;
	v->a[30681] = actions(3);
	v->a[30682] = 1;
	v->a[30683] = sym_comment;
	v->a[30684] = actions(1257);
	v->a[30685] = 1;
	v->a[30686] = sym_variable_name;
	v->a[30687] = actions(1271);
	v->a[30688] = 1;
	v->a[30689] = anon_sym_RPAREN;
	v->a[30690] = actions(1254);
	v->a[30691] = 3;
	v->a[30692] = anon_sym_LT;
	v->a[30693] = anon_sym_GT;
	v->a[30694] = anon_sym_GT_GT;
	v->a[30695] = actions(1249);
	v->a[30696] = 7;
	v->a[30697] = anon_sym_PIPE;
	v->a[30698] = anon_sym_SEMI_SEMI;
	v->a[30699] = anon_sym_AMP_AMP;
	small_parse_table_1535(v);
}

/* EOF small_parse_table_306.c */
