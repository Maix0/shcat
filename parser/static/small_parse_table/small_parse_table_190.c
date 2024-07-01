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
	v->a[19000] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19001] = anon_sym_AMP;
	v->a[19002] = anon_sym_DQUOTE;
	v->a[19003] = sym_raw_string;
	v->a[19004] = sym_number;
	v->a[19005] = anon_sym_DOLLAR_LBRACE;
	v->a[19006] = anon_sym_DOLLAR_LPAREN;
	v->a[19007] = anon_sym_BQUOTE;
	v->a[19008] = sym_word;
	v->a[19009] = anon_sym_SEMI;
	v->a[19010] = 16;
	v->a[19011] = actions(3);
	v->a[19012] = 1;
	v->a[19013] = sym_comment;
	v->a[19014] = actions(17);
	v->a[19015] = 1;
	v->a[19016] = anon_sym_LPAREN;
	v->a[19017] = actions(437);
	v->a[19018] = 1;
	v->a[19019] = sym_file_descriptor;
	small_parse_table_951(v);
}

void	small_parse_table_951(t_small_parse_table_array *v)
{
	v->a[19020] = actions(459);
	v->a[19021] = 1;
	v->a[19022] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19023] = actions(461);
	v->a[19024] = 1;
	v->a[19025] = anon_sym_DOLLAR;
	v->a[19026] = actions(463);
	v->a[19027] = 1;
	v->a[19028] = anon_sym_DQUOTE;
	v->a[19029] = actions(465);
	v->a[19030] = 1;
	v->a[19031] = anon_sym_DOLLAR_LBRACE;
	v->a[19032] = actions(467);
	v->a[19033] = 1;
	v->a[19034] = anon_sym_DOLLAR_LPAREN;
	v->a[19035] = actions(469);
	v->a[19036] = 1;
	v->a[19037] = anon_sym_BQUOTE;
	v->a[19038] = actions(471);
	v->a[19039] = 1;
	small_parse_table_952(v);
}

void	small_parse_table_952(t_small_parse_table_array *v)
{
	v->a[19040] = sym__bare_dollar;
	v->a[19041] = state(198);
	v->a[19042] = 1;
	v->a[19043] = aux_sym_command_repeat2;
	v->a[19044] = state(627);
	v->a[19045] = 1;
	v->a[19046] = sym_concatenation;
	v->a[19047] = state(1156);
	v->a[19048] = 1;
	v->a[19049] = sym_subshell;
	v->a[19050] = actions(457);
	v->a[19051] = 3;
	v->a[19052] = sym_raw_string;
	v->a[19053] = sym_number;
	v->a[19054] = sym_word;
	v->a[19055] = state(373);
	v->a[19056] = 5;
	v->a[19057] = sym_arithmetic_expansion;
	v->a[19058] = sym_string;
	v->a[19059] = sym_simple_expansion;
	small_parse_table_953(v);
}

void	small_parse_table_953(t_small_parse_table_array *v)
{
	v->a[19060] = sym_expansion;
	v->a[19061] = sym_command_substitution;
	v->a[19062] = actions(441);
	v->a[19063] = 17;
	v->a[19064] = anon_sym_PIPE;
	v->a[19065] = anon_sym_RPAREN;
	v->a[19066] = anon_sym_SEMI_SEMI;
	v->a[19067] = anon_sym_AMP_AMP;
	v->a[19068] = anon_sym_PIPE_PIPE;
	v->a[19069] = anon_sym_LT;
	v->a[19070] = anon_sym_GT;
	v->a[19071] = anon_sym_GT_GT;
	v->a[19072] = anon_sym_LT_AMP;
	v->a[19073] = anon_sym_GT_AMP;
	v->a[19074] = anon_sym_GT_PIPE;
	v->a[19075] = anon_sym_LT_GT;
	v->a[19076] = anon_sym_LT_LT;
	v->a[19077] = anon_sym_LT_LT_DASH;
	v->a[19078] = aux_sym_heredoc_redirect_token1;
	v->a[19079] = anon_sym_AMP;
	small_parse_table_954(v);
}

void	small_parse_table_954(t_small_parse_table_array *v)
{
	v->a[19080] = anon_sym_SEMI;
	v->a[19081] = 16;
	v->a[19082] = actions(3);
	v->a[19083] = 1;
	v->a[19084] = sym_comment;
	v->a[19085] = actions(17);
	v->a[19086] = 1;
	v->a[19087] = anon_sym_LPAREN;
	v->a[19088] = actions(443);
	v->a[19089] = 1;
	v->a[19090] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19091] = actions(445);
	v->a[19092] = 1;
	v->a[19093] = anon_sym_DOLLAR;
	v->a[19094] = actions(447);
	v->a[19095] = 1;
	v->a[19096] = anon_sym_DQUOTE;
	v->a[19097] = actions(449);
	v->a[19098] = 1;
	v->a[19099] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_955(v);
}

/* EOF small_parse_table_190.c */
