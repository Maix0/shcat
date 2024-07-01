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
	v->a[62600] = anon_sym_AMP_AMP;
	v->a[62601] = anon_sym_PIPE_PIPE;
	v->a[62602] = anon_sym_LT;
	v->a[62603] = anon_sym_GT;
	v->a[62604] = anon_sym_GT_GT;
	v->a[62605] = anon_sym_LT_AMP;
	v->a[62606] = anon_sym_GT_AMP;
	v->a[62607] = anon_sym_GT_PIPE;
	v->a[62608] = anon_sym_LT_GT;
	v->a[62609] = anon_sym_LT_LT;
	v->a[62610] = anon_sym_LT_LT_DASH;
	v->a[62611] = anon_sym_AMP;
	v->a[62612] = anon_sym_BQUOTE;
	v->a[62613] = anon_sym_SEMI;
	v->a[62614] = 7;
	v->a[62615] = actions(3);
	v->a[62616] = 1;
	v->a[62617] = sym_comment;
	v->a[62618] = actions(1923);
	v->a[62619] = 1;
	small_parse_table_3131(v);
}

void	small_parse_table_3131(t_small_parse_table_array *v)
{
	v->a[62620] = aux_sym_heredoc_redirect_token1;
	v->a[62621] = actions(2189);
	v->a[62622] = 1;
	v->a[62623] = sym_file_descriptor;
	v->a[62624] = actions(1930);
	v->a[62625] = 2;
	v->a[62626] = anon_sym_LT_LT;
	v->a[62627] = anon_sym_LT_LT_DASH;
	v->a[62628] = state(1164);
	v->a[62629] = 3;
	v->a[62630] = sym_file_redirect;
	v->a[62631] = sym_heredoc_redirect;
	v->a[62632] = aux_sym_redirected_statement_repeat1;
	v->a[62633] = actions(1925);
	v->a[62634] = 6;
	v->a[62635] = anon_sym_PIPE;
	v->a[62636] = anon_sym_SEMI_SEMI;
	v->a[62637] = anon_sym_AMP_AMP;
	v->a[62638] = anon_sym_PIPE_PIPE;
	v->a[62639] = anon_sym_AMP;
	small_parse_table_3132(v);
}

void	small_parse_table_3132(t_small_parse_table_array *v)
{
	v->a[62640] = anon_sym_SEMI;
	v->a[62641] = actions(2186);
	v->a[62642] = 7;
	v->a[62643] = anon_sym_LT;
	v->a[62644] = anon_sym_GT;
	v->a[62645] = anon_sym_GT_GT;
	v->a[62646] = anon_sym_LT_AMP;
	v->a[62647] = anon_sym_GT_AMP;
	v->a[62648] = anon_sym_GT_PIPE;
	v->a[62649] = anon_sym_LT_GT;
	v->a[62650] = 3;
	v->a[62651] = actions(3);
	v->a[62652] = 1;
	v->a[62653] = sym_comment;
	v->a[62654] = actions(2192);
	v->a[62655] = 3;
	v->a[62656] = sym_file_descriptor;
	v->a[62657] = ts_builtin_sym_end;
	v->a[62658] = aux_sym_heredoc_redirect_token1;
	v->a[62659] = actions(2194);
	small_parse_table_3133(v);
}

void	small_parse_table_3133(t_small_parse_table_array *v)
{
	v->a[62660] = 17;
	v->a[62661] = anon_sym_PIPE;
	v->a[62662] = anon_sym_RPAREN;
	v->a[62663] = anon_sym_SEMI_SEMI;
	v->a[62664] = anon_sym_AMP_AMP;
	v->a[62665] = anon_sym_PIPE_PIPE;
	v->a[62666] = anon_sym_LT;
	v->a[62667] = anon_sym_GT;
	v->a[62668] = anon_sym_GT_GT;
	v->a[62669] = anon_sym_LT_AMP;
	v->a[62670] = anon_sym_GT_AMP;
	v->a[62671] = anon_sym_GT_PIPE;
	v->a[62672] = anon_sym_LT_GT;
	v->a[62673] = anon_sym_LT_LT;
	v->a[62674] = anon_sym_LT_LT_DASH;
	v->a[62675] = anon_sym_AMP;
	v->a[62676] = anon_sym_BQUOTE;
	v->a[62677] = anon_sym_SEMI;
	v->a[62678] = 3;
	v->a[62679] = actions(3);
	small_parse_table_3134(v);
}

void	small_parse_table_3134(t_small_parse_table_array *v)
{
	v->a[62680] = 1;
	v->a[62681] = sym_comment;
	v->a[62682] = actions(795);
	v->a[62683] = 3;
	v->a[62684] = sym_file_descriptor;
	v->a[62685] = sym__concat;
	v->a[62686] = sym_variable_name;
	v->a[62687] = actions(793);
	v->a[62688] = 17;
	v->a[62689] = anon_sym_LT;
	v->a[62690] = anon_sym_GT;
	v->a[62691] = anon_sym_GT_GT;
	v->a[62692] = anon_sym_LT_AMP;
	v->a[62693] = anon_sym_GT_AMP;
	v->a[62694] = anon_sym_GT_PIPE;
	v->a[62695] = anon_sym_LT_GT;
	v->a[62696] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62697] = aux_sym_concatenation_token1;
	v->a[62698] = anon_sym_DOLLAR;
	v->a[62699] = anon_sym_DQUOTE;
	small_parse_table_3135(v);
}

/* EOF small_parse_table_626.c */
