/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_908.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4540(t_small_parse_table_array *v)
{
	v->a[90800] = actions(3426);
	v->a[90801] = 1;
	v->a[90802] = anon_sym_BQUOTE;
	v->a[90803] = actions(3694);
	v->a[90804] = 1;
	v->a[90805] = anon_sym_DOLLAR;
	v->a[90806] = actions(3696);
	v->a[90807] = 1;
	v->a[90808] = anon_sym_DQUOTE;
	v->a[90809] = state(1863);
	v->a[90810] = 1;
	v->a[90811] = aux_sym_string_repeat1;
	v->a[90812] = state(1963);
	v->a[90813] = 4;
	v->a[90814] = sym_arithmetic_expansion;
	v->a[90815] = sym_simple_expansion;
	v->a[90816] = sym_expansion;
	v->a[90817] = sym_command_substitution;
	v->a[90818] = 4;
	v->a[90819] = actions(3);
	small_parse_table_4541(v);
}

void	small_parse_table_4541(t_small_parse_table_array *v)
{
	v->a[90820] = 1;
	v->a[90821] = sym_comment;
	v->a[90822] = actions(441);
	v->a[90823] = 1;
	v->a[90824] = sym_variable_name;
	v->a[90825] = actions(439);
	v->a[90826] = 2;
	v->a[90827] = aux_sym__simple_variable_name_token1;
	v->a[90828] = aux_sym__multiline_variable_name_token1;
	v->a[90829] = actions(437);
	v->a[90830] = 9;
	v->a[90831] = anon_sym_BANG;
	v->a[90832] = anon_sym_DASH;
	v->a[90833] = anon_sym_STAR;
	v->a[90834] = anon_sym_QMARK;
	v->a[90835] = anon_sym_DOLLAR;
	v->a[90836] = anon_sym_POUND;
	v->a[90837] = anon_sym_AT;
	v->a[90838] = anon_sym_0;
	v->a[90839] = anon_sym__;
	small_parse_table_4542(v);
}

void	small_parse_table_4542(t_small_parse_table_array *v)
{
	v->a[90840] = 10;
	v->a[90841] = actions(3);
	v->a[90842] = 1;
	v->a[90843] = sym_comment;
	v->a[90844] = actions(3414);
	v->a[90845] = 1;
	v->a[90846] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90847] = actions(3420);
	v->a[90848] = 1;
	v->a[90849] = sym_string_content;
	v->a[90850] = actions(3422);
	v->a[90851] = 1;
	v->a[90852] = anon_sym_DOLLAR_LBRACE;
	v->a[90853] = actions(3424);
	v->a[90854] = 1;
	v->a[90855] = anon_sym_DOLLAR_LPAREN;
	v->a[90856] = actions(3426);
	v->a[90857] = 1;
	v->a[90858] = anon_sym_BQUOTE;
	v->a[90859] = actions(3698);
	small_parse_table_4543(v);
}

void	small_parse_table_4543(t_small_parse_table_array *v)
{
	v->a[90860] = 1;
	v->a[90861] = anon_sym_DOLLAR;
	v->a[90862] = actions(3700);
	v->a[90863] = 1;
	v->a[90864] = anon_sym_DQUOTE;
	v->a[90865] = state(1885);
	v->a[90866] = 1;
	v->a[90867] = aux_sym_string_repeat1;
	v->a[90868] = state(1963);
	v->a[90869] = 4;
	v->a[90870] = sym_arithmetic_expansion;
	v->a[90871] = sym_simple_expansion;
	v->a[90872] = sym_expansion;
	v->a[90873] = sym_command_substitution;
	v->a[90874] = 10;
	v->a[90875] = actions(3);
	v->a[90876] = 1;
	v->a[90877] = sym_comment;
	v->a[90878] = actions(3414);
	v->a[90879] = 1;
	small_parse_table_4544(v);
}

void	small_parse_table_4544(t_small_parse_table_array *v)
{
	v->a[90880] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90881] = actions(3420);
	v->a[90882] = 1;
	v->a[90883] = sym_string_content;
	v->a[90884] = actions(3422);
	v->a[90885] = 1;
	v->a[90886] = anon_sym_DOLLAR_LBRACE;
	v->a[90887] = actions(3424);
	v->a[90888] = 1;
	v->a[90889] = anon_sym_DOLLAR_LPAREN;
	v->a[90890] = actions(3426);
	v->a[90891] = 1;
	v->a[90892] = anon_sym_BQUOTE;
	v->a[90893] = actions(3702);
	v->a[90894] = 1;
	v->a[90895] = anon_sym_DOLLAR;
	v->a[90896] = actions(3704);
	v->a[90897] = 1;
	v->a[90898] = anon_sym_DQUOTE;
	v->a[90899] = state(1863);
	small_parse_table_4545(v);
}

/* EOF small_parse_table_908.c */
