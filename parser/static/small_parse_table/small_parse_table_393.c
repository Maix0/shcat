/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_393.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1965(t_small_parse_table_array *v)
{
	v->a[39300] = 5;
	v->a[39301] = actions(3);
	v->a[39302] = 1;
	v->a[39303] = sym_comment;
	v->a[39304] = actions(1465);
	v->a[39305] = 1;
	v->a[39306] = aux_sym_concatenation_token1;
	v->a[39307] = actions(1468);
	v->a[39308] = 1;
	v->a[39309] = sym__concat;
	v->a[39310] = state(663);
	v->a[39311] = 1;
	v->a[39312] = aux_sym_concatenation_repeat1;
	v->a[39313] = actions(1003);
	v->a[39314] = 21;
	v->a[39315] = anon_sym_PIPE;
	v->a[39316] = anon_sym_AMP_AMP;
	v->a[39317] = anon_sym_PIPE_PIPE;
	v->a[39318] = anon_sym_LT;
	v->a[39319] = anon_sym_GT;
	small_parse_table_1966(v);
}

void	small_parse_table_1966(t_small_parse_table_array *v)
{
	v->a[39320] = anon_sym_GT_GT;
	v->a[39321] = anon_sym_LT_AMP;
	v->a[39322] = anon_sym_GT_AMP;
	v->a[39323] = anon_sym_GT_PIPE;
	v->a[39324] = anon_sym_LT_GT;
	v->a[39325] = anon_sym_LT_LT;
	v->a[39326] = anon_sym_LT_LT_DASH;
	v->a[39327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39328] = anon_sym_DOLLAR;
	v->a[39329] = anon_sym_DQUOTE;
	v->a[39330] = sym_raw_string;
	v->a[39331] = sym_number;
	v->a[39332] = anon_sym_DOLLAR_LBRACE;
	v->a[39333] = anon_sym_DOLLAR_LPAREN;
	v->a[39334] = anon_sym_BQUOTE;
	v->a[39335] = sym_word;
	v->a[39336] = 5;
	v->a[39337] = actions(3);
	v->a[39338] = 1;
	v->a[39339] = sym_comment;
	small_parse_table_1967(v);
}

void	small_parse_table_1967(t_small_parse_table_array *v)
{
	v->a[39340] = actions(489);
	v->a[39341] = 1;
	v->a[39342] = sym_variable_name;
	v->a[39343] = state(669);
	v->a[39344] = 2;
	v->a[39345] = sym_concatenation;
	v->a[39346] = aux_sym_for_statement_repeat1;
	v->a[39347] = state(827);
	v->a[39348] = 5;
	v->a[39349] = sym_arithmetic_expansion;
	v->a[39350] = sym_string;
	v->a[39351] = sym_simple_expansion;
	v->a[39352] = sym_expansion;
	v->a[39353] = sym_command_substitution;
	v->a[39354] = actions(487);
	v->a[39355] = 16;
	v->a[39356] = anon_sym_LT;
	v->a[39357] = anon_sym_GT;
	v->a[39358] = anon_sym_GT_GT;
	v->a[39359] = anon_sym_LT_AMP;
	small_parse_table_1968(v);
}

void	small_parse_table_1968(t_small_parse_table_array *v)
{
	v->a[39360] = anon_sym_GT_AMP;
	v->a[39361] = anon_sym_GT_PIPE;
	v->a[39362] = anon_sym_LT_GT;
	v->a[39363] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39364] = anon_sym_DOLLAR;
	v->a[39365] = anon_sym_DQUOTE;
	v->a[39366] = sym_raw_string;
	v->a[39367] = sym_number;
	v->a[39368] = anon_sym_DOLLAR_LBRACE;
	v->a[39369] = anon_sym_DOLLAR_LPAREN;
	v->a[39370] = anon_sym_BQUOTE;
	v->a[39371] = sym_word;
	v->a[39372] = 3;
	v->a[39373] = actions(3);
	v->a[39374] = 1;
	v->a[39375] = sym_comment;
	v->a[39376] = actions(449);
	v->a[39377] = 2;
	v->a[39378] = sym__concat;
	v->a[39379] = sym__bare_dollar;
	small_parse_table_1969(v);
}

void	small_parse_table_1969(t_small_parse_table_array *v)
{
	v->a[39380] = actions(447);
	v->a[39381] = 22;
	v->a[39382] = anon_sym_PIPE;
	v->a[39383] = anon_sym_AMP_AMP;
	v->a[39384] = anon_sym_PIPE_PIPE;
	v->a[39385] = anon_sym_LT;
	v->a[39386] = anon_sym_GT;
	v->a[39387] = anon_sym_GT_GT;
	v->a[39388] = anon_sym_LT_AMP;
	v->a[39389] = anon_sym_GT_AMP;
	v->a[39390] = anon_sym_GT_PIPE;
	v->a[39391] = anon_sym_LT_GT;
	v->a[39392] = anon_sym_LT_LT;
	v->a[39393] = anon_sym_LT_LT_DASH;
	v->a[39394] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39395] = aux_sym_concatenation_token1;
	v->a[39396] = anon_sym_DOLLAR;
	v->a[39397] = anon_sym_DQUOTE;
	v->a[39398] = sym_raw_string;
	v->a[39399] = sym_number;
	small_parse_table_1970(v);
}

/* EOF small_parse_table_393.c */
