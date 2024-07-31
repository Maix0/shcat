/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_633.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3165(t_small_parse_table_array *v)
{
	v->a[63300] = state(1695);
	v->a[63301] = 1;
	v->a[63302] = sym__expansion_body;
	v->a[63303] = actions(2564);
	v->a[63304] = 6;
	v->a[63305] = anon_sym_BANG;
	v->a[63306] = anon_sym_DASH;
	v->a[63307] = anon_sym_STAR;
	v->a[63308] = anon_sym_QMARK;
	v->a[63309] = anon_sym_DOLLAR;
	v->a[63310] = anon_sym_AT;
	v->a[63311] = 8;
	v->a[63312] = actions(3);
	v->a[63313] = 1;
	v->a[63314] = sym_comment;
	v->a[63315] = actions(2566);
	v->a[63316] = 1;
	v->a[63317] = anon_sym_POUND;
	v->a[63318] = actions(2568);
	v->a[63319] = 1;
	small_parse_table_3166(v);
}

void	small_parse_table_3166(t_small_parse_table_array *v)
{
	v->a[63320] = aux_sym__simple_variable_name_token1;
	v->a[63321] = actions(2570);
	v->a[63322] = 1;
	v->a[63323] = anon_sym_0;
	v->a[63324] = actions(2572);
	v->a[63325] = 1;
	v->a[63326] = sym_variable_name;
	v->a[63327] = actions(2775);
	v->a[63328] = 1;
	v->a[63329] = anon_sym_RBRACE;
	v->a[63330] = state(1657);
	v->a[63331] = 1;
	v->a[63332] = sym__expansion_body;
	v->a[63333] = actions(2564);
	v->a[63334] = 6;
	v->a[63335] = anon_sym_BANG;
	v->a[63336] = anon_sym_DASH;
	v->a[63337] = anon_sym_STAR;
	v->a[63338] = anon_sym_QMARK;
	v->a[63339] = anon_sym_DOLLAR;
	small_parse_table_3167(v);
}

void	small_parse_table_3167(t_small_parse_table_array *v)
{
	v->a[63340] = anon_sym_AT;
	v->a[63341] = 10;
	v->a[63342] = actions(3);
	v->a[63343] = 1;
	v->a[63344] = sym_comment;
	v->a[63345] = actions(2548);
	v->a[63346] = 1;
	v->a[63347] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63348] = actions(2554);
	v->a[63349] = 1;
	v->a[63350] = sym_string_content;
	v->a[63351] = actions(2556);
	v->a[63352] = 1;
	v->a[63353] = anon_sym_DOLLAR_LBRACE;
	v->a[63354] = actions(2558);
	v->a[63355] = 1;
	v->a[63356] = anon_sym_DOLLAR_LPAREN;
	v->a[63357] = actions(2560);
	v->a[63358] = 1;
	v->a[63359] = anon_sym_BQUOTE;
	small_parse_table_3168(v);
}

void	small_parse_table_3168(t_small_parse_table_array *v)
{
	v->a[63360] = actions(2777);
	v->a[63361] = 1;
	v->a[63362] = anon_sym_DOLLAR;
	v->a[63363] = actions(2779);
	v->a[63364] = 1;
	v->a[63365] = anon_sym_DQUOTE;
	v->a[63366] = state(1357);
	v->a[63367] = 1;
	v->a[63368] = aux_sym_string_repeat1;
	v->a[63369] = state(1477);
	v->a[63370] = 4;
	v->a[63371] = sym_arithmetic_expansion;
	v->a[63372] = sym_simple_expansion;
	v->a[63373] = sym_expansion;
	v->a[63374] = sym_command_substitution;
	v->a[63375] = 10;
	v->a[63376] = actions(3);
	v->a[63377] = 1;
	v->a[63378] = sym_comment;
	v->a[63379] = actions(2548);
	small_parse_table_3169(v);
}

void	small_parse_table_3169(t_small_parse_table_array *v)
{
	v->a[63380] = 1;
	v->a[63381] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63382] = actions(2554);
	v->a[63383] = 1;
	v->a[63384] = sym_string_content;
	v->a[63385] = actions(2556);
	v->a[63386] = 1;
	v->a[63387] = anon_sym_DOLLAR_LBRACE;
	v->a[63388] = actions(2558);
	v->a[63389] = 1;
	v->a[63390] = anon_sym_DOLLAR_LPAREN;
	v->a[63391] = actions(2560);
	v->a[63392] = 1;
	v->a[63393] = anon_sym_BQUOTE;
	v->a[63394] = actions(2781);
	v->a[63395] = 1;
	v->a[63396] = anon_sym_DOLLAR;
	v->a[63397] = actions(2783);
	v->a[63398] = 1;
	v->a[63399] = anon_sym_DQUOTE;
	small_parse_table_3170(v);
}

/* EOF small_parse_table_633.c */
