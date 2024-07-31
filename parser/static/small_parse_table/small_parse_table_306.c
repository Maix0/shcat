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
	v->a[30600] = actions(469);
	v->a[30601] = 2;
	v->a[30602] = sym__concat;
	v->a[30603] = sym__bare_dollar;
	v->a[30604] = actions(467);
	v->a[30605] = 26;
	v->a[30606] = anon_sym_esac;
	v->a[30607] = anon_sym_PIPE;
	v->a[30608] = anon_sym_SEMI_SEMI;
	v->a[30609] = anon_sym_AMP_AMP;
	v->a[30610] = anon_sym_PIPE_PIPE;
	v->a[30611] = anon_sym_LT;
	v->a[30612] = anon_sym_GT;
	v->a[30613] = anon_sym_GT_GT;
	v->a[30614] = anon_sym_LT_AMP;
	v->a[30615] = anon_sym_GT_AMP;
	v->a[30616] = anon_sym_GT_PIPE;
	v->a[30617] = anon_sym_LT_GT;
	v->a[30618] = anon_sym_LT_LT;
	v->a[30619] = anon_sym_LT_LT_DASH;
	small_parse_table_1531(v);
}

void	small_parse_table_1531(t_small_parse_table_array *v)
{
	v->a[30620] = aux_sym_heredoc_redirect_token1;
	v->a[30621] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30622] = aux_sym_concatenation_token1;
	v->a[30623] = anon_sym_DOLLAR;
	v->a[30624] = anon_sym_DQUOTE;
	v->a[30625] = sym_raw_string;
	v->a[30626] = sym_number;
	v->a[30627] = anon_sym_DOLLAR_LBRACE;
	v->a[30628] = anon_sym_DOLLAR_LPAREN;
	v->a[30629] = anon_sym_BQUOTE;
	v->a[30630] = sym_word;
	v->a[30631] = anon_sym_SEMI;
	v->a[30632] = 3;
	v->a[30633] = actions(3);
	v->a[30634] = 1;
	v->a[30635] = sym_comment;
	v->a[30636] = actions(1165);
	v->a[30637] = 2;
	v->a[30638] = sym__concat;
	v->a[30639] = sym_variable_name;
	small_parse_table_1532(v);
}

void	small_parse_table_1532(t_small_parse_table_array *v)
{
	v->a[30640] = actions(1163);
	v->a[30641] = 26;
	v->a[30642] = anon_sym_esac;
	v->a[30643] = anon_sym_PIPE;
	v->a[30644] = anon_sym_SEMI_SEMI;
	v->a[30645] = anon_sym_AMP_AMP;
	v->a[30646] = anon_sym_PIPE_PIPE;
	v->a[30647] = anon_sym_LT;
	v->a[30648] = anon_sym_GT;
	v->a[30649] = anon_sym_GT_GT;
	v->a[30650] = anon_sym_LT_AMP;
	v->a[30651] = anon_sym_GT_AMP;
	v->a[30652] = anon_sym_GT_PIPE;
	v->a[30653] = anon_sym_LT_GT;
	v->a[30654] = anon_sym_LT_LT;
	v->a[30655] = anon_sym_LT_LT_DASH;
	v->a[30656] = aux_sym_heredoc_redirect_token1;
	v->a[30657] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30658] = aux_sym_concatenation_token1;
	v->a[30659] = anon_sym_DOLLAR;
	small_parse_table_1533(v);
}

void	small_parse_table_1533(t_small_parse_table_array *v)
{
	v->a[30660] = anon_sym_DQUOTE;
	v->a[30661] = sym_raw_string;
	v->a[30662] = sym_number;
	v->a[30663] = anon_sym_DOLLAR_LBRACE;
	v->a[30664] = anon_sym_DOLLAR_LPAREN;
	v->a[30665] = anon_sym_BQUOTE;
	v->a[30666] = sym_word;
	v->a[30667] = anon_sym_SEMI;
	v->a[30668] = 6;
	v->a[30669] = actions(3);
	v->a[30670] = 1;
	v->a[30671] = sym_comment;
	v->a[30672] = actions(1023);
	v->a[30673] = 1;
	v->a[30674] = sym_variable_name;
	v->a[30675] = actions(1093);
	v->a[30676] = 1;
	v->a[30677] = aux_sym_concatenation_token1;
	v->a[30678] = actions(1099);
	v->a[30679] = 1;
	small_parse_table_1534(v);
}

void	small_parse_table_1534(t_small_parse_table_array *v)
{
	v->a[30680] = sym__concat;
	v->a[30681] = state(423);
	v->a[30682] = 1;
	v->a[30683] = aux_sym_concatenation_repeat1;
	v->a[30684] = actions(1025);
	v->a[30685] = 24;
	v->a[30686] = anon_sym_PIPE;
	v->a[30687] = anon_sym_SEMI_SEMI;
	v->a[30688] = anon_sym_AMP_AMP;
	v->a[30689] = anon_sym_PIPE_PIPE;
	v->a[30690] = anon_sym_LT;
	v->a[30691] = anon_sym_GT;
	v->a[30692] = anon_sym_GT_GT;
	v->a[30693] = anon_sym_LT_AMP;
	v->a[30694] = anon_sym_GT_AMP;
	v->a[30695] = anon_sym_GT_PIPE;
	v->a[30696] = anon_sym_LT_GT;
	v->a[30697] = anon_sym_LT_LT;
	v->a[30698] = anon_sym_LT_LT_DASH;
	v->a[30699] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1535(v);
}

/* EOF small_parse_table_306.c */
