/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_626.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3130(t_small_parse_table_array *v)
{
	v->a[62600] = actions(2001);
	v->a[62601] = 2;
	v->a[62602] = anon_sym_LT_AMP_DASH;
	v->a[62603] = anon_sym_GT_AMP_DASH;
	v->a[62604] = state(1123);
	v->a[62605] = 3;
	v->a[62606] = sym_file_redirect;
	v->a[62607] = sym_heredoc_redirect;
	v->a[62608] = aux_sym_redirected_statement_repeat1;
	v->a[62609] = actions(1999);
	v->a[62610] = 8;
	v->a[62611] = anon_sym_LT;
	v->a[62612] = anon_sym_GT;
	v->a[62613] = anon_sym_GT_GT;
	v->a[62614] = anon_sym_AMP_GT;
	v->a[62615] = anon_sym_AMP_GT_GT;
	v->a[62616] = anon_sym_LT_AMP;
	v->a[62617] = anon_sym_GT_AMP;
	v->a[62618] = anon_sym_GT_PIPE;
	v->a[62619] = 12;
	small_parse_table_3131(v);
}

void	small_parse_table_3131(t_small_parse_table_array *v)
{
	v->a[62620] = actions(3);
	v->a[62621] = 1;
	v->a[62622] = sym_comment;
	v->a[62623] = actions(766);
	v->a[62624] = 1;
	v->a[62625] = anon_sym_PIPE;
	v->a[62626] = actions(2003);
	v->a[62627] = 1;
	v->a[62628] = aux_sym_heredoc_redirect_token1;
	v->a[62629] = actions(2005);
	v->a[62630] = 1;
	v->a[62631] = sym_file_descriptor;
	v->a[62632] = state(761);
	v->a[62633] = 1;
	v->a[62634] = sym_terminator;
	v->a[62635] = actions(764);
	v->a[62636] = 2;
	v->a[62637] = anon_sym_esac;
	v->a[62638] = anon_sym_SEMI_SEMI;
	v->a[62639] = actions(768);
	small_parse_table_3132(v);
}

void	small_parse_table_3132(t_small_parse_table_array *v)
{
	v->a[62640] = 2;
	v->a[62641] = anon_sym_AMP_AMP;
	v->a[62642] = anon_sym_PIPE_PIPE;
	v->a[62643] = actions(770);
	v->a[62644] = 2;
	v->a[62645] = anon_sym_LT_LT;
	v->a[62646] = anon_sym_LT_LT_DASH;
	v->a[62647] = actions(772);
	v->a[62648] = 2;
	v->a[62649] = anon_sym_AMP;
	v->a[62650] = anon_sym_SEMI;
	v->a[62651] = actions(2001);
	v->a[62652] = 2;
	v->a[62653] = anon_sym_LT_AMP_DASH;
	v->a[62654] = anon_sym_GT_AMP_DASH;
	v->a[62655] = state(1123);
	v->a[62656] = 3;
	v->a[62657] = sym_file_redirect;
	v->a[62658] = sym_heredoc_redirect;
	v->a[62659] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3133(v);
}

void	small_parse_table_3133(t_small_parse_table_array *v)
{
	v->a[62660] = actions(1999);
	v->a[62661] = 8;
	v->a[62662] = anon_sym_LT;
	v->a[62663] = anon_sym_GT;
	v->a[62664] = anon_sym_GT_GT;
	v->a[62665] = anon_sym_AMP_GT;
	v->a[62666] = anon_sym_AMP_GT_GT;
	v->a[62667] = anon_sym_LT_AMP;
	v->a[62668] = anon_sym_GT_AMP;
	v->a[62669] = anon_sym_GT_PIPE;
	v->a[62670] = 12;
	v->a[62671] = actions(3);
	v->a[62672] = 1;
	v->a[62673] = sym_comment;
	v->a[62674] = actions(766);
	v->a[62675] = 1;
	v->a[62676] = anon_sym_PIPE;
	v->a[62677] = actions(2003);
	v->a[62678] = 1;
	v->a[62679] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3134(v);
}

void	small_parse_table_3134(t_small_parse_table_array *v)
{
	v->a[62680] = actions(2005);
	v->a[62681] = 1;
	v->a[62682] = sym_file_descriptor;
	v->a[62683] = state(760);
	v->a[62684] = 1;
	v->a[62685] = sym_terminator;
	v->a[62686] = actions(764);
	v->a[62687] = 2;
	v->a[62688] = anon_sym_esac;
	v->a[62689] = anon_sym_SEMI_SEMI;
	v->a[62690] = actions(768);
	v->a[62691] = 2;
	v->a[62692] = anon_sym_AMP_AMP;
	v->a[62693] = anon_sym_PIPE_PIPE;
	v->a[62694] = actions(770);
	v->a[62695] = 2;
	v->a[62696] = anon_sym_LT_LT;
	v->a[62697] = anon_sym_LT_LT_DASH;
	v->a[62698] = actions(772);
	v->a[62699] = 2;
	small_parse_table_3135(v);
}

/* EOF small_parse_table_626.c */
