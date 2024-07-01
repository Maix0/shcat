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
	v->a[52000] = sym_expansion;
	v->a[52001] = sym_command_substitution;
	v->a[52002] = actions(554);
	v->a[52003] = 16;
	v->a[52004] = anon_sym_LT;
	v->a[52005] = anon_sym_GT;
	v->a[52006] = anon_sym_GT_GT;
	v->a[52007] = anon_sym_LT_AMP;
	v->a[52008] = anon_sym_GT_AMP;
	v->a[52009] = anon_sym_GT_PIPE;
	v->a[52010] = anon_sym_LT_GT;
	v->a[52011] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52012] = anon_sym_DOLLAR;
	v->a[52013] = anon_sym_DQUOTE;
	v->a[52014] = sym_raw_string;
	v->a[52015] = sym_number;
	v->a[52016] = anon_sym_DOLLAR_LBRACE;
	v->a[52017] = anon_sym_DOLLAR_LPAREN;
	v->a[52018] = anon_sym_BQUOTE;
	v->a[52019] = sym_word;
	small_parse_table_2601(v);
}

void	small_parse_table_2601(t_small_parse_table_array *v)
{
	v->a[52020] = 3;
	v->a[52021] = actions(3);
	v->a[52022] = 1;
	v->a[52023] = sym_comment;
	v->a[52024] = actions(846);
	v->a[52025] = 3;
	v->a[52026] = sym_file_descriptor;
	v->a[52027] = sym__concat;
	v->a[52028] = sym_variable_name;
	v->a[52029] = actions(844);
	v->a[52030] = 22;
	v->a[52031] = anon_sym_PIPE;
	v->a[52032] = anon_sym_AMP_AMP;
	v->a[52033] = anon_sym_PIPE_PIPE;
	v->a[52034] = anon_sym_LT;
	v->a[52035] = anon_sym_GT;
	v->a[52036] = anon_sym_GT_GT;
	v->a[52037] = anon_sym_LT_AMP;
	v->a[52038] = anon_sym_GT_AMP;
	v->a[52039] = anon_sym_GT_PIPE;
	small_parse_table_2602(v);
}

void	small_parse_table_2602(t_small_parse_table_array *v)
{
	v->a[52040] = anon_sym_LT_GT;
	v->a[52041] = anon_sym_LT_LT;
	v->a[52042] = anon_sym_LT_LT_DASH;
	v->a[52043] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52044] = aux_sym_concatenation_token1;
	v->a[52045] = anon_sym_DOLLAR;
	v->a[52046] = anon_sym_DQUOTE;
	v->a[52047] = sym_raw_string;
	v->a[52048] = sym_number;
	v->a[52049] = anon_sym_DOLLAR_LBRACE;
	v->a[52050] = anon_sym_DOLLAR_LPAREN;
	v->a[52051] = anon_sym_BQUOTE;
	v->a[52052] = sym_word;
	v->a[52053] = 3;
	v->a[52054] = actions(3);
	v->a[52055] = 1;
	v->a[52056] = sym_comment;
	v->a[52057] = actions(908);
	v->a[52058] = 3;
	v->a[52059] = sym_file_descriptor;
	small_parse_table_2603(v);
}

void	small_parse_table_2603(t_small_parse_table_array *v)
{
	v->a[52060] = sym__concat;
	v->a[52061] = sym__bare_dollar;
	v->a[52062] = actions(906);
	v->a[52063] = 22;
	v->a[52064] = anon_sym_PIPE;
	v->a[52065] = anon_sym_AMP_AMP;
	v->a[52066] = anon_sym_PIPE_PIPE;
	v->a[52067] = anon_sym_LT;
	v->a[52068] = anon_sym_GT;
	v->a[52069] = anon_sym_GT_GT;
	v->a[52070] = anon_sym_LT_AMP;
	v->a[52071] = anon_sym_GT_AMP;
	v->a[52072] = anon_sym_GT_PIPE;
	v->a[52073] = anon_sym_LT_GT;
	v->a[52074] = anon_sym_LT_LT;
	v->a[52075] = anon_sym_LT_LT_DASH;
	v->a[52076] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52077] = aux_sym_concatenation_token1;
	v->a[52078] = anon_sym_DOLLAR;
	v->a[52079] = anon_sym_DQUOTE;
	small_parse_table_2604(v);
}

void	small_parse_table_2604(t_small_parse_table_array *v)
{
	v->a[52080] = sym_raw_string;
	v->a[52081] = sym_number;
	v->a[52082] = anon_sym_DOLLAR_LBRACE;
	v->a[52083] = anon_sym_DOLLAR_LPAREN;
	v->a[52084] = anon_sym_BQUOTE;
	v->a[52085] = sym_word;
	v->a[52086] = 3;
	v->a[52087] = actions(3);
	v->a[52088] = 1;
	v->a[52089] = sym_comment;
	v->a[52090] = actions(753);
	v->a[52091] = 3;
	v->a[52092] = sym_file_descriptor;
	v->a[52093] = sym__concat;
	v->a[52094] = sym__bare_dollar;
	v->a[52095] = actions(751);
	v->a[52096] = 22;
	v->a[52097] = anon_sym_PIPE;
	v->a[52098] = anon_sym_AMP_AMP;
	v->a[52099] = anon_sym_PIPE_PIPE;
	small_parse_table_2605(v);
}

/* EOF small_parse_table_520.c */
