/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_726.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3630(t_small_parse_table_array *v)
{
	v->a[72600] = aux_sym_heredoc_redirect_token1;
	v->a[72601] = actions(842);
	v->a[72602] = 2;
	v->a[72603] = anon_sym_AMP_AMP;
	v->a[72604] = anon_sym_PIPE_PIPE;
	v->a[72605] = actions(844);
	v->a[72606] = 2;
	v->a[72607] = anon_sym_LT_LT;
	v->a[72608] = anon_sym_LT_LT_DASH;
	v->a[72609] = actions(943);
	v->a[72610] = 2;
	v->a[72611] = anon_sym_esac;
	v->a[72612] = anon_sym_SEMI_SEMI;
	v->a[72613] = actions(949);
	v->a[72614] = 2;
	v->a[72615] = anon_sym_AMP;
	v->a[72616] = anon_sym_SEMI;
	v->a[72617] = actions(2180);
	v->a[72618] = 2;
	v->a[72619] = anon_sym_LT_AMP_DASH;
	small_parse_table_3631(v);
}

void	small_parse_table_3631(t_small_parse_table_array *v)
{
	v->a[72620] = anon_sym_GT_AMP_DASH;
	v->a[72621] = state(1214);
	v->a[72622] = 3;
	v->a[72623] = sym_file_redirect;
	v->a[72624] = sym_heredoc_redirect;
	v->a[72625] = aux_sym_redirected_statement_repeat1;
	v->a[72626] = actions(2178);
	v->a[72627] = 8;
	v->a[72628] = anon_sym_LT;
	v->a[72629] = anon_sym_GT;
	v->a[72630] = anon_sym_GT_GT;
	v->a[72631] = anon_sym_AMP_GT;
	v->a[72632] = anon_sym_AMP_GT_GT;
	v->a[72633] = anon_sym_LT_AMP;
	v->a[72634] = anon_sym_GT_AMP;
	v->a[72635] = anon_sym_GT_PIPE;
	v->a[72636] = 8;
	v->a[72637] = actions(3);
	v->a[72638] = 1;
	v->a[72639] = sym_comment;
	small_parse_table_3632(v);
}

void	small_parse_table_3632(t_small_parse_table_array *v)
{
	v->a[72640] = actions(2164);
	v->a[72641] = 1;
	v->a[72642] = sym_file_descriptor;
	v->a[72643] = actions(2182);
	v->a[72644] = 1;
	v->a[72645] = aux_sym_heredoc_redirect_token1;
	v->a[72646] = actions(861);
	v->a[72647] = 2;
	v->a[72648] = anon_sym_LT_LT;
	v->a[72649] = anon_sym_LT_LT_DASH;
	v->a[72650] = actions(2160);
	v->a[72651] = 2;
	v->a[72652] = anon_sym_LT_AMP_DASH;
	v->a[72653] = anon_sym_GT_AMP_DASH;
	v->a[72654] = state(1248);
	v->a[72655] = 3;
	v->a[72656] = sym_file_redirect;
	v->a[72657] = sym_heredoc_redirect;
	v->a[72658] = aux_sym_redirected_statement_repeat1;
	v->a[72659] = actions(2176);
	small_parse_table_3633(v);
}

void	small_parse_table_3633(t_small_parse_table_array *v)
{
	v->a[72660] = 7;
	v->a[72661] = anon_sym_PIPE;
	v->a[72662] = anon_sym_SEMI_SEMI;
	v->a[72663] = anon_sym_AMP_AMP;
	v->a[72664] = anon_sym_PIPE_PIPE;
	v->a[72665] = anon_sym_AMP;
	v->a[72666] = anon_sym_BQUOTE;
	v->a[72667] = anon_sym_SEMI;
	v->a[72668] = actions(2158);
	v->a[72669] = 8;
	v->a[72670] = anon_sym_LT;
	v->a[72671] = anon_sym_GT;
	v->a[72672] = anon_sym_GT_GT;
	v->a[72673] = anon_sym_AMP_GT;
	v->a[72674] = anon_sym_AMP_GT_GT;
	v->a[72675] = anon_sym_LT_AMP;
	v->a[72676] = anon_sym_GT_AMP;
	v->a[72677] = anon_sym_GT_PIPE;
	v->a[72678] = 3;
	v->a[72679] = actions(3);
	small_parse_table_3634(v);
}

void	small_parse_table_3634(t_small_parse_table_array *v)
{
	v->a[72680] = 1;
	v->a[72681] = sym_comment;
	v->a[72682] = actions(1076);
	v->a[72683] = 4;
	v->a[72684] = sym_file_descriptor;
	v->a[72685] = sym__concat;
	v->a[72686] = sym_variable_name;
	v->a[72687] = aux_sym_heredoc_redirect_token1;
	v->a[72688] = actions(1074);
	v->a[72689] = 20;
	v->a[72690] = anon_sym_esac;
	v->a[72691] = anon_sym_PIPE;
	v->a[72692] = anon_sym_SEMI_SEMI;
	v->a[72693] = anon_sym_AMP_AMP;
	v->a[72694] = anon_sym_PIPE_PIPE;
	v->a[72695] = anon_sym_LT;
	v->a[72696] = anon_sym_GT;
	v->a[72697] = anon_sym_GT_GT;
	v->a[72698] = anon_sym_AMP_GT;
	v->a[72699] = anon_sym_AMP_GT_GT;
	small_parse_table_3635(v);
}

/* EOF small_parse_table_726.c */
