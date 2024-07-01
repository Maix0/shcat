/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_877.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4385(t_small_parse_table_array *v)
{
	v->a[87700] = 9;
	v->a[87701] = anon_sym_BANG;
	v->a[87702] = anon_sym_DASH;
	v->a[87703] = anon_sym_STAR;
	v->a[87704] = anon_sym_QMARK;
	v->a[87705] = anon_sym_DOLLAR;
	v->a[87706] = anon_sym_POUND;
	v->a[87707] = anon_sym_AT;
	v->a[87708] = anon_sym_0;
	v->a[87709] = anon_sym__;
	v->a[87710] = 10;
	v->a[87711] = actions(3);
	v->a[87712] = 1;
	v->a[87713] = sym_comment;
	v->a[87714] = actions(3414);
	v->a[87715] = 1;
	v->a[87716] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87717] = actions(3420);
	v->a[87718] = 1;
	v->a[87719] = sym_string_content;
	small_parse_table_4386(v);
}

void	small_parse_table_4386(t_small_parse_table_array *v)
{
	v->a[87720] = actions(3422);
	v->a[87721] = 1;
	v->a[87722] = anon_sym_DOLLAR_LBRACE;
	v->a[87723] = actions(3424);
	v->a[87724] = 1;
	v->a[87725] = anon_sym_DOLLAR_LPAREN;
	v->a[87726] = actions(3426);
	v->a[87727] = 1;
	v->a[87728] = anon_sym_BQUOTE;
	v->a[87729] = actions(3590);
	v->a[87730] = 1;
	v->a[87731] = anon_sym_DOLLAR;
	v->a[87732] = actions(3592);
	v->a[87733] = 1;
	v->a[87734] = anon_sym_DQUOTE;
	v->a[87735] = state(1871);
	v->a[87736] = 1;
	v->a[87737] = aux_sym_string_repeat1;
	v->a[87738] = state(1959);
	v->a[87739] = 4;
	small_parse_table_4387(v);
}

void	small_parse_table_4387(t_small_parse_table_array *v)
{
	v->a[87740] = sym_arithmetic_expansion;
	v->a[87741] = sym_simple_expansion;
	v->a[87742] = sym_expansion;
	v->a[87743] = sym_command_substitution;
	v->a[87744] = 10;
	v->a[87745] = actions(3);
	v->a[87746] = 1;
	v->a[87747] = sym_comment;
	v->a[87748] = actions(3414);
	v->a[87749] = 1;
	v->a[87750] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87751] = actions(3420);
	v->a[87752] = 1;
	v->a[87753] = sym_string_content;
	v->a[87754] = actions(3422);
	v->a[87755] = 1;
	v->a[87756] = anon_sym_DOLLAR_LBRACE;
	v->a[87757] = actions(3424);
	v->a[87758] = 1;
	v->a[87759] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4388(v);
}

void	small_parse_table_4388(t_small_parse_table_array *v)
{
	v->a[87760] = actions(3426);
	v->a[87761] = 1;
	v->a[87762] = anon_sym_BQUOTE;
	v->a[87763] = actions(3594);
	v->a[87764] = 1;
	v->a[87765] = anon_sym_DOLLAR;
	v->a[87766] = actions(3596);
	v->a[87767] = 1;
	v->a[87768] = anon_sym_DQUOTE;
	v->a[87769] = state(1881);
	v->a[87770] = 1;
	v->a[87771] = aux_sym_string_repeat1;
	v->a[87772] = state(1959);
	v->a[87773] = 4;
	v->a[87774] = sym_arithmetic_expansion;
	v->a[87775] = sym_simple_expansion;
	v->a[87776] = sym_expansion;
	v->a[87777] = sym_command_substitution;
	v->a[87778] = 4;
	v->a[87779] = actions(3);
	small_parse_table_4389(v);
}

void	small_parse_table_4389(t_small_parse_table_array *v)
{
	v->a[87780] = 1;
	v->a[87781] = sym_comment;
	v->a[87782] = actions(441);
	v->a[87783] = 1;
	v->a[87784] = sym_variable_name;
	v->a[87785] = actions(439);
	v->a[87786] = 2;
	v->a[87787] = aux_sym__simple_variable_name_token1;
	v->a[87788] = aux_sym__multiline_variable_name_token1;
	v->a[87789] = actions(437);
	v->a[87790] = 9;
	v->a[87791] = anon_sym_BANG;
	v->a[87792] = anon_sym_DASH;
	v->a[87793] = anon_sym_STAR;
	v->a[87794] = anon_sym_QMARK;
	v->a[87795] = anon_sym_DOLLAR;
	v->a[87796] = anon_sym_POUND;
	v->a[87797] = anon_sym_AT;
	v->a[87798] = anon_sym_0;
	v->a[87799] = anon_sym__;
	small_parse_table_4390(v);
}

/* EOF small_parse_table_877.c */
