/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_160.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_800(t_small_parse_table_array *v)
{
	v->a[16000] = anon_sym_SEMI;
	v->a[16001] = 5;
	v->a[16002] = actions(3);
	v->a[16003] = 1;
	v->a[16004] = sym_comment;
	v->a[16005] = actions(393);
	v->a[16006] = 1;
	v->a[16007] = sym_variable_name;
	v->a[16008] = actions(391);
	v->a[16009] = 2;
	v->a[16010] = aux_sym__simple_variable_name_token1;
	v->a[16011] = aux_sym__multiline_variable_name_token1;
	v->a[16012] = actions(389);
	v->a[16013] = 8;
	v->a[16014] = anon_sym_BANG;
	v->a[16015] = anon_sym_DASH;
	v->a[16016] = anon_sym_STAR;
	v->a[16017] = anon_sym_QMARK;
	v->a[16018] = anon_sym_DOLLAR;
	v->a[16019] = anon_sym_POUND;
	small_parse_table_801(v);
}

void	small_parse_table_801(t_small_parse_table_array *v)
{
	v->a[16020] = anon_sym_AT;
	v->a[16021] = anon_sym_0;
	v->a[16022] = actions(343);
	v->a[16023] = 18;
	v->a[16024] = anon_sym_PIPE;
	v->a[16025] = anon_sym_SEMI_SEMI;
	v->a[16026] = anon_sym_AMP_AMP;
	v->a[16027] = anon_sym_PIPE_PIPE;
	v->a[16028] = anon_sym_LT;
	v->a[16029] = anon_sym_GT;
	v->a[16030] = anon_sym_GT_GT;
	v->a[16031] = anon_sym_LT_LT;
	v->a[16032] = aux_sym_heredoc_redirect_token1;
	v->a[16033] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16034] = anon_sym_DQUOTE;
	v->a[16035] = sym_raw_string;
	v->a[16036] = sym_number;
	v->a[16037] = anon_sym_DOLLAR_LBRACE;
	v->a[16038] = anon_sym_DOLLAR_LPAREN;
	v->a[16039] = anon_sym_BQUOTE;
	small_parse_table_802(v);
}

void	small_parse_table_802(t_small_parse_table_array *v)
{
	v->a[16040] = sym_word;
	v->a[16041] = anon_sym_SEMI;
	v->a[16042] = 13;
	v->a[16043] = actions(3);
	v->a[16044] = 1;
	v->a[16045] = sym_comment;
	v->a[16046] = actions(99);
	v->a[16047] = 1;
	v->a[16048] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16049] = actions(101);
	v->a[16050] = 1;
	v->a[16051] = anon_sym_DOLLAR;
	v->a[16052] = actions(103);
	v->a[16053] = 1;
	v->a[16054] = anon_sym_DQUOTE;
	v->a[16055] = actions(107);
	v->a[16056] = 1;
	v->a[16057] = anon_sym_DOLLAR_LBRACE;
	v->a[16058] = actions(109);
	v->a[16059] = 1;
	small_parse_table_803(v);
}

void	small_parse_table_803(t_small_parse_table_array *v)
{
	v->a[16060] = anon_sym_DOLLAR_LPAREN;
	v->a[16061] = actions(111);
	v->a[16062] = 1;
	v->a[16063] = anon_sym_BQUOTE;
	v->a[16064] = actions(405);
	v->a[16065] = 1;
	v->a[16066] = sym__bare_dollar;
	v->a[16067] = state(174);
	v->a[16068] = 1;
	v->a[16069] = aux_sym_command_repeat2;
	v->a[16070] = state(523);
	v->a[16071] = 1;
	v->a[16072] = sym_concatenation;
	v->a[16073] = actions(401);
	v->a[16074] = 3;
	v->a[16075] = sym_raw_string;
	v->a[16076] = sym_number;
	v->a[16077] = sym_word;
	v->a[16078] = state(261);
	v->a[16079] = 5;
	small_parse_table_804(v);
}

void	small_parse_table_804(t_small_parse_table_array *v)
{
	v->a[16080] = sym_arithmetic_expansion;
	v->a[16081] = sym_string;
	v->a[16082] = sym_simple_expansion;
	v->a[16083] = sym_expansion;
	v->a[16084] = sym_command_substitution;
	v->a[16085] = actions(403);
	v->a[16086] = 11;
	v->a[16087] = anon_sym_esac;
	v->a[16088] = anon_sym_PIPE;
	v->a[16089] = anon_sym_SEMI_SEMI;
	v->a[16090] = anon_sym_AMP_AMP;
	v->a[16091] = anon_sym_PIPE_PIPE;
	v->a[16092] = anon_sym_LT;
	v->a[16093] = anon_sym_GT;
	v->a[16094] = anon_sym_GT_GT;
	v->a[16095] = anon_sym_LT_LT;
	v->a[16096] = aux_sym_heredoc_redirect_token1;
	v->a[16097] = anon_sym_SEMI;
	v->a[16098] = 6;
	v->a[16099] = actions(3);
	small_parse_table_805(v);
}

/* EOF small_parse_table_160.c */
