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
	v->a[19000] = ts_builtin_sym_end;
	v->a[19001] = actions(483);
	v->a[19002] = 2;
	v->a[19003] = aux_sym__simple_variable_name_token1;
	v->a[19004] = aux_sym__multiline_variable_name_token1;
	v->a[19005] = actions(481);
	v->a[19006] = 8;
	v->a[19007] = anon_sym_BANG;
	v->a[19008] = anon_sym_DASH;
	v->a[19009] = anon_sym_STAR;
	v->a[19010] = anon_sym_QMARK;
	v->a[19011] = anon_sym_DOLLAR;
	v->a[19012] = anon_sym_POUND;
	v->a[19013] = anon_sym_AT;
	v->a[19014] = anon_sym_0;
	v->a[19015] = actions(361);
	v->a[19016] = 23;
	v->a[19017] = anon_sym_PIPE;
	v->a[19018] = anon_sym_SEMI_SEMI;
	v->a[19019] = anon_sym_AMP_AMP;
	small_parse_table_951(v);
}

void	small_parse_table_951(t_small_parse_table_array *v)
{
	v->a[19020] = anon_sym_PIPE_PIPE;
	v->a[19021] = anon_sym_LT;
	v->a[19022] = anon_sym_GT;
	v->a[19023] = anon_sym_GT_GT;
	v->a[19024] = anon_sym_LT_AMP;
	v->a[19025] = anon_sym_GT_AMP;
	v->a[19026] = anon_sym_GT_PIPE;
	v->a[19027] = anon_sym_LT_GT;
	v->a[19028] = anon_sym_LT_LT;
	v->a[19029] = anon_sym_LT_LT_DASH;
	v->a[19030] = aux_sym_heredoc_redirect_token1;
	v->a[19031] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19032] = anon_sym_DQUOTE;
	v->a[19033] = sym_raw_string;
	v->a[19034] = sym_number;
	v->a[19035] = anon_sym_DOLLAR_LBRACE;
	v->a[19036] = anon_sym_DOLLAR_LPAREN;
	v->a[19037] = anon_sym_BQUOTE;
	v->a[19038] = sym_word;
	v->a[19039] = anon_sym_SEMI;
	small_parse_table_952(v);
}

void	small_parse_table_952(t_small_parse_table_array *v)
{
	v->a[19040] = 16;
	v->a[19041] = actions(3);
	v->a[19042] = 1;
	v->a[19043] = sym_comment;
	v->a[19044] = actions(97);
	v->a[19045] = 1;
	v->a[19046] = anon_sym_LPAREN;
	v->a[19047] = actions(429);
	v->a[19048] = 1;
	v->a[19049] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19050] = actions(431);
	v->a[19051] = 1;
	v->a[19052] = anon_sym_DOLLAR;
	v->a[19053] = actions(433);
	v->a[19054] = 1;
	v->a[19055] = anon_sym_DQUOTE;
	v->a[19056] = actions(435);
	v->a[19057] = 1;
	v->a[19058] = anon_sym_DOLLAR_LBRACE;
	v->a[19059] = actions(437);
	small_parse_table_953(v);
}

void	small_parse_table_953(t_small_parse_table_array *v)
{
	v->a[19060] = 1;
	v->a[19061] = anon_sym_DOLLAR_LPAREN;
	v->a[19062] = actions(439);
	v->a[19063] = 1;
	v->a[19064] = anon_sym_BQUOTE;
	v->a[19065] = actions(441);
	v->a[19066] = 1;
	v->a[19067] = sym__bare_dollar;
	v->a[19068] = actions(473);
	v->a[19069] = 1;
	v->a[19070] = sym_file_descriptor;
	v->a[19071] = state(185);
	v->a[19072] = 1;
	v->a[19073] = aux_sym_command_repeat2;
	v->a[19074] = state(732);
	v->a[19075] = 1;
	v->a[19076] = sym_concatenation;
	v->a[19077] = state(1348);
	v->a[19078] = 1;
	v->a[19079] = sym_subshell;
	small_parse_table_954(v);
}

void	small_parse_table_954(t_small_parse_table_array *v)
{
	v->a[19080] = actions(427);
	v->a[19081] = 3;
	v->a[19082] = sym_raw_string;
	v->a[19083] = sym_number;
	v->a[19084] = sym_word;
	v->a[19085] = state(401);
	v->a[19086] = 5;
	v->a[19087] = sym_arithmetic_expansion;
	v->a[19088] = sym_string;
	v->a[19089] = sym_simple_expansion;
	v->a[19090] = sym_expansion;
	v->a[19091] = sym_command_substitution;
	v->a[19092] = actions(471);
	v->a[19093] = 16;
	v->a[19094] = anon_sym_esac;
	v->a[19095] = anon_sym_PIPE;
	v->a[19096] = anon_sym_SEMI_SEMI;
	v->a[19097] = anon_sym_AMP_AMP;
	v->a[19098] = anon_sym_PIPE_PIPE;
	v->a[19099] = anon_sym_LT;
	small_parse_table_955(v);
}

/* EOF small_parse_table_190.c */
