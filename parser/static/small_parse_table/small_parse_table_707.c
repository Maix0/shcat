/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_707.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3535(t_small_parse_table_array *v)
{
	v->a[70700] = sym_heredoc_redirect;
	v->a[70701] = aux_sym_redirected_statement_repeat1;
	v->a[70702] = actions(2158);
	v->a[70703] = 8;
	v->a[70704] = anon_sym_LT;
	v->a[70705] = anon_sym_GT;
	v->a[70706] = anon_sym_GT_GT;
	v->a[70707] = anon_sym_AMP_GT;
	v->a[70708] = anon_sym_AMP_GT_GT;
	v->a[70709] = anon_sym_LT_AMP;
	v->a[70710] = anon_sym_GT_AMP;
	v->a[70711] = anon_sym_GT_PIPE;
	v->a[70712] = 13;
	v->a[70713] = actions(3);
	v->a[70714] = 1;
	v->a[70715] = sym_comment;
	v->a[70716] = actions(807);
	v->a[70717] = 1;
	v->a[70718] = anon_sym_PIPE;
	v->a[70719] = actions(840);
	small_parse_table_3536(v);
}

void	small_parse_table_3536(t_small_parse_table_array *v)
{
	v->a[70720] = 1;
	v->a[70721] = anon_sym_BQUOTE;
	v->a[70722] = actions(2164);
	v->a[70723] = 1;
	v->a[70724] = sym_file_descriptor;
	v->a[70725] = actions(2402);
	v->a[70726] = 1;
	v->a[70727] = anon_sym_SEMI_SEMI;
	v->a[70728] = actions(2404);
	v->a[70729] = 1;
	v->a[70730] = aux_sym_heredoc_redirect_token1;
	v->a[70731] = actions(2406);
	v->a[70732] = 1;
	v->a[70733] = anon_sym_AMP;
	v->a[70734] = actions(2408);
	v->a[70735] = 1;
	v->a[70736] = anon_sym_SEMI;
	v->a[70737] = actions(861);
	v->a[70738] = 2;
	v->a[70739] = anon_sym_LT_LT;
	small_parse_table_3537(v);
}

void	small_parse_table_3537(t_small_parse_table_array *v)
{
	v->a[70740] = anon_sym_LT_LT_DASH;
	v->a[70741] = actions(1032);
	v->a[70742] = 2;
	v->a[70743] = anon_sym_AMP_AMP;
	v->a[70744] = anon_sym_PIPE_PIPE;
	v->a[70745] = actions(2160);
	v->a[70746] = 2;
	v->a[70747] = anon_sym_LT_AMP_DASH;
	v->a[70748] = anon_sym_GT_AMP_DASH;
	v->a[70749] = state(1297);
	v->a[70750] = 3;
	v->a[70751] = sym_file_redirect;
	v->a[70752] = sym_heredoc_redirect;
	v->a[70753] = aux_sym_redirected_statement_repeat1;
	v->a[70754] = actions(2158);
	v->a[70755] = 8;
	v->a[70756] = anon_sym_LT;
	v->a[70757] = anon_sym_GT;
	v->a[70758] = anon_sym_GT_GT;
	v->a[70759] = anon_sym_AMP_GT;
	small_parse_table_3538(v);
}

void	small_parse_table_3538(t_small_parse_table_array *v)
{
	v->a[70760] = anon_sym_AMP_GT_GT;
	v->a[70761] = anon_sym_LT_AMP;
	v->a[70762] = anon_sym_GT_AMP;
	v->a[70763] = anon_sym_GT_PIPE;
	v->a[70764] = 13;
	v->a[70765] = actions(3);
	v->a[70766] = 1;
	v->a[70767] = sym_comment;
	v->a[70768] = actions(807);
	v->a[70769] = 1;
	v->a[70770] = anon_sym_PIPE;
	v->a[70771] = actions(840);
	v->a[70772] = 1;
	v->a[70773] = anon_sym_BQUOTE;
	v->a[70774] = actions(2164);
	v->a[70775] = 1;
	v->a[70776] = sym_file_descriptor;
	v->a[70777] = actions(2410);
	v->a[70778] = 1;
	v->a[70779] = anon_sym_SEMI_SEMI;
	small_parse_table_3539(v);
}

void	small_parse_table_3539(t_small_parse_table_array *v)
{
	v->a[70780] = actions(2412);
	v->a[70781] = 1;
	v->a[70782] = aux_sym_heredoc_redirect_token1;
	v->a[70783] = actions(2414);
	v->a[70784] = 1;
	v->a[70785] = anon_sym_AMP;
	v->a[70786] = actions(2416);
	v->a[70787] = 1;
	v->a[70788] = anon_sym_SEMI;
	v->a[70789] = actions(861);
	v->a[70790] = 2;
	v->a[70791] = anon_sym_LT_LT;
	v->a[70792] = anon_sym_LT_LT_DASH;
	v->a[70793] = actions(1032);
	v->a[70794] = 2;
	v->a[70795] = anon_sym_AMP_AMP;
	v->a[70796] = anon_sym_PIPE_PIPE;
	v->a[70797] = actions(2160);
	v->a[70798] = 2;
	v->a[70799] = anon_sym_LT_AMP_DASH;
	small_parse_table_3540(v);
}

/* EOF small_parse_table_707.c */
