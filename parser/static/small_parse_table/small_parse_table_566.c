/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_566.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2830(t_small_parse_table_array *v)
{
	v->a[56600] = sym_file_descriptor;
	v->a[56601] = state(692);
	v->a[56602] = 1;
	v->a[56603] = sym_terminator;
	v->a[56604] = actions(698);
	v->a[56605] = 2;
	v->a[56606] = anon_sym_AMP_AMP;
	v->a[56607] = anon_sym_PIPE_PIPE;
	v->a[56608] = actions(700);
	v->a[56609] = 2;
	v->a[56610] = anon_sym_LT_LT;
	v->a[56611] = anon_sym_LT_LT_DASH;
	v->a[56612] = actions(696);
	v->a[56613] = 3;
	v->a[56614] = anon_sym_SEMI_SEMI;
	v->a[56615] = anon_sym_AMP;
	v->a[56616] = anon_sym_SEMI;
	v->a[56617] = state(1031);
	v->a[56618] = 3;
	v->a[56619] = sym_file_redirect;
	small_parse_table_2831(v);
}

void	small_parse_table_2831(t_small_parse_table_array *v)
{
	v->a[56620] = sym_heredoc_redirect;
	v->a[56621] = aux_sym_redirected_statement_repeat1;
	v->a[56622] = actions(1855);
	v->a[56623] = 7;
	v->a[56624] = anon_sym_LT;
	v->a[56625] = anon_sym_GT;
	v->a[56626] = anon_sym_GT_GT;
	v->a[56627] = anon_sym_LT_AMP;
	v->a[56628] = anon_sym_GT_AMP;
	v->a[56629] = anon_sym_GT_PIPE;
	v->a[56630] = anon_sym_LT_GT;
	v->a[56631] = 11;
	v->a[56632] = actions(3);
	v->a[56633] = 1;
	v->a[56634] = sym_comment;
	v->a[56635] = actions(692);
	v->a[56636] = 1;
	v->a[56637] = anon_sym_PIPE;
	v->a[56638] = actions(724);
	v->a[56639] = 1;
	small_parse_table_2832(v);
}

void	small_parse_table_2832(t_small_parse_table_array *v)
{
	v->a[56640] = anon_sym_RPAREN;
	v->a[56641] = actions(1857);
	v->a[56642] = 1;
	v->a[56643] = aux_sym_heredoc_redirect_token1;
	v->a[56644] = actions(1859);
	v->a[56645] = 1;
	v->a[56646] = sym_file_descriptor;
	v->a[56647] = state(691);
	v->a[56648] = 1;
	v->a[56649] = sym_terminator;
	v->a[56650] = actions(698);
	v->a[56651] = 2;
	v->a[56652] = anon_sym_AMP_AMP;
	v->a[56653] = anon_sym_PIPE_PIPE;
	v->a[56654] = actions(700);
	v->a[56655] = 2;
	v->a[56656] = anon_sym_LT_LT;
	v->a[56657] = anon_sym_LT_LT_DASH;
	v->a[56658] = actions(696);
	v->a[56659] = 3;
	small_parse_table_2833(v);
}

void	small_parse_table_2833(t_small_parse_table_array *v)
{
	v->a[56660] = anon_sym_SEMI_SEMI;
	v->a[56661] = anon_sym_AMP;
	v->a[56662] = anon_sym_SEMI;
	v->a[56663] = state(1031);
	v->a[56664] = 3;
	v->a[56665] = sym_file_redirect;
	v->a[56666] = sym_heredoc_redirect;
	v->a[56667] = aux_sym_redirected_statement_repeat1;
	v->a[56668] = actions(1855);
	v->a[56669] = 7;
	v->a[56670] = anon_sym_LT;
	v->a[56671] = anon_sym_GT;
	v->a[56672] = anon_sym_GT_GT;
	v->a[56673] = anon_sym_LT_AMP;
	v->a[56674] = anon_sym_GT_AMP;
	v->a[56675] = anon_sym_GT_PIPE;
	v->a[56676] = anon_sym_LT_GT;
	v->a[56677] = 11;
	v->a[56678] = actions(3);
	v->a[56679] = 1;
	small_parse_table_2834(v);
}

void	small_parse_table_2834(t_small_parse_table_array *v)
{
	v->a[56680] = sym_comment;
	v->a[56681] = actions(692);
	v->a[56682] = 1;
	v->a[56683] = anon_sym_PIPE;
	v->a[56684] = actions(724);
	v->a[56685] = 1;
	v->a[56686] = anon_sym_RPAREN;
	v->a[56687] = actions(1857);
	v->a[56688] = 1;
	v->a[56689] = aux_sym_heredoc_redirect_token1;
	v->a[56690] = actions(1859);
	v->a[56691] = 1;
	v->a[56692] = sym_file_descriptor;
	v->a[56693] = state(686);
	v->a[56694] = 1;
	v->a[56695] = sym_terminator;
	v->a[56696] = actions(698);
	v->a[56697] = 2;
	v->a[56698] = anon_sym_AMP_AMP;
	v->a[56699] = anon_sym_PIPE_PIPE;
	small_parse_table_2835(v);
}

/* EOF small_parse_table_566.c */
