/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_130.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_650(t_small_parse_table_array *v)
{
	v->a[13000] = anon_sym_DOLLAR_BQUOTE;
	v->a[13001] = actions(2174);
	v->a[13002] = 1;
	v->a[13003] = sym__brace_start;
	v->a[13004] = actions(2386);
	v->a[13005] = 1;
	v->a[13006] = sym__special_character;
	v->a[13007] = actions(2388);
	v->a[13008] = 1;
	v->a[13009] = sym_test_operator;
	v->a[13010] = state(1270);
	v->a[13011] = 1;
	v->a[13012] = aux_sym__literal_repeat1;
	v->a[13013] = actions(1182);
	v->a[13014] = 2;
	v->a[13015] = sym_file_descriptor;
	v->a[13016] = aux_sym_heredoc_redirect_token1;
	v->a[13017] = actions(2384);
	v->a[13018] = 2;
	v->a[13019] = sym_raw_string;
	small_parse_table_651(v);
}

void	small_parse_table_651(t_small_parse_table_array *v)
{
	v->a[13020] = sym_word;
	v->a[13021] = state(428);
	v->a[13022] = 2;
	v->a[13023] = sym_concatenation;
	v->a[13024] = aux_sym_for_statement_repeat1;
	v->a[13025] = state(1222);
	v->a[13026] = 7;
	v->a[13027] = sym_arithmetic_expansion;
	v->a[13028] = sym_brace_expression;
	v->a[13029] = sym_string;
	v->a[13030] = sym_number;
	v->a[13031] = sym_simple_expansion;
	v->a[13032] = sym_expansion;
	v->a[13033] = sym_command_substitution;
	v->a[13034] = actions(1180);
	v->a[13035] = 19;
	v->a[13036] = anon_sym_PIPE;
	v->a[13037] = anon_sym_SEMI_SEMI;
	v->a[13038] = anon_sym_PIPE_AMP;
	v->a[13039] = anon_sym_AMP_AMP;
	small_parse_table_652(v);
}

void	small_parse_table_652(t_small_parse_table_array *v)
{
	v->a[13040] = anon_sym_PIPE_PIPE;
	v->a[13041] = anon_sym_LT;
	v->a[13042] = anon_sym_GT;
	v->a[13043] = anon_sym_GT_GT;
	v->a[13044] = anon_sym_AMP_GT;
	v->a[13045] = anon_sym_AMP_GT_GT;
	v->a[13046] = anon_sym_LT_AMP;
	v->a[13047] = anon_sym_GT_AMP;
	v->a[13048] = anon_sym_GT_PIPE;
	v->a[13049] = anon_sym_LT_AMP_DASH;
	v->a[13050] = anon_sym_GT_AMP_DASH;
	v->a[13051] = anon_sym_LT_LT;
	v->a[13052] = anon_sym_LT_LT_DASH;
	v->a[13053] = anon_sym_AMP;
	v->a[13054] = anon_sym_SEMI;
	v->a[13055] = 19;
	v->a[13056] = actions(3);
	v->a[13057] = 1;
	v->a[13058] = sym_comment;
	v->a[13059] = actions(2205);
	small_parse_table_653(v);
}

void	small_parse_table_653(t_small_parse_table_array *v)
{
	v->a[13060] = 1;
	v->a[13061] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13062] = actions(2208);
	v->a[13063] = 1;
	v->a[13064] = anon_sym_DOLLAR;
	v->a[13065] = actions(2214);
	v->a[13066] = 1;
	v->a[13067] = anon_sym_DQUOTE;
	v->a[13068] = actions(2217);
	v->a[13069] = 1;
	v->a[13070] = aux_sym_number_token1;
	v->a[13071] = actions(2220);
	v->a[13072] = 1;
	v->a[13073] = aux_sym_number_token2;
	v->a[13074] = actions(2223);
	v->a[13075] = 1;
	v->a[13076] = anon_sym_DOLLAR_LBRACE;
	v->a[13077] = actions(2226);
	v->a[13078] = 1;
	v->a[13079] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_654(v);
}

void	small_parse_table_654(t_small_parse_table_array *v)
{
	v->a[13080] = actions(2229);
	v->a[13081] = 1;
	v->a[13082] = anon_sym_BQUOTE;
	v->a[13083] = actions(2232);
	v->a[13084] = 1;
	v->a[13085] = anon_sym_DOLLAR_BQUOTE;
	v->a[13086] = actions(2238);
	v->a[13087] = 1;
	v->a[13088] = sym__brace_start;
	v->a[13089] = actions(2393);
	v->a[13090] = 1;
	v->a[13091] = sym__special_character;
	v->a[13092] = actions(2396);
	v->a[13093] = 1;
	v->a[13094] = sym_test_operator;
	v->a[13095] = state(1270);
	v->a[13096] = 1;
	v->a[13097] = aux_sym__literal_repeat1;
	v->a[13098] = actions(1287);
	v->a[13099] = 2;
	small_parse_table_655(v);
}

/* EOF small_parse_table_130.c */
