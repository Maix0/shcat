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
	v->a[52000] = sym_raw_string;
	v->a[52001] = sym_number;
	v->a[52002] = anon_sym_DOLLAR_LBRACE;
	v->a[52003] = anon_sym_DOLLAR_LPAREN;
	v->a[52004] = anon_sym_BQUOTE;
	v->a[52005] = sym_word;
	v->a[52006] = 6;
	v->a[52007] = actions(3);
	v->a[52008] = 1;
	v->a[52009] = sym_comment;
	v->a[52010] = actions(367);
	v->a[52011] = 1;
	v->a[52012] = sym_file_descriptor;
	v->a[52013] = actions(1811);
	v->a[52014] = 1;
	v->a[52015] = sym_variable_name;
	v->a[52016] = actions(1809);
	v->a[52017] = 2;
	v->a[52018] = aux_sym__simple_variable_name_token1;
	v->a[52019] = aux_sym__multiline_variable_name_token1;
	small_parse_table_2601(v);
}

void	small_parse_table_2601(t_small_parse_table_array *v)
{
	v->a[52020] = actions(1807);
	v->a[52021] = 8;
	v->a[52022] = anon_sym_BANG;
	v->a[52023] = anon_sym_DASH;
	v->a[52024] = anon_sym_STAR;
	v->a[52025] = anon_sym_QMARK;
	v->a[52026] = anon_sym_DOLLAR;
	v->a[52027] = anon_sym_POUND;
	v->a[52028] = anon_sym_AT;
	v->a[52029] = anon_sym_0;
	v->a[52030] = actions(361);
	v->a[52031] = 12;
	v->a[52032] = anon_sym_PIPE;
	v->a[52033] = anon_sym_AMP_AMP;
	v->a[52034] = anon_sym_PIPE_PIPE;
	v->a[52035] = anon_sym_LT;
	v->a[52036] = anon_sym_GT;
	v->a[52037] = anon_sym_GT_GT;
	v->a[52038] = anon_sym_LT_AMP;
	v->a[52039] = anon_sym_GT_AMP;
	small_parse_table_2602(v);
}

void	small_parse_table_2602(t_small_parse_table_array *v)
{
	v->a[52040] = anon_sym_GT_PIPE;
	v->a[52041] = anon_sym_LT_GT;
	v->a[52042] = anon_sym_LT_LT;
	v->a[52043] = anon_sym_LT_LT_DASH;
	v->a[52044] = 3;
	v->a[52045] = actions(3);
	v->a[52046] = 1;
	v->a[52047] = sym_comment;
	v->a[52048] = actions(1229);
	v->a[52049] = 2;
	v->a[52050] = sym_file_descriptor;
	v->a[52051] = sym__concat;
	v->a[52052] = actions(1227);
	v->a[52053] = 22;
	v->a[52054] = anon_sym_PIPE;
	v->a[52055] = anon_sym_AMP_AMP;
	v->a[52056] = anon_sym_PIPE_PIPE;
	v->a[52057] = anon_sym_LT;
	v->a[52058] = anon_sym_GT;
	v->a[52059] = anon_sym_GT_GT;
	small_parse_table_2603(v);
}

void	small_parse_table_2603(t_small_parse_table_array *v)
{
	v->a[52060] = anon_sym_LT_AMP;
	v->a[52061] = anon_sym_GT_AMP;
	v->a[52062] = anon_sym_GT_PIPE;
	v->a[52063] = anon_sym_LT_GT;
	v->a[52064] = anon_sym_LT_LT;
	v->a[52065] = anon_sym_LT_LT_DASH;
	v->a[52066] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52067] = aux_sym_concatenation_token1;
	v->a[52068] = anon_sym_DOLLAR;
	v->a[52069] = anon_sym_DQUOTE;
	v->a[52070] = sym_raw_string;
	v->a[52071] = sym_number;
	v->a[52072] = anon_sym_DOLLAR_LBRACE;
	v->a[52073] = anon_sym_DOLLAR_LPAREN;
	v->a[52074] = anon_sym_BQUOTE;
	v->a[52075] = sym_word;
	v->a[52076] = 12;
	v->a[52077] = actions(3);
	v->a[52078] = 1;
	v->a[52079] = sym_comment;
	small_parse_table_2604(v);
}

void	small_parse_table_2604(t_small_parse_table_array *v)
{
	v->a[52080] = actions(1813);
	v->a[52081] = 1;
	v->a[52082] = anon_sym_RBRACE;
	v->a[52083] = actions(1819);
	v->a[52084] = 1;
	v->a[52085] = anon_sym_PERCENT;
	v->a[52086] = actions(1821);
	v->a[52087] = 1;
	v->a[52088] = anon_sym_POUND;
	v->a[52089] = actions(1827);
	v->a[52090] = 1;
	v->a[52091] = aux_sym__simple_variable_name_token1;
	v->a[52092] = actions(1829);
	v->a[52093] = 1;
	v->a[52094] = sym_variable_name;
	v->a[52095] = state(2006);
	v->a[52096] = 1;
	v->a[52097] = sym__expansion_regex;
	v->a[52098] = state(2007);
	v->a[52099] = 1;
	small_parse_table_2605(v);
}

/* EOF small_parse_table_520.c */
