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
	v->a[76300] = aux_sym_number_token2;
	v->a[76301] = actions(39);
	v->a[76302] = 1;
	v->a[76303] = anon_sym_DOLLAR_LBRACE;
	v->a[76304] = actions(41);
	v->a[76305] = 1;
	v->a[76306] = anon_sym_DOLLAR_LPAREN;
	v->a[76307] = actions(43);
	v->a[76308] = 1;
	v->a[76309] = anon_sym_BQUOTE;
	v->a[76310] = actions(3089);
	v->a[76311] = 1;
	v->a[76312] = sym__bare_dollar;
	v->a[76313] = actions(3087);
	v->a[76314] = 3;
	v->a[76315] = sym_raw_string;
	v->a[76316] = sym__comment_word;
	v->a[76317] = sym_word;
	v->a[76318] = state(393);
	v->a[76319] = 6;
	small_parse_table_3816(v);
}

void	small_parse_table_3816(t_small_parse_table_array *v)
{
	v->a[76320] = sym_arithmetic_expansion;
	v->a[76321] = sym_string;
	v->a[76322] = sym_number;
	v->a[76323] = sym_simple_expansion;
	v->a[76324] = sym_expansion;
	v->a[76325] = sym_command_substitution;
	v->a[76326] = 12;
	v->a[76327] = actions(3);
	v->a[76328] = 1;
	v->a[76329] = sym_comment;
	v->a[76330] = actions(2905);
	v->a[76331] = 1;
	v->a[76332] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76333] = actions(2907);
	v->a[76334] = 1;
	v->a[76335] = anon_sym_DOLLAR;
	v->a[76336] = actions(2909);
	v->a[76337] = 1;
	v->a[76338] = anon_sym_DQUOTE;
	v->a[76339] = actions(2911);
	small_parse_table_3817(v);
}

void	small_parse_table_3817(t_small_parse_table_array *v)
{
	v->a[76340] = 1;
	v->a[76341] = aux_sym_number_token1;
	v->a[76342] = actions(2913);
	v->a[76343] = 1;
	v->a[76344] = aux_sym_number_token2;
	v->a[76345] = actions(2915);
	v->a[76346] = 1;
	v->a[76347] = anon_sym_DOLLAR_LBRACE;
	v->a[76348] = actions(2917);
	v->a[76349] = 1;
	v->a[76350] = anon_sym_DOLLAR_LPAREN;
	v->a[76351] = actions(2919);
	v->a[76352] = 1;
	v->a[76353] = anon_sym_BQUOTE;
	v->a[76354] = actions(3091);
	v->a[76355] = 2;
	v->a[76356] = sym_raw_string;
	v->a[76357] = sym_word;
	v->a[76358] = state(213);
	v->a[76359] = 2;
	small_parse_table_3818(v);
}

void	small_parse_table_3818(t_small_parse_table_array *v)
{
	v->a[76360] = sym_concatenation;
	v->a[76361] = aux_sym_for_statement_repeat1;
	v->a[76362] = state(431);
	v->a[76363] = 6;
	v->a[76364] = sym_arithmetic_expansion;
	v->a[76365] = sym_string;
	v->a[76366] = sym_number;
	v->a[76367] = sym_simple_expansion;
	v->a[76368] = sym_expansion;
	v->a[76369] = sym_command_substitution;
	v->a[76370] = 12;
	v->a[76371] = actions(3);
	v->a[76372] = 1;
	v->a[76373] = sym_comment;
	v->a[76374] = actions(2905);
	v->a[76375] = 1;
	v->a[76376] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76377] = actions(2907);
	v->a[76378] = 1;
	v->a[76379] = anon_sym_DOLLAR;
	small_parse_table_3819(v);
}

void	small_parse_table_3819(t_small_parse_table_array *v)
{
	v->a[76380] = actions(2909);
	v->a[76381] = 1;
	v->a[76382] = anon_sym_DQUOTE;
	v->a[76383] = actions(2911);
	v->a[76384] = 1;
	v->a[76385] = aux_sym_number_token1;
	v->a[76386] = actions(2913);
	v->a[76387] = 1;
	v->a[76388] = aux_sym_number_token2;
	v->a[76389] = actions(2915);
	v->a[76390] = 1;
	v->a[76391] = anon_sym_DOLLAR_LBRACE;
	v->a[76392] = actions(2917);
	v->a[76393] = 1;
	v->a[76394] = anon_sym_DOLLAR_LPAREN;
	v->a[76395] = actions(2919);
	v->a[76396] = 1;
	v->a[76397] = anon_sym_BQUOTE;
	v->a[76398] = actions(3091);
	v->a[76399] = 2;
	small_parse_table_3820(v);
}

/* EOF small_parse_table_763.c */
