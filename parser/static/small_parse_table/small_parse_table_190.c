/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_190.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_950(t_small_parse_table_array *v)
{
	v->a[19000] = sym_string;
	v->a[19001] = sym_simple_expansion;
	v->a[19002] = sym_expansion;
	v->a[19003] = sym_command_substitution;
	v->a[19004] = actions(537);
	v->a[19005] = 15;
	v->a[19006] = anon_sym_PIPE;
	v->a[19007] = anon_sym_SEMI_SEMI;
	v->a[19008] = anon_sym_AMP_AMP;
	v->a[19009] = anon_sym_PIPE_PIPE;
	v->a[19010] = anon_sym_LT;
	v->a[19011] = anon_sym_GT;
	v->a[19012] = anon_sym_GT_GT;
	v->a[19013] = anon_sym_LT_AMP;
	v->a[19014] = anon_sym_GT_AMP;
	v->a[19015] = anon_sym_GT_PIPE;
	v->a[19016] = anon_sym_LT_GT;
	v->a[19017] = anon_sym_LT_LT;
	v->a[19018] = anon_sym_LT_LT_DASH;
	v->a[19019] = aux_sym_heredoc_redirect_token1;
	small_parse_table_951(v);
}

void	small_parse_table_951(t_small_parse_table_array *v)
{
	v->a[19020] = anon_sym_SEMI;
	v->a[19021] = 17;
	v->a[19022] = actions(407);
	v->a[19023] = 1;
	v->a[19024] = sym_comment;
	v->a[19025] = actions(409);
	v->a[19026] = 1;
	v->a[19027] = anon_sym_PIPE;
	v->a[19028] = actions(411);
	v->a[19029] = 1;
	v->a[19030] = anon_sym_AMP_AMP;
	v->a[19031] = actions(413);
	v->a[19032] = 1;
	v->a[19033] = anon_sym_PIPE_PIPE;
	v->a[19034] = actions(423);
	v->a[19035] = 1;
	v->a[19036] = anon_sym_CARET;
	v->a[19037] = actions(425);
	v->a[19038] = 1;
	v->a[19039] = anon_sym_AMP;
	small_parse_table_952(v);
}

void	small_parse_table_952(t_small_parse_table_array *v)
{
	v->a[19040] = actions(479);
	v->a[19041] = 1;
	v->a[19042] = anon_sym_QMARK;
	v->a[19043] = actions(485);
	v->a[19044] = 1;
	v->a[19045] = anon_sym_EQ;
	v->a[19046] = actions(607);
	v->a[19047] = 1;
	v->a[19048] = anon_sym_RPAREN_RPAREN;
	v->a[19049] = actions(405);
	v->a[19050] = 2;
	v->a[19051] = anon_sym_PLUS_PLUS2;
	v->a[19052] = anon_sym_DASH_DASH2;
	v->a[19053] = actions(417);
	v->a[19054] = 2;
	v->a[19055] = anon_sym_LT;
	v->a[19056] = anon_sym_GT;
	v->a[19057] = actions(419);
	v->a[19058] = 2;
	v->a[19059] = anon_sym_GT_GT;
	small_parse_table_953(v);
}

void	small_parse_table_953(t_small_parse_table_array *v)
{
	v->a[19060] = anon_sym_LT_LT;
	v->a[19061] = actions(427);
	v->a[19062] = 2;
	v->a[19063] = anon_sym_EQ_EQ;
	v->a[19064] = anon_sym_BANG_EQ;
	v->a[19065] = actions(429);
	v->a[19066] = 2;
	v->a[19067] = anon_sym_LT_EQ;
	v->a[19068] = anon_sym_GT_EQ;
	v->a[19069] = actions(431);
	v->a[19070] = 2;
	v->a[19071] = anon_sym_PLUS;
	v->a[19072] = anon_sym_DASH;
	v->a[19073] = actions(433);
	v->a[19074] = 3;
	v->a[19075] = anon_sym_STAR;
	v->a[19076] = anon_sym_SLASH;
	v->a[19077] = anon_sym_PERCENT;
	v->a[19078] = actions(493);
	v->a[19079] = 10;
	small_parse_table_954(v);
}

void	small_parse_table_954(t_small_parse_table_array *v)
{
	v->a[19080] = anon_sym_PLUS_EQ;
	v->a[19081] = anon_sym_DASH_EQ;
	v->a[19082] = anon_sym_STAR_EQ;
	v->a[19083] = anon_sym_SLASH_EQ;
	v->a[19084] = anon_sym_PERCENT_EQ;
	v->a[19085] = anon_sym_LT_LT_EQ;
	v->a[19086] = anon_sym_GT_GT_EQ;
	v->a[19087] = anon_sym_AMP_EQ;
	v->a[19088] = anon_sym_CARET_EQ;
	v->a[19089] = anon_sym_PIPE_EQ;
	v->a[19090] = 3;
	v->a[19091] = actions(407);
	v->a[19092] = 1;
	v->a[19093] = sym_comment;
	v->a[19094] = actions(471);
	v->a[19095] = 13;
	v->a[19096] = anon_sym_PIPE;
	v->a[19097] = anon_sym_EQ;
	v->a[19098] = anon_sym_LT;
	v->a[19099] = anon_sym_GT;
	small_parse_table_955(v);
}

/* EOF small_parse_table_190.c */
