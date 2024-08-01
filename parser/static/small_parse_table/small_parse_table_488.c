/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_488.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2440(t_small_parse_table_array *v)
{
	v->a[48800] = 1;
	v->a[48801] = sym_string_content;
	v->a[48802] = actions(2301);
	v->a[48803] = 1;
	v->a[48804] = anon_sym_DOLLAR_LBRACE;
	v->a[48805] = actions(2303);
	v->a[48806] = 1;
	v->a[48807] = anon_sym_DOLLAR_LPAREN;
	v->a[48808] = actions(2305);
	v->a[48809] = 1;
	v->a[48810] = anon_sym_BQUOTE;
	v->a[48811] = actions(2313);
	v->a[48812] = 1;
	v->a[48813] = anon_sym_DOLLAR;
	v->a[48814] = actions(2315);
	v->a[48815] = 1;
	v->a[48816] = anon_sym_DQUOTE;
	v->a[48817] = state(1176);
	v->a[48818] = 1;
	v->a[48819] = aux_sym_string_repeat1;
	small_parse_table_2441(v);
}

void	small_parse_table_2441(t_small_parse_table_array *v)
{
	v->a[48820] = state(1394);
	v->a[48821] = 4;
	v->a[48822] = sym_arithmetic_expansion;
	v->a[48823] = sym_simple_expansion;
	v->a[48824] = sym_expansion;
	v->a[48825] = sym_command_substitution;
	v->a[48826] = 10;
	v->a[48827] = actions(3);
	v->a[48828] = 1;
	v->a[48829] = sym_comment;
	v->a[48830] = actions(2293);
	v->a[48831] = 1;
	v->a[48832] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48833] = actions(2299);
	v->a[48834] = 1;
	v->a[48835] = sym_string_content;
	v->a[48836] = actions(2301);
	v->a[48837] = 1;
	v->a[48838] = anon_sym_DOLLAR_LBRACE;
	v->a[48839] = actions(2303);
	small_parse_table_2442(v);
}

void	small_parse_table_2442(t_small_parse_table_array *v)
{
	v->a[48840] = 1;
	v->a[48841] = anon_sym_DOLLAR_LPAREN;
	v->a[48842] = actions(2305);
	v->a[48843] = 1;
	v->a[48844] = anon_sym_BQUOTE;
	v->a[48845] = actions(2317);
	v->a[48846] = 1;
	v->a[48847] = anon_sym_DOLLAR;
	v->a[48848] = actions(2319);
	v->a[48849] = 1;
	v->a[48850] = anon_sym_DQUOTE;
	v->a[48851] = state(1176);
	v->a[48852] = 1;
	v->a[48853] = aux_sym_string_repeat1;
	v->a[48854] = state(1394);
	v->a[48855] = 4;
	v->a[48856] = sym_arithmetic_expansion;
	v->a[48857] = sym_simple_expansion;
	v->a[48858] = sym_expansion;
	v->a[48859] = sym_command_substitution;
	small_parse_table_2443(v);
}

void	small_parse_table_2443(t_small_parse_table_array *v)
{
	v->a[48860] = 10;
	v->a[48861] = actions(3);
	v->a[48862] = 1;
	v->a[48863] = sym_comment;
	v->a[48864] = actions(2293);
	v->a[48865] = 1;
	v->a[48866] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48867] = actions(2299);
	v->a[48868] = 1;
	v->a[48869] = sym_string_content;
	v->a[48870] = actions(2301);
	v->a[48871] = 1;
	v->a[48872] = anon_sym_DOLLAR_LBRACE;
	v->a[48873] = actions(2303);
	v->a[48874] = 1;
	v->a[48875] = anon_sym_DOLLAR_LPAREN;
	v->a[48876] = actions(2305);
	v->a[48877] = 1;
	v->a[48878] = anon_sym_BQUOTE;
	v->a[48879] = actions(2321);
	small_parse_table_2444(v);
}

void	small_parse_table_2444(t_small_parse_table_array *v)
{
	v->a[48880] = 1;
	v->a[48881] = anon_sym_DOLLAR;
	v->a[48882] = actions(2323);
	v->a[48883] = 1;
	v->a[48884] = anon_sym_DQUOTE;
	v->a[48885] = state(1103);
	v->a[48886] = 1;
	v->a[48887] = aux_sym_string_repeat1;
	v->a[48888] = state(1394);
	v->a[48889] = 4;
	v->a[48890] = sym_arithmetic_expansion;
	v->a[48891] = sym_simple_expansion;
	v->a[48892] = sym_expansion;
	v->a[48893] = sym_command_substitution;
	v->a[48894] = 8;
	v->a[48895] = actions(3);
	v->a[48896] = 1;
	v->a[48897] = sym_comment;
	v->a[48898] = actions(2277);
	v->a[48899] = 1;
	small_parse_table_2445(v);
}

/* EOF small_parse_table_488.c */
