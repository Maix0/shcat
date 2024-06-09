/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_646.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3230(t_small_parse_table_array *v)
{
	v->a[64600] = ts_builtin_sym_end;
	v->a[64601] = aux_sym_heredoc_redirect_token1;
	v->a[64602] = actions(1198);
	v->a[64603] = 20;
	v->a[64604] = anon_sym_PIPE;
	v->a[64605] = anon_sym_RPAREN;
	v->a[64606] = anon_sym_SEMI_SEMI;
	v->a[64607] = anon_sym_AMP_AMP;
	v->a[64608] = anon_sym_PIPE_PIPE;
	v->a[64609] = anon_sym_LT;
	v->a[64610] = anon_sym_GT;
	v->a[64611] = anon_sym_GT_GT;
	v->a[64612] = anon_sym_AMP_GT;
	v->a[64613] = anon_sym_AMP_GT_GT;
	v->a[64614] = anon_sym_LT_AMP;
	v->a[64615] = anon_sym_GT_AMP;
	v->a[64616] = anon_sym_GT_PIPE;
	v->a[64617] = anon_sym_LT_AMP_DASH;
	v->a[64618] = anon_sym_GT_AMP_DASH;
	v->a[64619] = anon_sym_LT_LT;
	small_parse_table_3231(v);
}

void	small_parse_table_3231(t_small_parse_table_array *v)
{
	v->a[64620] = anon_sym_LT_LT_DASH;
	v->a[64621] = anon_sym_AMP;
	v->a[64622] = anon_sym_BQUOTE;
	v->a[64623] = anon_sym_SEMI;
	v->a[64624] = 8;
	v->a[64625] = actions(3);
	v->a[64626] = 1;
	v->a[64627] = sym_comment;
	v->a[64628] = actions(2290);
	v->a[64629] = 1;
	v->a[64630] = sym_file_descriptor;
	v->a[64631] = actions(2308);
	v->a[64632] = 1;
	v->a[64633] = aux_sym_heredoc_redirect_token1;
	v->a[64634] = actions(1062);
	v->a[64635] = 2;
	v->a[64636] = anon_sym_LT_LT;
	v->a[64637] = anon_sym_LT_LT_DASH;
	v->a[64638] = actions(2286);
	v->a[64639] = 2;
	small_parse_table_3232(v);
}

void	small_parse_table_3232(t_small_parse_table_array *v)
{
	v->a[64640] = anon_sym_LT_AMP_DASH;
	v->a[64641] = anon_sym_GT_AMP_DASH;
	v->a[64642] = state(1055);
	v->a[64643] = 3;
	v->a[64644] = sym_file_redirect;
	v->a[64645] = sym_heredoc_redirect;
	v->a[64646] = aux_sym_redirected_statement_repeat1;
	v->a[64647] = actions(2302);
	v->a[64648] = 7;
	v->a[64649] = anon_sym_PIPE;
	v->a[64650] = anon_sym_RPAREN;
	v->a[64651] = anon_sym_SEMI_SEMI;
	v->a[64652] = anon_sym_AMP_AMP;
	v->a[64653] = anon_sym_PIPE_PIPE;
	v->a[64654] = anon_sym_AMP;
	v->a[64655] = anon_sym_SEMI;
	v->a[64656] = actions(2284);
	v->a[64657] = 8;
	v->a[64658] = anon_sym_LT;
	v->a[64659] = anon_sym_GT;
	small_parse_table_3233(v);
}

void	small_parse_table_3233(t_small_parse_table_array *v)
{
	v->a[64660] = anon_sym_GT_GT;
	v->a[64661] = anon_sym_AMP_GT;
	v->a[64662] = anon_sym_AMP_GT_GT;
	v->a[64663] = anon_sym_LT_AMP;
	v->a[64664] = anon_sym_GT_AMP;
	v->a[64665] = anon_sym_GT_PIPE;
	v->a[64666] = 18;
	v->a[64667] = actions(3);
	v->a[64668] = 1;
	v->a[64669] = sym_comment;
	v->a[64670] = actions(2115);
	v->a[64671] = 1;
	v->a[64672] = anon_sym_LPAREN;
	v->a[64673] = actions(2119);
	v->a[64674] = 1;
	v->a[64675] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64676] = actions(2121);
	v->a[64677] = 1;
	v->a[64678] = anon_sym_DOLLAR;
	v->a[64679] = actions(2123);
	small_parse_table_3234(v);
}

void	small_parse_table_3234(t_small_parse_table_array *v)
{
	v->a[64680] = 1;
	v->a[64681] = anon_sym_DQUOTE;
	v->a[64682] = actions(2125);
	v->a[64683] = 1;
	v->a[64684] = aux_sym_number_token1;
	v->a[64685] = actions(2127);
	v->a[64686] = 1;
	v->a[64687] = aux_sym_number_token2;
	v->a[64688] = actions(2129);
	v->a[64689] = 1;
	v->a[64690] = anon_sym_DOLLAR_LBRACE;
	v->a[64691] = actions(2131);
	v->a[64692] = 1;
	v->a[64693] = anon_sym_DOLLAR_LPAREN;
	v->a[64694] = actions(2133);
	v->a[64695] = 1;
	v->a[64696] = anon_sym_BQUOTE;
	v->a[64697] = actions(2135);
	v->a[64698] = 1;
	v->a[64699] = sym_extglob_pattern;
	small_parse_table_3235(v);
}

/* EOF small_parse_table_646.c */
