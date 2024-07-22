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
	v->a[57000] = actions(1716);
	v->a[57001] = 3;
	v->a[57002] = sym_raw_string;
	v->a[57003] = sym_number;
	v->a[57004] = sym_word;
	v->a[57005] = state(1772);
	v->a[57006] = 5;
	v->a[57007] = sym_arithmetic_expansion;
	v->a[57008] = sym_string;
	v->a[57009] = sym_simple_expansion;
	v->a[57010] = sym_expansion;
	v->a[57011] = sym_command_substitution;
	v->a[57012] = 15;
	v->a[57013] = actions(3);
	v->a[57014] = 1;
	v->a[57015] = sym_comment;
	v->a[57016] = actions(1720);
	v->a[57017] = 1;
	v->a[57018] = anon_sym_LPAREN;
	v->a[57019] = actions(1724);
	small_parse_table_2851(v);
}

void	small_parse_table_2851(t_small_parse_table_array *v)
{
	v->a[57020] = 1;
	v->a[57021] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57022] = actions(1726);
	v->a[57023] = 1;
	v->a[57024] = anon_sym_DOLLAR;
	v->a[57025] = actions(1728);
	v->a[57026] = 1;
	v->a[57027] = anon_sym_DQUOTE;
	v->a[57028] = actions(1730);
	v->a[57029] = 1;
	v->a[57030] = anon_sym_DOLLAR_LBRACE;
	v->a[57031] = actions(1732);
	v->a[57032] = 1;
	v->a[57033] = anon_sym_DOLLAR_LPAREN;
	v->a[57034] = actions(1734);
	v->a[57035] = 1;
	v->a[57036] = anon_sym_BQUOTE;
	v->a[57037] = actions(1736);
	v->a[57038] = 1;
	v->a[57039] = sym_extglob_pattern;
	small_parse_table_2852(v);
}

void	small_parse_table_2852(t_small_parse_table_array *v)
{
	v->a[57040] = state(1050);
	v->a[57041] = 1;
	v->a[57042] = aux_sym_case_statement_repeat1;
	v->a[57043] = state(1682);
	v->a[57044] = 1;
	v->a[57045] = sym_case_item;
	v->a[57046] = state(2109);
	v->a[57047] = 1;
	v->a[57048] = sym__case_item_last;
	v->a[57049] = state(1877);
	v->a[57050] = 2;
	v->a[57051] = sym_concatenation;
	v->a[57052] = sym__extglob_blob;
	v->a[57053] = actions(1716);
	v->a[57054] = 3;
	v->a[57055] = sym_raw_string;
	v->a[57056] = sym_number;
	v->a[57057] = sym_word;
	v->a[57058] = state(1772);
	v->a[57059] = 5;
	small_parse_table_2853(v);
}

void	small_parse_table_2853(t_small_parse_table_array *v)
{
	v->a[57060] = sym_arithmetic_expansion;
	v->a[57061] = sym_string;
	v->a[57062] = sym_simple_expansion;
	v->a[57063] = sym_expansion;
	v->a[57064] = sym_command_substitution;
	v->a[57065] = 6;
	v->a[57066] = actions(3);
	v->a[57067] = 1;
	v->a[57068] = sym_comment;
	v->a[57069] = actions(1902);
	v->a[57070] = 1;
	v->a[57071] = aux_sym_concatenation_token1;
	v->a[57072] = actions(1935);
	v->a[57073] = 1;
	v->a[57074] = sym__concat;
	v->a[57075] = state(1007);
	v->a[57076] = 1;
	v->a[57077] = aux_sym_concatenation_repeat1;
	v->a[57078] = actions(1200);
	v->a[57079] = 3;
	small_parse_table_2854(v);
}

void	small_parse_table_2854(t_small_parse_table_array *v)
{
	v->a[57080] = sym_file_descriptor;
	v->a[57081] = sym_variable_name;
	v->a[57082] = aux_sym_heredoc_redirect_token1;
	v->a[57083] = actions(1202);
	v->a[57084] = 15;
	v->a[57085] = anon_sym_PIPE;
	v->a[57086] = anon_sym_RPAREN;
	v->a[57087] = anon_sym_SEMI_SEMI;
	v->a[57088] = anon_sym_AMP_AMP;
	v->a[57089] = anon_sym_PIPE_PIPE;
	v->a[57090] = anon_sym_LT;
	v->a[57091] = anon_sym_GT;
	v->a[57092] = anon_sym_GT_GT;
	v->a[57093] = anon_sym_LT_AMP;
	v->a[57094] = anon_sym_GT_AMP;
	v->a[57095] = anon_sym_GT_PIPE;
	v->a[57096] = anon_sym_LT_GT;
	v->a[57097] = anon_sym_LT_LT;
	v->a[57098] = anon_sym_LT_LT_DASH;
	v->a[57099] = anon_sym_SEMI;
	small_parse_table_2855(v);
}

/* EOF small_parse_table_570.c */
