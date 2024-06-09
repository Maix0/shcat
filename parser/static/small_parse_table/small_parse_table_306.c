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
	v->a[30600] = anon_sym_LPAREN;
	v->a[30601] = anon_sym_PIPE;
	v->a[30602] = anon_sym_SEMI_SEMI;
	v->a[30603] = anon_sym_AMP_AMP;
	v->a[30604] = anon_sym_PIPE_PIPE;
	v->a[30605] = anon_sym_LT;
	v->a[30606] = anon_sym_GT;
	v->a[30607] = anon_sym_GT_GT;
	v->a[30608] = anon_sym_AMP_GT;
	v->a[30609] = anon_sym_AMP_GT_GT;
	v->a[30610] = anon_sym_LT_AMP;
	v->a[30611] = anon_sym_GT_AMP;
	v->a[30612] = anon_sym_GT_PIPE;
	v->a[30613] = anon_sym_LT_AMP_DASH;
	v->a[30614] = anon_sym_GT_AMP_DASH;
	v->a[30615] = anon_sym_LT_LT;
	v->a[30616] = anon_sym_LT_LT_DASH;
	v->a[30617] = aux_sym_heredoc_redirect_token1;
	v->a[30618] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30619] = anon_sym_AMP;
	small_parse_table_1531(v);
}

void	small_parse_table_1531(t_small_parse_table_array *v)
{
	v->a[30620] = aux_sym_concatenation_token1;
	v->a[30621] = anon_sym_DOLLAR;
	v->a[30622] = anon_sym_DQUOTE;
	v->a[30623] = sym_raw_string;
	v->a[30624] = aux_sym_number_token1;
	v->a[30625] = aux_sym_number_token2;
	v->a[30626] = anon_sym_DOLLAR_LBRACE;
	v->a[30627] = anon_sym_DOLLAR_LPAREN;
	v->a[30628] = anon_sym_BQUOTE;
	v->a[30629] = sym_word;
	v->a[30630] = anon_sym_SEMI;
	v->a[30631] = 5;
	v->a[30632] = actions(3);
	v->a[30633] = 1;
	v->a[30634] = sym_comment;
	v->a[30635] = state(699);
	v->a[30636] = 1;
	v->a[30637] = sym_concatenation;
	v->a[30638] = actions(750);
	v->a[30639] = 2;
	small_parse_table_1532(v);
}

void	small_parse_table_1532(t_small_parse_table_array *v)
{
	v->a[30640] = sym_file_descriptor;
	v->a[30641] = sym_variable_name;
	v->a[30642] = state(755);
	v->a[30643] = 6;
	v->a[30644] = sym_arithmetic_expansion;
	v->a[30645] = sym_string;
	v->a[30646] = sym_number;
	v->a[30647] = sym_simple_expansion;
	v->a[30648] = sym_expansion;
	v->a[30649] = sym_command_substitution;
	v->a[30650] = actions(748);
	v->a[30651] = 26;
	v->a[30652] = anon_sym_PIPE;
	v->a[30653] = anon_sym_AMP_AMP;
	v->a[30654] = anon_sym_PIPE_PIPE;
	v->a[30655] = anon_sym_LT;
	v->a[30656] = anon_sym_GT;
	v->a[30657] = anon_sym_GT_GT;
	v->a[30658] = anon_sym_AMP_GT;
	v->a[30659] = anon_sym_AMP_GT_GT;
	small_parse_table_1533(v);
}

void	small_parse_table_1533(t_small_parse_table_array *v)
{
	v->a[30660] = anon_sym_LT_AMP;
	v->a[30661] = anon_sym_GT_AMP;
	v->a[30662] = anon_sym_GT_PIPE;
	v->a[30663] = anon_sym_LT_AMP_DASH;
	v->a[30664] = anon_sym_GT_AMP_DASH;
	v->a[30665] = anon_sym_LT_LT;
	v->a[30666] = anon_sym_LT_LT_DASH;
	v->a[30667] = aux_sym_heredoc_redirect_token1;
	v->a[30668] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30669] = anon_sym_DOLLAR;
	v->a[30670] = anon_sym_DQUOTE;
	v->a[30671] = sym_raw_string;
	v->a[30672] = aux_sym_number_token1;
	v->a[30673] = aux_sym_number_token2;
	v->a[30674] = anon_sym_DOLLAR_LBRACE;
	v->a[30675] = anon_sym_DOLLAR_LPAREN;
	v->a[30676] = anon_sym_BQUOTE;
	v->a[30677] = sym_word;
	v->a[30678] = 6;
	v->a[30679] = actions(3);
	small_parse_table_1534(v);
}

void	small_parse_table_1534(t_small_parse_table_array *v)
{
	v->a[30680] = 1;
	v->a[30681] = sym_comment;
	v->a[30682] = actions(1200);
	v->a[30683] = 1;
	v->a[30684] = aux_sym_concatenation_token1;
	v->a[30685] = actions(1204);
	v->a[30686] = 1;
	v->a[30687] = sym__concat;
	v->a[30688] = state(379);
	v->a[30689] = 1;
	v->a[30690] = aux_sym_concatenation_repeat1;
	v->a[30691] = actions(1202);
	v->a[30692] = 2;
	v->a[30693] = sym_file_descriptor;
	v->a[30694] = sym_variable_name;
	v->a[30695] = actions(1198);
	v->a[30696] = 30;
	v->a[30697] = anon_sym_esac;
	v->a[30698] = anon_sym_PIPE;
	v->a[30699] = anon_sym_SEMI_SEMI;
	small_parse_table_1535(v);
}

/* EOF small_parse_table_306.c */
