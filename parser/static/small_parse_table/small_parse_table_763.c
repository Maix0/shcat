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
	v->a[76300] = 1;
	v->a[76301] = sym_string_content;
	v->a[76302] = actions(3066);
	v->a[76303] = 1;
	v->a[76304] = anon_sym_DOLLAR_LBRACE;
	v->a[76305] = actions(3068);
	v->a[76306] = 1;
	v->a[76307] = anon_sym_DOLLAR_LPAREN;
	v->a[76308] = actions(3070);
	v->a[76309] = 1;
	v->a[76310] = anon_sym_BQUOTE;
	v->a[76311] = actions(3242);
	v->a[76312] = 1;
	v->a[76313] = anon_sym_DOLLAR;
	v->a[76314] = actions(3244);
	v->a[76315] = 1;
	v->a[76316] = anon_sym_DQUOTE;
	v->a[76317] = state(1610);
	v->a[76318] = 1;
	v->a[76319] = aux_sym_string_repeat1;
	small_parse_table_3816(v);
}

void	small_parse_table_3816(t_small_parse_table_array *v)
{
	v->a[76320] = state(1748);
	v->a[76321] = 4;
	v->a[76322] = sym_arithmetic_expansion;
	v->a[76323] = sym_simple_expansion;
	v->a[76324] = sym_expansion;
	v->a[76325] = sym_command_substitution;
	v->a[76326] = 10;
	v->a[76327] = actions(3);
	v->a[76328] = 1;
	v->a[76329] = sym_comment;
	v->a[76330] = actions(3058);
	v->a[76331] = 1;
	v->a[76332] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76333] = actions(3064);
	v->a[76334] = 1;
	v->a[76335] = sym_string_content;
	v->a[76336] = actions(3066);
	v->a[76337] = 1;
	v->a[76338] = anon_sym_DOLLAR_LBRACE;
	v->a[76339] = actions(3068);
	small_parse_table_3817(v);
}

void	small_parse_table_3817(t_small_parse_table_array *v)
{
	v->a[76340] = 1;
	v->a[76341] = anon_sym_DOLLAR_LPAREN;
	v->a[76342] = actions(3070);
	v->a[76343] = 1;
	v->a[76344] = anon_sym_BQUOTE;
	v->a[76345] = actions(3246);
	v->a[76346] = 1;
	v->a[76347] = anon_sym_DOLLAR;
	v->a[76348] = actions(3248);
	v->a[76349] = 1;
	v->a[76350] = anon_sym_DQUOTE;
	v->a[76351] = state(1610);
	v->a[76352] = 1;
	v->a[76353] = aux_sym_string_repeat1;
	v->a[76354] = state(1748);
	v->a[76355] = 4;
	v->a[76356] = sym_arithmetic_expansion;
	v->a[76357] = sym_simple_expansion;
	v->a[76358] = sym_expansion;
	v->a[76359] = sym_command_substitution;
	small_parse_table_3818(v);
}

void	small_parse_table_3818(t_small_parse_table_array *v)
{
	v->a[76360] = 10;
	v->a[76361] = actions(3);
	v->a[76362] = 1;
	v->a[76363] = sym_comment;
	v->a[76364] = actions(3058);
	v->a[76365] = 1;
	v->a[76366] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76367] = actions(3064);
	v->a[76368] = 1;
	v->a[76369] = sym_string_content;
	v->a[76370] = actions(3066);
	v->a[76371] = 1;
	v->a[76372] = anon_sym_DOLLAR_LBRACE;
	v->a[76373] = actions(3068);
	v->a[76374] = 1;
	v->a[76375] = anon_sym_DOLLAR_LPAREN;
	v->a[76376] = actions(3070);
	v->a[76377] = 1;
	v->a[76378] = anon_sym_BQUOTE;
	v->a[76379] = actions(3250);
	small_parse_table_3819(v);
}

void	small_parse_table_3819(t_small_parse_table_array *v)
{
	v->a[76380] = 1;
	v->a[76381] = anon_sym_DOLLAR;
	v->a[76382] = actions(3252);
	v->a[76383] = 1;
	v->a[76384] = anon_sym_DQUOTE;
	v->a[76385] = state(1610);
	v->a[76386] = 1;
	v->a[76387] = aux_sym_string_repeat1;
	v->a[76388] = state(1748);
	v->a[76389] = 4;
	v->a[76390] = sym_arithmetic_expansion;
	v->a[76391] = sym_simple_expansion;
	v->a[76392] = sym_expansion;
	v->a[76393] = sym_command_substitution;
	v->a[76394] = 10;
	v->a[76395] = actions(3);
	v->a[76396] = 1;
	v->a[76397] = sym_comment;
	v->a[76398] = actions(3058);
	v->a[76399] = 1;
	small_parse_table_3820(v);
}

/* EOF small_parse_table_763.c */
