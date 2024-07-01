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
	v->a[70700] = anon_sym_AMP_AMP;
	v->a[70701] = anon_sym_PIPE_PIPE;
	v->a[70702] = anon_sym_LT;
	v->a[70703] = anon_sym_GT;
	v->a[70704] = anon_sym_GT_GT;
	v->a[70705] = anon_sym_LT_AMP;
	v->a[70706] = anon_sym_GT_AMP;
	v->a[70707] = anon_sym_GT_PIPE;
	v->a[70708] = anon_sym_LT_AMP_DASH;
	v->a[70709] = anon_sym_GT_AMP_DASH;
	v->a[70710] = anon_sym_LT_LT;
	v->a[70711] = anon_sym_LT_LT_DASH;
	v->a[70712] = anon_sym_AMP;
	v->a[70713] = anon_sym_BQUOTE;
	v->a[70714] = anon_sym_SEMI;
	v->a[70715] = 3;
	v->a[70716] = actions(3);
	v->a[70717] = 1;
	v->a[70718] = sym_comment;
	v->a[70719] = actions(2431);
	small_parse_table_3536(v);
}

void	small_parse_table_3536(t_small_parse_table_array *v)
{
	v->a[70720] = 3;
	v->a[70721] = sym_file_descriptor;
	v->a[70722] = ts_builtin_sym_end;
	v->a[70723] = aux_sym_heredoc_redirect_token1;
	v->a[70724] = actions(2433);
	v->a[70725] = 18;
	v->a[70726] = anon_sym_PIPE;
	v->a[70727] = anon_sym_RPAREN;
	v->a[70728] = anon_sym_SEMI_SEMI;
	v->a[70729] = anon_sym_AMP_AMP;
	v->a[70730] = anon_sym_PIPE_PIPE;
	v->a[70731] = anon_sym_LT;
	v->a[70732] = anon_sym_GT;
	v->a[70733] = anon_sym_GT_GT;
	v->a[70734] = anon_sym_LT_AMP;
	v->a[70735] = anon_sym_GT_AMP;
	v->a[70736] = anon_sym_GT_PIPE;
	v->a[70737] = anon_sym_LT_AMP_DASH;
	v->a[70738] = anon_sym_GT_AMP_DASH;
	v->a[70739] = anon_sym_LT_LT;
	small_parse_table_3537(v);
}

void	small_parse_table_3537(t_small_parse_table_array *v)
{
	v->a[70740] = anon_sym_LT_LT_DASH;
	v->a[70741] = anon_sym_AMP;
	v->a[70742] = anon_sym_BQUOTE;
	v->a[70743] = anon_sym_SEMI;
	v->a[70744] = 8;
	v->a[70745] = actions(3);
	v->a[70746] = 1;
	v->a[70747] = sym_comment;
	v->a[70748] = actions(2074);
	v->a[70749] = 1;
	v->a[70750] = aux_sym_heredoc_redirect_token1;
	v->a[70751] = actions(2441);
	v->a[70752] = 1;
	v->a[70753] = sym_file_descriptor;
	v->a[70754] = actions(2084);
	v->a[70755] = 2;
	v->a[70756] = anon_sym_LT_LT;
	v->a[70757] = anon_sym_LT_LT_DASH;
	v->a[70758] = actions(2438);
	v->a[70759] = 2;
	small_parse_table_3538(v);
}

void	small_parse_table_3538(t_small_parse_table_array *v)
{
	v->a[70760] = anon_sym_LT_AMP_DASH;
	v->a[70761] = anon_sym_GT_AMP_DASH;
	v->a[70762] = state(1312);
	v->a[70763] = 3;
	v->a[70764] = sym_file_redirect;
	v->a[70765] = sym_heredoc_redirect;
	v->a[70766] = aux_sym_redirected_statement_repeat1;
	v->a[70767] = actions(2076);
	v->a[70768] = 6;
	v->a[70769] = anon_sym_PIPE;
	v->a[70770] = anon_sym_SEMI_SEMI;
	v->a[70771] = anon_sym_AMP_AMP;
	v->a[70772] = anon_sym_PIPE_PIPE;
	v->a[70773] = anon_sym_AMP;
	v->a[70774] = anon_sym_SEMI;
	v->a[70775] = actions(2435);
	v->a[70776] = 6;
	v->a[70777] = anon_sym_LT;
	v->a[70778] = anon_sym_GT;
	v->a[70779] = anon_sym_GT_GT;
	small_parse_table_3539(v);
}

void	small_parse_table_3539(t_small_parse_table_array *v)
{
	v->a[70780] = anon_sym_LT_AMP;
	v->a[70781] = anon_sym_GT_AMP;
	v->a[70782] = anon_sym_GT_PIPE;
	v->a[70783] = 3;
	v->a[70784] = actions(3);
	v->a[70785] = 1;
	v->a[70786] = sym_comment;
	v->a[70787] = actions(1033);
	v->a[70788] = 3;
	v->a[70789] = sym_file_descriptor;
	v->a[70790] = sym__concat;
	v->a[70791] = sym_variable_name;
	v->a[70792] = actions(1031);
	v->a[70793] = 18;
	v->a[70794] = anon_sym_LT;
	v->a[70795] = anon_sym_GT;
	v->a[70796] = anon_sym_GT_GT;
	v->a[70797] = anon_sym_LT_AMP;
	v->a[70798] = anon_sym_GT_AMP;
	v->a[70799] = anon_sym_GT_PIPE;
	small_parse_table_3540(v);
}

/* EOF small_parse_table_707.c */
