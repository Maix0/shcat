/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_750.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3750(t_small_parse_table_array *v)
{
	v->a[75000] = sym__empty_value;
	v->a[75001] = state(1049);
	v->a[75002] = 1;
	v->a[75003] = sym_concatenation;
	v->a[75004] = actions(2949);
	v->a[75005] = 2;
	v->a[75006] = sym_raw_string;
	v->a[75007] = sym_word;
	v->a[75008] = state(1042);
	v->a[75009] = 6;
	v->a[75010] = sym_arithmetic_expansion;
	v->a[75011] = sym_string;
	v->a[75012] = sym_number;
	v->a[75013] = sym_simple_expansion;
	v->a[75014] = sym_expansion;
	v->a[75015] = sym_command_substitution;
	v->a[75016] = 3;
	v->a[75017] = actions(1404);
	v->a[75018] = 1;
	v->a[75019] = sym_comment;
	small_parse_table_3751(v);
}

void	small_parse_table_3751(t_small_parse_table_array *v)
{
	v->a[75020] = actions(1309);
	v->a[75021] = 7;
	v->a[75022] = anon_sym_PIPE;
	v->a[75023] = anon_sym_LT;
	v->a[75024] = anon_sym_GT;
	v->a[75025] = anon_sym_AMP_GT;
	v->a[75026] = anon_sym_LT_AMP;
	v->a[75027] = anon_sym_GT_AMP;
	v->a[75028] = anon_sym_LT_LT;
	v->a[75029] = actions(1311);
	v->a[75030] = 12;
	v->a[75031] = sym_file_descriptor;
	v->a[75032] = sym__concat;
	v->a[75033] = sym_variable_name;
	v->a[75034] = anon_sym_AMP_AMP;
	v->a[75035] = anon_sym_PIPE_PIPE;
	v->a[75036] = anon_sym_GT_GT;
	v->a[75037] = anon_sym_AMP_GT_GT;
	v->a[75038] = anon_sym_GT_PIPE;
	v->a[75039] = anon_sym_LT_AMP_DASH;
	small_parse_table_3752(v);
}

void	small_parse_table_3752(t_small_parse_table_array *v)
{
	v->a[75040] = anon_sym_GT_AMP_DASH;
	v->a[75041] = anon_sym_LT_LT_DASH;
	v->a[75042] = aux_sym_concatenation_token1;
	v->a[75043] = 3;
	v->a[75044] = actions(1404);
	v->a[75045] = 1;
	v->a[75046] = sym_comment;
	v->a[75047] = actions(1299);
	v->a[75048] = 7;
	v->a[75049] = anon_sym_PIPE;
	v->a[75050] = anon_sym_LT;
	v->a[75051] = anon_sym_GT;
	v->a[75052] = anon_sym_AMP_GT;
	v->a[75053] = anon_sym_LT_AMP;
	v->a[75054] = anon_sym_GT_AMP;
	v->a[75055] = anon_sym_LT_LT;
	v->a[75056] = actions(1301);
	v->a[75057] = 12;
	v->a[75058] = sym_file_descriptor;
	v->a[75059] = sym__concat;
	small_parse_table_3753(v);
}

void	small_parse_table_3753(t_small_parse_table_array *v)
{
	v->a[75060] = sym_variable_name;
	v->a[75061] = anon_sym_AMP_AMP;
	v->a[75062] = anon_sym_PIPE_PIPE;
	v->a[75063] = anon_sym_GT_GT;
	v->a[75064] = anon_sym_AMP_GT_GT;
	v->a[75065] = anon_sym_GT_PIPE;
	v->a[75066] = anon_sym_LT_AMP_DASH;
	v->a[75067] = anon_sym_GT_AMP_DASH;
	v->a[75068] = anon_sym_LT_LT_DASH;
	v->a[75069] = aux_sym_concatenation_token1;
	v->a[75070] = 14;
	v->a[75071] = actions(3);
	v->a[75072] = 1;
	v->a[75073] = sym_comment;
	v->a[75074] = actions(2953);
	v->a[75075] = 1;
	v->a[75076] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75077] = actions(2955);
	v->a[75078] = 1;
	v->a[75079] = anon_sym_DOLLAR;
	small_parse_table_3754(v);
}

void	small_parse_table_3754(t_small_parse_table_array *v)
{
	v->a[75080] = actions(2957);
	v->a[75081] = 1;
	v->a[75082] = anon_sym_DQUOTE;
	v->a[75083] = actions(2959);
	v->a[75084] = 1;
	v->a[75085] = aux_sym_number_token1;
	v->a[75086] = actions(2961);
	v->a[75087] = 1;
	v->a[75088] = aux_sym_number_token2;
	v->a[75089] = actions(2963);
	v->a[75090] = 1;
	v->a[75091] = anon_sym_DOLLAR_LBRACE;
	v->a[75092] = actions(2965);
	v->a[75093] = 1;
	v->a[75094] = anon_sym_DOLLAR_LPAREN;
	v->a[75095] = actions(2967);
	v->a[75096] = 1;
	v->a[75097] = anon_sym_BQUOTE;
	v->a[75098] = actions(2969);
	v->a[75099] = 1;
	small_parse_table_3755(v);
}

/* EOF small_parse_table_750.c */
