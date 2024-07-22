/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_650.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3250(t_small_parse_table_array *v)
{
	v->a[65000] = sym_comment;
	v->a[65001] = actions(1364);
	v->a[65002] = 1;
	v->a[65003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65004] = actions(1366);
	v->a[65005] = 1;
	v->a[65006] = anon_sym_DOLLAR;
	v->a[65007] = actions(1368);
	v->a[65008] = 1;
	v->a[65009] = anon_sym_DQUOTE;
	v->a[65010] = actions(1370);
	v->a[65011] = 1;
	v->a[65012] = anon_sym_DOLLAR_LBRACE;
	v->a[65013] = actions(1372);
	v->a[65014] = 1;
	v->a[65015] = anon_sym_DOLLAR_LPAREN;
	v->a[65016] = actions(1374);
	v->a[65017] = 1;
	v->a[65018] = anon_sym_BQUOTE;
	v->a[65019] = actions(2391);
	small_parse_table_3251(v);
}

void	small_parse_table_3251(t_small_parse_table_array *v)
{
	v->a[65020] = 1;
	v->a[65021] = sym__bare_dollar;
	v->a[65022] = actions(2387);
	v->a[65023] = 5;
	v->a[65024] = aux_sym_concatenation_token1;
	v->a[65025] = sym_raw_string;
	v->a[65026] = sym_number;
	v->a[65027] = sym__comment_word;
	v->a[65028] = sym_word;
	v->a[65029] = state(900);
	v->a[65030] = 5;
	v->a[65031] = sym_arithmetic_expansion;
	v->a[65032] = sym_string;
	v->a[65033] = sym_simple_expansion;
	v->a[65034] = sym_expansion;
	v->a[65035] = sym_command_substitution;
	v->a[65036] = 10;
	v->a[65037] = actions(3);
	v->a[65038] = 1;
	v->a[65039] = sym_comment;
	small_parse_table_3252(v);
}

void	small_parse_table_3252(t_small_parse_table_array *v)
{
	v->a[65040] = actions(819);
	v->a[65041] = 1;
	v->a[65042] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65043] = actions(821);
	v->a[65044] = 1;
	v->a[65045] = anon_sym_DOLLAR;
	v->a[65046] = actions(823);
	v->a[65047] = 1;
	v->a[65048] = anon_sym_DQUOTE;
	v->a[65049] = actions(825);
	v->a[65050] = 1;
	v->a[65051] = anon_sym_DOLLAR_LBRACE;
	v->a[65052] = actions(827);
	v->a[65053] = 1;
	v->a[65054] = anon_sym_DOLLAR_LPAREN;
	v->a[65055] = actions(829);
	v->a[65056] = 1;
	v->a[65057] = anon_sym_BQUOTE;
	v->a[65058] = actions(2500);
	v->a[65059] = 1;
	small_parse_table_3253(v);
}

void	small_parse_table_3253(t_small_parse_table_array *v)
{
	v->a[65060] = sym__bare_dollar;
	v->a[65061] = actions(2498);
	v->a[65062] = 5;
	v->a[65063] = aux_sym_concatenation_token1;
	v->a[65064] = sym_raw_string;
	v->a[65065] = sym_number;
	v->a[65066] = sym__comment_word;
	v->a[65067] = sym_word;
	v->a[65068] = state(619);
	v->a[65069] = 5;
	v->a[65070] = sym_arithmetic_expansion;
	v->a[65071] = sym_string;
	v->a[65072] = sym_simple_expansion;
	v->a[65073] = sym_expansion;
	v->a[65074] = sym_command_substitution;
	v->a[65075] = 3;
	v->a[65076] = actions(3);
	v->a[65077] = 1;
	v->a[65078] = sym_comment;
	v->a[65079] = actions(2279);
	small_parse_table_3254(v);
}

void	small_parse_table_3254(t_small_parse_table_array *v)
{
	v->a[65080] = 2;
	v->a[65081] = sym_file_descriptor;
	v->a[65082] = aux_sym_heredoc_redirect_token1;
	v->a[65083] = actions(2281);
	v->a[65084] = 15;
	v->a[65085] = anon_sym_esac;
	v->a[65086] = anon_sym_PIPE;
	v->a[65087] = anon_sym_SEMI_SEMI;
	v->a[65088] = anon_sym_AMP_AMP;
	v->a[65089] = anon_sym_PIPE_PIPE;
	v->a[65090] = anon_sym_LT;
	v->a[65091] = anon_sym_GT;
	v->a[65092] = anon_sym_GT_GT;
	v->a[65093] = anon_sym_LT_AMP;
	v->a[65094] = anon_sym_GT_AMP;
	v->a[65095] = anon_sym_GT_PIPE;
	v->a[65096] = anon_sym_LT_GT;
	v->a[65097] = anon_sym_LT_LT;
	v->a[65098] = anon_sym_LT_LT_DASH;
	v->a[65099] = anon_sym_SEMI;
	small_parse_table_3255(v);
}

/* EOF small_parse_table_650.c */
