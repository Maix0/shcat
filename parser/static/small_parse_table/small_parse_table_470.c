/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_470.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2350(t_small_parse_table_array *v)
{
	v->a[47000] = sym_word;
	v->a[47001] = 7;
	v->a[47002] = actions(3);
	v->a[47003] = 1;
	v->a[47004] = sym_comment;
	v->a[47005] = actions(1654);
	v->a[47006] = 1;
	v->a[47007] = aux_sym_concatenation_token1;
	v->a[47008] = actions(1709);
	v->a[47009] = 1;
	v->a[47010] = sym__concat;
	v->a[47011] = actions(1713);
	v->a[47012] = 1;
	v->a[47013] = anon_sym_LPAREN;
	v->a[47014] = state(727);
	v->a[47015] = 1;
	v->a[47016] = aux_sym_concatenation_repeat1;
	v->a[47017] = actions(1055);
	v->a[47018] = 2;
	v->a[47019] = sym_file_descriptor;
	small_parse_table_2351(v);
}

void	small_parse_table_2351(t_small_parse_table_array *v)
{
	v->a[47020] = sym__bare_dollar;
	v->a[47021] = actions(1057);
	v->a[47022] = 21;
	v->a[47023] = anon_sym_PIPE;
	v->a[47024] = anon_sym_AMP_AMP;
	v->a[47025] = anon_sym_PIPE_PIPE;
	v->a[47026] = anon_sym_LT;
	v->a[47027] = anon_sym_GT;
	v->a[47028] = anon_sym_GT_GT;
	v->a[47029] = anon_sym_LT_AMP;
	v->a[47030] = anon_sym_GT_AMP;
	v->a[47031] = anon_sym_GT_PIPE;
	v->a[47032] = anon_sym_LT_GT;
	v->a[47033] = anon_sym_LT_LT;
	v->a[47034] = anon_sym_LT_LT_DASH;
	v->a[47035] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47036] = anon_sym_DOLLAR;
	v->a[47037] = anon_sym_DQUOTE;
	v->a[47038] = sym_raw_string;
	v->a[47039] = sym_number;
	small_parse_table_2352(v);
}

void	small_parse_table_2352(t_small_parse_table_array *v)
{
	v->a[47040] = anon_sym_DOLLAR_LBRACE;
	v->a[47041] = anon_sym_DOLLAR_LPAREN;
	v->a[47042] = anon_sym_BQUOTE;
	v->a[47043] = sym_word;
	v->a[47044] = 6;
	v->a[47045] = actions(3);
	v->a[47046] = 1;
	v->a[47047] = sym_comment;
	v->a[47048] = actions(1432);
	v->a[47049] = 1;
	v->a[47050] = sym_file_descriptor;
	v->a[47051] = actions(1435);
	v->a[47052] = 1;
	v->a[47053] = sym_variable_name;
	v->a[47054] = actions(1422);
	v->a[47055] = 8;
	v->a[47056] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47057] = anon_sym_DOLLAR;
	v->a[47058] = anon_sym_DQUOTE;
	v->a[47059] = sym_raw_string;
	small_parse_table_2353(v);
}

void	small_parse_table_2353(t_small_parse_table_array *v)
{
	v->a[47060] = sym_number;
	v->a[47061] = anon_sym_DOLLAR_LBRACE;
	v->a[47062] = anon_sym_DOLLAR_LPAREN;
	v->a[47063] = sym_word;
	v->a[47064] = actions(1429);
	v->a[47065] = 8;
	v->a[47066] = anon_sym_LT;
	v->a[47067] = anon_sym_GT;
	v->a[47068] = anon_sym_GT_GT;
	v->a[47069] = anon_sym_LT_AMP;
	v->a[47070] = anon_sym_GT_AMP;
	v->a[47071] = anon_sym_GT_PIPE;
	v->a[47072] = anon_sym_LT_GT;
	v->a[47073] = anon_sym_BQUOTE;
	v->a[47074] = actions(1424);
	v->a[47075] = 9;
	v->a[47076] = anon_sym_PIPE;
	v->a[47077] = anon_sym_SEMI_SEMI;
	v->a[47078] = anon_sym_AMP_AMP;
	v->a[47079] = anon_sym_PIPE_PIPE;
	small_parse_table_2354(v);
}

void	small_parse_table_2354(t_small_parse_table_array *v)
{
	v->a[47080] = anon_sym_LT_LT;
	v->a[47081] = anon_sym_LT_LT_DASH;
	v->a[47082] = aux_sym_heredoc_redirect_token1;
	v->a[47083] = anon_sym_AMP;
	v->a[47084] = anon_sym_SEMI;
	v->a[47085] = 4;
	v->a[47086] = actions(3);
	v->a[47087] = 1;
	v->a[47088] = sym_comment;
	v->a[47089] = actions(1612);
	v->a[47090] = 1;
	v->a[47091] = ts_builtin_sym_end;
	v->a[47092] = actions(1441);
	v->a[47093] = 2;
	v->a[47094] = sym_file_descriptor;
	v->a[47095] = sym_variable_name;
	v->a[47096] = actions(1437);
	v->a[47097] = 24;
	v->a[47098] = anon_sym_for;
	v->a[47099] = anon_sym_while;
	small_parse_table_2355(v);
}

/* EOF small_parse_table_470.c */
