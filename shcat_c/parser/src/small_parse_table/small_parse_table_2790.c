/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2790.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13950(t_small_parse_table_array *v)
{
	v->a[279000] = sym__c_unary_expression;
	v->a[279001] = actions(11806);
	v->a[279002] = 2;
	v->a[279003] = anon_sym_PLUS_PLUS;
	v->a[279004] = anon_sym_DASH_DASH;
	v->a[279005] = state(3207);
	v->a[279006] = 7;
	v->a[279007] = sym__c_expression_not_assignment;
	v->a[279008] = sym__c_parenthesized_expression;
	v->a[279009] = sym_string;
	v->a[279010] = sym_number;
	v->a[279011] = sym_simple_expansion;
	v->a[279012] = sym_expansion;
	v->a[279013] = sym_command_substitution;
	v->a[279014] = 5;
	v->a[279015] = actions(71);
	v->a[279016] = 1;
	v->a[279017] = sym_comment;
	v->a[279018] = state(5297);
	v->a[279019] = 1;
	small_parse_table_13951(v);
}

void	small_parse_table_13951(t_small_parse_table_array *v)
{
	v->a[279020] = aux_sym_concatenation_repeat1;
	v->a[279021] = actions(12582);
	v->a[279022] = 2;
	v->a[279023] = sym__concat;
	v->a[279024] = aux_sym_concatenation_token1;
	v->a[279025] = actions(1261);
	v->a[279026] = 7;
	v->a[279027] = anon_sym_PIPE;
	v->a[279028] = anon_sym_LT;
	v->a[279029] = anon_sym_GT;
	v->a[279030] = anon_sym_LT_LT;
	v->a[279031] = anon_sym_AMP_GT;
	v->a[279032] = anon_sym_LT_AMP;
	v->a[279033] = anon_sym_GT_AMP;
	v->a[279034] = actions(1263);
	v->a[279035] = 12;
	v->a[279036] = sym_file_descriptor;
	v->a[279037] = sym_variable_name;
	v->a[279038] = anon_sym_PIPE_PIPE;
	v->a[279039] = anon_sym_AMP_AMP;
	small_parse_table_13952(v);
}

void	small_parse_table_13952(t_small_parse_table_array *v)
{
	v->a[279040] = anon_sym_GT_GT;
	v->a[279041] = anon_sym_PIPE_AMP;
	v->a[279042] = anon_sym_AMP_GT_GT;
	v->a[279043] = anon_sym_GT_PIPE;
	v->a[279044] = anon_sym_LT_AMP_DASH;
	v->a[279045] = anon_sym_GT_AMP_DASH;
	v->a[279046] = anon_sym_LT_LT_DASH;
	v->a[279047] = sym__special_character;
	v->a[279048] = 16;
	v->a[279049] = actions(71);
	v->a[279050] = 1;
	v->a[279051] = sym_comment;
	v->a[279052] = actions(11808);
	v->a[279053] = 1;
	v->a[279054] = anon_sym_LPAREN;
	v->a[279055] = actions(11812);
	v->a[279056] = 1;
	v->a[279057] = anon_sym_DOLLAR;
	v->a[279058] = actions(11814);
	v->a[279059] = 1;
	small_parse_table_13953(v);
}

void	small_parse_table_13953(t_small_parse_table_array *v)
{
	v->a[279060] = anon_sym_DQUOTE;
	v->a[279061] = actions(11816);
	v->a[279062] = 1;
	v->a[279063] = aux_sym_number_token1;
	v->a[279064] = actions(11818);
	v->a[279065] = 1;
	v->a[279066] = aux_sym_number_token2;
	v->a[279067] = actions(11820);
	v->a[279068] = 1;
	v->a[279069] = anon_sym_DOLLAR_LBRACE;
	v->a[279070] = actions(11822);
	v->a[279071] = 1;
	v->a[279072] = anon_sym_DOLLAR_LPAREN;
	v->a[279073] = actions(11824);
	v->a[279074] = 1;
	v->a[279075] = anon_sym_BQUOTE;
	v->a[279076] = actions(11826);
	v->a[279077] = 1;
	v->a[279078] = anon_sym_DOLLAR_BQUOTE;
	v->a[279079] = actions(12584);
	small_parse_table_13954(v);
}

void	small_parse_table_13954(t_small_parse_table_array *v)
{
	v->a[279080] = 1;
	v->a[279081] = aux_sym__c_word_token1;
	v->a[279082] = state(3285);
	v->a[279083] = 1;
	v->a[279084] = sym__c_postfix_expression;
	v->a[279085] = state(3286);
	v->a[279086] = 1;
	v->a[279087] = sym__c_binary_expression;
	v->a[279088] = state(3290);
	v->a[279089] = 1;
	v->a[279090] = sym__c_unary_expression;
	v->a[279091] = actions(11806);
	v->a[279092] = 2;
	v->a[279093] = anon_sym_PLUS_PLUS;
	v->a[279094] = anon_sym_DASH_DASH;
	v->a[279095] = state(3205);
	v->a[279096] = 7;
	v->a[279097] = sym__c_expression_not_assignment;
	v->a[279098] = sym__c_parenthesized_expression;
	v->a[279099] = sym_string;
	small_parse_table_13955(v);
}

/* EOF small_parse_table_2790.c */
