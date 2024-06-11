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
	v->a[86800] = actions(834);
	v->a[86801] = 1;
	v->a[86802] = anon_sym_BQUOTE;
	v->a[86803] = actions(3348);
	v->a[86804] = 1;
	v->a[86805] = sym__bare_dollar;
	v->a[86806] = actions(3511);
	v->a[86807] = 1;
	v->a[86808] = anon_sym_DOLLAR;
	v->a[86809] = actions(3346);
	v->a[86810] = 5;
	v->a[86811] = aux_sym_concatenation_token1;
	v->a[86812] = sym_raw_string;
	v->a[86813] = sym_number;
	v->a[86814] = sym__comment_word;
	v->a[86815] = sym_word;
	v->a[86816] = state(1185);
	v->a[86817] = 5;
	v->a[86818] = sym_arithmetic_expansion;
	v->a[86819] = sym_string;
	small_parse_table_4341(v);
}

void	small_parse_table_4341(t_small_parse_table_array *v)
{
	v->a[86820] = sym_simple_expansion;
	v->a[86821] = sym_expansion;
	v->a[86822] = sym_command_substitution;
	v->a[86823] = 10;
	v->a[86824] = actions(3);
	v->a[86825] = 1;
	v->a[86826] = sym_comment;
	v->a[86827] = actions(884);
	v->a[86828] = 1;
	v->a[86829] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86830] = actions(888);
	v->a[86831] = 1;
	v->a[86832] = anon_sym_DQUOTE;
	v->a[86833] = actions(890);
	v->a[86834] = 1;
	v->a[86835] = anon_sym_DOLLAR_LBRACE;
	v->a[86836] = actions(892);
	v->a[86837] = 1;
	v->a[86838] = anon_sym_DOLLAR_LPAREN;
	v->a[86839] = actions(894);
	small_parse_table_4342(v);
}

void	small_parse_table_4342(t_small_parse_table_array *v)
{
	v->a[86840] = 1;
	v->a[86841] = anon_sym_BQUOTE;
	v->a[86842] = actions(3344);
	v->a[86843] = 1;
	v->a[86844] = sym__bare_dollar;
	v->a[86845] = actions(3513);
	v->a[86846] = 1;
	v->a[86847] = anon_sym_DOLLAR;
	v->a[86848] = actions(3342);
	v->a[86849] = 5;
	v->a[86850] = aux_sym_concatenation_token1;
	v->a[86851] = sym_raw_string;
	v->a[86852] = sym_number;
	v->a[86853] = sym__comment_word;
	v->a[86854] = sym_word;
	v->a[86855] = state(1847);
	v->a[86856] = 5;
	v->a[86857] = sym_arithmetic_expansion;
	v->a[86858] = sym_string;
	v->a[86859] = sym_simple_expansion;
	small_parse_table_4343(v);
}

void	small_parse_table_4343(t_small_parse_table_array *v)
{
	v->a[86860] = sym_expansion;
	v->a[86861] = sym_command_substitution;
	v->a[86862] = 12;
	v->a[86863] = actions(3);
	v->a[86864] = 1;
	v->a[86865] = sym_comment;
	v->a[86866] = actions(3156);
	v->a[86867] = 1;
	v->a[86868] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86869] = actions(3160);
	v->a[86870] = 1;
	v->a[86871] = anon_sym_DQUOTE;
	v->a[86872] = actions(3162);
	v->a[86873] = 1;
	v->a[86874] = anon_sym_DOLLAR_LBRACE;
	v->a[86875] = actions(3164);
	v->a[86876] = 1;
	v->a[86877] = anon_sym_DOLLAR_LPAREN;
	v->a[86878] = actions(3166);
	v->a[86879] = 1;
	small_parse_table_4344(v);
}

void	small_parse_table_4344(t_small_parse_table_array *v)
{
	v->a[86880] = anon_sym_BQUOTE;
	v->a[86881] = actions(3252);
	v->a[86882] = 1;
	v->a[86883] = anon_sym_DOLLAR;
	v->a[86884] = actions(3254);
	v->a[86885] = 1;
	v->a[86886] = sym__comment_word;
	v->a[86887] = actions(3256);
	v->a[86888] = 1;
	v->a[86889] = sym__empty_value;
	v->a[86890] = state(1236);
	v->a[86891] = 1;
	v->a[86892] = sym_concatenation;
	v->a[86893] = actions(3515);
	v->a[86894] = 3;
	v->a[86895] = sym_raw_string;
	v->a[86896] = sym_number;
	v->a[86897] = sym_word;
	v->a[86898] = state(1498);
	v->a[86899] = 5;
	small_parse_table_4345(v);
}

/* EOF small_parse_table_868.c */
