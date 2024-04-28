/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2983.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14915(t_small_parse_table_array *v)
{
	v->a[298300] = actions(13072);
	v->a[298301] = 1;
	v->a[298302] = anon_sym_BQUOTE;
	v->a[298303] = actions(13074);
	v->a[298304] = 1;
	v->a[298305] = anon_sym_DOLLAR_BQUOTE;
	v->a[298306] = actions(13490);
	v->a[298307] = 1;
	v->a[298308] = anon_sym_DOLLAR;
	v->a[298309] = actions(13492);
	v->a[298310] = 1;
	v->a[298311] = anon_sym_DQUOTE;
	v->a[298312] = state(5768);
	v->a[298313] = 1;
	v->a[298314] = aux_sym_string_repeat1;
	v->a[298315] = actions(13058);
	v->a[298316] = 2;
	v->a[298317] = anon_sym_LPAREN_LPAREN;
	v->a[298318] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[298319] = state(6127);
	small_parse_table_14916(v);
}

void	small_parse_table_14916(t_small_parse_table_array *v)
{
	v->a[298320] = 4;
	v->a[298321] = sym_arithmetic_expansion;
	v->a[298322] = sym_simple_expansion;
	v->a[298323] = sym_expansion;
	v->a[298324] = sym_command_substitution;
	v->a[298325] = 12;
	v->a[298326] = actions(3);
	v->a[298327] = 1;
	v->a[298328] = sym_comment;
	v->a[298329] = actions(13060);
	v->a[298330] = 1;
	v->a[298331] = anon_sym_DOLLAR_LBRACK;
	v->a[298332] = actions(13066);
	v->a[298333] = 1;
	v->a[298334] = sym_string_content;
	v->a[298335] = actions(13068);
	v->a[298336] = 1;
	v->a[298337] = anon_sym_DOLLAR_LBRACE;
	v->a[298338] = actions(13070);
	v->a[298339] = 1;
	small_parse_table_14917(v);
}

void	small_parse_table_14917(t_small_parse_table_array *v)
{
	v->a[298340] = anon_sym_DOLLAR_LPAREN;
	v->a[298341] = actions(13072);
	v->a[298342] = 1;
	v->a[298343] = anon_sym_BQUOTE;
	v->a[298344] = actions(13074);
	v->a[298345] = 1;
	v->a[298346] = anon_sym_DOLLAR_BQUOTE;
	v->a[298347] = actions(13494);
	v->a[298348] = 1;
	v->a[298349] = anon_sym_DOLLAR;
	v->a[298350] = actions(13496);
	v->a[298351] = 1;
	v->a[298352] = anon_sym_DQUOTE;
	v->a[298353] = state(5765);
	v->a[298354] = 1;
	v->a[298355] = aux_sym_string_repeat1;
	v->a[298356] = actions(13058);
	v->a[298357] = 2;
	v->a[298358] = anon_sym_LPAREN_LPAREN;
	v->a[298359] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_14918(v);
}

void	small_parse_table_14918(t_small_parse_table_array *v)
{
	v->a[298360] = state(6127);
	v->a[298361] = 4;
	v->a[298362] = sym_arithmetic_expansion;
	v->a[298363] = sym_simple_expansion;
	v->a[298364] = sym_expansion;
	v->a[298365] = sym_command_substitution;
	v->a[298366] = 12;
	v->a[298367] = actions(3);
	v->a[298368] = 1;
	v->a[298369] = sym_comment;
	v->a[298370] = actions(13060);
	v->a[298371] = 1;
	v->a[298372] = anon_sym_DOLLAR_LBRACK;
	v->a[298373] = actions(13066);
	v->a[298374] = 1;
	v->a[298375] = sym_string_content;
	v->a[298376] = actions(13068);
	v->a[298377] = 1;
	v->a[298378] = anon_sym_DOLLAR_LBRACE;
	v->a[298379] = actions(13070);
	small_parse_table_14919(v);
}

void	small_parse_table_14919(t_small_parse_table_array *v)
{
	v->a[298380] = 1;
	v->a[298381] = anon_sym_DOLLAR_LPAREN;
	v->a[298382] = actions(13072);
	v->a[298383] = 1;
	v->a[298384] = anon_sym_BQUOTE;
	v->a[298385] = actions(13074);
	v->a[298386] = 1;
	v->a[298387] = anon_sym_DOLLAR_BQUOTE;
	v->a[298388] = actions(13498);
	v->a[298389] = 1;
	v->a[298390] = anon_sym_DOLLAR;
	v->a[298391] = actions(13500);
	v->a[298392] = 1;
	v->a[298393] = anon_sym_DQUOTE;
	v->a[298394] = state(5805);
	v->a[298395] = 1;
	v->a[298396] = aux_sym_string_repeat1;
	v->a[298397] = actions(13058);
	v->a[298398] = 2;
	v->a[298399] = anon_sym_LPAREN_LPAREN;
	small_parse_table_14920(v);
}

/* EOF small_parse_table_2983.c */
