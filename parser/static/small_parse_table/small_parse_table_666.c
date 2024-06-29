/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_666.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3330(t_small_parse_table_array *v)
{
	v->a[66600] = sym_variable_name;
	v->a[66601] = actions(2131);
	v->a[66602] = 2;
	v->a[66603] = sym_file_descriptor;
	v->a[66604] = aux_sym_heredoc_redirect_token1;
	v->a[66605] = state(1148);
	v->a[66606] = 2;
	v->a[66607] = sym_variable_assignment;
	v->a[66608] = aux_sym__variable_assignments_repeat1;
	v->a[66609] = actions(2133);
	v->a[66610] = 19;
	v->a[66611] = anon_sym_PIPE;
	v->a[66612] = anon_sym_SEMI_SEMI;
	v->a[66613] = anon_sym_AMP_AMP;
	v->a[66614] = anon_sym_PIPE_PIPE;
	v->a[66615] = anon_sym_LT;
	v->a[66616] = anon_sym_GT;
	v->a[66617] = anon_sym_GT_GT;
	v->a[66618] = anon_sym_AMP_GT;
	v->a[66619] = anon_sym_AMP_GT_GT;
	small_parse_table_3331(v);
}

void	small_parse_table_3331(t_small_parse_table_array *v)
{
	v->a[66620] = anon_sym_LT_AMP;
	v->a[66621] = anon_sym_GT_AMP;
	v->a[66622] = anon_sym_GT_PIPE;
	v->a[66623] = anon_sym_LT_AMP_DASH;
	v->a[66624] = anon_sym_GT_AMP_DASH;
	v->a[66625] = anon_sym_LT_LT;
	v->a[66626] = anon_sym_LT_LT_DASH;
	v->a[66627] = anon_sym_AMP;
	v->a[66628] = anon_sym_BQUOTE;
	v->a[66629] = anon_sym_SEMI;
	v->a[66630] = 5;
	v->a[66631] = actions(3);
	v->a[66632] = 1;
	v->a[66633] = sym_comment;
	v->a[66634] = actions(2149);
	v->a[66635] = 1;
	v->a[66636] = sym_variable_name;
	v->a[66637] = actions(2131);
	v->a[66638] = 2;
	v->a[66639] = sym_file_descriptor;
	small_parse_table_3332(v);
}

void	small_parse_table_3332(t_small_parse_table_array *v)
{
	v->a[66640] = aux_sym_heredoc_redirect_token1;
	v->a[66641] = state(1093);
	v->a[66642] = 2;
	v->a[66643] = sym_variable_assignment;
	v->a[66644] = aux_sym__variable_assignments_repeat1;
	v->a[66645] = actions(2133);
	v->a[66646] = 19;
	v->a[66647] = anon_sym_PIPE;
	v->a[66648] = anon_sym_RPAREN;
	v->a[66649] = anon_sym_SEMI_SEMI;
	v->a[66650] = anon_sym_AMP_AMP;
	v->a[66651] = anon_sym_PIPE_PIPE;
	v->a[66652] = anon_sym_LT;
	v->a[66653] = anon_sym_GT;
	v->a[66654] = anon_sym_GT_GT;
	v->a[66655] = anon_sym_AMP_GT;
	v->a[66656] = anon_sym_AMP_GT_GT;
	v->a[66657] = anon_sym_LT_AMP;
	v->a[66658] = anon_sym_GT_AMP;
	v->a[66659] = anon_sym_GT_PIPE;
	small_parse_table_3333(v);
}

void	small_parse_table_3333(t_small_parse_table_array *v)
{
	v->a[66660] = anon_sym_LT_AMP_DASH;
	v->a[66661] = anon_sym_GT_AMP_DASH;
	v->a[66662] = anon_sym_LT_LT;
	v->a[66663] = anon_sym_LT_LT_DASH;
	v->a[66664] = anon_sym_AMP;
	v->a[66665] = anon_sym_SEMI;
	v->a[66666] = 12;
	v->a[66667] = actions(3);
	v->a[66668] = 1;
	v->a[66669] = sym_comment;
	v->a[66670] = actions(764);
	v->a[66671] = 1;
	v->a[66672] = anon_sym_SEMI_SEMI;
	v->a[66673] = actions(766);
	v->a[66674] = 1;
	v->a[66675] = anon_sym_PIPE;
	v->a[66676] = actions(2031);
	v->a[66677] = 1;
	v->a[66678] = aux_sym_heredoc_redirect_token1;
	v->a[66679] = actions(2066);
	small_parse_table_3334(v);
}

void	small_parse_table_3334(t_small_parse_table_array *v)
{
	v->a[66680] = 1;
	v->a[66681] = sym_file_descriptor;
	v->a[66682] = state(667);
	v->a[66683] = 1;
	v->a[66684] = sym_terminator;
	v->a[66685] = actions(800);
	v->a[66686] = 2;
	v->a[66687] = anon_sym_AMP;
	v->a[66688] = anon_sym_SEMI;
	v->a[66689] = actions(804);
	v->a[66690] = 2;
	v->a[66691] = anon_sym_LT_LT;
	v->a[66692] = anon_sym_LT_LT_DASH;
	v->a[66693] = actions(893);
	v->a[66694] = 2;
	v->a[66695] = anon_sym_AMP_AMP;
	v->a[66696] = anon_sym_PIPE_PIPE;
	v->a[66697] = actions(2064);
	v->a[66698] = 2;
	v->a[66699] = anon_sym_LT_AMP_DASH;
	small_parse_table_3335(v);
}

/* EOF small_parse_table_666.c */
