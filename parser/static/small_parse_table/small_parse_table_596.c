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
	v->a[59600] = actions(698);
	v->a[59601] = 2;
	v->a[59602] = anon_sym_AMP_AMP;
	v->a[59603] = anon_sym_PIPE_PIPE;
	v->a[59604] = actions(700);
	v->a[59605] = 2;
	v->a[59606] = anon_sym_LT_LT;
	v->a[59607] = anon_sym_LT_LT_DASH;
	v->a[59608] = actions(696);
	v->a[59609] = 3;
	v->a[59610] = anon_sym_SEMI_SEMI;
	v->a[59611] = anon_sym_AMP;
	v->a[59612] = anon_sym_SEMI;
	v->a[59613] = state(1031);
	v->a[59614] = 3;
	v->a[59615] = sym_file_redirect;
	v->a[59616] = sym_heredoc_redirect;
	v->a[59617] = aux_sym_redirected_statement_repeat1;
	v->a[59618] = actions(1855);
	v->a[59619] = 7;
	small_parse_table_2981(v);
}

void	small_parse_table_2981(t_small_parse_table_array *v)
{
	v->a[59620] = anon_sym_LT;
	v->a[59621] = anon_sym_GT;
	v->a[59622] = anon_sym_GT_GT;
	v->a[59623] = anon_sym_LT_AMP;
	v->a[59624] = anon_sym_GT_AMP;
	v->a[59625] = anon_sym_GT_PIPE;
	v->a[59626] = anon_sym_LT_GT;
	v->a[59627] = 10;
	v->a[59628] = actions(3);
	v->a[59629] = 1;
	v->a[59630] = sym_comment;
	v->a[59631] = actions(692);
	v->a[59632] = 1;
	v->a[59633] = anon_sym_PIPE;
	v->a[59634] = actions(1946);
	v->a[59635] = 1;
	v->a[59636] = sym_file_descriptor;
	v->a[59637] = actions(2019);
	v->a[59638] = 1;
	v->a[59639] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2982(v);
}

void	small_parse_table_2982(t_small_parse_table_array *v)
{
	v->a[59640] = state(746);
	v->a[59641] = 1;
	v->a[59642] = sym_terminator;
	v->a[59643] = actions(700);
	v->a[59644] = 2;
	v->a[59645] = anon_sym_LT_LT;
	v->a[59646] = anon_sym_LT_LT_DASH;
	v->a[59647] = actions(914);
	v->a[59648] = 2;
	v->a[59649] = anon_sym_AMP_AMP;
	v->a[59650] = anon_sym_PIPE_PIPE;
	v->a[59651] = actions(967);
	v->a[59652] = 3;
	v->a[59653] = anon_sym_SEMI_SEMI;
	v->a[59654] = anon_sym_AMP;
	v->a[59655] = anon_sym_SEMI;
	v->a[59656] = state(1134);
	v->a[59657] = 3;
	v->a[59658] = sym_file_redirect;
	v->a[59659] = sym_heredoc_redirect;
	small_parse_table_2983(v);
}

void	small_parse_table_2983(t_small_parse_table_array *v)
{
	v->a[59660] = aux_sym_redirected_statement_repeat1;
	v->a[59661] = actions(1942);
	v->a[59662] = 7;
	v->a[59663] = anon_sym_LT;
	v->a[59664] = anon_sym_GT;
	v->a[59665] = anon_sym_GT_GT;
	v->a[59666] = anon_sym_LT_AMP;
	v->a[59667] = anon_sym_GT_AMP;
	v->a[59668] = anon_sym_GT_PIPE;
	v->a[59669] = anon_sym_LT_GT;
	v->a[59670] = 11;
	v->a[59671] = actions(3);
	v->a[59672] = 1;
	v->a[59673] = sym_comment;
	v->a[59674] = actions(692);
	v->a[59675] = 1;
	v->a[59676] = anon_sym_PIPE;
	v->a[59677] = actions(724);
	v->a[59678] = 1;
	v->a[59679] = anon_sym_SEMI_SEMI;
	small_parse_table_2984(v);
}

void	small_parse_table_2984(t_small_parse_table_array *v)
{
	v->a[59680] = actions(1857);
	v->a[59681] = 1;
	v->a[59682] = aux_sym_heredoc_redirect_token1;
	v->a[59683] = actions(1946);
	v->a[59684] = 1;
	v->a[59685] = sym_file_descriptor;
	v->a[59686] = state(686);
	v->a[59687] = 1;
	v->a[59688] = sym_terminator;
	v->a[59689] = actions(696);
	v->a[59690] = 2;
	v->a[59691] = anon_sym_AMP;
	v->a[59692] = anon_sym_SEMI;
	v->a[59693] = actions(700);
	v->a[59694] = 2;
	v->a[59695] = anon_sym_LT_LT;
	v->a[59696] = anon_sym_LT_LT_DASH;
	v->a[59697] = actions(914);
	v->a[59698] = 2;
	v->a[59699] = anon_sym_AMP_AMP;
	small_parse_table_2985(v);
}

/* EOF small_parse_table_596.c */
