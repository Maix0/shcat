/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_640.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3200(t_small_parse_table_array *v)
{
	v->a[64000] = anon_sym_LT_AMP;
	v->a[64001] = anon_sym_GT_AMP;
	v->a[64002] = anon_sym_GT_PIPE;
	v->a[64003] = anon_sym_LT_AMP_DASH;
	v->a[64004] = anon_sym_GT_AMP_DASH;
	v->a[64005] = aux_sym_heredoc_redirect_token1;
	v->a[64006] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64007] = anon_sym_DOLLAR;
	v->a[64008] = anon_sym_DQUOTE;
	v->a[64009] = sym_raw_string;
	v->a[64010] = sym_number;
	v->a[64011] = anon_sym_DOLLAR_LBRACE;
	v->a[64012] = anon_sym_DOLLAR_LPAREN;
	v->a[64013] = anon_sym_BQUOTE;
	v->a[64014] = sym_word;
	v->a[64015] = 17;
	v->a[64016] = actions(3);
	v->a[64017] = 1;
	v->a[64018] = sym_comment;
	v->a[64019] = actions(1959);
	small_parse_table_3201(v);
}

void	small_parse_table_3201(t_small_parse_table_array *v)
{
	v->a[64020] = 1;
	v->a[64021] = anon_sym_LPAREN;
	v->a[64022] = actions(1963);
	v->a[64023] = 1;
	v->a[64024] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64025] = actions(1965);
	v->a[64026] = 1;
	v->a[64027] = anon_sym_DOLLAR;
	v->a[64028] = actions(1967);
	v->a[64029] = 1;
	v->a[64030] = anon_sym_DQUOTE;
	v->a[64031] = actions(1969);
	v->a[64032] = 1;
	v->a[64033] = anon_sym_DOLLAR_LBRACE;
	v->a[64034] = actions(1971);
	v->a[64035] = 1;
	v->a[64036] = anon_sym_DOLLAR_LPAREN;
	v->a[64037] = actions(1973);
	v->a[64038] = 1;
	v->a[64039] = anon_sym_BQUOTE;
	small_parse_table_3202(v);
}

void	small_parse_table_3202(t_small_parse_table_array *v)
{
	v->a[64040] = actions(1975);
	v->a[64041] = 1;
	v->a[64042] = sym_extglob_pattern;
	v->a[64043] = actions(1989);
	v->a[64044] = 1;
	v->a[64045] = anon_sym_esac;
	v->a[64046] = state(1500);
	v->a[64047] = 1;
	v->a[64048] = aux_sym_case_statement_repeat1;
	v->a[64049] = state(2080);
	v->a[64050] = 1;
	v->a[64051] = sym_case_item;
	v->a[64052] = state(2318);
	v->a[64053] = 1;
	v->a[64054] = sym__case_item_last;
	v->a[64055] = state(2224);
	v->a[64056] = 2;
	v->a[64057] = sym_concatenation;
	v->a[64058] = sym__extglob_blob;
	v->a[64059] = actions(1955);
	small_parse_table_3203(v);
}

void	small_parse_table_3203(t_small_parse_table_array *v)
{
	v->a[64060] = 3;
	v->a[64061] = sym_raw_string;
	v->a[64062] = sym_number;
	v->a[64063] = sym_word;
	v->a[64064] = actions(1991);
	v->a[64065] = 4;
	v->a[64066] = anon_sym_SEMI_SEMI;
	v->a[64067] = aux_sym_heredoc_redirect_token1;
	v->a[64068] = anon_sym_AMP;
	v->a[64069] = anon_sym_SEMI;
	v->a[64070] = state(2157);
	v->a[64071] = 5;
	v->a[64072] = sym_arithmetic_expansion;
	v->a[64073] = sym_string;
	v->a[64074] = sym_simple_expansion;
	v->a[64075] = sym_expansion;
	v->a[64076] = sym_command_substitution;
	v->a[64077] = 15;
	v->a[64078] = actions(1094);
	v->a[64079] = 1;
	small_parse_table_3204(v);
}

void	small_parse_table_3204(t_small_parse_table_array *v)
{
	v->a[64080] = sym_comment;
	v->a[64081] = actions(1869);
	v->a[64082] = 1;
	v->a[64083] = anon_sym_LPAREN;
	v->a[64084] = actions(1871);
	v->a[64085] = 1;
	v->a[64086] = anon_sym_BANG;
	v->a[64087] = actions(1879);
	v->a[64088] = 1;
	v->a[64089] = anon_sym_TILDE;
	v->a[64090] = actions(1881);
	v->a[64091] = 1;
	v->a[64092] = anon_sym_DOLLAR;
	v->a[64093] = actions(1883);
	v->a[64094] = 1;
	v->a[64095] = anon_sym_DQUOTE;
	v->a[64096] = actions(1887);
	v->a[64097] = 1;
	v->a[64098] = anon_sym_DOLLAR_LBRACE;
	v->a[64099] = actions(1889);
	small_parse_table_3205(v);
}

/* EOF small_parse_table_640.c */
