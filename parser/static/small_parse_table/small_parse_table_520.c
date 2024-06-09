/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_520.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2600(t_small_parse_table_array *v)
{
	v->a[52000] = anon_sym_LT;
	v->a[52001] = anon_sym_GT;
	v->a[52002] = anon_sym_GT_GT;
	v->a[52003] = anon_sym_AMP_GT;
	v->a[52004] = anon_sym_AMP_GT_GT;
	v->a[52005] = anon_sym_LT_AMP;
	v->a[52006] = anon_sym_GT_AMP;
	v->a[52007] = anon_sym_GT_PIPE;
	v->a[52008] = anon_sym_LT_AMP_DASH;
	v->a[52009] = anon_sym_GT_AMP_DASH;
	v->a[52010] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52011] = anon_sym_DOLLAR;
	v->a[52012] = anon_sym_DQUOTE;
	v->a[52013] = sym_raw_string;
	v->a[52014] = aux_sym_number_token1;
	v->a[52015] = aux_sym_number_token2;
	v->a[52016] = anon_sym_DOLLAR_LBRACE;
	v->a[52017] = anon_sym_DOLLAR_LPAREN;
	v->a[52018] = anon_sym_BQUOTE;
	v->a[52019] = sym_word;
	small_parse_table_2601(v);
}

void	small_parse_table_2601(t_small_parse_table_array *v)
{
	v->a[52020] = 6;
	v->a[52021] = actions(3);
	v->a[52022] = 1;
	v->a[52023] = sym_comment;
	v->a[52024] = actions(1888);
	v->a[52025] = 1;
	v->a[52026] = aux_sym_concatenation_token1;
	v->a[52027] = actions(1890);
	v->a[52028] = 1;
	v->a[52029] = sym__concat;
	v->a[52030] = state(756);
	v->a[52031] = 1;
	v->a[52032] = aux_sym_concatenation_repeat1;
	v->a[52033] = actions(1108);
	v->a[52034] = 2;
	v->a[52035] = sym_file_descriptor;
	v->a[52036] = sym__bare_dollar;
	v->a[52037] = actions(1104);
	v->a[52038] = 26;
	v->a[52039] = anon_sym_LPAREN;
	small_parse_table_2602(v);
}

void	small_parse_table_2602(t_small_parse_table_array *v)
{
	v->a[52040] = anon_sym_PIPE;
	v->a[52041] = anon_sym_AMP_AMP;
	v->a[52042] = anon_sym_PIPE_PIPE;
	v->a[52043] = anon_sym_LT;
	v->a[52044] = anon_sym_GT;
	v->a[52045] = anon_sym_GT_GT;
	v->a[52046] = anon_sym_AMP_GT;
	v->a[52047] = anon_sym_AMP_GT_GT;
	v->a[52048] = anon_sym_LT_AMP;
	v->a[52049] = anon_sym_GT_AMP;
	v->a[52050] = anon_sym_GT_PIPE;
	v->a[52051] = anon_sym_LT_AMP_DASH;
	v->a[52052] = anon_sym_GT_AMP_DASH;
	v->a[52053] = anon_sym_LT_LT;
	v->a[52054] = anon_sym_LT_LT_DASH;
	v->a[52055] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52056] = anon_sym_DOLLAR;
	v->a[52057] = anon_sym_DQUOTE;
	v->a[52058] = sym_raw_string;
	v->a[52059] = aux_sym_number_token1;
	small_parse_table_2603(v);
}

void	small_parse_table_2603(t_small_parse_table_array *v)
{
	v->a[52060] = aux_sym_number_token2;
	v->a[52061] = anon_sym_DOLLAR_LBRACE;
	v->a[52062] = anon_sym_DOLLAR_LPAREN;
	v->a[52063] = anon_sym_BQUOTE;
	v->a[52064] = sym_word;
	v->a[52065] = 6;
	v->a[52066] = actions(3);
	v->a[52067] = 1;
	v->a[52068] = sym_comment;
	v->a[52069] = actions(1706);
	v->a[52070] = 1;
	v->a[52071] = sym_file_descriptor;
	v->a[52072] = actions(1709);
	v->a[52073] = 1;
	v->a[52074] = sym_variable_name;
	v->a[52075] = actions(1696);
	v->a[52076] = 9;
	v->a[52077] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52078] = anon_sym_DOLLAR;
	v->a[52079] = anon_sym_DQUOTE;
	small_parse_table_2604(v);
}

void	small_parse_table_2604(t_small_parse_table_array *v)
{
	v->a[52080] = sym_raw_string;
	v->a[52081] = aux_sym_number_token1;
	v->a[52082] = aux_sym_number_token2;
	v->a[52083] = anon_sym_DOLLAR_LBRACE;
	v->a[52084] = anon_sym_DOLLAR_LPAREN;
	v->a[52085] = sym_word;
	v->a[52086] = actions(1698);
	v->a[52087] = 9;
	v->a[52088] = anon_sym_PIPE;
	v->a[52089] = anon_sym_SEMI_SEMI;
	v->a[52090] = anon_sym_AMP_AMP;
	v->a[52091] = anon_sym_PIPE_PIPE;
	v->a[52092] = anon_sym_LT_LT;
	v->a[52093] = anon_sym_LT_LT_DASH;
	v->a[52094] = aux_sym_heredoc_redirect_token1;
	v->a[52095] = anon_sym_AMP;
	v->a[52096] = anon_sym_SEMI;
	v->a[52097] = actions(1703);
	v->a[52098] = 11;
	v->a[52099] = anon_sym_LT;
	small_parse_table_2605(v);
}

/* EOF small_parse_table_520.c */
