/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2447.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12235(t_small_parse_table_array *v)
{
	v->a[244700] = anon_sym_SEMI_AMP;
	v->a[244701] = anon_sym_SEMI_SEMI_AMP;
	v->a[244702] = anon_sym_PIPE_AMP;
	v->a[244703] = anon_sym_AMP_GT;
	v->a[244704] = anon_sym_AMP_GT_GT;
	v->a[244705] = anon_sym_LT_AMP;
	v->a[244706] = anon_sym_GT_AMP;
	v->a[244707] = anon_sym_GT_PIPE;
	v->a[244708] = anon_sym_LT_AMP_DASH;
	v->a[244709] = anon_sym_GT_AMP_DASH;
	v->a[244710] = anon_sym_LT_LT_DASH;
	v->a[244711] = aux_sym_concatenation_token1;
	v->a[244712] = 11;
	v->a[244713] = actions(3);
	v->a[244714] = 1;
	v->a[244715] = sym_comment;
	v->a[244716] = actions(4340);
	v->a[244717] = 1;
	v->a[244718] = aux_sym_heredoc_redirect_token1;
	v->a[244719] = actions(11457);
	small_parse_table_12236(v);
}

void	small_parse_table_12236(t_small_parse_table_array *v)
{
	v->a[244720] = 1;
	v->a[244721] = sym_file_descriptor;
	v->a[244722] = actions(4251);
	v->a[244723] = 2;
	v->a[244724] = anon_sym_PIPE_PIPE;
	v->a[244725] = anon_sym_AMP_AMP;
	v->a[244726] = actions(4253);
	v->a[244727] = 2;
	v->a[244728] = anon_sym_PIPE;
	v->a[244729] = anon_sym_PIPE_AMP;
	v->a[244730] = actions(4255);
	v->a[244731] = 2;
	v->a[244732] = anon_sym_LT_LT;
	v->a[244733] = anon_sym_LT_LT_DASH;
	v->a[244734] = actions(4338);
	v->a[244735] = 2;
	v->a[244736] = anon_sym_SEMI;
	v->a[244737] = anon_sym_AMP;
	v->a[244738] = actions(11282);
	v->a[244739] = 2;
	small_parse_table_12237(v);
}

void	small_parse_table_12237(t_small_parse_table_array *v)
{
	v->a[244740] = anon_sym_LT_AMP_DASH;
	v->a[244741] = anon_sym_GT_AMP_DASH;
	v->a[244742] = state(4283);
	v->a[244743] = 3;
	v->a[244744] = sym_file_redirect;
	v->a[244745] = sym_heredoc_redirect;
	v->a[244746] = aux_sym_redirected_statement_repeat1;
	v->a[244747] = actions(2719);
	v->a[244748] = 4;
	v->a[244749] = anon_sym_esac;
	v->a[244750] = anon_sym_SEMI_SEMI;
	v->a[244751] = anon_sym_SEMI_AMP;
	v->a[244752] = anon_sym_SEMI_SEMI_AMP;
	v->a[244753] = actions(11280);
	v->a[244754] = 8;
	v->a[244755] = anon_sym_LT;
	v->a[244756] = anon_sym_GT;
	v->a[244757] = anon_sym_GT_GT;
	v->a[244758] = anon_sym_AMP_GT;
	v->a[244759] = anon_sym_AMP_GT_GT;
	small_parse_table_12238(v);
}

void	small_parse_table_12238(t_small_parse_table_array *v)
{
	v->a[244760] = anon_sym_LT_AMP;
	v->a[244761] = anon_sym_GT_AMP;
	v->a[244762] = anon_sym_GT_PIPE;
	v->a[244763] = 5;
	v->a[244764] = actions(3);
	v->a[244765] = 1;
	v->a[244766] = sym_comment;
	v->a[244767] = actions(4253);
	v->a[244768] = 2;
	v->a[244769] = anon_sym_PIPE;
	v->a[244770] = anon_sym_PIPE_AMP;
	v->a[244771] = actions(4272);
	v->a[244772] = 2;
	v->a[244773] = sym_file_descriptor;
	v->a[244774] = aux_sym_heredoc_redirect_token1;
	v->a[244775] = state(4283);
	v->a[244776] = 3;
	v->a[244777] = sym_file_redirect;
	v->a[244778] = sym_heredoc_redirect;
	v->a[244779] = aux_sym_redirected_statement_repeat1;
	small_parse_table_12239(v);
}

void	small_parse_table_12239(t_small_parse_table_array *v)
{
	v->a[244780] = actions(4270);
	v->a[244781] = 20;
	v->a[244782] = anon_sym_SEMI;
	v->a[244783] = anon_sym_PIPE_PIPE;
	v->a[244784] = anon_sym_AMP_AMP;
	v->a[244785] = anon_sym_AMP;
	v->a[244786] = anon_sym_LT;
	v->a[244787] = anon_sym_GT;
	v->a[244788] = anon_sym_LT_LT;
	v->a[244789] = anon_sym_GT_GT;
	v->a[244790] = anon_sym_esac;
	v->a[244791] = anon_sym_SEMI_SEMI;
	v->a[244792] = anon_sym_SEMI_AMP;
	v->a[244793] = anon_sym_SEMI_SEMI_AMP;
	v->a[244794] = anon_sym_AMP_GT;
	v->a[244795] = anon_sym_AMP_GT_GT;
	v->a[244796] = anon_sym_LT_AMP;
	v->a[244797] = anon_sym_GT_AMP;
	v->a[244798] = anon_sym_GT_PIPE;
	v->a[244799] = anon_sym_LT_AMP_DASH;
	small_parse_table_12240(v);
}

/* EOF small_parse_table_2447.c */
