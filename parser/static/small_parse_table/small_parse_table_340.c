/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_340.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1700(t_small_parse_table_array *v)
{
	v->a[34000] = sym__concat;
	v->a[34001] = state(858);
	v->a[34002] = 1;
	v->a[34003] = aux_sym_concatenation_repeat1;
	v->a[34004] = actions(2696);
	v->a[34005] = 4;
	v->a[34006] = sym_file_descriptor;
	v->a[34007] = sym_test_operator;
	v->a[34008] = sym__brace_start;
	v->a[34009] = aux_sym_heredoc_redirect_token1;
	v->a[34010] = actions(2694);
	v->a[34011] = 33;
	v->a[34012] = anon_sym_PIPE;
	v->a[34013] = anon_sym_RPAREN;
	v->a[34014] = anon_sym_SEMI_SEMI;
	v->a[34015] = anon_sym_PIPE_AMP;
	v->a[34016] = anon_sym_AMP_AMP;
	v->a[34017] = anon_sym_PIPE_PIPE;
	v->a[34018] = anon_sym_LT;
	v->a[34019] = anon_sym_GT;
	small_parse_table_1701(v);
}

void	small_parse_table_1701(t_small_parse_table_array *v)
{
	v->a[34020] = anon_sym_GT_GT;
	v->a[34021] = anon_sym_AMP_GT;
	v->a[34022] = anon_sym_AMP_GT_GT;
	v->a[34023] = anon_sym_LT_AMP;
	v->a[34024] = anon_sym_GT_AMP;
	v->a[34025] = anon_sym_GT_PIPE;
	v->a[34026] = anon_sym_LT_AMP_DASH;
	v->a[34027] = anon_sym_GT_AMP_DASH;
	v->a[34028] = anon_sym_LT_LT;
	v->a[34029] = anon_sym_LT_LT_DASH;
	v->a[34030] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34031] = anon_sym_AMP;
	v->a[34032] = anon_sym_DOLLAR;
	v->a[34033] = sym__special_character;
	v->a[34034] = anon_sym_DQUOTE;
	v->a[34035] = sym_raw_string;
	v->a[34036] = aux_sym_number_token1;
	v->a[34037] = aux_sym_number_token2;
	v->a[34038] = anon_sym_DOLLAR_LBRACE;
	v->a[34039] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1702(v);
}

void	small_parse_table_1702(t_small_parse_table_array *v)
{
	v->a[34040] = anon_sym_BQUOTE;
	v->a[34041] = anon_sym_DOLLAR_BQUOTE;
	v->a[34042] = aux_sym__simple_variable_name_token1;
	v->a[34043] = sym_word;
	v->a[34044] = anon_sym_SEMI;
	v->a[34045] = 3;
	v->a[34046] = actions(3);
	v->a[34047] = 1;
	v->a[34048] = sym_comment;
	v->a[34049] = actions(3034);
	v->a[34050] = 5;
	v->a[34051] = sym_file_descriptor;
	v->a[34052] = sym__concat;
	v->a[34053] = sym_test_operator;
	v->a[34054] = sym__brace_start;
	v->a[34055] = aux_sym_heredoc_redirect_token1;
	v->a[34056] = actions(3032);
	v->a[34057] = 35;
	v->a[34058] = anon_sym_esac;
	v->a[34059] = anon_sym_PIPE;
	small_parse_table_1703(v);
}

void	small_parse_table_1703(t_small_parse_table_array *v)
{
	v->a[34060] = anon_sym_SEMI_SEMI;
	v->a[34061] = anon_sym_SEMI_AMP;
	v->a[34062] = anon_sym_SEMI_SEMI_AMP;
	v->a[34063] = anon_sym_PIPE_AMP;
	v->a[34064] = anon_sym_AMP_AMP;
	v->a[34065] = anon_sym_PIPE_PIPE;
	v->a[34066] = anon_sym_LT;
	v->a[34067] = anon_sym_GT;
	v->a[34068] = anon_sym_GT_GT;
	v->a[34069] = anon_sym_AMP_GT;
	v->a[34070] = anon_sym_AMP_GT_GT;
	v->a[34071] = anon_sym_LT_AMP;
	v->a[34072] = anon_sym_GT_AMP;
	v->a[34073] = anon_sym_GT_PIPE;
	v->a[34074] = anon_sym_LT_AMP_DASH;
	v->a[34075] = anon_sym_GT_AMP_DASH;
	v->a[34076] = anon_sym_LT_LT;
	v->a[34077] = anon_sym_LT_LT_DASH;
	v->a[34078] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34079] = anon_sym_AMP;
	small_parse_table_1704(v);
}

void	small_parse_table_1704(t_small_parse_table_array *v)
{
	v->a[34080] = aux_sym_concatenation_token1;
	v->a[34081] = anon_sym_DOLLAR;
	v->a[34082] = sym__special_character;
	v->a[34083] = anon_sym_DQUOTE;
	v->a[34084] = sym_raw_string;
	v->a[34085] = aux_sym_number_token1;
	v->a[34086] = aux_sym_number_token2;
	v->a[34087] = anon_sym_DOLLAR_LBRACE;
	v->a[34088] = anon_sym_DOLLAR_LPAREN;
	v->a[34089] = anon_sym_BQUOTE;
	v->a[34090] = anon_sym_DOLLAR_BQUOTE;
	v->a[34091] = sym_word;
	v->a[34092] = anon_sym_SEMI;
	v->a[34093] = 3;
	v->a[34094] = actions(3);
	v->a[34095] = 1;
	v->a[34096] = sym_comment;
	v->a[34097] = actions(3117);
	v->a[34098] = 5;
	v->a[34099] = sym_file_descriptor;
	small_parse_table_1705(v);
}

/* EOF small_parse_table_340.c */
