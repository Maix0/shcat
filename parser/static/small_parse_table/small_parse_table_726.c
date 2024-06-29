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
	v->a[72600] = state(2004);
	v->a[72601] = 5;
	v->a[72602] = sym_arithmetic_expansion;
	v->a[72603] = sym_string;
	v->a[72604] = sym_simple_expansion;
	v->a[72605] = sym_expansion;
	v->a[72606] = sym_command_substitution;
	v->a[72607] = 7;
	v->a[72608] = actions(3);
	v->a[72609] = 1;
	v->a[72610] = sym_comment;
	v->a[72611] = actions(2352);
	v->a[72612] = 1;
	v->a[72613] = aux_sym_heredoc_redirect_token1;
	v->a[72614] = actions(2462);
	v->a[72615] = 1;
	v->a[72616] = sym_file_descriptor;
	v->a[72617] = actions(2064);
	v->a[72618] = 2;
	v->a[72619] = anon_sym_LT_AMP_DASH;
	small_parse_table_3631(v);
}

void	small_parse_table_3631(t_small_parse_table_array *v)
{
	v->a[72620] = anon_sym_GT_AMP_DASH;
	v->a[72621] = state(1303);
	v->a[72622] = 2;
	v->a[72623] = sym_file_redirect;
	v->a[72624] = aux_sym_redirected_statement_repeat2;
	v->a[72625] = actions(2062);
	v->a[72626] = 8;
	v->a[72627] = anon_sym_LT;
	v->a[72628] = anon_sym_GT;
	v->a[72629] = anon_sym_GT_GT;
	v->a[72630] = anon_sym_AMP_GT;
	v->a[72631] = anon_sym_AMP_GT_GT;
	v->a[72632] = anon_sym_LT_AMP;
	v->a[72633] = anon_sym_GT_AMP;
	v->a[72634] = anon_sym_GT_PIPE;
	v->a[72635] = actions(2350);
	v->a[72636] = 8;
	v->a[72637] = anon_sym_PIPE;
	v->a[72638] = anon_sym_SEMI_SEMI;
	v->a[72639] = anon_sym_AMP_AMP;
	small_parse_table_3632(v);
}

void	small_parse_table_3632(t_small_parse_table_array *v)
{
	v->a[72640] = anon_sym_PIPE_PIPE;
	v->a[72641] = anon_sym_LT_LT;
	v->a[72642] = anon_sym_LT_LT_DASH;
	v->a[72643] = anon_sym_AMP;
	v->a[72644] = anon_sym_SEMI;
	v->a[72645] = 5;
	v->a[72646] = actions(3);
	v->a[72647] = 1;
	v->a[72648] = sym_comment;
	v->a[72649] = actions(2464);
	v->a[72650] = 1;
	v->a[72651] = anon_sym_PIPE;
	v->a[72652] = state(1310);
	v->a[72653] = 1;
	v->a[72654] = aux_sym_pipeline_repeat1;
	v->a[72655] = actions(2186);
	v->a[72656] = 2;
	v->a[72657] = sym_file_descriptor;
	v->a[72658] = aux_sym_heredoc_redirect_token1;
	v->a[72659] = actions(2191);
	small_parse_table_3633(v);
}

void	small_parse_table_3633(t_small_parse_table_array *v)
{
	v->a[72660] = 18;
	v->a[72661] = anon_sym_SEMI_SEMI;
	v->a[72662] = anon_sym_AMP_AMP;
	v->a[72663] = anon_sym_PIPE_PIPE;
	v->a[72664] = anon_sym_LT;
	v->a[72665] = anon_sym_GT;
	v->a[72666] = anon_sym_GT_GT;
	v->a[72667] = anon_sym_AMP_GT;
	v->a[72668] = anon_sym_AMP_GT_GT;
	v->a[72669] = anon_sym_LT_AMP;
	v->a[72670] = anon_sym_GT_AMP;
	v->a[72671] = anon_sym_GT_PIPE;
	v->a[72672] = anon_sym_LT_AMP_DASH;
	v->a[72673] = anon_sym_GT_AMP_DASH;
	v->a[72674] = anon_sym_LT_LT;
	v->a[72675] = anon_sym_LT_LT_DASH;
	v->a[72676] = anon_sym_AMP;
	v->a[72677] = anon_sym_BQUOTE;
	v->a[72678] = anon_sym_SEMI;
	v->a[72679] = 5;
	small_parse_table_3634(v);
}

void	small_parse_table_3634(t_small_parse_table_array *v)
{
	v->a[72680] = actions(3);
	v->a[72681] = 1;
	v->a[72682] = sym_comment;
	v->a[72683] = actions(2467);
	v->a[72684] = 1;
	v->a[72685] = anon_sym_PIPE;
	v->a[72686] = state(1311);
	v->a[72687] = 1;
	v->a[72688] = aux_sym_pipeline_repeat1;
	v->a[72689] = actions(2186);
	v->a[72690] = 2;
	v->a[72691] = sym_file_descriptor;
	v->a[72692] = aux_sym_heredoc_redirect_token1;
	v->a[72693] = actions(2191);
	v->a[72694] = 18;
	v->a[72695] = anon_sym_esac;
	v->a[72696] = anon_sym_SEMI_SEMI;
	v->a[72697] = anon_sym_AMP_AMP;
	v->a[72698] = anon_sym_PIPE_PIPE;
	v->a[72699] = anon_sym_LT;
	small_parse_table_3635(v);
}

/* EOF small_parse_table_726.c */
