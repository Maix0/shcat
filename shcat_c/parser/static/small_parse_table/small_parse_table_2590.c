/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2590.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12950(t_small_parse_table_array *v)
{
	v->a[259000] = sym_number;
	v->a[259001] = sym_simple_expansion;
	v->a[259002] = sym_expansion;
	v->a[259003] = sym_command_substitution;
	v->a[259004] = 3;
	v->a[259005] = actions(3);
	v->a[259006] = 1;
	v->a[259007] = sym_comment;
	v->a[259008] = actions(1330);
	v->a[259009] = 3;
	v->a[259010] = sym_file_descriptor;
	v->a[259011] = sym__concat;
	v->a[259012] = aux_sym_heredoc_redirect_token1;
	v->a[259013] = actions(1328);
	v->a[259014] = 22;
	v->a[259015] = anon_sym_SEMI;
	v->a[259016] = anon_sym_PIPE_PIPE;
	v->a[259017] = anon_sym_AMP_AMP;
	v->a[259018] = anon_sym_PIPE;
	v->a[259019] = anon_sym_AMP;
	small_parse_table_12951(v);
}

void	small_parse_table_12951(t_small_parse_table_array *v)
{
	v->a[259020] = anon_sym_LT;
	v->a[259021] = anon_sym_GT;
	v->a[259022] = anon_sym_LT_LT;
	v->a[259023] = anon_sym_GT_GT;
	v->a[259024] = anon_sym_SEMI_SEMI;
	v->a[259025] = anon_sym_SEMI_AMP;
	v->a[259026] = anon_sym_SEMI_SEMI_AMP;
	v->a[259027] = anon_sym_PIPE_AMP;
	v->a[259028] = anon_sym_AMP_GT;
	v->a[259029] = anon_sym_AMP_GT_GT;
	v->a[259030] = anon_sym_LT_AMP;
	v->a[259031] = anon_sym_GT_AMP;
	v->a[259032] = anon_sym_GT_PIPE;
	v->a[259033] = anon_sym_LT_AMP_DASH;
	v->a[259034] = anon_sym_GT_AMP_DASH;
	v->a[259035] = anon_sym_LT_LT_DASH;
	v->a[259036] = aux_sym_concatenation_token1;
	v->a[259037] = 3;
	v->a[259038] = actions(3);
	v->a[259039] = 1;
	small_parse_table_12952(v);
}

void	small_parse_table_12952(t_small_parse_table_array *v)
{
	v->a[259040] = sym_comment;
	v->a[259041] = actions(11830);
	v->a[259042] = 3;
	v->a[259043] = sym_file_descriptor;
	v->a[259044] = ts_builtin_sym_end;
	v->a[259045] = aux_sym_heredoc_redirect_token1;
	v->a[259046] = actions(11828);
	v->a[259047] = 22;
	v->a[259048] = anon_sym_SEMI;
	v->a[259049] = anon_sym_PIPE_PIPE;
	v->a[259050] = anon_sym_AMP_AMP;
	v->a[259051] = anon_sym_PIPE;
	v->a[259052] = anon_sym_AMP;
	v->a[259053] = anon_sym_LT;
	v->a[259054] = anon_sym_GT;
	v->a[259055] = anon_sym_LT_LT;
	v->a[259056] = anon_sym_GT_GT;
	v->a[259057] = anon_sym_RPAREN;
	v->a[259058] = anon_sym_SEMI_SEMI;
	v->a[259059] = anon_sym_PIPE_AMP;
	small_parse_table_12953(v);
}

void	small_parse_table_12953(t_small_parse_table_array *v)
{
	v->a[259060] = anon_sym_AMP_GT;
	v->a[259061] = anon_sym_AMP_GT_GT;
	v->a[259062] = anon_sym_LT_AMP;
	v->a[259063] = anon_sym_GT_AMP;
	v->a[259064] = anon_sym_GT_PIPE;
	v->a[259065] = anon_sym_LT_AMP_DASH;
	v->a[259066] = anon_sym_GT_AMP_DASH;
	v->a[259067] = anon_sym_LT_LT_DASH;
	v->a[259068] = anon_sym_LT_LT_LT;
	v->a[259069] = anon_sym_BQUOTE;
	v->a[259070] = 16;
	v->a[259071] = actions(3);
	v->a[259072] = 1;
	v->a[259073] = sym_comment;
	v->a[259074] = actions(11760);
	v->a[259075] = 1;
	v->a[259076] = anon_sym_BANG2;
	v->a[259077] = actions(11764);
	v->a[259078] = 1;
	v->a[259079] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_12954(v);
}

void	small_parse_table_12954(t_small_parse_table_array *v)
{
	v->a[259080] = actions(11766);
	v->a[259081] = 1;
	v->a[259082] = anon_sym_BQUOTE;
	v->a[259083] = actions(11768);
	v->a[259084] = 1;
	v->a[259085] = anon_sym_DOLLAR_BQUOTE;
	v->a[259086] = actions(11770);
	v->a[259087] = 1;
	v->a[259088] = aux_sym__simple_variable_name_token1;
	v->a[259089] = actions(11772);
	v->a[259090] = 1;
	v->a[259091] = sym_variable_name;
	v->a[259092] = actions(11913);
	v->a[259093] = 1;
	v->a[259094] = anon_sym_RBRACE3;
	v->a[259095] = state(3532);
	v->a[259096] = 1;
	v->a[259097] = sym_subscript;
	v->a[259098] = state(6428);
	v->a[259099] = 1;
	small_parse_table_12955(v);
}

/* EOF small_parse_table_2590.c */
