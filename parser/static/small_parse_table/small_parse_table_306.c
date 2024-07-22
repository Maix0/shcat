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
	v->a[30600] = sym_arithmetic_expansion;
	v->a[30601] = sym_string;
	v->a[30602] = sym_simple_expansion;
	v->a[30603] = sym_expansion;
	v->a[30604] = sym_command_substitution;
	v->a[30605] = actions(1093);
	v->a[30606] = 7;
	v->a[30607] = anon_sym_LT;
	v->a[30608] = anon_sym_GT;
	v->a[30609] = anon_sym_GT_GT;
	v->a[30610] = anon_sym_LT_AMP;
	v->a[30611] = anon_sym_GT_AMP;
	v->a[30612] = anon_sym_GT_PIPE;
	v->a[30613] = anon_sym_LT_GT;
	v->a[30614] = 6;
	v->a[30615] = actions(3);
	v->a[30616] = 1;
	v->a[30617] = sym_comment;
	v->a[30618] = actions(1115);
	v->a[30619] = 1;
	small_parse_table_1531(v);
}

void	small_parse_table_1531(t_small_parse_table_array *v)
{
	v->a[30620] = aux_sym_concatenation_token1;
	v->a[30621] = actions(1149);
	v->a[30622] = 1;
	v->a[30623] = sym__concat;
	v->a[30624] = state(362);
	v->a[30625] = 1;
	v->a[30626] = aux_sym_concatenation_repeat1;
	v->a[30627] = actions(1132);
	v->a[30628] = 2;
	v->a[30629] = sym_file_descriptor;
	v->a[30630] = sym__bare_dollar;
	v->a[30631] = actions(1134);
	v->a[30632] = 26;
	v->a[30633] = anon_sym_esac;
	v->a[30634] = anon_sym_LPAREN;
	v->a[30635] = anon_sym_PIPE;
	v->a[30636] = anon_sym_SEMI_SEMI;
	v->a[30637] = anon_sym_AMP_AMP;
	v->a[30638] = anon_sym_PIPE_PIPE;
	v->a[30639] = anon_sym_LT;
	small_parse_table_1532(v);
}

void	small_parse_table_1532(t_small_parse_table_array *v)
{
	v->a[30640] = anon_sym_GT;
	v->a[30641] = anon_sym_GT_GT;
	v->a[30642] = anon_sym_LT_AMP;
	v->a[30643] = anon_sym_GT_AMP;
	v->a[30644] = anon_sym_GT_PIPE;
	v->a[30645] = anon_sym_LT_GT;
	v->a[30646] = anon_sym_LT_LT;
	v->a[30647] = anon_sym_LT_LT_DASH;
	v->a[30648] = aux_sym_heredoc_redirect_token1;
	v->a[30649] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30650] = anon_sym_DOLLAR;
	v->a[30651] = anon_sym_DQUOTE;
	v->a[30652] = sym_raw_string;
	v->a[30653] = sym_number;
	v->a[30654] = anon_sym_DOLLAR_LBRACE;
	v->a[30655] = anon_sym_DOLLAR_LPAREN;
	v->a[30656] = anon_sym_BQUOTE;
	v->a[30657] = sym_word;
	v->a[30658] = anon_sym_SEMI;
	v->a[30659] = 7;
	small_parse_table_1533(v);
}

void	small_parse_table_1533(t_small_parse_table_array *v)
{
	v->a[30660] = actions(3);
	v->a[30661] = 1;
	v->a[30662] = sym_comment;
	v->a[30663] = actions(1115);
	v->a[30664] = 1;
	v->a[30665] = aux_sym_concatenation_token1;
	v->a[30666] = actions(1149);
	v->a[30667] = 1;
	v->a[30668] = sym__concat;
	v->a[30669] = actions(1151);
	v->a[30670] = 1;
	v->a[30671] = anon_sym_LPAREN;
	v->a[30672] = state(362);
	v->a[30673] = 1;
	v->a[30674] = aux_sym_concatenation_repeat1;
	v->a[30675] = actions(1132);
	v->a[30676] = 2;
	v->a[30677] = sym_file_descriptor;
	v->a[30678] = sym__bare_dollar;
	v->a[30679] = actions(1134);
	small_parse_table_1534(v);
}

void	small_parse_table_1534(t_small_parse_table_array *v)
{
	v->a[30680] = 25;
	v->a[30681] = anon_sym_esac;
	v->a[30682] = anon_sym_PIPE;
	v->a[30683] = anon_sym_SEMI_SEMI;
	v->a[30684] = anon_sym_AMP_AMP;
	v->a[30685] = anon_sym_PIPE_PIPE;
	v->a[30686] = anon_sym_LT;
	v->a[30687] = anon_sym_GT;
	v->a[30688] = anon_sym_GT_GT;
	v->a[30689] = anon_sym_LT_AMP;
	v->a[30690] = anon_sym_GT_AMP;
	v->a[30691] = anon_sym_GT_PIPE;
	v->a[30692] = anon_sym_LT_GT;
	v->a[30693] = anon_sym_LT_LT;
	v->a[30694] = anon_sym_LT_LT_DASH;
	v->a[30695] = aux_sym_heredoc_redirect_token1;
	v->a[30696] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30697] = anon_sym_DOLLAR;
	v->a[30698] = anon_sym_DQUOTE;
	v->a[30699] = sym_raw_string;
	small_parse_table_1535(v);
}

/* EOF small_parse_table_306.c */
