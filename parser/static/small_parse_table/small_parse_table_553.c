/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_553.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2765(t_small_parse_table_array *v)
{
	v->a[55300] = sym_number;
	v->a[55301] = sym_word;
	v->a[55302] = state(332);
	v->a[55303] = 5;
	v->a[55304] = sym_arithmetic_expansion;
	v->a[55305] = sym_string;
	v->a[55306] = sym_simple_expansion;
	v->a[55307] = sym_expansion;
	v->a[55308] = sym_command_substitution;
	v->a[55309] = 12;
	v->a[55310] = actions(3);
	v->a[55311] = 1;
	v->a[55312] = sym_comment;
	v->a[55313] = actions(1922);
	v->a[55314] = 1;
	v->a[55315] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55316] = actions(1926);
	v->a[55317] = 1;
	v->a[55318] = anon_sym_DQUOTE;
	v->a[55319] = actions(1928);
	small_parse_table_2766(v);
}

void	small_parse_table_2766(t_small_parse_table_array *v)
{
	v->a[55320] = 1;
	v->a[55321] = anon_sym_DOLLAR_LBRACE;
	v->a[55322] = actions(1930);
	v->a[55323] = 1;
	v->a[55324] = anon_sym_DOLLAR_LPAREN;
	v->a[55325] = actions(1932);
	v->a[55326] = 1;
	v->a[55327] = anon_sym_BQUOTE;
	v->a[55328] = actions(2087);
	v->a[55329] = 1;
	v->a[55330] = anon_sym_DOLLAR;
	v->a[55331] = actions(2089);
	v->a[55332] = 1;
	v->a[55333] = sym__comment_word;
	v->a[55334] = actions(2091);
	v->a[55335] = 1;
	v->a[55336] = sym__empty_value;
	v->a[55337] = state(890);
	v->a[55338] = 1;
	v->a[55339] = sym_concatenation;
	small_parse_table_2767(v);
}

void	small_parse_table_2767(t_small_parse_table_array *v)
{
	v->a[55340] = actions(2232);
	v->a[55341] = 3;
	v->a[55342] = sym_raw_string;
	v->a[55343] = sym_number;
	v->a[55344] = sym_word;
	v->a[55345] = state(935);
	v->a[55346] = 5;
	v->a[55347] = sym_arithmetic_expansion;
	v->a[55348] = sym_string;
	v->a[55349] = sym_simple_expansion;
	v->a[55350] = sym_expansion;
	v->a[55351] = sym_command_substitution;
	v->a[55352] = 10;
	v->a[55353] = actions(3);
	v->a[55354] = 1;
	v->a[55355] = sym_comment;
	v->a[55356] = actions(53);
	v->a[55357] = 1;
	v->a[55358] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55359] = actions(57);
	small_parse_table_2768(v);
}

void	small_parse_table_2768(t_small_parse_table_array *v)
{
	v->a[55360] = 1;
	v->a[55361] = anon_sym_DQUOTE;
	v->a[55362] = actions(61);
	v->a[55363] = 1;
	v->a[55364] = anon_sym_DOLLAR_LBRACE;
	v->a[55365] = actions(63);
	v->a[55366] = 1;
	v->a[55367] = anon_sym_DOLLAR_LPAREN;
	v->a[55368] = actions(65);
	v->a[55369] = 1;
	v->a[55370] = anon_sym_BQUOTE;
	v->a[55371] = actions(2179);
	v->a[55372] = 1;
	v->a[55373] = sym__bare_dollar;
	v->a[55374] = actions(2234);
	v->a[55375] = 1;
	v->a[55376] = anon_sym_DOLLAR;
	v->a[55377] = actions(2175);
	v->a[55378] = 5;
	v->a[55379] = aux_sym_concatenation_token1;
	small_parse_table_2769(v);
}

void	small_parse_table_2769(t_small_parse_table_array *v)
{
	v->a[55380] = sym_raw_string;
	v->a[55381] = sym_number;
	v->a[55382] = sym__comment_word;
	v->a[55383] = sym_word;
	v->a[55384] = state(396);
	v->a[55385] = 5;
	v->a[55386] = sym_arithmetic_expansion;
	v->a[55387] = sym_string;
	v->a[55388] = sym_simple_expansion;
	v->a[55389] = sym_expansion;
	v->a[55390] = sym_command_substitution;
	v->a[55391] = 10;
	v->a[55392] = actions(3);
	v->a[55393] = 1;
	v->a[55394] = sym_comment;
	v->a[55395] = actions(99);
	v->a[55396] = 1;
	v->a[55397] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55398] = actions(101);
	v->a[55399] = 1;
	small_parse_table_2770(v);
}

/* EOF small_parse_table_553.c */
