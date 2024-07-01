/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_763.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3815(t_small_parse_table_array *v)
{
	v->a[76300] = sym_word;
	v->a[76301] = state(620);
	v->a[76302] = 5;
	v->a[76303] = sym_arithmetic_expansion;
	v->a[76304] = sym_string;
	v->a[76305] = sym_simple_expansion;
	v->a[76306] = sym_expansion;
	v->a[76307] = sym_command_substitution;
	v->a[76308] = 10;
	v->a[76309] = actions(3);
	v->a[76310] = 1;
	v->a[76311] = sym_comment;
	v->a[76312] = actions(459);
	v->a[76313] = 1;
	v->a[76314] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76315] = actions(463);
	v->a[76316] = 1;
	v->a[76317] = anon_sym_DQUOTE;
	v->a[76318] = actions(465);
	v->a[76319] = 1;
	small_parse_table_3816(v);
}

void	small_parse_table_3816(t_small_parse_table_array *v)
{
	v->a[76320] = anon_sym_DOLLAR_LBRACE;
	v->a[76321] = actions(467);
	v->a[76322] = 1;
	v->a[76323] = anon_sym_DOLLAR_LPAREN;
	v->a[76324] = actions(469);
	v->a[76325] = 1;
	v->a[76326] = anon_sym_BQUOTE;
	v->a[76327] = actions(2583);
	v->a[76328] = 1;
	v->a[76329] = sym__bare_dollar;
	v->a[76330] = actions(2905);
	v->a[76331] = 1;
	v->a[76332] = anon_sym_DOLLAR;
	v->a[76333] = actions(2579);
	v->a[76334] = 5;
	v->a[76335] = aux_sym_concatenation_token1;
	v->a[76336] = sym_raw_string;
	v->a[76337] = sym_number;
	v->a[76338] = sym__comment_word;
	v->a[76339] = sym_word;
	small_parse_table_3817(v);
}

void	small_parse_table_3817(t_small_parse_table_array *v)
{
	v->a[76340] = state(531);
	v->a[76341] = 5;
	v->a[76342] = sym_arithmetic_expansion;
	v->a[76343] = sym_string;
	v->a[76344] = sym_simple_expansion;
	v->a[76345] = sym_expansion;
	v->a[76346] = sym_command_substitution;
	v->a[76347] = 10;
	v->a[76348] = actions(3);
	v->a[76349] = 1;
	v->a[76350] = sym_comment;
	v->a[76351] = actions(2587);
	v->a[76352] = 1;
	v->a[76353] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76354] = actions(2591);
	v->a[76355] = 1;
	v->a[76356] = anon_sym_DQUOTE;
	v->a[76357] = actions(2593);
	v->a[76358] = 1;
	v->a[76359] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3818(v);
}

void	small_parse_table_3818(t_small_parse_table_array *v)
{
	v->a[76360] = actions(2595);
	v->a[76361] = 1;
	v->a[76362] = anon_sym_DOLLAR_LPAREN;
	v->a[76363] = actions(2597);
	v->a[76364] = 1;
	v->a[76365] = anon_sym_BQUOTE;
	v->a[76366] = actions(2599);
	v->a[76367] = 1;
	v->a[76368] = sym__bare_dollar;
	v->a[76369] = actions(2741);
	v->a[76370] = 1;
	v->a[76371] = anon_sym_DOLLAR;
	v->a[76372] = actions(2585);
	v->a[76373] = 5;
	v->a[76374] = aux_sym_concatenation_token1;
	v->a[76375] = sym_raw_string;
	v->a[76376] = sym_number;
	v->a[76377] = sym__comment_word;
	v->a[76378] = sym_word;
	v->a[76379] = state(556);
	small_parse_table_3819(v);
}

void	small_parse_table_3819(t_small_parse_table_array *v)
{
	v->a[76380] = 5;
	v->a[76381] = sym_arithmetic_expansion;
	v->a[76382] = sym_string;
	v->a[76383] = sym_simple_expansion;
	v->a[76384] = sym_expansion;
	v->a[76385] = sym_command_substitution;
	v->a[76386] = 11;
	v->a[76387] = actions(3);
	v->a[76388] = 1;
	v->a[76389] = sym_comment;
	v->a[76390] = actions(1778);
	v->a[76391] = 1;
	v->a[76392] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76393] = actions(1780);
	v->a[76394] = 1;
	v->a[76395] = anon_sym_DOLLAR;
	v->a[76396] = actions(1782);
	v->a[76397] = 1;
	v->a[76398] = anon_sym_DQUOTE;
	v->a[76399] = actions(1784);
	small_parse_table_3820(v);
}

/* EOF small_parse_table_763.c */
