/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_570.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2850(t_small_parse_table_array *v)
{
	v->a[57000] = 1;
	v->a[57001] = sym_comment;
	v->a[57002] = actions(1000);
	v->a[57003] = 2;
	v->a[57004] = sym_file_descriptor;
	v->a[57005] = sym__bare_dollar;
	v->a[57006] = actions(993);
	v->a[57007] = 25;
	v->a[57008] = anon_sym_LPAREN;
	v->a[57009] = anon_sym_PIPE;
	v->a[57010] = anon_sym_AMP_AMP;
	v->a[57011] = anon_sym_PIPE_PIPE;
	v->a[57012] = anon_sym_LT;
	v->a[57013] = anon_sym_GT;
	v->a[57014] = anon_sym_GT_GT;
	v->a[57015] = anon_sym_AMP_GT;
	v->a[57016] = anon_sym_AMP_GT_GT;
	v->a[57017] = anon_sym_LT_AMP;
	v->a[57018] = anon_sym_GT_AMP;
	v->a[57019] = anon_sym_GT_PIPE;
	small_parse_table_2851(v);
}

void	small_parse_table_2851(t_small_parse_table_array *v)
{
	v->a[57020] = anon_sym_LT_AMP_DASH;
	v->a[57021] = anon_sym_GT_AMP_DASH;
	v->a[57022] = anon_sym_LT_LT;
	v->a[57023] = anon_sym_LT_LT_DASH;
	v->a[57024] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57025] = anon_sym_DOLLAR;
	v->a[57026] = anon_sym_DQUOTE;
	v->a[57027] = sym_raw_string;
	v->a[57028] = sym_number;
	v->a[57029] = anon_sym_DOLLAR_LBRACE;
	v->a[57030] = anon_sym_DOLLAR_LPAREN;
	v->a[57031] = anon_sym_BQUOTE;
	v->a[57032] = sym_word;
	v->a[57033] = 5;
	v->a[57034] = actions(3);
	v->a[57035] = 1;
	v->a[57036] = sym_comment;
	v->a[57037] = state(1327);
	v->a[57038] = 1;
	v->a[57039] = sym_concatenation;
	small_parse_table_2852(v);
}

void	small_parse_table_2852(t_small_parse_table_array *v)
{
	v->a[57040] = actions(760);
	v->a[57041] = 2;
	v->a[57042] = sym_file_descriptor;
	v->a[57043] = sym_variable_name;
	v->a[57044] = state(1105);
	v->a[57045] = 5;
	v->a[57046] = sym_arithmetic_expansion;
	v->a[57047] = sym_string;
	v->a[57048] = sym_simple_expansion;
	v->a[57049] = sym_expansion;
	v->a[57050] = sym_command_substitution;
	v->a[57051] = actions(758);
	v->a[57052] = 19;
	v->a[57053] = anon_sym_LT;
	v->a[57054] = anon_sym_GT;
	v->a[57055] = anon_sym_GT_GT;
	v->a[57056] = anon_sym_AMP_GT;
	v->a[57057] = anon_sym_AMP_GT_GT;
	v->a[57058] = anon_sym_LT_AMP;
	v->a[57059] = anon_sym_GT_AMP;
	small_parse_table_2853(v);
}

void	small_parse_table_2853(t_small_parse_table_array *v)
{
	v->a[57060] = anon_sym_GT_PIPE;
	v->a[57061] = anon_sym_LT_AMP_DASH;
	v->a[57062] = anon_sym_GT_AMP_DASH;
	v->a[57063] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57064] = anon_sym_DOLLAR;
	v->a[57065] = anon_sym_DQUOTE;
	v->a[57066] = sym_raw_string;
	v->a[57067] = sym_number;
	v->a[57068] = anon_sym_DOLLAR_LBRACE;
	v->a[57069] = anon_sym_DOLLAR_LPAREN;
	v->a[57070] = anon_sym_BQUOTE;
	v->a[57071] = sym_word;
	v->a[57072] = 16;
	v->a[57073] = actions(1074);
	v->a[57074] = 1;
	v->a[57075] = sym_comment;
	v->a[57076] = actions(1831);
	v->a[57077] = 1;
	v->a[57078] = anon_sym_LPAREN;
	v->a[57079] = actions(1833);
	small_parse_table_2854(v);
}

void	small_parse_table_2854(t_small_parse_table_array *v)
{
	v->a[57080] = 1;
	v->a[57081] = anon_sym_BANG;
	v->a[57082] = actions(1841);
	v->a[57083] = 1;
	v->a[57084] = anon_sym_TILDE;
	v->a[57085] = actions(1843);
	v->a[57086] = 1;
	v->a[57087] = anon_sym_DOLLAR;
	v->a[57088] = actions(1845);
	v->a[57089] = 1;
	v->a[57090] = anon_sym_DQUOTE;
	v->a[57091] = actions(1849);
	v->a[57092] = 1;
	v->a[57093] = anon_sym_DOLLAR_LBRACE;
	v->a[57094] = actions(1851);
	v->a[57095] = 1;
	v->a[57096] = anon_sym_DOLLAR_LPAREN;
	v->a[57097] = actions(1853);
	v->a[57098] = 1;
	v->a[57099] = anon_sym_BQUOTE;
	small_parse_table_2855(v);
}

/* EOF small_parse_table_570.c */
