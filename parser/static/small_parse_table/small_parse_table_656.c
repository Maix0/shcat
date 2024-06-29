/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_656.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3280(t_small_parse_table_array *v)
{
	v->a[65600] = anon_sym_BQUOTE;
	v->a[65601] = anon_sym_SEMI;
	v->a[65602] = 8;
	v->a[65603] = actions(3);
	v->a[65604] = 1;
	v->a[65605] = sym_comment;
	v->a[65606] = actions(2079);
	v->a[65607] = 1;
	v->a[65608] = aux_sym_heredoc_redirect_token1;
	v->a[65609] = actions(2116);
	v->a[65610] = 1;
	v->a[65611] = sym_file_descriptor;
	v->a[65612] = actions(2110);
	v->a[65613] = 2;
	v->a[65614] = anon_sym_LT_AMP_DASH;
	v->a[65615] = anon_sym_GT_AMP_DASH;
	v->a[65616] = actions(2113);
	v->a[65617] = 2;
	v->a[65618] = anon_sym_LT_LT;
	v->a[65619] = anon_sym_LT_LT_DASH;
	small_parse_table_3281(v);
}

void	small_parse_table_3281(t_small_parse_table_array *v)
{
	v->a[65620] = state(1116);
	v->a[65621] = 3;
	v->a[65622] = sym_file_redirect;
	v->a[65623] = sym_heredoc_redirect;
	v->a[65624] = aux_sym_redirected_statement_repeat1;
	v->a[65625] = actions(2068);
	v->a[65626] = 7;
	v->a[65627] = anon_sym_PIPE;
	v->a[65628] = anon_sym_RPAREN;
	v->a[65629] = anon_sym_SEMI_SEMI;
	v->a[65630] = anon_sym_AMP_AMP;
	v->a[65631] = anon_sym_PIPE_PIPE;
	v->a[65632] = anon_sym_AMP;
	v->a[65633] = anon_sym_SEMI;
	v->a[65634] = actions(2107);
	v->a[65635] = 8;
	v->a[65636] = anon_sym_LT;
	v->a[65637] = anon_sym_GT;
	v->a[65638] = anon_sym_GT_GT;
	v->a[65639] = anon_sym_AMP_GT;
	small_parse_table_3282(v);
}

void	small_parse_table_3282(t_small_parse_table_array *v)
{
	v->a[65640] = anon_sym_AMP_GT_GT;
	v->a[65641] = anon_sym_LT_AMP;
	v->a[65642] = anon_sym_GT_AMP;
	v->a[65643] = anon_sym_GT_PIPE;
	v->a[65644] = 4;
	v->a[65645] = actions(3);
	v->a[65646] = 1;
	v->a[65647] = sym_comment;
	v->a[65648] = actions(927);
	v->a[65649] = 2;
	v->a[65650] = sym_file_descriptor;
	v->a[65651] = aux_sym_heredoc_redirect_token1;
	v->a[65652] = state(1137);
	v->a[65653] = 3;
	v->a[65654] = sym_file_redirect;
	v->a[65655] = sym_heredoc_redirect;
	v->a[65656] = aux_sym_redirected_statement_repeat1;
	v->a[65657] = actions(900);
	v->a[65658] = 19;
	v->a[65659] = anon_sym_PIPE;
	small_parse_table_3283(v);
}

void	small_parse_table_3283(t_small_parse_table_array *v)
{
	v->a[65660] = anon_sym_RPAREN;
	v->a[65661] = anon_sym_SEMI_SEMI;
	v->a[65662] = anon_sym_AMP_AMP;
	v->a[65663] = anon_sym_PIPE_PIPE;
	v->a[65664] = anon_sym_LT;
	v->a[65665] = anon_sym_GT;
	v->a[65666] = anon_sym_GT_GT;
	v->a[65667] = anon_sym_AMP_GT;
	v->a[65668] = anon_sym_AMP_GT_GT;
	v->a[65669] = anon_sym_LT_AMP;
	v->a[65670] = anon_sym_GT_AMP;
	v->a[65671] = anon_sym_GT_PIPE;
	v->a[65672] = anon_sym_LT_AMP_DASH;
	v->a[65673] = anon_sym_GT_AMP_DASH;
	v->a[65674] = anon_sym_LT_LT;
	v->a[65675] = anon_sym_LT_LT_DASH;
	v->a[65676] = anon_sym_AMP;
	v->a[65677] = anon_sym_SEMI;
	v->a[65678] = 6;
	v->a[65679] = actions(3);
	small_parse_table_3284(v);
}

void	small_parse_table_3284(t_small_parse_table_array *v)
{
	v->a[65680] = 1;
	v->a[65681] = sym_comment;
	v->a[65682] = actions(2101);
	v->a[65683] = 1;
	v->a[65684] = aux_sym_concatenation_token1;
	v->a[65685] = actions(2103);
	v->a[65686] = 1;
	v->a[65687] = sym__concat;
	v->a[65688] = state(1171);
	v->a[65689] = 1;
	v->a[65690] = aux_sym_concatenation_repeat1;
	v->a[65691] = actions(538);
	v->a[65692] = 2;
	v->a[65693] = sym_file_descriptor;
	v->a[65694] = aux_sym_heredoc_redirect_token1;
	v->a[65695] = actions(540);
	v->a[65696] = 19;
	v->a[65697] = anon_sym_PIPE;
	v->a[65698] = anon_sym_RPAREN;
	v->a[65699] = anon_sym_SEMI_SEMI;
	small_parse_table_3285(v);
}

/* EOF small_parse_table_656.c */
