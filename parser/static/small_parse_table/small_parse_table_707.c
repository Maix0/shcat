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
	v->a[70700] = 1;
	v->a[70701] = anon_sym_SEMI_SEMI;
	v->a[70702] = actions(2288);
	v->a[70703] = 1;
	v->a[70704] = aux_sym_heredoc_redirect_token1;
	v->a[70705] = actions(2460);
	v->a[70706] = 1;
	v->a[70707] = sym_file_descriptor;
	v->a[70708] = actions(1062);
	v->a[70709] = 2;
	v->a[70710] = anon_sym_LT_LT;
	v->a[70711] = anon_sym_LT_LT_DASH;
	v->a[70712] = actions(1089);
	v->a[70713] = 2;
	v->a[70714] = anon_sym_AMP;
	v->a[70715] = anon_sym_SEMI;
	v->a[70716] = actions(1093);
	v->a[70717] = 2;
	v->a[70718] = anon_sym_AMP_AMP;
	v->a[70719] = anon_sym_PIPE_PIPE;
	small_parse_table_3536(v);
}

void	small_parse_table_3536(t_small_parse_table_array *v)
{
	v->a[70720] = actions(2456);
	v->a[70721] = 2;
	v->a[70722] = anon_sym_LT_AMP_DASH;
	v->a[70723] = anon_sym_GT_AMP_DASH;
	v->a[70724] = state(1160);
	v->a[70725] = 3;
	v->a[70726] = sym_file_redirect;
	v->a[70727] = sym_heredoc_redirect;
	v->a[70728] = aux_sym_redirected_statement_repeat1;
	v->a[70729] = actions(2454);
	v->a[70730] = 8;
	v->a[70731] = anon_sym_LT;
	v->a[70732] = anon_sym_GT;
	v->a[70733] = anon_sym_GT_GT;
	v->a[70734] = anon_sym_AMP_GT;
	v->a[70735] = anon_sym_AMP_GT_GT;
	v->a[70736] = anon_sym_LT_AMP;
	v->a[70737] = anon_sym_GT_AMP;
	v->a[70738] = anon_sym_GT_PIPE;
	v->a[70739] = 9;
	small_parse_table_3537(v);
}

void	small_parse_table_3537(t_small_parse_table_array *v)
{
	v->a[70740] = actions(3);
	v->a[70741] = 1;
	v->a[70742] = sym_comment;
	v->a[70743] = actions(2460);
	v->a[70744] = 1;
	v->a[70745] = sym_file_descriptor;
	v->a[70746] = actions(2570);
	v->a[70747] = 1;
	v->a[70748] = aux_sym_heredoc_redirect_token1;
	v->a[70749] = actions(1062);
	v->a[70750] = 2;
	v->a[70751] = anon_sym_LT_LT;
	v->a[70752] = anon_sym_LT_LT_DASH;
	v->a[70753] = actions(1093);
	v->a[70754] = 2;
	v->a[70755] = anon_sym_AMP_AMP;
	v->a[70756] = anon_sym_PIPE_PIPE;
	v->a[70757] = actions(2456);
	v->a[70758] = 2;
	v->a[70759] = anon_sym_LT_AMP_DASH;
	small_parse_table_3538(v);
}

void	small_parse_table_3538(t_small_parse_table_array *v)
{
	v->a[70760] = anon_sym_GT_AMP_DASH;
	v->a[70761] = actions(1165);
	v->a[70762] = 3;
	v->a[70763] = anon_sym_SEMI_SEMI;
	v->a[70764] = anon_sym_AMP;
	v->a[70765] = anon_sym_SEMI;
	v->a[70766] = state(1160);
	v->a[70767] = 3;
	v->a[70768] = sym_file_redirect;
	v->a[70769] = sym_heredoc_redirect;
	v->a[70770] = aux_sym_redirected_statement_repeat1;
	v->a[70771] = actions(2454);
	v->a[70772] = 8;
	v->a[70773] = anon_sym_LT;
	v->a[70774] = anon_sym_GT;
	v->a[70775] = anon_sym_GT_GT;
	v->a[70776] = anon_sym_AMP_GT;
	v->a[70777] = anon_sym_AMP_GT_GT;
	v->a[70778] = anon_sym_LT_AMP;
	v->a[70779] = anon_sym_GT_AMP;
	small_parse_table_3539(v);
}

void	small_parse_table_3539(t_small_parse_table_array *v)
{
	v->a[70780] = anon_sym_GT_PIPE;
	v->a[70781] = 7;
	v->a[70782] = actions(3);
	v->a[70783] = 1;
	v->a[70784] = sym_comment;
	v->a[70785] = actions(2468);
	v->a[70786] = 1;
	v->a[70787] = aux_sym_heredoc_redirect_token1;
	v->a[70788] = actions(2636);
	v->a[70789] = 1;
	v->a[70790] = sym_file_descriptor;
	v->a[70791] = actions(2456);
	v->a[70792] = 2;
	v->a[70793] = anon_sym_LT_AMP_DASH;
	v->a[70794] = anon_sym_GT_AMP_DASH;
	v->a[70795] = state(1236);
	v->a[70796] = 2;
	v->a[70797] = sym_file_redirect;
	v->a[70798] = aux_sym_redirected_statement_repeat2;
	v->a[70799] = actions(2454);
	small_parse_table_3540(v);
}

/* EOF small_parse_table_707.c */
