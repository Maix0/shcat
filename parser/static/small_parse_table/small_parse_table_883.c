/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_883.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4415(t_small_parse_table_array *v)
{
	v->a[88300] = actions(3);
	v->a[88301] = 1;
	v->a[88302] = sym_comment;
	v->a[88303] = actions(3462);
	v->a[88304] = 1;
	v->a[88305] = sym_variable_name;
	v->a[88306] = actions(3460);
	v->a[88307] = 2;
	v->a[88308] = aux_sym__simple_variable_name_token1;
	v->a[88309] = aux_sym__multiline_variable_name_token1;
	v->a[88310] = actions(3458);
	v->a[88311] = 9;
	v->a[88312] = anon_sym_BANG;
	v->a[88313] = anon_sym_DASH;
	v->a[88314] = anon_sym_STAR;
	v->a[88315] = anon_sym_QMARK;
	v->a[88316] = anon_sym_DOLLAR;
	v->a[88317] = anon_sym_POUND;
	v->a[88318] = anon_sym_AT;
	v->a[88319] = anon_sym_0;
	small_parse_table_4416(v);
}

void	small_parse_table_4416(t_small_parse_table_array *v)
{
	v->a[88320] = anon_sym__;
	v->a[88321] = 10;
	v->a[88322] = actions(3);
	v->a[88323] = 1;
	v->a[88324] = sym_comment;
	v->a[88325] = actions(3712);
	v->a[88326] = 1;
	v->a[88327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88328] = actions(3716);
	v->a[88329] = 1;
	v->a[88330] = sym_string_content;
	v->a[88331] = actions(3718);
	v->a[88332] = 1;
	v->a[88333] = anon_sym_DOLLAR_LBRACE;
	v->a[88334] = actions(3720);
	v->a[88335] = 1;
	v->a[88336] = anon_sym_DOLLAR_LPAREN;
	v->a[88337] = actions(3722);
	v->a[88338] = 1;
	v->a[88339] = anon_sym_BQUOTE;
	small_parse_table_4417(v);
}

void	small_parse_table_4417(t_small_parse_table_array *v)
{
	v->a[88340] = actions(3792);
	v->a[88341] = 1;
	v->a[88342] = anon_sym_DOLLAR;
	v->a[88343] = actions(3794);
	v->a[88344] = 1;
	v->a[88345] = anon_sym_DQUOTE;
	v->a[88346] = state(1752);
	v->a[88347] = 1;
	v->a[88348] = aux_sym_string_repeat1;
	v->a[88349] = state(1869);
	v->a[88350] = 4;
	v->a[88351] = sym_arithmetic_expansion;
	v->a[88352] = sym_simple_expansion;
	v->a[88353] = sym_expansion;
	v->a[88354] = sym_command_substitution;
	v->a[88355] = 3;
	v->a[88356] = actions(3);
	v->a[88357] = 1;
	v->a[88358] = sym_comment;
	v->a[88359] = actions(3610);
	small_parse_table_4418(v);
}

void	small_parse_table_4418(t_small_parse_table_array *v)
{
	v->a[88360] = 1;
	v->a[88361] = sym_extglob_pattern;
	v->a[88362] = actions(3606);
	v->a[88363] = 11;
	v->a[88364] = anon_sym_LPAREN;
	v->a[88365] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88366] = anon_sym_DOLLAR;
	v->a[88367] = anon_sym_DQUOTE;
	v->a[88368] = sym_raw_string;
	v->a[88369] = aux_sym_number_token1;
	v->a[88370] = aux_sym_number_token2;
	v->a[88371] = anon_sym_DOLLAR_LBRACE;
	v->a[88372] = anon_sym_DOLLAR_LPAREN;
	v->a[88373] = anon_sym_BQUOTE;
	v->a[88374] = sym_word;
	v->a[88375] = 10;
	v->a[88376] = actions(3);
	v->a[88377] = 1;
	v->a[88378] = sym_comment;
	v->a[88379] = actions(3476);
	small_parse_table_4419(v);
}

void	small_parse_table_4419(t_small_parse_table_array *v)
{
	v->a[88380] = 1;
	v->a[88381] = anon_sym_DQUOTE;
	v->a[88382] = actions(3712);
	v->a[88383] = 1;
	v->a[88384] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88385] = actions(3716);
	v->a[88386] = 1;
	v->a[88387] = sym_string_content;
	v->a[88388] = actions(3718);
	v->a[88389] = 1;
	v->a[88390] = anon_sym_DOLLAR_LBRACE;
	v->a[88391] = actions(3720);
	v->a[88392] = 1;
	v->a[88393] = anon_sym_DOLLAR_LPAREN;
	v->a[88394] = actions(3722);
	v->a[88395] = 1;
	v->a[88396] = anon_sym_BQUOTE;
	v->a[88397] = actions(3796);
	v->a[88398] = 1;
	v->a[88399] = anon_sym_DOLLAR;
	small_parse_table_4420(v);
}

/* EOF small_parse_table_883.c */
