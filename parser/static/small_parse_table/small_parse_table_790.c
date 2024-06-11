/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_790.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3950(t_small_parse_table_array *v)
{
	v->a[79000] = 5;
	v->a[79001] = sym_arithmetic_expansion;
	v->a[79002] = sym_string;
	v->a[79003] = sym_simple_expansion;
	v->a[79004] = sym_expansion;
	v->a[79005] = sym_command_substitution;
	v->a[79006] = 15;
	v->a[79007] = actions(3);
	v->a[79008] = 1;
	v->a[79009] = sym_comment;
	v->a[79010] = actions(1959);
	v->a[79011] = 1;
	v->a[79012] = anon_sym_LPAREN;
	v->a[79013] = actions(1963);
	v->a[79014] = 1;
	v->a[79015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79016] = actions(1965);
	v->a[79017] = 1;
	v->a[79018] = anon_sym_DOLLAR;
	v->a[79019] = actions(1967);
	small_parse_table_3951(v);
}

void	small_parse_table_3951(t_small_parse_table_array *v)
{
	v->a[79020] = 1;
	v->a[79021] = anon_sym_DQUOTE;
	v->a[79022] = actions(1969);
	v->a[79023] = 1;
	v->a[79024] = anon_sym_DOLLAR_LBRACE;
	v->a[79025] = actions(1971);
	v->a[79026] = 1;
	v->a[79027] = anon_sym_DOLLAR_LPAREN;
	v->a[79028] = actions(1973);
	v->a[79029] = 1;
	v->a[79030] = anon_sym_BQUOTE;
	v->a[79031] = actions(1975);
	v->a[79032] = 1;
	v->a[79033] = sym_extglob_pattern;
	v->a[79034] = state(1547);
	v->a[79035] = 1;
	v->a[79036] = aux_sym_case_statement_repeat1;
	v->a[79037] = state(2080);
	v->a[79038] = 1;
	v->a[79039] = sym_case_item;
	small_parse_table_3952(v);
}

void	small_parse_table_3952(t_small_parse_table_array *v)
{
	v->a[79040] = state(2430);
	v->a[79041] = 1;
	v->a[79042] = sym__case_item_last;
	v->a[79043] = state(2224);
	v->a[79044] = 2;
	v->a[79045] = sym_concatenation;
	v->a[79046] = sym__extglob_blob;
	v->a[79047] = actions(1955);
	v->a[79048] = 3;
	v->a[79049] = sym_raw_string;
	v->a[79050] = sym_number;
	v->a[79051] = sym_word;
	v->a[79052] = state(2157);
	v->a[79053] = 5;
	v->a[79054] = sym_arithmetic_expansion;
	v->a[79055] = sym_string;
	v->a[79056] = sym_simple_expansion;
	v->a[79057] = sym_expansion;
	v->a[79058] = sym_command_substitution;
	v->a[79059] = 3;
	small_parse_table_3953(v);
}

void	small_parse_table_3953(t_small_parse_table_array *v)
{
	v->a[79060] = actions(3);
	v->a[79061] = 1;
	v->a[79062] = sym_comment;
	v->a[79063] = actions(543);
	v->a[79064] = 2;
	v->a[79065] = sym_file_descriptor;
	v->a[79066] = aux_sym_heredoc_redirect_token1;
	v->a[79067] = actions(541);
	v->a[79068] = 19;
	v->a[79069] = anon_sym_esac;
	v->a[79070] = anon_sym_PIPE;
	v->a[79071] = anon_sym_SEMI_SEMI;
	v->a[79072] = anon_sym_AMP_AMP;
	v->a[79073] = anon_sym_PIPE_PIPE;
	v->a[79074] = anon_sym_LT;
	v->a[79075] = anon_sym_GT;
	v->a[79076] = anon_sym_GT_GT;
	v->a[79077] = anon_sym_AMP_GT;
	v->a[79078] = anon_sym_AMP_GT_GT;
	v->a[79079] = anon_sym_LT_AMP;
	small_parse_table_3954(v);
}

void	small_parse_table_3954(t_small_parse_table_array *v)
{
	v->a[79080] = anon_sym_GT_AMP;
	v->a[79081] = anon_sym_GT_PIPE;
	v->a[79082] = anon_sym_LT_AMP_DASH;
	v->a[79083] = anon_sym_GT_AMP_DASH;
	v->a[79084] = anon_sym_LT_LT;
	v->a[79085] = anon_sym_LT_LT_DASH;
	v->a[79086] = anon_sym_AMP;
	v->a[79087] = anon_sym_SEMI;
	v->a[79088] = 3;
	v->a[79089] = actions(3);
	v->a[79090] = 1;
	v->a[79091] = sym_comment;
	v->a[79092] = actions(2710);
	v->a[79093] = 2;
	v->a[79094] = sym_file_descriptor;
	v->a[79095] = aux_sym_heredoc_redirect_token1;
	v->a[79096] = actions(2712);
	v->a[79097] = 19;
	v->a[79098] = anon_sym_esac;
	v->a[79099] = anon_sym_PIPE;
	small_parse_table_3955(v);
}

/* EOF small_parse_table_790.c */
