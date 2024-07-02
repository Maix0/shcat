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
	v->a[19000] = 3;
	v->a[19001] = sym_raw_string;
	v->a[19002] = sym_number;
	v->a[19003] = sym_word;
	v->a[19004] = state(420);
	v->a[19005] = 5;
	v->a[19006] = sym_arithmetic_expansion;
	v->a[19007] = sym_string;
	v->a[19008] = sym_simple_expansion;
	v->a[19009] = sym_expansion;
	v->a[19010] = sym_command_substitution;
	v->a[19011] = actions(457);
	v->a[19012] = 17;
	v->a[19013] = anon_sym_esac;
	v->a[19014] = anon_sym_PIPE;
	v->a[19015] = anon_sym_SEMI_SEMI;
	v->a[19016] = anon_sym_AMP_AMP;
	v->a[19017] = anon_sym_PIPE_PIPE;
	v->a[19018] = anon_sym_LT;
	v->a[19019] = anon_sym_GT;
	small_parse_table_951(v);
}

void	small_parse_table_951(t_small_parse_table_array *v)
{
	v->a[19020] = anon_sym_GT_GT;
	v->a[19021] = anon_sym_LT_AMP;
	v->a[19022] = anon_sym_GT_AMP;
	v->a[19023] = anon_sym_GT_PIPE;
	v->a[19024] = anon_sym_LT_GT;
	v->a[19025] = anon_sym_LT_LT;
	v->a[19026] = anon_sym_LT_LT_DASH;
	v->a[19027] = aux_sym_heredoc_redirect_token1;
	v->a[19028] = anon_sym_AMP;
	v->a[19029] = anon_sym_SEMI;
	v->a[19030] = 6;
	v->a[19031] = actions(3);
	v->a[19032] = 1;
	v->a[19033] = sym_comment;
	v->a[19034] = actions(361);
	v->a[19035] = 1;
	v->a[19036] = sym_file_descriptor;
	v->a[19037] = actions(429);
	v->a[19038] = 1;
	v->a[19039] = sym_variable_name;
	small_parse_table_952(v);
}

void	small_parse_table_952(t_small_parse_table_array *v)
{
	v->a[19040] = actions(427);
	v->a[19041] = 2;
	v->a[19042] = aux_sym__simple_variable_name_token1;
	v->a[19043] = aux_sym__multiline_variable_name_token1;
	v->a[19044] = actions(425);
	v->a[19045] = 9;
	v->a[19046] = anon_sym_BANG;
	v->a[19047] = anon_sym_DASH;
	v->a[19048] = anon_sym_STAR;
	v->a[19049] = anon_sym_QMARK;
	v->a[19050] = anon_sym_DOLLAR;
	v->a[19051] = anon_sym_POUND;
	v->a[19052] = anon_sym_AT;
	v->a[19053] = anon_sym_0;
	v->a[19054] = anon_sym__;
	v->a[19055] = actions(363);
	v->a[19056] = 24;
	v->a[19057] = anon_sym_PIPE;
	v->a[19058] = anon_sym_SEMI_SEMI;
	v->a[19059] = anon_sym_AMP_AMP;
	small_parse_table_953(v);
}

void	small_parse_table_953(t_small_parse_table_array *v)
{
	v->a[19060] = anon_sym_PIPE_PIPE;
	v->a[19061] = anon_sym_LT;
	v->a[19062] = anon_sym_GT;
	v->a[19063] = anon_sym_GT_GT;
	v->a[19064] = anon_sym_LT_AMP;
	v->a[19065] = anon_sym_GT_AMP;
	v->a[19066] = anon_sym_GT_PIPE;
	v->a[19067] = anon_sym_LT_GT;
	v->a[19068] = anon_sym_LT_LT;
	v->a[19069] = anon_sym_LT_LT_DASH;
	v->a[19070] = aux_sym_heredoc_redirect_token1;
	v->a[19071] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19072] = anon_sym_AMP;
	v->a[19073] = anon_sym_DQUOTE;
	v->a[19074] = sym_raw_string;
	v->a[19075] = sym_number;
	v->a[19076] = anon_sym_DOLLAR_LBRACE;
	v->a[19077] = anon_sym_DOLLAR_LPAREN;
	v->a[19078] = anon_sym_BQUOTE;
	v->a[19079] = sym_word;
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
	v->a[19088] = actions(453);
	v->a[19089] = 1;
	v->a[19090] = sym_file_descriptor;
	v->a[19091] = actions(463);
	v->a[19092] = 1;
	v->a[19093] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19094] = actions(465);
	v->a[19095] = 1;
	v->a[19096] = anon_sym_DOLLAR;
	v->a[19097] = actions(467);
	v->a[19098] = 1;
	v->a[19099] = anon_sym_DQUOTE;
	small_parse_table_955(v);
}

/* EOF small_parse_table_190.c */
