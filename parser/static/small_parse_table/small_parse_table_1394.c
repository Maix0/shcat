/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1394.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6970(t_small_parse_table_array *v)
{
	v->a[139400] = state(3061);
	v->a[139401] = 1;
	v->a[139402] = aux_sym_string_repeat1;
	v->a[139403] = state(3218);
	v->a[139404] = 4;
	v->a[139405] = sym_arithmetic_expansion;
	v->a[139406] = sym_simple_expansion;
	v->a[139407] = sym_expansion;
	v->a[139408] = sym_command_substitution;
	v->a[139409] = 11;
	v->a[139410] = actions(3);
	v->a[139411] = 1;
	v->a[139412] = sym_comment;
	v->a[139413] = actions(7760);
	v->a[139414] = 1;
	v->a[139415] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[139416] = actions(7766);
	v->a[139417] = 1;
	v->a[139418] = sym_string_content;
	v->a[139419] = actions(7768);
	small_parse_table_6971(v);
}

void	small_parse_table_6971(t_small_parse_table_array *v)
{
	v->a[139420] = 1;
	v->a[139421] = anon_sym_DOLLAR_LBRACE;
	v->a[139422] = actions(7770);
	v->a[139423] = 1;
	v->a[139424] = anon_sym_DOLLAR_LPAREN;
	v->a[139425] = actions(7772);
	v->a[139426] = 1;
	v->a[139427] = anon_sym_BQUOTE;
	v->a[139428] = actions(7774);
	v->a[139429] = 1;
	v->a[139430] = anon_sym_DOLLAR_BQUOTE;
	v->a[139431] = actions(8173);
	v->a[139432] = 1;
	v->a[139433] = anon_sym_DOLLAR;
	v->a[139434] = actions(8175);
	v->a[139435] = 1;
	v->a[139436] = anon_sym_DQUOTE;
	v->a[139437] = state(3134);
	v->a[139438] = 1;
	v->a[139439] = aux_sym_string_repeat1;
	small_parse_table_6972(v);
}

void	small_parse_table_6972(t_small_parse_table_array *v)
{
	v->a[139440] = state(3218);
	v->a[139441] = 4;
	v->a[139442] = sym_arithmetic_expansion;
	v->a[139443] = sym_simple_expansion;
	v->a[139444] = sym_expansion;
	v->a[139445] = sym_command_substitution;
	v->a[139446] = 7;
	v->a[139447] = actions(3);
	v->a[139448] = 1;
	v->a[139449] = sym_comment;
	v->a[139450] = actions(7754);
	v->a[139451] = 1;
	v->a[139452] = aux_sym__simple_variable_name_token1;
	v->a[139453] = actions(7758);
	v->a[139454] = 1;
	v->a[139455] = sym_variable_name;
	v->a[139456] = actions(8177);
	v->a[139457] = 1;
	v->a[139458] = anon_sym_RBRACE3;
	v->a[139459] = state(3607);
	small_parse_table_6973(v);
}

void	small_parse_table_6973(t_small_parse_table_array *v)
{
	v->a[139460] = 1;
	v->a[139461] = sym__expansion_body;
	v->a[139462] = actions(7756);
	v->a[139463] = 2;
	v->a[139464] = anon_sym_0;
	v->a[139465] = anon_sym__;
	v->a[139466] = actions(7750);
	v->a[139467] = 7;
	v->a[139468] = anon_sym_BANG;
	v->a[139469] = anon_sym_DASH;
	v->a[139470] = anon_sym_STAR;
	v->a[139471] = anon_sym_QMARK;
	v->a[139472] = anon_sym_DOLLAR;
	v->a[139473] = anon_sym_POUND;
	v->a[139474] = anon_sym_AT;
	v->a[139475] = 11;
	v->a[139476] = actions(3);
	v->a[139477] = 1;
	v->a[139478] = sym_comment;
	v->a[139479] = actions(7610);
	small_parse_table_6974(v);
}

void	small_parse_table_6974(t_small_parse_table_array *v)
{
	v->a[139480] = 1;
	v->a[139481] = anon_sym_DQUOTE;
	v->a[139482] = actions(7760);
	v->a[139483] = 1;
	v->a[139484] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[139485] = actions(7766);
	v->a[139486] = 1;
	v->a[139487] = sym_string_content;
	v->a[139488] = actions(7768);
	v->a[139489] = 1;
	v->a[139490] = anon_sym_DOLLAR_LBRACE;
	v->a[139491] = actions(7770);
	v->a[139492] = 1;
	v->a[139493] = anon_sym_DOLLAR_LPAREN;
	v->a[139494] = actions(7772);
	v->a[139495] = 1;
	v->a[139496] = anon_sym_BQUOTE;
	v->a[139497] = actions(7774);
	v->a[139498] = 1;
	v->a[139499] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6975(v);
}

/* EOF small_parse_table_1394.c */
