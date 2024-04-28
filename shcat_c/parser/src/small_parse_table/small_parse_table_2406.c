/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2406.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12030(t_small_parse_table_array *v)
{
	v->a[240600] = anon_sym_GT_GT;
	v->a[240601] = anon_sym_esac;
	v->a[240602] = anon_sym_SEMI_SEMI;
	v->a[240603] = anon_sym_SEMI_AMP;
	v->a[240604] = anon_sym_SEMI_SEMI_AMP;
	v->a[240605] = anon_sym_PIPE_AMP;
	v->a[240606] = anon_sym_AMP_GT;
	v->a[240607] = anon_sym_AMP_GT_GT;
	v->a[240608] = anon_sym_LT_AMP;
	v->a[240609] = anon_sym_GT_AMP;
	v->a[240610] = anon_sym_GT_PIPE;
	v->a[240611] = anon_sym_LT_AMP_DASH;
	v->a[240612] = anon_sym_GT_AMP_DASH;
	v->a[240613] = anon_sym_LT_LT_DASH;
	v->a[240614] = 13;
	v->a[240615] = actions(3);
	v->a[240616] = 1;
	v->a[240617] = sym_comment;
	v->a[240618] = actions(4411);
	v->a[240619] = 1;
	small_parse_table_12031(v);
}

void	small_parse_table_12031(t_small_parse_table_array *v)
{
	v->a[240620] = aux_sym_heredoc_redirect_token1;
	v->a[240621] = actions(11305);
	v->a[240622] = 1;
	v->a[240623] = anon_sym_LT_LT_LT;
	v->a[240624] = actions(11337);
	v->a[240625] = 1;
	v->a[240626] = sym_file_descriptor;
	v->a[240627] = state(5069);
	v->a[240628] = 1;
	v->a[240629] = sym_herestring_redirect;
	v->a[240630] = actions(4253);
	v->a[240631] = 2;
	v->a[240632] = anon_sym_PIPE;
	v->a[240633] = anon_sym_PIPE_AMP;
	v->a[240634] = actions(4380);
	v->a[240635] = 2;
	v->a[240636] = anon_sym_PIPE_PIPE;
	v->a[240637] = anon_sym_AMP_AMP;
	v->a[240638] = actions(4382);
	v->a[240639] = 2;
	small_parse_table_12032(v);
}

void	small_parse_table_12032(t_small_parse_table_array *v)
{
	v->a[240640] = anon_sym_LT_LT;
	v->a[240641] = anon_sym_LT_LT_DASH;
	v->a[240642] = actions(4409);
	v->a[240643] = 2;
	v->a[240644] = anon_sym_SEMI;
	v->a[240645] = anon_sym_AMP;
	v->a[240646] = actions(11335);
	v->a[240647] = 2;
	v->a[240648] = anon_sym_LT_AMP_DASH;
	v->a[240649] = anon_sym_GT_AMP_DASH;
	v->a[240650] = actions(4257);
	v->a[240651] = 3;
	v->a[240652] = anon_sym_SEMI_SEMI;
	v->a[240653] = anon_sym_SEMI_AMP;
	v->a[240654] = anon_sym_SEMI_SEMI_AMP;
	v->a[240655] = state(4455);
	v->a[240656] = 3;
	v->a[240657] = sym_file_redirect;
	v->a[240658] = sym_heredoc_redirect;
	v->a[240659] = aux_sym_redirected_statement_repeat1;
	small_parse_table_12033(v);
}

void	small_parse_table_12033(t_small_parse_table_array *v)
{
	v->a[240660] = actions(11333);
	v->a[240661] = 8;
	v->a[240662] = anon_sym_LT;
	v->a[240663] = anon_sym_GT;
	v->a[240664] = anon_sym_GT_GT;
	v->a[240665] = anon_sym_AMP_GT;
	v->a[240666] = anon_sym_AMP_GT_GT;
	v->a[240667] = anon_sym_LT_AMP;
	v->a[240668] = anon_sym_GT_AMP;
	v->a[240669] = anon_sym_GT_PIPE;
	v->a[240670] = 6;
	v->a[240671] = actions(3);
	v->a[240672] = 1;
	v->a[240673] = sym_comment;
	v->a[240674] = actions(11272);
	v->a[240675] = 1;
	v->a[240676] = aux_sym_concatenation_token1;
	v->a[240677] = actions(11274);
	v->a[240678] = 1;
	v->a[240679] = sym__concat;
	small_parse_table_12034(v);
}

void	small_parse_table_12034(t_small_parse_table_array *v)
{
	v->a[240680] = state(4245);
	v->a[240681] = 1;
	v->a[240682] = aux_sym_concatenation_repeat1;
	v->a[240683] = actions(2096);
	v->a[240684] = 2;
	v->a[240685] = sym_file_descriptor;
	v->a[240686] = aux_sym_heredoc_redirect_token1;
	v->a[240687] = actions(2094);
	v->a[240688] = 23;
	v->a[240689] = anon_sym_SEMI;
	v->a[240690] = anon_sym_PIPE_PIPE;
	v->a[240691] = anon_sym_AMP_AMP;
	v->a[240692] = anon_sym_PIPE;
	v->a[240693] = anon_sym_AMP;
	v->a[240694] = anon_sym_LT;
	v->a[240695] = anon_sym_GT;
	v->a[240696] = anon_sym_LT_LT;
	v->a[240697] = anon_sym_GT_GT;
	v->a[240698] = anon_sym_esac;
	v->a[240699] = anon_sym_SEMI_SEMI;
	small_parse_table_12035(v);
}

/* EOF small_parse_table_2406.c */
