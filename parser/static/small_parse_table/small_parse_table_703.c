/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_703.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3515(t_small_parse_table_array *v)
{
	v->a[70300] = sym_comment;
	v->a[70301] = actions(1381);
	v->a[70302] = 1;
	v->a[70303] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70304] = actions(1383);
	v->a[70305] = 1;
	v->a[70306] = anon_sym_DOLLAR;
	v->a[70307] = actions(1385);
	v->a[70308] = 1;
	v->a[70309] = anon_sym_DQUOTE;
	v->a[70310] = actions(1387);
	v->a[70311] = 1;
	v->a[70312] = anon_sym_DOLLAR_LBRACE;
	v->a[70313] = actions(1389);
	v->a[70314] = 1;
	v->a[70315] = anon_sym_DOLLAR_LPAREN;
	v->a[70316] = actions(1391);
	v->a[70317] = 1;
	v->a[70318] = anon_sym_BQUOTE;
	v->a[70319] = state(580);
	small_parse_table_3516(v);
}

void	small_parse_table_3516(t_small_parse_table_array *v)
{
	v->a[70320] = 2;
	v->a[70321] = sym_concatenation;
	v->a[70322] = aux_sym_for_statement_repeat1;
	v->a[70323] = actions(1379);
	v->a[70324] = 3;
	v->a[70325] = sym_raw_string;
	v->a[70326] = sym_number;
	v->a[70327] = sym_word;
	v->a[70328] = state(884);
	v->a[70329] = 5;
	v->a[70330] = sym_arithmetic_expansion;
	v->a[70331] = sym_string;
	v->a[70332] = sym_simple_expansion;
	v->a[70333] = sym_expansion;
	v->a[70334] = sym_command_substitution;
	v->a[70335] = 10;
	v->a[70336] = actions(3);
	v->a[70337] = 1;
	v->a[70338] = sym_comment;
	v->a[70339] = actions(2444);
	small_parse_table_3517(v);
}

void	small_parse_table_3517(t_small_parse_table_array *v)
{
	v->a[70340] = 1;
	v->a[70341] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70342] = actions(2448);
	v->a[70343] = 1;
	v->a[70344] = anon_sym_DQUOTE;
	v->a[70345] = actions(2450);
	v->a[70346] = 1;
	v->a[70347] = anon_sym_DOLLAR_LBRACE;
	v->a[70348] = actions(2452);
	v->a[70349] = 1;
	v->a[70350] = anon_sym_DOLLAR_LPAREN;
	v->a[70351] = actions(2454);
	v->a[70352] = 1;
	v->a[70353] = anon_sym_BQUOTE;
	v->a[70354] = actions(2553);
	v->a[70355] = 1;
	v->a[70356] = anon_sym_DOLLAR;
	v->a[70357] = state(400);
	v->a[70358] = 2;
	v->a[70359] = sym_concatenation;
	small_parse_table_3518(v);
}

void	small_parse_table_3518(t_small_parse_table_array *v)
{
	v->a[70360] = aux_sym_for_statement_repeat1;
	v->a[70361] = actions(2765);
	v->a[70362] = 3;
	v->a[70363] = sym_raw_string;
	v->a[70364] = sym_number;
	v->a[70365] = sym_word;
	v->a[70366] = state(714);
	v->a[70367] = 5;
	v->a[70368] = sym_arithmetic_expansion;
	v->a[70369] = sym_string;
	v->a[70370] = sym_simple_expansion;
	v->a[70371] = sym_expansion;
	v->a[70372] = sym_command_substitution;
	v->a[70373] = 10;
	v->a[70374] = actions(3);
	v->a[70375] = 1;
	v->a[70376] = sym_comment;
	v->a[70377] = actions(850);
	v->a[70378] = 1;
	v->a[70379] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3519(v);
}

void	small_parse_table_3519(t_small_parse_table_array *v)
{
	v->a[70380] = actions(852);
	v->a[70381] = 1;
	v->a[70382] = anon_sym_DOLLAR;
	v->a[70383] = actions(854);
	v->a[70384] = 1;
	v->a[70385] = anon_sym_DQUOTE;
	v->a[70386] = actions(856);
	v->a[70387] = 1;
	v->a[70388] = anon_sym_DOLLAR_LBRACE;
	v->a[70389] = actions(858);
	v->a[70390] = 1;
	v->a[70391] = anon_sym_DOLLAR_LPAREN;
	v->a[70392] = actions(860);
	v->a[70393] = 1;
	v->a[70394] = anon_sym_BQUOTE;
	v->a[70395] = state(249);
	v->a[70396] = 2;
	v->a[70397] = sym_concatenation;
	v->a[70398] = aux_sym_for_statement_repeat1;
	v->a[70399] = actions(848);
	small_parse_table_3520(v);
}

/* EOF small_parse_table_703.c */
