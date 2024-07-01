/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_636.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3180(t_small_parse_table_array *v)
{
	v->a[63600] = 2;
	v->a[63601] = sym_file_redirect;
	v->a[63602] = aux_sym_redirected_statement_repeat2;
	v->a[63603] = actions(1837);
	v->a[63604] = 7;
	v->a[63605] = anon_sym_LT;
	v->a[63606] = anon_sym_GT;
	v->a[63607] = anon_sym_GT_GT;
	v->a[63608] = anon_sym_LT_AMP;
	v->a[63609] = anon_sym_GT_AMP;
	v->a[63610] = anon_sym_GT_PIPE;
	v->a[63611] = anon_sym_LT_GT;
	v->a[63612] = actions(2109);
	v->a[63613] = 8;
	v->a[63614] = anon_sym_PIPE;
	v->a[63615] = anon_sym_SEMI_SEMI;
	v->a[63616] = anon_sym_AMP_AMP;
	v->a[63617] = anon_sym_PIPE_PIPE;
	v->a[63618] = anon_sym_LT_LT;
	v->a[63619] = anon_sym_LT_LT_DASH;
	small_parse_table_3181(v);
}

void	small_parse_table_3181(t_small_parse_table_array *v)
{
	v->a[63620] = anon_sym_AMP;
	v->a[63621] = anon_sym_SEMI;
	v->a[63622] = 6;
	v->a[63623] = actions(3);
	v->a[63624] = 1;
	v->a[63625] = sym_comment;
	v->a[63626] = actions(2111);
	v->a[63627] = 1;
	v->a[63628] = aux_sym_heredoc_redirect_token1;
	v->a[63629] = actions(2264);
	v->a[63630] = 1;
	v->a[63631] = sym_file_descriptor;
	v->a[63632] = state(1204);
	v->a[63633] = 2;
	v->a[63634] = sym_file_redirect;
	v->a[63635] = aux_sym_redirected_statement_repeat2;
	v->a[63636] = actions(1887);
	v->a[63637] = 7;
	v->a[63638] = anon_sym_LT;
	v->a[63639] = anon_sym_GT;
	small_parse_table_3182(v);
}

void	small_parse_table_3182(t_small_parse_table_array *v)
{
	v->a[63640] = anon_sym_GT_GT;
	v->a[63641] = anon_sym_LT_AMP;
	v->a[63642] = anon_sym_GT_AMP;
	v->a[63643] = anon_sym_GT_PIPE;
	v->a[63644] = anon_sym_LT_GT;
	v->a[63645] = actions(2109);
	v->a[63646] = 8;
	v->a[63647] = anon_sym_PIPE;
	v->a[63648] = anon_sym_SEMI_SEMI;
	v->a[63649] = anon_sym_AMP_AMP;
	v->a[63650] = anon_sym_PIPE_PIPE;
	v->a[63651] = anon_sym_LT_LT;
	v->a[63652] = anon_sym_LT_LT_DASH;
	v->a[63653] = anon_sym_AMP;
	v->a[63654] = anon_sym_SEMI;
	v->a[63655] = 5;
	v->a[63656] = actions(3);
	v->a[63657] = 1;
	v->a[63658] = sym_comment;
	v->a[63659] = actions(2266);
	small_parse_table_3183(v);
}

void	small_parse_table_3183(t_small_parse_table_array *v)
{
	v->a[63660] = 1;
	v->a[63661] = anon_sym_PIPE;
	v->a[63662] = state(1197);
	v->a[63663] = 1;
	v->a[63664] = aux_sym_pipeline_repeat1;
	v->a[63665] = actions(1974);
	v->a[63666] = 2;
	v->a[63667] = sym_file_descriptor;
	v->a[63668] = aux_sym_heredoc_redirect_token1;
	v->a[63669] = actions(1979);
	v->a[63670] = 15;
	v->a[63671] = anon_sym_esac;
	v->a[63672] = anon_sym_SEMI_SEMI;
	v->a[63673] = anon_sym_AMP_AMP;
	v->a[63674] = anon_sym_PIPE_PIPE;
	v->a[63675] = anon_sym_LT;
	v->a[63676] = anon_sym_GT;
	v->a[63677] = anon_sym_GT_GT;
	v->a[63678] = anon_sym_LT_AMP;
	v->a[63679] = anon_sym_GT_AMP;
	small_parse_table_3184(v);
}

void	small_parse_table_3184(t_small_parse_table_array *v)
{
	v->a[63680] = anon_sym_GT_PIPE;
	v->a[63681] = anon_sym_LT_GT;
	v->a[63682] = anon_sym_LT_LT;
	v->a[63683] = anon_sym_LT_LT_DASH;
	v->a[63684] = anon_sym_AMP;
	v->a[63685] = anon_sym_SEMI;
	v->a[63686] = 3;
	v->a[63687] = actions(3);
	v->a[63688] = 1;
	v->a[63689] = sym_comment;
	v->a[63690] = actions(1209);
	v->a[63691] = 3;
	v->a[63692] = sym_file_descriptor;
	v->a[63693] = sym_variable_name;
	v->a[63694] = aux_sym_heredoc_redirect_token1;
	v->a[63695] = actions(1207);
	v->a[63696] = 16;
	v->a[63697] = anon_sym_esac;
	v->a[63698] = anon_sym_PIPE;
	v->a[63699] = anon_sym_SEMI_SEMI;
	small_parse_table_3185(v);
}

/* EOF small_parse_table_636.c */
