/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_863.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4315(t_small_parse_table_array *v)
{
	v->a[86300] = 1;
	v->a[86301] = anon_sym_DOLLAR_LPAREN;
	v->a[86302] = actions(3426);
	v->a[86303] = 1;
	v->a[86304] = anon_sym_BQUOTE;
	v->a[86305] = actions(3460);
	v->a[86306] = 1;
	v->a[86307] = anon_sym_DOLLAR;
	v->a[86308] = actions(3462);
	v->a[86309] = 1;
	v->a[86310] = anon_sym_DQUOTE;
	v->a[86311] = state(1906);
	v->a[86312] = 1;
	v->a[86313] = aux_sym_string_repeat1;
	v->a[86314] = state(1959);
	v->a[86315] = 4;
	v->a[86316] = sym_arithmetic_expansion;
	v->a[86317] = sym_simple_expansion;
	v->a[86318] = sym_expansion;
	v->a[86319] = sym_command_substitution;
	small_parse_table_4316(v);
}

void	small_parse_table_4316(t_small_parse_table_array *v)
{
	v->a[86320] = 4;
	v->a[86321] = actions(3);
	v->a[86322] = 1;
	v->a[86323] = sym_comment;
	v->a[86324] = actions(2980);
	v->a[86325] = 1;
	v->a[86326] = sym_variable_name;
	v->a[86327] = actions(2978);
	v->a[86328] = 2;
	v->a[86329] = aux_sym__simple_variable_name_token1;
	v->a[86330] = aux_sym__multiline_variable_name_token1;
	v->a[86331] = actions(2976);
	v->a[86332] = 9;
	v->a[86333] = anon_sym_BANG;
	v->a[86334] = anon_sym_DASH;
	v->a[86335] = anon_sym_STAR;
	v->a[86336] = anon_sym_QMARK;
	v->a[86337] = anon_sym_DOLLAR;
	v->a[86338] = anon_sym_POUND;
	v->a[86339] = anon_sym_AT;
	small_parse_table_4317(v);
}

void	small_parse_table_4317(t_small_parse_table_array *v)
{
	v->a[86340] = anon_sym_0;
	v->a[86341] = anon_sym__;
	v->a[86342] = 4;
	v->a[86343] = actions(3);
	v->a[86344] = 1;
	v->a[86345] = sym_comment;
	v->a[86346] = actions(435);
	v->a[86347] = 1;
	v->a[86348] = sym_variable_name;
	v->a[86349] = actions(433);
	v->a[86350] = 2;
	v->a[86351] = aux_sym__simple_variable_name_token1;
	v->a[86352] = aux_sym__multiline_variable_name_token1;
	v->a[86353] = actions(431);
	v->a[86354] = 9;
	v->a[86355] = anon_sym_BANG;
	v->a[86356] = anon_sym_DASH;
	v->a[86357] = anon_sym_STAR;
	v->a[86358] = anon_sym_QMARK;
	v->a[86359] = anon_sym_DOLLAR;
	small_parse_table_4318(v);
}

void	small_parse_table_4318(t_small_parse_table_array *v)
{
	v->a[86360] = anon_sym_POUND;
	v->a[86361] = anon_sym_AT;
	v->a[86362] = anon_sym_0;
	v->a[86363] = anon_sym__;
	v->a[86364] = 10;
	v->a[86365] = actions(3);
	v->a[86366] = 1;
	v->a[86367] = sym_comment;
	v->a[86368] = actions(3414);
	v->a[86369] = 1;
	v->a[86370] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86371] = actions(3420);
	v->a[86372] = 1;
	v->a[86373] = sym_string_content;
	v->a[86374] = actions(3422);
	v->a[86375] = 1;
	v->a[86376] = anon_sym_DOLLAR_LBRACE;
	v->a[86377] = actions(3424);
	v->a[86378] = 1;
	v->a[86379] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4319(v);
}

void	small_parse_table_4319(t_small_parse_table_array *v)
{
	v->a[86380] = actions(3426);
	v->a[86381] = 1;
	v->a[86382] = anon_sym_BQUOTE;
	v->a[86383] = actions(3464);
	v->a[86384] = 1;
	v->a[86385] = anon_sym_DOLLAR;
	v->a[86386] = actions(3466);
	v->a[86387] = 1;
	v->a[86388] = anon_sym_DQUOTE;
	v->a[86389] = state(1824);
	v->a[86390] = 1;
	v->a[86391] = aux_sym_string_repeat1;
	v->a[86392] = state(1959);
	v->a[86393] = 4;
	v->a[86394] = sym_arithmetic_expansion;
	v->a[86395] = sym_simple_expansion;
	v->a[86396] = sym_expansion;
	v->a[86397] = sym_command_substitution;
	v->a[86398] = 10;
	v->a[86399] = actions(3);
	small_parse_table_4320(v);
}

/* EOF small_parse_table_863.c */
