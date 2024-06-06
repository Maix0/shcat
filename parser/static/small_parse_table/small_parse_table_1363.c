/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1363.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6815(t_small_parse_table_array *v)
{
	v->a[136300] = aux_sym__simple_variable_name_token1;
	v->a[136301] = actions(7758);
	v->a[136302] = 1;
	v->a[136303] = sym_variable_name;
	v->a[136304] = actions(7916);
	v->a[136305] = 1;
	v->a[136306] = anon_sym_RBRACE3;
	v->a[136307] = state(3783);
	v->a[136308] = 1;
	v->a[136309] = sym__expansion_body;
	v->a[136310] = actions(7756);
	v->a[136311] = 2;
	v->a[136312] = anon_sym_0;
	v->a[136313] = anon_sym__;
	v->a[136314] = actions(7750);
	v->a[136315] = 7;
	v->a[136316] = anon_sym_BANG;
	v->a[136317] = anon_sym_DASH;
	v->a[136318] = anon_sym_STAR;
	v->a[136319] = anon_sym_QMARK;
	small_parse_table_6816(v);
}

void	small_parse_table_6816(t_small_parse_table_array *v)
{
	v->a[136320] = anon_sym_DOLLAR;
	v->a[136321] = anon_sym_POUND;
	v->a[136322] = anon_sym_AT;
	v->a[136323] = 11;
	v->a[136324] = actions(3);
	v->a[136325] = 1;
	v->a[136326] = sym_comment;
	v->a[136327] = actions(7560);
	v->a[136328] = 1;
	v->a[136329] = anon_sym_DQUOTE;
	v->a[136330] = actions(7760);
	v->a[136331] = 1;
	v->a[136332] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136333] = actions(7766);
	v->a[136334] = 1;
	v->a[136335] = sym_string_content;
	v->a[136336] = actions(7768);
	v->a[136337] = 1;
	v->a[136338] = anon_sym_DOLLAR_LBRACE;
	v->a[136339] = actions(7770);
	small_parse_table_6817(v);
}

void	small_parse_table_6817(t_small_parse_table_array *v)
{
	v->a[136340] = 1;
	v->a[136341] = anon_sym_DOLLAR_LPAREN;
	v->a[136342] = actions(7772);
	v->a[136343] = 1;
	v->a[136344] = anon_sym_BQUOTE;
	v->a[136345] = actions(7774);
	v->a[136346] = 1;
	v->a[136347] = anon_sym_DOLLAR_BQUOTE;
	v->a[136348] = actions(7918);
	v->a[136349] = 1;
	v->a[136350] = anon_sym_DOLLAR;
	v->a[136351] = state(3061);
	v->a[136352] = 1;
	v->a[136353] = aux_sym_string_repeat1;
	v->a[136354] = state(3218);
	v->a[136355] = 4;
	v->a[136356] = sym_arithmetic_expansion;
	v->a[136357] = sym_simple_expansion;
	v->a[136358] = sym_expansion;
	v->a[136359] = sym_command_substitution;
	small_parse_table_6818(v);
}

void	small_parse_table_6818(t_small_parse_table_array *v)
{
	v->a[136360] = 7;
	v->a[136361] = actions(3);
	v->a[136362] = 1;
	v->a[136363] = sym_comment;
	v->a[136364] = actions(7754);
	v->a[136365] = 1;
	v->a[136366] = aux_sym__simple_variable_name_token1;
	v->a[136367] = actions(7758);
	v->a[136368] = 1;
	v->a[136369] = sym_variable_name;
	v->a[136370] = actions(7920);
	v->a[136371] = 1;
	v->a[136372] = anon_sym_RBRACE3;
	v->a[136373] = state(3763);
	v->a[136374] = 1;
	v->a[136375] = sym__expansion_body;
	v->a[136376] = actions(7756);
	v->a[136377] = 2;
	v->a[136378] = anon_sym_0;
	v->a[136379] = anon_sym__;
	small_parse_table_6819(v);
}

void	small_parse_table_6819(t_small_parse_table_array *v)
{
	v->a[136380] = actions(7750);
	v->a[136381] = 7;
	v->a[136382] = anon_sym_BANG;
	v->a[136383] = anon_sym_DASH;
	v->a[136384] = anon_sym_STAR;
	v->a[136385] = anon_sym_QMARK;
	v->a[136386] = anon_sym_DOLLAR;
	v->a[136387] = anon_sym_POUND;
	v->a[136388] = anon_sym_AT;
	v->a[136389] = 11;
	v->a[136390] = actions(3);
	v->a[136391] = 1;
	v->a[136392] = sym_comment;
	v->a[136393] = actions(7760);
	v->a[136394] = 1;
	v->a[136395] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136396] = actions(7766);
	v->a[136397] = 1;
	v->a[136398] = sym_string_content;
	v->a[136399] = actions(7768);
	small_parse_table_6820(v);
}

/* EOF small_parse_table_1363.c */
