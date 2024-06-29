/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_903.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4515(t_small_parse_table_array *v)
{
	v->a[90300] = state(1963);
	v->a[90301] = 4;
	v->a[90302] = sym_arithmetic_expansion;
	v->a[90303] = sym_simple_expansion;
	v->a[90304] = sym_expansion;
	v->a[90305] = sym_command_substitution;
	v->a[90306] = 10;
	v->a[90307] = actions(3);
	v->a[90308] = 1;
	v->a[90309] = sym_comment;
	v->a[90310] = actions(3414);
	v->a[90311] = 1;
	v->a[90312] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90313] = actions(3420);
	v->a[90314] = 1;
	v->a[90315] = sym_string_content;
	v->a[90316] = actions(3422);
	v->a[90317] = 1;
	v->a[90318] = anon_sym_DOLLAR_LBRACE;
	v->a[90319] = actions(3424);
	small_parse_table_4516(v);
}

void	small_parse_table_4516(t_small_parse_table_array *v)
{
	v->a[90320] = 1;
	v->a[90321] = anon_sym_DOLLAR_LPAREN;
	v->a[90322] = actions(3426);
	v->a[90323] = 1;
	v->a[90324] = anon_sym_BQUOTE;
	v->a[90325] = actions(3632);
	v->a[90326] = 1;
	v->a[90327] = anon_sym_DOLLAR;
	v->a[90328] = actions(3634);
	v->a[90329] = 1;
	v->a[90330] = anon_sym_DQUOTE;
	v->a[90331] = state(1863);
	v->a[90332] = 1;
	v->a[90333] = aux_sym_string_repeat1;
	v->a[90334] = state(1963);
	v->a[90335] = 4;
	v->a[90336] = sym_arithmetic_expansion;
	v->a[90337] = sym_simple_expansion;
	v->a[90338] = sym_expansion;
	v->a[90339] = sym_command_substitution;
	small_parse_table_4517(v);
}

void	small_parse_table_4517(t_small_parse_table_array *v)
{
	v->a[90340] = 4;
	v->a[90341] = actions(3);
	v->a[90342] = 1;
	v->a[90343] = sym_comment;
	v->a[90344] = actions(3638);
	v->a[90345] = 1;
	v->a[90346] = anon_sym_esac;
	v->a[90347] = actions(3640);
	v->a[90348] = 1;
	v->a[90349] = sym_extglob_pattern;
	v->a[90350] = actions(3636);
	v->a[90351] = 10;
	v->a[90352] = anon_sym_LPAREN;
	v->a[90353] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90354] = anon_sym_DOLLAR;
	v->a[90355] = anon_sym_DQUOTE;
	v->a[90356] = sym_raw_string;
	v->a[90357] = sym_number;
	v->a[90358] = anon_sym_DOLLAR_LBRACE;
	v->a[90359] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4518(v);
}

void	small_parse_table_4518(t_small_parse_table_array *v)
{
	v->a[90360] = anon_sym_BQUOTE;
	v->a[90361] = sym_word;
	v->a[90362] = 4;
	v->a[90363] = actions(3);
	v->a[90364] = 1;
	v->a[90365] = sym_comment;
	v->a[90366] = actions(1207);
	v->a[90367] = 1;
	v->a[90368] = sym_variable_name;
	v->a[90369] = actions(1205);
	v->a[90370] = 2;
	v->a[90371] = aux_sym__simple_variable_name_token1;
	v->a[90372] = aux_sym__multiline_variable_name_token1;
	v->a[90373] = actions(1203);
	v->a[90374] = 9;
	v->a[90375] = anon_sym_BANG;
	v->a[90376] = anon_sym_DASH;
	v->a[90377] = anon_sym_STAR;
	v->a[90378] = anon_sym_QMARK;
	v->a[90379] = anon_sym_DOLLAR;
	small_parse_table_4519(v);
}

void	small_parse_table_4519(t_small_parse_table_array *v)
{
	v->a[90380] = anon_sym_POUND;
	v->a[90381] = anon_sym_AT;
	v->a[90382] = anon_sym_0;
	v->a[90383] = anon_sym__;
	v->a[90384] = 10;
	v->a[90385] = actions(3);
	v->a[90386] = 1;
	v->a[90387] = sym_comment;
	v->a[90388] = actions(3414);
	v->a[90389] = 1;
	v->a[90390] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90391] = actions(3420);
	v->a[90392] = 1;
	v->a[90393] = sym_string_content;
	v->a[90394] = actions(3422);
	v->a[90395] = 1;
	v->a[90396] = anon_sym_DOLLAR_LBRACE;
	v->a[90397] = actions(3424);
	v->a[90398] = 1;
	v->a[90399] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4520(v);
}

/* EOF small_parse_table_903.c */
