/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_868.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4340(t_small_parse_table_array *v)
{
	v->a[86800] = 1;
	v->a[86801] = sym_string_content;
	v->a[86802] = actions(3422);
	v->a[86803] = 1;
	v->a[86804] = anon_sym_DOLLAR_LBRACE;
	v->a[86805] = actions(3424);
	v->a[86806] = 1;
	v->a[86807] = anon_sym_DOLLAR_LPAREN;
	v->a[86808] = actions(3426);
	v->a[86809] = 1;
	v->a[86810] = anon_sym_BQUOTE;
	v->a[86811] = actions(3504);
	v->a[86812] = 1;
	v->a[86813] = anon_sym_DOLLAR;
	v->a[86814] = actions(3506);
	v->a[86815] = 1;
	v->a[86816] = anon_sym_DQUOTE;
	v->a[86817] = state(1906);
	v->a[86818] = 1;
	v->a[86819] = aux_sym_string_repeat1;
	small_parse_table_4341(v);
}

void	small_parse_table_4341(t_small_parse_table_array *v)
{
	v->a[86820] = state(1959);
	v->a[86821] = 4;
	v->a[86822] = sym_arithmetic_expansion;
	v->a[86823] = sym_simple_expansion;
	v->a[86824] = sym_expansion;
	v->a[86825] = sym_command_substitution;
	v->a[86826] = 10;
	v->a[86827] = actions(3);
	v->a[86828] = 1;
	v->a[86829] = sym_comment;
	v->a[86830] = actions(3414);
	v->a[86831] = 1;
	v->a[86832] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86833] = actions(3420);
	v->a[86834] = 1;
	v->a[86835] = sym_string_content;
	v->a[86836] = actions(3422);
	v->a[86837] = 1;
	v->a[86838] = anon_sym_DOLLAR_LBRACE;
	v->a[86839] = actions(3424);
	small_parse_table_4342(v);
}

void	small_parse_table_4342(t_small_parse_table_array *v)
{
	v->a[86840] = 1;
	v->a[86841] = anon_sym_DOLLAR_LPAREN;
	v->a[86842] = actions(3426);
	v->a[86843] = 1;
	v->a[86844] = anon_sym_BQUOTE;
	v->a[86845] = actions(3508);
	v->a[86846] = 1;
	v->a[86847] = anon_sym_DOLLAR;
	v->a[86848] = actions(3510);
	v->a[86849] = 1;
	v->a[86850] = anon_sym_DQUOTE;
	v->a[86851] = state(1906);
	v->a[86852] = 1;
	v->a[86853] = aux_sym_string_repeat1;
	v->a[86854] = state(1959);
	v->a[86855] = 4;
	v->a[86856] = sym_arithmetic_expansion;
	v->a[86857] = sym_simple_expansion;
	v->a[86858] = sym_expansion;
	v->a[86859] = sym_command_substitution;
	small_parse_table_4343(v);
}

void	small_parse_table_4343(t_small_parse_table_array *v)
{
	v->a[86860] = 10;
	v->a[86861] = actions(3);
	v->a[86862] = 1;
	v->a[86863] = sym_comment;
	v->a[86864] = actions(3414);
	v->a[86865] = 1;
	v->a[86866] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86867] = actions(3420);
	v->a[86868] = 1;
	v->a[86869] = sym_string_content;
	v->a[86870] = actions(3422);
	v->a[86871] = 1;
	v->a[86872] = anon_sym_DOLLAR_LBRACE;
	v->a[86873] = actions(3424);
	v->a[86874] = 1;
	v->a[86875] = anon_sym_DOLLAR_LPAREN;
	v->a[86876] = actions(3426);
	v->a[86877] = 1;
	v->a[86878] = anon_sym_BQUOTE;
	v->a[86879] = actions(3512);
	small_parse_table_4344(v);
}

void	small_parse_table_4344(t_small_parse_table_array *v)
{
	v->a[86880] = 1;
	v->a[86881] = anon_sym_DOLLAR;
	v->a[86882] = actions(3514);
	v->a[86883] = 1;
	v->a[86884] = anon_sym_DQUOTE;
	v->a[86885] = state(1906);
	v->a[86886] = 1;
	v->a[86887] = aux_sym_string_repeat1;
	v->a[86888] = state(1959);
	v->a[86889] = 4;
	v->a[86890] = sym_arithmetic_expansion;
	v->a[86891] = sym_simple_expansion;
	v->a[86892] = sym_expansion;
	v->a[86893] = sym_command_substitution;
	v->a[86894] = 10;
	v->a[86895] = actions(3);
	v->a[86896] = 1;
	v->a[86897] = sym_comment;
	v->a[86898] = actions(3414);
	v->a[86899] = 1;
	small_parse_table_4345(v);
}

/* EOF small_parse_table_868.c */
