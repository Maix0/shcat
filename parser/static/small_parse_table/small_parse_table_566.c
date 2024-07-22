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
	v->a[56601] = sym_variable_name;
	v->a[56602] = aux_sym_heredoc_redirect_token1;
	v->a[56603] = actions(1099);
	v->a[56604] = 15;
	v->a[56605] = anon_sym_PIPE;
	v->a[56606] = anon_sym_RPAREN;
	v->a[56607] = anon_sym_SEMI_SEMI;
	v->a[56608] = anon_sym_AMP_AMP;
	v->a[56609] = anon_sym_PIPE_PIPE;
	v->a[56610] = anon_sym_LT;
	v->a[56611] = anon_sym_GT;
	v->a[56612] = anon_sym_GT_GT;
	v->a[56613] = anon_sym_LT_AMP;
	v->a[56614] = anon_sym_GT_AMP;
	v->a[56615] = anon_sym_GT_PIPE;
	v->a[56616] = anon_sym_LT_GT;
	v->a[56617] = anon_sym_LT_LT;
	v->a[56618] = anon_sym_LT_LT_DASH;
	v->a[56619] = anon_sym_SEMI;
	small_parse_table_2831(v);
}

void	small_parse_table_2831(t_small_parse_table_array *v)
{
	v->a[56620] = 11;
	v->a[56621] = actions(3);
	v->a[56622] = 1;
	v->a[56623] = sym_comment;
	v->a[56624] = actions(782);
	v->a[56625] = 1;
	v->a[56626] = anon_sym_PIPE;
	v->a[56627] = actions(950);
	v->a[56628] = 1;
	v->a[56629] = ts_builtin_sym_end;
	v->a[56630] = actions(1882);
	v->a[56631] = 1;
	v->a[56632] = aux_sym_heredoc_redirect_token1;
	v->a[56633] = actions(1884);
	v->a[56634] = 1;
	v->a[56635] = sym_file_descriptor;
	v->a[56636] = state(720);
	v->a[56637] = 1;
	v->a[56638] = sym_terminator;
	v->a[56639] = actions(790);
	small_parse_table_2832(v);
}

void	small_parse_table_2832(t_small_parse_table_array *v)
{
	v->a[56640] = 2;
	v->a[56641] = anon_sym_LT_LT;
	v->a[56642] = anon_sym_LT_LT_DASH;
	v->a[56643] = actions(808);
	v->a[56644] = 2;
	v->a[56645] = anon_sym_SEMI_SEMI;
	v->a[56646] = anon_sym_SEMI;
	v->a[56647] = actions(810);
	v->a[56648] = 2;
	v->a[56649] = anon_sym_AMP_AMP;
	v->a[56650] = anon_sym_PIPE_PIPE;
	v->a[56651] = state(1046);
	v->a[56652] = 3;
	v->a[56653] = sym_file_redirect;
	v->a[56654] = sym_heredoc_redirect;
	v->a[56655] = aux_sym_redirected_statement_repeat1;
	v->a[56656] = actions(1880);
	v->a[56657] = 7;
	v->a[56658] = anon_sym_LT;
	v->a[56659] = anon_sym_GT;
	small_parse_table_2833(v);
}

void	small_parse_table_2833(t_small_parse_table_array *v)
{
	v->a[56660] = anon_sym_GT_GT;
	v->a[56661] = anon_sym_LT_AMP;
	v->a[56662] = anon_sym_GT_AMP;
	v->a[56663] = anon_sym_GT_PIPE;
	v->a[56664] = anon_sym_LT_GT;
	v->a[56665] = 11;
	v->a[56666] = actions(3);
	v->a[56667] = 1;
	v->a[56668] = sym_comment;
	v->a[56669] = actions(782);
	v->a[56670] = 1;
	v->a[56671] = anon_sym_PIPE;
	v->a[56672] = actions(950);
	v->a[56673] = 1;
	v->a[56674] = ts_builtin_sym_end;
	v->a[56675] = actions(1882);
	v->a[56676] = 1;
	v->a[56677] = aux_sym_heredoc_redirect_token1;
	v->a[56678] = actions(1884);
	v->a[56679] = 1;
	small_parse_table_2834(v);
}

void	small_parse_table_2834(t_small_parse_table_array *v)
{
	v->a[56680] = sym_file_descriptor;
	v->a[56681] = state(719);
	v->a[56682] = 1;
	v->a[56683] = sym_terminator;
	v->a[56684] = actions(790);
	v->a[56685] = 2;
	v->a[56686] = anon_sym_LT_LT;
	v->a[56687] = anon_sym_LT_LT_DASH;
	v->a[56688] = actions(808);
	v->a[56689] = 2;
	v->a[56690] = anon_sym_SEMI_SEMI;
	v->a[56691] = anon_sym_SEMI;
	v->a[56692] = actions(810);
	v->a[56693] = 2;
	v->a[56694] = anon_sym_AMP_AMP;
	v->a[56695] = anon_sym_PIPE_PIPE;
	v->a[56696] = state(1046);
	v->a[56697] = 3;
	v->a[56698] = sym_file_redirect;
	v->a[56699] = sym_heredoc_redirect;
	small_parse_table_2835(v);
}

/* EOF small_parse_table_566.c */
