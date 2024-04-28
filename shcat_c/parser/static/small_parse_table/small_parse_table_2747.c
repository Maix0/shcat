/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2747.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13735(t_small_parse_table_array *v)
{
	v->a[274700] = anon_sym_SEMI_SEMI;
	v->a[274701] = state(4650);
	v->a[274702] = 3;
	v->a[274703] = sym_file_redirect;
	v->a[274704] = sym_heredoc_redirect;
	v->a[274705] = aux_sym_redirected_statement_repeat1;
	v->a[274706] = actions(11479);
	v->a[274707] = 8;
	v->a[274708] = anon_sym_LT;
	v->a[274709] = anon_sym_GT;
	v->a[274710] = anon_sym_GT_GT;
	v->a[274711] = anon_sym_AMP_GT;
	v->a[274712] = anon_sym_AMP_GT_GT;
	v->a[274713] = anon_sym_LT_AMP;
	v->a[274714] = anon_sym_GT_AMP;
	v->a[274715] = anon_sym_GT_PIPE;
	v->a[274716] = 6;
	v->a[274717] = actions(3);
	v->a[274718] = 1;
	v->a[274719] = sym_comment;
	small_parse_table_13736(v);
}

void	small_parse_table_13736(t_small_parse_table_array *v)
{
	v->a[274720] = actions(11512);
	v->a[274721] = 1;
	v->a[274722] = aux_sym_concatenation_token1;
	v->a[274723] = actions(11514);
	v->a[274724] = 1;
	v->a[274725] = sym__concat;
	v->a[274726] = state(5207);
	v->a[274727] = 1;
	v->a[274728] = aux_sym_concatenation_repeat1;
	v->a[274729] = actions(1263);
	v->a[274730] = 2;
	v->a[274731] = sym_file_descriptor;
	v->a[274732] = aux_sym_heredoc_redirect_token1;
	v->a[274733] = actions(1261);
	v->a[274734] = 18;
	v->a[274735] = anon_sym_PIPE_PIPE;
	v->a[274736] = anon_sym_AMP_AMP;
	v->a[274737] = anon_sym_PIPE;
	v->a[274738] = anon_sym_LT;
	v->a[274739] = anon_sym_GT;
	small_parse_table_13737(v);
}

void	small_parse_table_13737(t_small_parse_table_array *v)
{
	v->a[274740] = anon_sym_LT_LT;
	v->a[274741] = anon_sym_GT_GT;
	v->a[274742] = anon_sym_PIPE_AMP;
	v->a[274743] = anon_sym_AMP_GT;
	v->a[274744] = anon_sym_AMP_GT_GT;
	v->a[274745] = anon_sym_LT_AMP;
	v->a[274746] = anon_sym_GT_AMP;
	v->a[274747] = anon_sym_GT_PIPE;
	v->a[274748] = anon_sym_LT_AMP_DASH;
	v->a[274749] = anon_sym_GT_AMP_DASH;
	v->a[274750] = anon_sym_LT_LT_DASH;
	v->a[274751] = anon_sym_LT_LT_LT;
	v->a[274752] = sym__special_character;
	v->a[274753] = 6;
	v->a[274754] = actions(3);
	v->a[274755] = 1;
	v->a[274756] = sym_comment;
	v->a[274757] = actions(11500);
	v->a[274758] = 1;
	v->a[274759] = aux_sym_concatenation_token1;
	small_parse_table_13738(v);
}

void	small_parse_table_13738(t_small_parse_table_array *v)
{
	v->a[274760] = actions(11502);
	v->a[274761] = 1;
	v->a[274762] = sym__concat;
	v->a[274763] = state(5209);
	v->a[274764] = 1;
	v->a[274765] = aux_sym_concatenation_repeat1;
	v->a[274766] = actions(1263);
	v->a[274767] = 3;
	v->a[274768] = sym_file_descriptor;
	v->a[274769] = sym_variable_name;
	v->a[274770] = aux_sym_heredoc_redirect_token1;
	v->a[274771] = actions(1261);
	v->a[274772] = 17;
	v->a[274773] = anon_sym_PIPE_PIPE;
	v->a[274774] = anon_sym_AMP_AMP;
	v->a[274775] = anon_sym_PIPE;
	v->a[274776] = anon_sym_LT;
	v->a[274777] = anon_sym_GT;
	v->a[274778] = anon_sym_LT_LT;
	v->a[274779] = anon_sym_GT_GT;
	small_parse_table_13739(v);
}

void	small_parse_table_13739(t_small_parse_table_array *v)
{
	v->a[274780] = anon_sym_PIPE_AMP;
	v->a[274781] = anon_sym_AMP_GT;
	v->a[274782] = anon_sym_AMP_GT_GT;
	v->a[274783] = anon_sym_LT_AMP;
	v->a[274784] = anon_sym_GT_AMP;
	v->a[274785] = anon_sym_GT_PIPE;
	v->a[274786] = anon_sym_LT_AMP_DASH;
	v->a[274787] = anon_sym_GT_AMP_DASH;
	v->a[274788] = anon_sym_LT_LT_DASH;
	v->a[274789] = sym__special_character;
	v->a[274790] = 3;
	v->a[274791] = actions(3);
	v->a[274792] = 1;
	v->a[274793] = sym_comment;
	v->a[274794] = actions(12265);
	v->a[274795] = 2;
	v->a[274796] = sym_file_descriptor;
	v->a[274797] = aux_sym_heredoc_redirect_token1;
	v->a[274798] = actions(12267);
	v->a[274799] = 21;
	small_parse_table_13740(v);
}

/* EOF small_parse_table_2747.c */
