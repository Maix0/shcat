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
	v->a[65000] = state(1033);
	v->a[65001] = 1;
	v->a[65002] = aux_sym_concatenation_repeat1;
	v->a[65003] = actions(565);
	v->a[65004] = 2;
	v->a[65005] = sym_file_descriptor;
	v->a[65006] = aux_sym_heredoc_redirect_token1;
	v->a[65007] = actions(567);
	v->a[65008] = 19;
	v->a[65009] = anon_sym_esac;
	v->a[65010] = anon_sym_PIPE;
	v->a[65011] = anon_sym_SEMI_SEMI;
	v->a[65012] = anon_sym_AMP_AMP;
	v->a[65013] = anon_sym_PIPE_PIPE;
	v->a[65014] = anon_sym_LT;
	v->a[65015] = anon_sym_GT;
	v->a[65016] = anon_sym_GT_GT;
	v->a[65017] = anon_sym_AMP_GT;
	v->a[65018] = anon_sym_AMP_GT_GT;
	v->a[65019] = anon_sym_LT_AMP;
	small_parse_table_3251(v);
}

void	small_parse_table_3251(t_small_parse_table_array *v)
{
	v->a[65020] = anon_sym_GT_AMP;
	v->a[65021] = anon_sym_GT_PIPE;
	v->a[65022] = anon_sym_LT_AMP_DASH;
	v->a[65023] = anon_sym_GT_AMP_DASH;
	v->a[65024] = anon_sym_LT_LT;
	v->a[65025] = anon_sym_LT_LT_DASH;
	v->a[65026] = anon_sym_AMP;
	v->a[65027] = anon_sym_SEMI;
	v->a[65028] = 18;
	v->a[65029] = actions(3);
	v->a[65030] = 1;
	v->a[65031] = sym_comment;
	v->a[65032] = actions(2115);
	v->a[65033] = 1;
	v->a[65034] = anon_sym_LPAREN;
	v->a[65035] = actions(2119);
	v->a[65036] = 1;
	v->a[65037] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65038] = actions(2121);
	v->a[65039] = 1;
	small_parse_table_3252(v);
}

void	small_parse_table_3252(t_small_parse_table_array *v)
{
	v->a[65040] = anon_sym_DOLLAR;
	v->a[65041] = actions(2123);
	v->a[65042] = 1;
	v->a[65043] = anon_sym_DQUOTE;
	v->a[65044] = actions(2125);
	v->a[65045] = 1;
	v->a[65046] = aux_sym_number_token1;
	v->a[65047] = actions(2127);
	v->a[65048] = 1;
	v->a[65049] = aux_sym_number_token2;
	v->a[65050] = actions(2129);
	v->a[65051] = 1;
	v->a[65052] = anon_sym_DOLLAR_LBRACE;
	v->a[65053] = actions(2131);
	v->a[65054] = 1;
	v->a[65055] = anon_sym_DOLLAR_LPAREN;
	v->a[65056] = actions(2133);
	v->a[65057] = 1;
	v->a[65058] = anon_sym_BQUOTE;
	v->a[65059] = actions(2135);
	small_parse_table_3253(v);
}

void	small_parse_table_3253(t_small_parse_table_array *v)
{
	v->a[65060] = 1;
	v->a[65061] = sym_extglob_pattern;
	v->a[65062] = actions(2356);
	v->a[65063] = 1;
	v->a[65064] = anon_sym_esac;
	v->a[65065] = state(1131);
	v->a[65066] = 1;
	v->a[65067] = aux_sym_case_statement_repeat1;
	v->a[65068] = state(1786);
	v->a[65069] = 1;
	v->a[65070] = sym_case_item;
	v->a[65071] = state(2218);
	v->a[65072] = 1;
	v->a[65073] = sym__case_item_last;
	v->a[65074] = actions(2111);
	v->a[65075] = 2;
	v->a[65076] = sym_raw_string;
	v->a[65077] = sym_word;
	v->a[65078] = state(2016);
	v->a[65079] = 2;
	small_parse_table_3254(v);
}

void	small_parse_table_3254(t_small_parse_table_array *v)
{
	v->a[65080] = sym_concatenation;
	v->a[65081] = sym__extglob_blob;
	v->a[65082] = state(1896);
	v->a[65083] = 6;
	v->a[65084] = sym_arithmetic_expansion;
	v->a[65085] = sym_string;
	v->a[65086] = sym_number;
	v->a[65087] = sym_simple_expansion;
	v->a[65088] = sym_expansion;
	v->a[65089] = sym_command_substitution;
	v->a[65090] = 3;
	v->a[65091] = actions(3);
	v->a[65092] = 1;
	v->a[65093] = sym_comment;
	v->a[65094] = actions(1243);
	v->a[65095] = 3;
	v->a[65096] = sym_file_descriptor;
	v->a[65097] = sym__concat;
	v->a[65098] = sym_variable_name;
	v->a[65099] = actions(1245);
	small_parse_table_3255(v);
}

/* EOF small_parse_table_650.c */
