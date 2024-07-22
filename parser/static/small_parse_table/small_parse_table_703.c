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
	v->a[70300] = sym_word;
	v->a[70301] = state(429);
	v->a[70302] = 5;
	v->a[70303] = sym_arithmetic_expansion;
	v->a[70304] = sym_string;
	v->a[70305] = sym_simple_expansion;
	v->a[70306] = sym_expansion;
	v->a[70307] = sym_command_substitution;
	v->a[70308] = 10;
	v->a[70309] = actions(3);
	v->a[70310] = 1;
	v->a[70311] = sym_comment;
	v->a[70312] = actions(2331);
	v->a[70313] = 1;
	v->a[70314] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70315] = actions(2335);
	v->a[70316] = 1;
	v->a[70317] = anon_sym_DQUOTE;
	v->a[70318] = actions(2337);
	v->a[70319] = 1;
	small_parse_table_3516(v);
}

void	small_parse_table_3516(t_small_parse_table_array *v)
{
	v->a[70320] = anon_sym_DOLLAR_LBRACE;
	v->a[70321] = actions(2339);
	v->a[70322] = 1;
	v->a[70323] = anon_sym_DOLLAR_LPAREN;
	v->a[70324] = actions(2341);
	v->a[70325] = 1;
	v->a[70326] = anon_sym_BQUOTE;
	v->a[70327] = actions(2567);
	v->a[70328] = 1;
	v->a[70329] = anon_sym_DOLLAR;
	v->a[70330] = state(237);
	v->a[70331] = 2;
	v->a[70332] = sym_concatenation;
	v->a[70333] = aux_sym_for_statement_repeat1;
	v->a[70334] = actions(2789);
	v->a[70335] = 3;
	v->a[70336] = sym_raw_string;
	v->a[70337] = sym_number;
	v->a[70338] = sym_word;
	v->a[70339] = state(486);
	small_parse_table_3517(v);
}

void	small_parse_table_3517(t_small_parse_table_array *v)
{
	v->a[70340] = 5;
	v->a[70341] = sym_arithmetic_expansion;
	v->a[70342] = sym_string;
	v->a[70343] = sym_simple_expansion;
	v->a[70344] = sym_expansion;
	v->a[70345] = sym_command_substitution;
	v->a[70346] = 15;
	v->a[70347] = actions(3);
	v->a[70348] = 1;
	v->a[70349] = sym_comment;
	v->a[70350] = actions(1726);
	v->a[70351] = 1;
	v->a[70352] = anon_sym_DOLLAR;
	v->a[70353] = actions(1728);
	v->a[70354] = 1;
	v->a[70355] = anon_sym_DQUOTE;
	v->a[70356] = actions(1730);
	v->a[70357] = 1;
	v->a[70358] = anon_sym_DOLLAR_LBRACE;
	v->a[70359] = actions(1732);
	small_parse_table_3518(v);
}

void	small_parse_table_3518(t_small_parse_table_array *v)
{
	v->a[70360] = 1;
	v->a[70361] = anon_sym_DOLLAR_LPAREN;
	v->a[70362] = actions(1734);
	v->a[70363] = 1;
	v->a[70364] = anon_sym_BQUOTE;
	v->a[70365] = actions(2791);
	v->a[70366] = 1;
	v->a[70367] = anon_sym_RBRACE;
	v->a[70368] = actions(2793);
	v->a[70369] = 1;
	v->a[70370] = sym_raw_string;
	v->a[70371] = actions(2795);
	v->a[70372] = 1;
	v->a[70373] = aux_sym__word_no_brace_token1;
	v->a[70374] = actions(2797);
	v->a[70375] = 1;
	v->a[70376] = sym_variable_name;
	v->a[70377] = actions(2799);
	v->a[70378] = 1;
	v->a[70379] = sym__expansion_word;
	small_parse_table_3519(v);
}

void	small_parse_table_3519(t_small_parse_table_array *v)
{
	v->a[70380] = state(1870);
	v->a[70381] = 1;
	v->a[70382] = sym__word_no_brace;
	v->a[70383] = state(1930);
	v->a[70384] = 1;
	v->a[70385] = sym__concatenation_in_expansion;
	v->a[70386] = state(1869);
	v->a[70387] = 2;
	v->a[70388] = sym_string;
	v->a[70389] = sym_expansion;
	v->a[70390] = state(1887);
	v->a[70391] = 2;
	v->a[70392] = sym_simple_expansion;
	v->a[70393] = sym_command_substitution;
	v->a[70394] = 10;
	v->a[70395] = actions(3);
	v->a[70396] = 1;
	v->a[70397] = sym_comment;
	v->a[70398] = actions(903);
	v->a[70399] = 1;
	small_parse_table_3520(v);
}

/* EOF small_parse_table_703.c */
