/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_820.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4100(t_small_parse_table_array *v)
{
	v->a[82000] = 1;
	v->a[82001] = sym_comment;
	v->a[82002] = actions(3180);
	v->a[82003] = 1;
	v->a[82004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82005] = actions(3182);
	v->a[82006] = 1;
	v->a[82007] = anon_sym_DOLLAR;
	v->a[82008] = actions(3184);
	v->a[82009] = 1;
	v->a[82010] = anon_sym_DQUOTE;
	v->a[82011] = actions(3186);
	v->a[82012] = 1;
	v->a[82013] = aux_sym_number_token1;
	v->a[82014] = actions(3188);
	v->a[82015] = 1;
	v->a[82016] = aux_sym_number_token2;
	v->a[82017] = actions(3190);
	v->a[82018] = 1;
	v->a[82019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4101(v);
}

void	small_parse_table_4101(t_small_parse_table_array *v)
{
	v->a[82020] = actions(3192);
	v->a[82021] = 1;
	v->a[82022] = anon_sym_DOLLAR_LPAREN;
	v->a[82023] = actions(3194);
	v->a[82024] = 1;
	v->a[82025] = anon_sym_BQUOTE;
	v->a[82026] = state(1986);
	v->a[82027] = 1;
	v->a[82028] = sym_concatenation;
	v->a[82029] = actions(3403);
	v->a[82030] = 2;
	v->a[82031] = sym_raw_string;
	v->a[82032] = sym_word;
	v->a[82033] = state(1853);
	v->a[82034] = 6;
	v->a[82035] = sym_arithmetic_expansion;
	v->a[82036] = sym_string;
	v->a[82037] = sym_number;
	v->a[82038] = sym_simple_expansion;
	v->a[82039] = sym_expansion;
	small_parse_table_4102(v);
}

void	small_parse_table_4102(t_small_parse_table_array *v)
{
	v->a[82040] = sym_command_substitution;
	v->a[82041] = 8;
	v->a[82042] = actions(3);
	v->a[82043] = 1;
	v->a[82044] = sym_comment;
	v->a[82045] = actions(949);
	v->a[82046] = 1;
	v->a[82047] = sym_file_descriptor;
	v->a[82048] = actions(3405);
	v->a[82049] = 1;
	v->a[82050] = aux_sym_heredoc_redirect_token1;
	v->a[82051] = state(2120);
	v->a[82052] = 1;
	v->a[82053] = sym__heredoc_expression;
	v->a[82054] = actions(925);
	v->a[82055] = 2;
	v->a[82056] = anon_sym_AMP_AMP;
	v->a[82057] = anon_sym_PIPE_PIPE;
	v->a[82058] = actions(929);
	v->a[82059] = 2;
	small_parse_table_4103(v);
}

void	small_parse_table_4103(t_small_parse_table_array *v)
{
	v->a[82060] = anon_sym_LT_AMP_DASH;
	v->a[82061] = anon_sym_GT_AMP_DASH;
	v->a[82062] = state(1523);
	v->a[82063] = 2;
	v->a[82064] = sym_file_redirect;
	v->a[82065] = aux_sym_redirected_statement_repeat2;
	v->a[82066] = actions(927);
	v->a[82067] = 8;
	v->a[82068] = anon_sym_LT;
	v->a[82069] = anon_sym_GT;
	v->a[82070] = anon_sym_GT_GT;
	v->a[82071] = anon_sym_AMP_GT;
	v->a[82072] = anon_sym_AMP_GT_GT;
	v->a[82073] = anon_sym_LT_AMP;
	v->a[82074] = anon_sym_GT_AMP;
	v->a[82075] = anon_sym_GT_PIPE;
	v->a[82076] = 12;
	v->a[82077] = actions(3);
	v->a[82078] = 1;
	v->a[82079] = sym_comment;
	small_parse_table_4104(v);
}

void	small_parse_table_4104(t_small_parse_table_array *v)
{
	v->a[82080] = actions(3180);
	v->a[82081] = 1;
	v->a[82082] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82083] = actions(3182);
	v->a[82084] = 1;
	v->a[82085] = anon_sym_DOLLAR;
	v->a[82086] = actions(3184);
	v->a[82087] = 1;
	v->a[82088] = anon_sym_DQUOTE;
	v->a[82089] = actions(3186);
	v->a[82090] = 1;
	v->a[82091] = aux_sym_number_token1;
	v->a[82092] = actions(3188);
	v->a[82093] = 1;
	v->a[82094] = aux_sym_number_token2;
	v->a[82095] = actions(3190);
	v->a[82096] = 1;
	v->a[82097] = anon_sym_DOLLAR_LBRACE;
	v->a[82098] = actions(3192);
	v->a[82099] = 1;
	small_parse_table_4105(v);
}

/* EOF small_parse_table_820.c */
