/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_603.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3015(t_small_parse_table_array *v)
{
	v->a[60300] = sym_terminator;
	v->a[60301] = state(1177);
	v->a[60302] = 2;
	v->a[60303] = sym_concatenation;
	v->a[60304] = aux_sym_for_statement_repeat1;
	v->a[60305] = actions(1891);
	v->a[60306] = 3;
	v->a[60307] = sym_raw_string;
	v->a[60308] = sym_number;
	v->a[60309] = sym_word;
	v->a[60310] = actions(1893);
	v->a[60311] = 4;
	v->a[60312] = anon_sym_SEMI_SEMI;
	v->a[60313] = aux_sym_heredoc_redirect_token1;
	v->a[60314] = anon_sym_AMP;
	v->a[60315] = anon_sym_SEMI;
	v->a[60316] = state(1398);
	v->a[60317] = 5;
	v->a[60318] = sym_arithmetic_expansion;
	v->a[60319] = sym_string;
	small_parse_table_3016(v);
}

void	small_parse_table_3016(t_small_parse_table_array *v)
{
	v->a[60320] = sym_simple_expansion;
	v->a[60321] = sym_expansion;
	v->a[60322] = sym_command_substitution;
	v->a[60323] = 15;
	v->a[60324] = actions(3);
	v->a[60325] = 1;
	v->a[60326] = sym_comment;
	v->a[60327] = actions(1634);
	v->a[60328] = 1;
	v->a[60329] = anon_sym_LPAREN;
	v->a[60330] = actions(1638);
	v->a[60331] = 1;
	v->a[60332] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60333] = actions(1640);
	v->a[60334] = 1;
	v->a[60335] = anon_sym_DOLLAR;
	v->a[60336] = actions(1642);
	v->a[60337] = 1;
	v->a[60338] = anon_sym_DQUOTE;
	v->a[60339] = actions(1644);
	small_parse_table_3017(v);
}

void	small_parse_table_3017(t_small_parse_table_array *v)
{
	v->a[60340] = 1;
	v->a[60341] = anon_sym_DOLLAR_LBRACE;
	v->a[60342] = actions(1646);
	v->a[60343] = 1;
	v->a[60344] = anon_sym_DOLLAR_LPAREN;
	v->a[60345] = actions(1648);
	v->a[60346] = 1;
	v->a[60347] = anon_sym_BQUOTE;
	v->a[60348] = actions(1650);
	v->a[60349] = 1;
	v->a[60350] = sym_extglob_pattern;
	v->a[60351] = state(1139);
	v->a[60352] = 1;
	v->a[60353] = aux_sym_case_statement_repeat1;
	v->a[60354] = state(1713);
	v->a[60355] = 1;
	v->a[60356] = sym_case_item;
	v->a[60357] = state(2031);
	v->a[60358] = 1;
	v->a[60359] = sym__case_item_last;
	small_parse_table_3018(v);
}

void	small_parse_table_3018(t_small_parse_table_array *v)
{
	v->a[60360] = state(1871);
	v->a[60361] = 2;
	v->a[60362] = sym_concatenation;
	v->a[60363] = sym__extglob_blob;
	v->a[60364] = actions(1630);
	v->a[60365] = 3;
	v->a[60366] = sym_raw_string;
	v->a[60367] = sym_number;
	v->a[60368] = sym_word;
	v->a[60369] = state(1804);
	v->a[60370] = 5;
	v->a[60371] = sym_arithmetic_expansion;
	v->a[60372] = sym_string;
	v->a[60373] = sym_simple_expansion;
	v->a[60374] = sym_expansion;
	v->a[60375] = sym_command_substitution;
	v->a[60376] = 15;
	v->a[60377] = actions(3);
	v->a[60378] = 1;
	v->a[60379] = sym_comment;
	small_parse_table_3019(v);
}

void	small_parse_table_3019(t_small_parse_table_array *v)
{
	v->a[60380] = actions(1634);
	v->a[60381] = 1;
	v->a[60382] = anon_sym_LPAREN;
	v->a[60383] = actions(1638);
	v->a[60384] = 1;
	v->a[60385] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60386] = actions(1640);
	v->a[60387] = 1;
	v->a[60388] = anon_sym_DOLLAR;
	v->a[60389] = actions(1642);
	v->a[60390] = 1;
	v->a[60391] = anon_sym_DQUOTE;
	v->a[60392] = actions(1644);
	v->a[60393] = 1;
	v->a[60394] = anon_sym_DOLLAR_LBRACE;
	v->a[60395] = actions(1646);
	v->a[60396] = 1;
	v->a[60397] = anon_sym_DOLLAR_LPAREN;
	v->a[60398] = actions(1648);
	v->a[60399] = 1;
	small_parse_table_3020(v);
}

/* EOF small_parse_table_603.c */
