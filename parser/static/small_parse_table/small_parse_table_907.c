/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_907.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4535(t_small_parse_table_array *v)
{
	v->a[90700] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90701] = actions(3420);
	v->a[90702] = 1;
	v->a[90703] = sym_string_content;
	v->a[90704] = actions(3422);
	v->a[90705] = 1;
	v->a[90706] = anon_sym_DOLLAR_LBRACE;
	v->a[90707] = actions(3424);
	v->a[90708] = 1;
	v->a[90709] = anon_sym_DOLLAR_LPAREN;
	v->a[90710] = actions(3426);
	v->a[90711] = 1;
	v->a[90712] = anon_sym_BQUOTE;
	v->a[90713] = actions(3686);
	v->a[90714] = 1;
	v->a[90715] = anon_sym_DOLLAR;
	v->a[90716] = actions(3688);
	v->a[90717] = 1;
	v->a[90718] = anon_sym_DQUOTE;
	v->a[90719] = state(1863);
	small_parse_table_4536(v);
}

void	small_parse_table_4536(t_small_parse_table_array *v)
{
	v->a[90720] = 1;
	v->a[90721] = aux_sym_string_repeat1;
	v->a[90722] = state(1963);
	v->a[90723] = 4;
	v->a[90724] = sym_arithmetic_expansion;
	v->a[90725] = sym_simple_expansion;
	v->a[90726] = sym_expansion;
	v->a[90727] = sym_command_substitution;
	v->a[90728] = 4;
	v->a[90729] = actions(3);
	v->a[90730] = 1;
	v->a[90731] = sym_comment;
	v->a[90732] = actions(1995);
	v->a[90733] = 1;
	v->a[90734] = sym_variable_name;
	v->a[90735] = actions(1993);
	v->a[90736] = 2;
	v->a[90737] = aux_sym__simple_variable_name_token1;
	v->a[90738] = aux_sym__multiline_variable_name_token1;
	v->a[90739] = actions(1991);
	small_parse_table_4537(v);
}

void	small_parse_table_4537(t_small_parse_table_array *v)
{
	v->a[90740] = 9;
	v->a[90741] = anon_sym_BANG;
	v->a[90742] = anon_sym_DASH;
	v->a[90743] = anon_sym_STAR;
	v->a[90744] = anon_sym_QMARK;
	v->a[90745] = anon_sym_DOLLAR;
	v->a[90746] = anon_sym_POUND;
	v->a[90747] = anon_sym_AT;
	v->a[90748] = anon_sym_0;
	v->a[90749] = anon_sym__;
	v->a[90750] = 10;
	v->a[90751] = actions(3);
	v->a[90752] = 1;
	v->a[90753] = sym_comment;
	v->a[90754] = actions(3414);
	v->a[90755] = 1;
	v->a[90756] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90757] = actions(3420);
	v->a[90758] = 1;
	v->a[90759] = sym_string_content;
	small_parse_table_4538(v);
}

void	small_parse_table_4538(t_small_parse_table_array *v)
{
	v->a[90760] = actions(3422);
	v->a[90761] = 1;
	v->a[90762] = anon_sym_DOLLAR_LBRACE;
	v->a[90763] = actions(3424);
	v->a[90764] = 1;
	v->a[90765] = anon_sym_DOLLAR_LPAREN;
	v->a[90766] = actions(3426);
	v->a[90767] = 1;
	v->a[90768] = anon_sym_BQUOTE;
	v->a[90769] = actions(3690);
	v->a[90770] = 1;
	v->a[90771] = anon_sym_DOLLAR;
	v->a[90772] = actions(3692);
	v->a[90773] = 1;
	v->a[90774] = anon_sym_DQUOTE;
	v->a[90775] = state(1884);
	v->a[90776] = 1;
	v->a[90777] = aux_sym_string_repeat1;
	v->a[90778] = state(1963);
	v->a[90779] = 4;
	small_parse_table_4539(v);
}

void	small_parse_table_4539(t_small_parse_table_array *v)
{
	v->a[90780] = sym_arithmetic_expansion;
	v->a[90781] = sym_simple_expansion;
	v->a[90782] = sym_expansion;
	v->a[90783] = sym_command_substitution;
	v->a[90784] = 10;
	v->a[90785] = actions(3);
	v->a[90786] = 1;
	v->a[90787] = sym_comment;
	v->a[90788] = actions(3414);
	v->a[90789] = 1;
	v->a[90790] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90791] = actions(3420);
	v->a[90792] = 1;
	v->a[90793] = sym_string_content;
	v->a[90794] = actions(3422);
	v->a[90795] = 1;
	v->a[90796] = anon_sym_DOLLAR_LBRACE;
	v->a[90797] = actions(3424);
	v->a[90798] = 1;
	v->a[90799] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4540(v);
}

/* EOF small_parse_table_907.c */
