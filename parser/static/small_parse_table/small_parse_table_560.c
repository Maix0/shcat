/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_560.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2800(t_small_parse_table_array *v)
{
	v->a[56000] = 1;
	v->a[56001] = anon_sym_DOLLAR_LBRACE;
	v->a[56002] = actions(938);
	v->a[56003] = 1;
	v->a[56004] = anon_sym_DOLLAR_LPAREN;
	v->a[56005] = actions(940);
	v->a[56006] = 1;
	v->a[56007] = anon_sym_BQUOTE;
	v->a[56008] = actions(1940);
	v->a[56009] = 1;
	v->a[56010] = sym__bare_dollar;
	v->a[56011] = actions(2260);
	v->a[56012] = 1;
	v->a[56013] = anon_sym_DOLLAR;
	v->a[56014] = actions(1936);
	v->a[56015] = 5;
	v->a[56016] = aux_sym_concatenation_token1;
	v->a[56017] = sym_raw_string;
	v->a[56018] = sym_number;
	v->a[56019] = sym__comment_word;
	small_parse_table_2801(v);
}

void	small_parse_table_2801(t_small_parse_table_array *v)
{
	v->a[56020] = sym_word;
	v->a[56021] = state(691);
	v->a[56022] = 5;
	v->a[56023] = sym_arithmetic_expansion;
	v->a[56024] = sym_string;
	v->a[56025] = sym_simple_expansion;
	v->a[56026] = sym_expansion;
	v->a[56027] = sym_command_substitution;
	v->a[56028] = 5;
	v->a[56029] = actions(3);
	v->a[56030] = 1;
	v->a[56031] = sym_comment;
	v->a[56032] = actions(1712);
	v->a[56033] = 1;
	v->a[56034] = aux_sym_heredoc_redirect_token1;
	v->a[56035] = actions(2262);
	v->a[56036] = 1;
	v->a[56037] = anon_sym_PIPE;
	v->a[56038] = state(1117);
	v->a[56039] = 1;
	small_parse_table_2802(v);
}

void	small_parse_table_2802(t_small_parse_table_array *v)
{
	v->a[56040] = aux_sym_pipeline_repeat1;
	v->a[56041] = actions(1717);
	v->a[56042] = 14;
	v->a[56043] = anon_sym_SEMI_SEMI;
	v->a[56044] = anon_sym_AMP_AMP;
	v->a[56045] = anon_sym_PIPE_PIPE;
	v->a[56046] = anon_sym_LT;
	v->a[56047] = anon_sym_GT;
	v->a[56048] = anon_sym_GT_GT;
	v->a[56049] = anon_sym_LT_AMP;
	v->a[56050] = anon_sym_GT_AMP;
	v->a[56051] = anon_sym_GT_PIPE;
	v->a[56052] = anon_sym_LT_GT;
	v->a[56053] = anon_sym_LT_LT;
	v->a[56054] = anon_sym_LT_LT_DASH;
	v->a[56055] = anon_sym_BQUOTE;
	v->a[56056] = anon_sym_SEMI;
	v->a[56057] = 10;
	v->a[56058] = actions(3);
	v->a[56059] = 1;
	small_parse_table_2803(v);
}

void	small_parse_table_2803(t_small_parse_table_array *v)
{
	v->a[56060] = sym_comment;
	v->a[56061] = actions(2015);
	v->a[56062] = 1;
	v->a[56063] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56064] = actions(2019);
	v->a[56065] = 1;
	v->a[56066] = anon_sym_DQUOTE;
	v->a[56067] = actions(2021);
	v->a[56068] = 1;
	v->a[56069] = anon_sym_DOLLAR_LBRACE;
	v->a[56070] = actions(2023);
	v->a[56071] = 1;
	v->a[56072] = anon_sym_DOLLAR_LPAREN;
	v->a[56073] = actions(2025);
	v->a[56074] = 1;
	v->a[56075] = anon_sym_BQUOTE;
	v->a[56076] = actions(2027);
	v->a[56077] = 1;
	v->a[56078] = sym__bare_dollar;
	v->a[56079] = actions(2265);
	small_parse_table_2804(v);
}

void	small_parse_table_2804(t_small_parse_table_array *v)
{
	v->a[56080] = 1;
	v->a[56081] = anon_sym_DOLLAR;
	v->a[56082] = actions(2013);
	v->a[56083] = 5;
	v->a[56084] = aux_sym_concatenation_token1;
	v->a[56085] = sym_raw_string;
	v->a[56086] = sym_number;
	v->a[56087] = sym__comment_word;
	v->a[56088] = sym_word;
	v->a[56089] = state(395);
	v->a[56090] = 5;
	v->a[56091] = sym_arithmetic_expansion;
	v->a[56092] = sym_string;
	v->a[56093] = sym_simple_expansion;
	v->a[56094] = sym_expansion;
	v->a[56095] = sym_command_substitution;
	v->a[56096] = 10;
	v->a[56097] = actions(3);
	v->a[56098] = 1;
	v->a[56099] = sym_comment;
	small_parse_table_2805(v);
}

/* EOF small_parse_table_560.c */
