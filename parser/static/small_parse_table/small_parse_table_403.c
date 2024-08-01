/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_403.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2015(t_small_parse_table_array *v)
{
	v->a[40300] = anon_sym_PIPE_PIPE;
	v->a[40301] = anon_sym_LT;
	v->a[40302] = anon_sym_GT;
	v->a[40303] = anon_sym_GT_GT;
	v->a[40304] = anon_sym_LT_LT;
	v->a[40305] = aux_sym_concatenation_token1;
	v->a[40306] = anon_sym_BQUOTE;
	v->a[40307] = anon_sym_SEMI;
	v->a[40308] = 10;
	v->a[40309] = actions(3);
	v->a[40310] = 1;
	v->a[40311] = sym_comment;
	v->a[40312] = actions(627);
	v->a[40313] = 1;
	v->a[40314] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40315] = actions(629);
	v->a[40316] = 1;
	v->a[40317] = anon_sym_DOLLAR;
	v->a[40318] = actions(631);
	v->a[40319] = 1;
	small_parse_table_2016(v);
}

void	small_parse_table_2016(t_small_parse_table_array *v)
{
	v->a[40320] = anon_sym_DQUOTE;
	v->a[40321] = actions(633);
	v->a[40322] = 1;
	v->a[40323] = anon_sym_DOLLAR_LBRACE;
	v->a[40324] = actions(635);
	v->a[40325] = 1;
	v->a[40326] = anon_sym_DOLLAR_LPAREN;
	v->a[40327] = actions(637);
	v->a[40328] = 1;
	v->a[40329] = anon_sym_BQUOTE;
	v->a[40330] = state(182);
	v->a[40331] = 2;
	v->a[40332] = sym_concatenation;
	v->a[40333] = aux_sym_for_statement_repeat1;
	v->a[40334] = actions(625);
	v->a[40335] = 3;
	v->a[40336] = sym_raw_string;
	v->a[40337] = sym_number;
	v->a[40338] = sym_word;
	v->a[40339] = state(362);
	small_parse_table_2017(v);
}

void	small_parse_table_2017(t_small_parse_table_array *v)
{
	v->a[40340] = 5;
	v->a[40341] = sym_arithmetic_expansion;
	v->a[40342] = sym_string;
	v->a[40343] = sym_simple_expansion;
	v->a[40344] = sym_expansion;
	v->a[40345] = sym_command_substitution;
	v->a[40346] = 10;
	v->a[40347] = actions(3);
	v->a[40348] = 1;
	v->a[40349] = sym_comment;
	v->a[40350] = actions(1144);
	v->a[40351] = 1;
	v->a[40352] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40353] = actions(1146);
	v->a[40354] = 1;
	v->a[40355] = anon_sym_DOLLAR;
	v->a[40356] = actions(1148);
	v->a[40357] = 1;
	v->a[40358] = anon_sym_DQUOTE;
	v->a[40359] = actions(1150);
	small_parse_table_2018(v);
}

void	small_parse_table_2018(t_small_parse_table_array *v)
{
	v->a[40360] = 1;
	v->a[40361] = anon_sym_DOLLAR_LBRACE;
	v->a[40362] = actions(1152);
	v->a[40363] = 1;
	v->a[40364] = anon_sym_DOLLAR_LPAREN;
	v->a[40365] = actions(1154);
	v->a[40366] = 1;
	v->a[40367] = anon_sym_BQUOTE;
	v->a[40368] = state(366);
	v->a[40369] = 2;
	v->a[40370] = sym_concatenation;
	v->a[40371] = aux_sym_for_statement_repeat1;
	v->a[40372] = actions(1142);
	v->a[40373] = 3;
	v->a[40374] = sym_raw_string;
	v->a[40375] = sym_number;
	v->a[40376] = sym_word;
	v->a[40377] = state(607);
	v->a[40378] = 5;
	v->a[40379] = sym_arithmetic_expansion;
	small_parse_table_2019(v);
}

void	small_parse_table_2019(t_small_parse_table_array *v)
{
	v->a[40380] = sym_string;
	v->a[40381] = sym_simple_expansion;
	v->a[40382] = sym_expansion;
	v->a[40383] = sym_command_substitution;
	v->a[40384] = 10;
	v->a[40385] = actions(3);
	v->a[40386] = 1;
	v->a[40387] = sym_comment;
	v->a[40388] = actions(655);
	v->a[40389] = 1;
	v->a[40390] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40391] = actions(657);
	v->a[40392] = 1;
	v->a[40393] = anon_sym_DOLLAR;
	v->a[40394] = actions(659);
	v->a[40395] = 1;
	v->a[40396] = anon_sym_DQUOTE;
	v->a[40397] = actions(661);
	v->a[40398] = 1;
	v->a[40399] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2020(v);
}

/* EOF small_parse_table_403.c */
