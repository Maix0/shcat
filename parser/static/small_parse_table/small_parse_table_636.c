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
	v->a[63600] = anon_sym_AMP_AMP;
	v->a[63601] = anon_sym_PIPE_PIPE;
	v->a[63602] = actions(804);
	v->a[63603] = 2;
	v->a[63604] = anon_sym_LT_LT;
	v->a[63605] = anon_sym_LT_LT_DASH;
	v->a[63606] = actions(2041);
	v->a[63607] = 2;
	v->a[63608] = anon_sym_LT_AMP_DASH;
	v->a[63609] = anon_sym_GT_AMP_DASH;
	v->a[63610] = actions(800);
	v->a[63611] = 3;
	v->a[63612] = anon_sym_SEMI_SEMI;
	v->a[63613] = anon_sym_AMP;
	v->a[63614] = anon_sym_SEMI;
	v->a[63615] = state(1137);
	v->a[63616] = 3;
	v->a[63617] = sym_file_redirect;
	v->a[63618] = sym_heredoc_redirect;
	v->a[63619] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3181(v);
}

void	small_parse_table_3181(t_small_parse_table_array *v)
{
	v->a[63620] = actions(2039);
	v->a[63621] = 8;
	v->a[63622] = anon_sym_LT;
	v->a[63623] = anon_sym_GT;
	v->a[63624] = anon_sym_GT_GT;
	v->a[63625] = anon_sym_AMP_GT;
	v->a[63626] = anon_sym_AMP_GT_GT;
	v->a[63627] = anon_sym_LT_AMP;
	v->a[63628] = anon_sym_GT_AMP;
	v->a[63629] = anon_sym_GT_PIPE;
	v->a[63630] = 12;
	v->a[63631] = actions(3);
	v->a[63632] = 1;
	v->a[63633] = sym_comment;
	v->a[63634] = actions(764);
	v->a[63635] = 1;
	v->a[63636] = anon_sym_RPAREN;
	v->a[63637] = actions(766);
	v->a[63638] = 1;
	v->a[63639] = anon_sym_PIPE;
	small_parse_table_3182(v);
}

void	small_parse_table_3182(t_small_parse_table_array *v)
{
	v->a[63640] = actions(2031);
	v->a[63641] = 1;
	v->a[63642] = aux_sym_heredoc_redirect_token1;
	v->a[63643] = actions(2043);
	v->a[63644] = 1;
	v->a[63645] = sym_file_descriptor;
	v->a[63646] = state(667);
	v->a[63647] = 1;
	v->a[63648] = sym_terminator;
	v->a[63649] = actions(802);
	v->a[63650] = 2;
	v->a[63651] = anon_sym_AMP_AMP;
	v->a[63652] = anon_sym_PIPE_PIPE;
	v->a[63653] = actions(804);
	v->a[63654] = 2;
	v->a[63655] = anon_sym_LT_LT;
	v->a[63656] = anon_sym_LT_LT_DASH;
	v->a[63657] = actions(2041);
	v->a[63658] = 2;
	v->a[63659] = anon_sym_LT_AMP_DASH;
	small_parse_table_3183(v);
}

void	small_parse_table_3183(t_small_parse_table_array *v)
{
	v->a[63660] = anon_sym_GT_AMP_DASH;
	v->a[63661] = actions(800);
	v->a[63662] = 3;
	v->a[63663] = anon_sym_SEMI_SEMI;
	v->a[63664] = anon_sym_AMP;
	v->a[63665] = anon_sym_SEMI;
	v->a[63666] = state(1137);
	v->a[63667] = 3;
	v->a[63668] = sym_file_redirect;
	v->a[63669] = sym_heredoc_redirect;
	v->a[63670] = aux_sym_redirected_statement_repeat1;
	v->a[63671] = actions(2039);
	v->a[63672] = 8;
	v->a[63673] = anon_sym_LT;
	v->a[63674] = anon_sym_GT;
	v->a[63675] = anon_sym_GT_GT;
	v->a[63676] = anon_sym_AMP_GT;
	v->a[63677] = anon_sym_AMP_GT_GT;
	v->a[63678] = anon_sym_LT_AMP;
	v->a[63679] = anon_sym_GT_AMP;
	small_parse_table_3184(v);
}

void	small_parse_table_3184(t_small_parse_table_array *v)
{
	v->a[63680] = anon_sym_GT_PIPE;
	v->a[63681] = 12;
	v->a[63682] = actions(3);
	v->a[63683] = 1;
	v->a[63684] = sym_comment;
	v->a[63685] = actions(764);
	v->a[63686] = 1;
	v->a[63687] = anon_sym_RPAREN;
	v->a[63688] = actions(766);
	v->a[63689] = 1;
	v->a[63690] = anon_sym_PIPE;
	v->a[63691] = actions(2031);
	v->a[63692] = 1;
	v->a[63693] = aux_sym_heredoc_redirect_token1;
	v->a[63694] = actions(2043);
	v->a[63695] = 1;
	v->a[63696] = sym_file_descriptor;
	v->a[63697] = state(673);
	v->a[63698] = 1;
	v->a[63699] = sym_terminator;
	small_parse_table_3185(v);
}

/* EOF small_parse_table_636.c */
