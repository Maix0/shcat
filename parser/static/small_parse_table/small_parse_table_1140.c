/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1140.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5700(t_small_parse_table_array *v)
{
	v->a[114000] = sym_test_operator;
	v->a[114001] = sym__bare_dollar;
	v->a[114002] = sym_raw_string;
	v->a[114003] = state(917);
	v->a[114004] = 7;
	v->a[114005] = sym_arithmetic_expansion;
	v->a[114006] = sym_brace_expression;
	v->a[114007] = sym_string;
	v->a[114008] = sym_number;
	v->a[114009] = sym_simple_expansion;
	v->a[114010] = sym_expansion;
	v->a[114011] = sym_command_substitution;
	v->a[114012] = 16;
	v->a[114013] = actions(3);
	v->a[114014] = 1;
	v->a[114015] = sym_comment;
	v->a[114016] = actions(3078);
	v->a[114017] = 1;
	v->a[114018] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114019] = actions(3080);
	small_parse_table_5701(v);
}

void	small_parse_table_5701(t_small_parse_table_array *v)
{
	v->a[114020] = 1;
	v->a[114021] = anon_sym_DOLLAR;
	v->a[114022] = actions(3084);
	v->a[114023] = 1;
	v->a[114024] = anon_sym_DQUOTE;
	v->a[114025] = actions(3088);
	v->a[114026] = 1;
	v->a[114027] = aux_sym_number_token1;
	v->a[114028] = actions(3090);
	v->a[114029] = 1;
	v->a[114030] = aux_sym_number_token2;
	v->a[114031] = actions(3092);
	v->a[114032] = 1;
	v->a[114033] = anon_sym_DOLLAR_LBRACE;
	v->a[114034] = actions(3094);
	v->a[114035] = 1;
	v->a[114036] = anon_sym_DOLLAR_LPAREN;
	v->a[114037] = actions(3096);
	v->a[114038] = 1;
	v->a[114039] = anon_sym_BQUOTE;
	small_parse_table_5702(v);
}

void	small_parse_table_5702(t_small_parse_table_array *v)
{
	v->a[114040] = actions(3098);
	v->a[114041] = 1;
	v->a[114042] = anon_sym_DOLLAR_BQUOTE;
	v->a[114043] = actions(3102);
	v->a[114044] = 1;
	v->a[114045] = sym__brace_start;
	v->a[114046] = actions(6597);
	v->a[114047] = 1;
	v->a[114048] = sym_word;
	v->a[114049] = actions(6599);
	v->a[114050] = 1;
	v->a[114051] = sym__special_character;
	v->a[114052] = actions(6603);
	v->a[114053] = 1;
	v->a[114054] = sym__comment_word;
	v->a[114055] = actions(6601);
	v->a[114056] = 3;
	v->a[114057] = sym_test_operator;
	v->a[114058] = sym__bare_dollar;
	v->a[114059] = sym_raw_string;
	small_parse_table_5703(v);
}

void	small_parse_table_5703(t_small_parse_table_array *v)
{
	v->a[114060] = state(1527);
	v->a[114061] = 7;
	v->a[114062] = sym_arithmetic_expansion;
	v->a[114063] = sym_brace_expression;
	v->a[114064] = sym_string;
	v->a[114065] = sym_number;
	v->a[114066] = sym_simple_expansion;
	v->a[114067] = sym_expansion;
	v->a[114068] = sym_command_substitution;
	v->a[114069] = 16;
	v->a[114070] = actions(3);
	v->a[114071] = 1;
	v->a[114072] = sym_comment;
	v->a[114073] = actions(35);
	v->a[114074] = 1;
	v->a[114075] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114076] = actions(41);
	v->a[114077] = 1;
	v->a[114078] = anon_sym_DQUOTE;
	v->a[114079] = actions(45);
	small_parse_table_5704(v);
}

void	small_parse_table_5704(t_small_parse_table_array *v)
{
	v->a[114080] = 1;
	v->a[114081] = aux_sym_number_token1;
	v->a[114082] = actions(47);
	v->a[114083] = 1;
	v->a[114084] = aux_sym_number_token2;
	v->a[114085] = actions(49);
	v->a[114086] = 1;
	v->a[114087] = anon_sym_DOLLAR_LBRACE;
	v->a[114088] = actions(51);
	v->a[114089] = 1;
	v->a[114090] = anon_sym_DOLLAR_LPAREN;
	v->a[114091] = actions(53);
	v->a[114092] = 1;
	v->a[114093] = anon_sym_BQUOTE;
	v->a[114094] = actions(55);
	v->a[114095] = 1;
	v->a[114096] = anon_sym_DOLLAR_BQUOTE;
	v->a[114097] = actions(63);
	v->a[114098] = 1;
	v->a[114099] = sym__brace_start;
	small_parse_table_5705(v);
}

/* EOF small_parse_table_1140.c */
