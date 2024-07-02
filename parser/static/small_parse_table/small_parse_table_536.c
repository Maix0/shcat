/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_536.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2680(t_small_parse_table_array *v)
{
	v->a[53600] = anon_sym_GT_AMP;
	v->a[53601] = anon_sym_GT_PIPE;
	v->a[53602] = anon_sym_LT_GT;
	v->a[53603] = anon_sym_LT_LT;
	v->a[53604] = anon_sym_LT_LT_DASH;
	v->a[53605] = 11;
	v->a[53606] = actions(3);
	v->a[53607] = 1;
	v->a[53608] = sym_comment;
	v->a[53609] = actions(692);
	v->a[53610] = 1;
	v->a[53611] = anon_sym_PIPE;
	v->a[53612] = actions(724);
	v->a[53613] = 1;
	v->a[53614] = anon_sym_RPAREN;
	v->a[53615] = actions(1857);
	v->a[53616] = 1;
	v->a[53617] = aux_sym_heredoc_redirect_token1;
	v->a[53618] = actions(1859);
	v->a[53619] = 1;
	small_parse_table_2681(v);
}

void	small_parse_table_2681(t_small_parse_table_array *v)
{
	v->a[53620] = sym_file_descriptor;
	v->a[53621] = state(684);
	v->a[53622] = 1;
	v->a[53623] = sym_terminator;
	v->a[53624] = actions(698);
	v->a[53625] = 2;
	v->a[53626] = anon_sym_AMP_AMP;
	v->a[53627] = anon_sym_PIPE_PIPE;
	v->a[53628] = actions(700);
	v->a[53629] = 2;
	v->a[53630] = anon_sym_LT_LT;
	v->a[53631] = anon_sym_LT_LT_DASH;
	v->a[53632] = actions(696);
	v->a[53633] = 3;
	v->a[53634] = anon_sym_SEMI_SEMI;
	v->a[53635] = anon_sym_AMP;
	v->a[53636] = anon_sym_SEMI;
	v->a[53637] = state(1031);
	v->a[53638] = 3;
	v->a[53639] = sym_file_redirect;
	small_parse_table_2682(v);
}

void	small_parse_table_2682(t_small_parse_table_array *v)
{
	v->a[53640] = sym_heredoc_redirect;
	v->a[53641] = aux_sym_redirected_statement_repeat1;
	v->a[53642] = actions(1855);
	v->a[53643] = 7;
	v->a[53644] = anon_sym_LT;
	v->a[53645] = anon_sym_GT;
	v->a[53646] = anon_sym_GT_GT;
	v->a[53647] = anon_sym_LT_AMP;
	v->a[53648] = anon_sym_GT_AMP;
	v->a[53649] = anon_sym_GT_PIPE;
	v->a[53650] = anon_sym_LT_GT;
	v->a[53651] = 11;
	v->a[53652] = actions(3);
	v->a[53653] = 1;
	v->a[53654] = sym_comment;
	v->a[53655] = actions(692);
	v->a[53656] = 1;
	v->a[53657] = anon_sym_PIPE;
	v->a[53658] = actions(724);
	v->a[53659] = 1;
	small_parse_table_2683(v);
}

void	small_parse_table_2683(t_small_parse_table_array *v)
{
	v->a[53660] = anon_sym_RPAREN;
	v->a[53661] = actions(1857);
	v->a[53662] = 1;
	v->a[53663] = aux_sym_heredoc_redirect_token1;
	v->a[53664] = actions(1859);
	v->a[53665] = 1;
	v->a[53666] = sym_file_descriptor;
	v->a[53667] = state(683);
	v->a[53668] = 1;
	v->a[53669] = sym_terminator;
	v->a[53670] = actions(698);
	v->a[53671] = 2;
	v->a[53672] = anon_sym_AMP_AMP;
	v->a[53673] = anon_sym_PIPE_PIPE;
	v->a[53674] = actions(700);
	v->a[53675] = 2;
	v->a[53676] = anon_sym_LT_LT;
	v->a[53677] = anon_sym_LT_LT_DASH;
	v->a[53678] = actions(696);
	v->a[53679] = 3;
	small_parse_table_2684(v);
}

void	small_parse_table_2684(t_small_parse_table_array *v)
{
	v->a[53680] = anon_sym_SEMI_SEMI;
	v->a[53681] = anon_sym_AMP;
	v->a[53682] = anon_sym_SEMI;
	v->a[53683] = state(1031);
	v->a[53684] = 3;
	v->a[53685] = sym_file_redirect;
	v->a[53686] = sym_heredoc_redirect;
	v->a[53687] = aux_sym_redirected_statement_repeat1;
	v->a[53688] = actions(1855);
	v->a[53689] = 7;
	v->a[53690] = anon_sym_LT;
	v->a[53691] = anon_sym_GT;
	v->a[53692] = anon_sym_GT_GT;
	v->a[53693] = anon_sym_LT_AMP;
	v->a[53694] = anon_sym_GT_AMP;
	v->a[53695] = anon_sym_GT_PIPE;
	v->a[53696] = anon_sym_LT_GT;
	v->a[53697] = 3;
	v->a[53698] = actions(3);
	v->a[53699] = 1;
	small_parse_table_2685(v);
}

/* EOF small_parse_table_536.c */
