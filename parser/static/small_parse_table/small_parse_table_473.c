/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_473.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2365(t_small_parse_table_array *v)
{
	v->a[47300] = anon_sym_DQUOTE;
	v->a[47301] = sym_raw_string;
	v->a[47302] = sym_number;
	v->a[47303] = anon_sym_DOLLAR_LBRACE;
	v->a[47304] = anon_sym_DOLLAR_LPAREN;
	v->a[47305] = anon_sym_BQUOTE;
	v->a[47306] = sym_word;
	v->a[47307] = actions(1522);
	v->a[47308] = 9;
	v->a[47309] = anon_sym_PIPE;
	v->a[47310] = anon_sym_SEMI_SEMI;
	v->a[47311] = anon_sym_AMP_AMP;
	v->a[47312] = anon_sym_PIPE_PIPE;
	v->a[47313] = anon_sym_LT_LT;
	v->a[47314] = anon_sym_LT_LT_DASH;
	v->a[47315] = aux_sym_heredoc_redirect_token1;
	v->a[47316] = anon_sym_AMP;
	v->a[47317] = anon_sym_SEMI;
	v->a[47318] = 12;
	v->a[47319] = actions(3);
	small_parse_table_2366(v);
}

void	small_parse_table_2366(t_small_parse_table_array *v)
{
	v->a[47320] = 1;
	v->a[47321] = sym_comment;
	v->a[47322] = actions(713);
	v->a[47323] = 1;
	v->a[47324] = sym_file_descriptor;
	v->a[47325] = actions(1637);
	v->a[47326] = 1;
	v->a[47327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47328] = actions(1639);
	v->a[47329] = 1;
	v->a[47330] = anon_sym_DOLLAR;
	v->a[47331] = actions(1641);
	v->a[47332] = 1;
	v->a[47333] = anon_sym_DQUOTE;
	v->a[47334] = actions(1643);
	v->a[47335] = 1;
	v->a[47336] = anon_sym_DOLLAR_LBRACE;
	v->a[47337] = actions(1645);
	v->a[47338] = 1;
	v->a[47339] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2367(v);
}

void	small_parse_table_2367(t_small_parse_table_array *v)
{
	v->a[47340] = actions(1647);
	v->a[47341] = 1;
	v->a[47342] = anon_sym_BQUOTE;
	v->a[47343] = state(1756);
	v->a[47344] = 1;
	v->a[47345] = sym_concatenation;
	v->a[47346] = actions(1635);
	v->a[47347] = 3;
	v->a[47348] = sym_raw_string;
	v->a[47349] = sym_number;
	v->a[47350] = sym_word;
	v->a[47351] = state(1467);
	v->a[47352] = 5;
	v->a[47353] = sym_arithmetic_expansion;
	v->a[47354] = sym_string;
	v->a[47355] = sym_simple_expansion;
	v->a[47356] = sym_expansion;
	v->a[47357] = sym_command_substitution;
	v->a[47358] = actions(711);
	v->a[47359] = 13;
	small_parse_table_2368(v);
}

void	small_parse_table_2368(t_small_parse_table_array *v)
{
	v->a[47360] = anon_sym_PIPE;
	v->a[47361] = anon_sym_AMP_AMP;
	v->a[47362] = anon_sym_PIPE_PIPE;
	v->a[47363] = anon_sym_LT;
	v->a[47364] = anon_sym_GT;
	v->a[47365] = anon_sym_GT_GT;
	v->a[47366] = anon_sym_LT_AMP;
	v->a[47367] = anon_sym_GT_AMP;
	v->a[47368] = anon_sym_GT_PIPE;
	v->a[47369] = anon_sym_LT_AMP_DASH;
	v->a[47370] = anon_sym_GT_AMP_DASH;
	v->a[47371] = anon_sym_LT_LT;
	v->a[47372] = anon_sym_LT_LT_DASH;
	v->a[47373] = 17;
	v->a[47374] = actions(3);
	v->a[47375] = 1;
	v->a[47376] = sym_comment;
	v->a[47377] = actions(345);
	v->a[47378] = 1;
	v->a[47379] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2369(v);
}

void	small_parse_table_2369(t_small_parse_table_array *v)
{
	v->a[47380] = actions(347);
	v->a[47381] = 1;
	v->a[47382] = anon_sym_DOLLAR;
	v->a[47383] = actions(349);
	v->a[47384] = 1;
	v->a[47385] = anon_sym_DQUOTE;
	v->a[47386] = actions(353);
	v->a[47387] = 1;
	v->a[47388] = anon_sym_DOLLAR_LBRACE;
	v->a[47389] = actions(355);
	v->a[47390] = 1;
	v->a[47391] = anon_sym_DOLLAR_LPAREN;
	v->a[47392] = actions(357);
	v->a[47393] = 1;
	v->a[47394] = anon_sym_BQUOTE;
	v->a[47395] = actions(377);
	v->a[47396] = 1;
	v->a[47397] = sym_variable_name;
	v->a[47398] = actions(1256);
	v->a[47399] = 1;
	small_parse_table_2370(v);
}

/* EOF small_parse_table_473.c */
