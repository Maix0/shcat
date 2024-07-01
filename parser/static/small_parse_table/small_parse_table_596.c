/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_596.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2980(t_small_parse_table_array *v)
{
	v->a[59600] = actions(744);
	v->a[59601] = 2;
	v->a[59602] = anon_sym_LT_LT;
	v->a[59603] = anon_sym_LT_LT_DASH;
	v->a[59604] = actions(1955);
	v->a[59605] = 2;
	v->a[59606] = ts_builtin_sym_end;
	v->a[59607] = aux_sym_heredoc_redirect_token1;
	v->a[59608] = state(1042);
	v->a[59609] = 3;
	v->a[59610] = sym_file_redirect;
	v->a[59611] = sym_heredoc_redirect;
	v->a[59612] = aux_sym_redirected_statement_repeat1;
	v->a[59613] = actions(1953);
	v->a[59614] = 6;
	v->a[59615] = anon_sym_PIPE;
	v->a[59616] = anon_sym_SEMI_SEMI;
	v->a[59617] = anon_sym_AMP_AMP;
	v->a[59618] = anon_sym_PIPE_PIPE;
	v->a[59619] = anon_sym_AMP;
	small_parse_table_2981(v);
}

void	small_parse_table_2981(t_small_parse_table_array *v)
{
	v->a[59620] = anon_sym_SEMI;
	v->a[59621] = actions(1837);
	v->a[59622] = 7;
	v->a[59623] = anon_sym_LT;
	v->a[59624] = anon_sym_GT;
	v->a[59625] = anon_sym_GT_GT;
	v->a[59626] = anon_sym_LT_AMP;
	v->a[59627] = anon_sym_GT_AMP;
	v->a[59628] = anon_sym_GT_PIPE;
	v->a[59629] = anon_sym_LT_GT;
	v->a[59630] = 5;
	v->a[59631] = actions(3);
	v->a[59632] = 1;
	v->a[59633] = sym_comment;
	v->a[59634] = actions(1976);
	v->a[59635] = 1;
	v->a[59636] = anon_sym_PIPE;
	v->a[59637] = state(1510);
	v->a[59638] = 1;
	v->a[59639] = aux_sym_pipeline_repeat1;
	small_parse_table_2982(v);
}

void	small_parse_table_2982(t_small_parse_table_array *v)
{
	v->a[59640] = actions(1974);
	v->a[59641] = 3;
	v->a[59642] = sym_file_descriptor;
	v->a[59643] = ts_builtin_sym_end;
	v->a[59644] = aux_sym_heredoc_redirect_token1;
	v->a[59645] = actions(1979);
	v->a[59646] = 16;
	v->a[59647] = anon_sym_RPAREN;
	v->a[59648] = anon_sym_SEMI_SEMI;
	v->a[59649] = anon_sym_AMP_AMP;
	v->a[59650] = anon_sym_PIPE_PIPE;
	v->a[59651] = anon_sym_LT;
	v->a[59652] = anon_sym_GT;
	v->a[59653] = anon_sym_GT_GT;
	v->a[59654] = anon_sym_LT_AMP;
	v->a[59655] = anon_sym_GT_AMP;
	v->a[59656] = anon_sym_GT_PIPE;
	v->a[59657] = anon_sym_LT_GT;
	v->a[59658] = anon_sym_LT_LT;
	v->a[59659] = anon_sym_LT_LT_DASH;
	small_parse_table_2983(v);
}

void	small_parse_table_2983(t_small_parse_table_array *v)
{
	v->a[59660] = anon_sym_AMP;
	v->a[59661] = anon_sym_BQUOTE;
	v->a[59662] = anon_sym_SEMI;
	v->a[59663] = 7;
	v->a[59664] = actions(3);
	v->a[59665] = 1;
	v->a[59666] = sym_comment;
	v->a[59667] = actions(1923);
	v->a[59668] = 1;
	v->a[59669] = aux_sym_heredoc_redirect_token1;
	v->a[59670] = actions(1984);
	v->a[59671] = 1;
	v->a[59672] = sym_file_descriptor;
	v->a[59673] = actions(1930);
	v->a[59674] = 2;
	v->a[59675] = anon_sym_LT_LT;
	v->a[59676] = anon_sym_LT_LT_DASH;
	v->a[59677] = state(1075);
	v->a[59678] = 3;
	v->a[59679] = sym_file_redirect;
	small_parse_table_2984(v);
}

void	small_parse_table_2984(t_small_parse_table_array *v)
{
	v->a[59680] = sym_heredoc_redirect;
	v->a[59681] = aux_sym_redirected_statement_repeat1;
	v->a[59682] = actions(1925);
	v->a[59683] = 7;
	v->a[59684] = anon_sym_PIPE;
	v->a[59685] = anon_sym_RPAREN;
	v->a[59686] = anon_sym_SEMI_SEMI;
	v->a[59687] = anon_sym_AMP_AMP;
	v->a[59688] = anon_sym_PIPE_PIPE;
	v->a[59689] = anon_sym_AMP;
	v->a[59690] = anon_sym_SEMI;
	v->a[59691] = actions(1981);
	v->a[59692] = 7;
	v->a[59693] = anon_sym_LT;
	v->a[59694] = anon_sym_GT;
	v->a[59695] = anon_sym_GT_GT;
	v->a[59696] = anon_sym_LT_AMP;
	v->a[59697] = anon_sym_GT_AMP;
	v->a[59698] = anon_sym_GT_PIPE;
	v->a[59699] = anon_sym_LT_GT;
	small_parse_table_2985(v);
}

/* EOF small_parse_table_596.c */
