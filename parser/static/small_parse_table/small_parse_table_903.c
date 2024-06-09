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
	v->a[90300] = aux_sym_string_repeat1;
	v->a[90301] = state(1869);
	v->a[90302] = 4;
	v->a[90303] = sym_arithmetic_expansion;
	v->a[90304] = sym_simple_expansion;
	v->a[90305] = sym_expansion;
	v->a[90306] = sym_command_substitution;
	v->a[90307] = 10;
	v->a[90308] = actions(3);
	v->a[90309] = 1;
	v->a[90310] = sym_comment;
	v->a[90311] = actions(3548);
	v->a[90312] = 1;
	v->a[90313] = anon_sym_DQUOTE;
	v->a[90314] = actions(3712);
	v->a[90315] = 1;
	v->a[90316] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90317] = actions(3716);
	v->a[90318] = 1;
	v->a[90319] = sym_string_content;
	small_parse_table_4516(v);
}

void	small_parse_table_4516(t_small_parse_table_array *v)
{
	v->a[90320] = actions(3718);
	v->a[90321] = 1;
	v->a[90322] = anon_sym_DOLLAR_LBRACE;
	v->a[90323] = actions(3720);
	v->a[90324] = 1;
	v->a[90325] = anon_sym_DOLLAR_LPAREN;
	v->a[90326] = actions(3722);
	v->a[90327] = 1;
	v->a[90328] = anon_sym_BQUOTE;
	v->a[90329] = actions(3962);
	v->a[90330] = 1;
	v->a[90331] = anon_sym_DOLLAR;
	v->a[90332] = state(1738);
	v->a[90333] = 1;
	v->a[90334] = aux_sym_string_repeat1;
	v->a[90335] = state(1869);
	v->a[90336] = 4;
	v->a[90337] = sym_arithmetic_expansion;
	v->a[90338] = sym_simple_expansion;
	v->a[90339] = sym_expansion;
	small_parse_table_4517(v);
}

void	small_parse_table_4517(t_small_parse_table_array *v)
{
	v->a[90340] = sym_command_substitution;
	v->a[90341] = 10;
	v->a[90342] = actions(3);
	v->a[90343] = 1;
	v->a[90344] = sym_comment;
	v->a[90345] = actions(3562);
	v->a[90346] = 1;
	v->a[90347] = anon_sym_DQUOTE;
	v->a[90348] = actions(3712);
	v->a[90349] = 1;
	v->a[90350] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90351] = actions(3716);
	v->a[90352] = 1;
	v->a[90353] = sym_string_content;
	v->a[90354] = actions(3718);
	v->a[90355] = 1;
	v->a[90356] = anon_sym_DOLLAR_LBRACE;
	v->a[90357] = actions(3720);
	v->a[90358] = 1;
	v->a[90359] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4518(v);
}

void	small_parse_table_4518(t_small_parse_table_array *v)
{
	v->a[90360] = actions(3722);
	v->a[90361] = 1;
	v->a[90362] = anon_sym_BQUOTE;
	v->a[90363] = actions(3964);
	v->a[90364] = 1;
	v->a[90365] = anon_sym_DOLLAR;
	v->a[90366] = state(1738);
	v->a[90367] = 1;
	v->a[90368] = aux_sym_string_repeat1;
	v->a[90369] = state(1869);
	v->a[90370] = 4;
	v->a[90371] = sym_arithmetic_expansion;
	v->a[90372] = sym_simple_expansion;
	v->a[90373] = sym_expansion;
	v->a[90374] = sym_command_substitution;
	v->a[90375] = 6;
	v->a[90376] = actions(1404);
	v->a[90377] = 1;
	v->a[90378] = sym_comment;
	v->a[90379] = actions(3972);
	small_parse_table_4519(v);
}

void	small_parse_table_4519(t_small_parse_table_array *v)
{
	v->a[90380] = 1;
	v->a[90381] = anon_sym_LT_LT;
	v->a[90382] = actions(3974);
	v->a[90383] = 1;
	v->a[90384] = anon_sym_LT_LT_DASH;
	v->a[90385] = actions(3970);
	v->a[90386] = 2;
	v->a[90387] = anon_sym_LT_AMP_DASH;
	v->a[90388] = anon_sym_GT_AMP_DASH;
	v->a[90389] = actions(3968);
	v->a[90390] = 3;
	v->a[90391] = anon_sym_GT_GT;
	v->a[90392] = anon_sym_AMP_GT_GT;
	v->a[90393] = anon_sym_GT_PIPE;
	v->a[90394] = actions(3966);
	v->a[90395] = 5;
	v->a[90396] = anon_sym_LT;
	v->a[90397] = anon_sym_GT;
	v->a[90398] = anon_sym_AMP_GT;
	v->a[90399] = anon_sym_LT_AMP;
	small_parse_table_4520(v);
}

/* EOF small_parse_table_903.c */
