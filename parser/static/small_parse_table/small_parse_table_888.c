/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_888.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4440(t_small_parse_table_array *v)
{
	v->a[88800] = actions(3733);
	v->a[88801] = 1;
	v->a[88802] = anon_sym_DOLLAR_LBRACE;
	v->a[88803] = actions(3736);
	v->a[88804] = 1;
	v->a[88805] = anon_sym_DOLLAR_LPAREN;
	v->a[88806] = actions(3739);
	v->a[88807] = 1;
	v->a[88808] = anon_sym_BQUOTE;
	v->a[88809] = state(1906);
	v->a[88810] = 1;
	v->a[88811] = aux_sym_string_repeat1;
	v->a[88812] = state(1959);
	v->a[88813] = 4;
	v->a[88814] = sym_arithmetic_expansion;
	v->a[88815] = sym_simple_expansion;
	v->a[88816] = sym_expansion;
	v->a[88817] = sym_command_substitution;
	v->a[88818] = 10;
	v->a[88819] = actions(3);
	small_parse_table_4441(v);
}

void	small_parse_table_4441(t_small_parse_table_array *v)
{
	v->a[88820] = 1;
	v->a[88821] = sym_comment;
	v->a[88822] = actions(3414);
	v->a[88823] = 1;
	v->a[88824] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88825] = actions(3420);
	v->a[88826] = 1;
	v->a[88827] = sym_string_content;
	v->a[88828] = actions(3422);
	v->a[88829] = 1;
	v->a[88830] = anon_sym_DOLLAR_LBRACE;
	v->a[88831] = actions(3424);
	v->a[88832] = 1;
	v->a[88833] = anon_sym_DOLLAR_LPAREN;
	v->a[88834] = actions(3426);
	v->a[88835] = 1;
	v->a[88836] = anon_sym_BQUOTE;
	v->a[88837] = actions(3742);
	v->a[88838] = 1;
	v->a[88839] = anon_sym_DOLLAR;
	small_parse_table_4442(v);
}

void	small_parse_table_4442(t_small_parse_table_array *v)
{
	v->a[88840] = actions(3744);
	v->a[88841] = 1;
	v->a[88842] = anon_sym_DQUOTE;
	v->a[88843] = state(1906);
	v->a[88844] = 1;
	v->a[88845] = aux_sym_string_repeat1;
	v->a[88846] = state(1959);
	v->a[88847] = 4;
	v->a[88848] = sym_arithmetic_expansion;
	v->a[88849] = sym_simple_expansion;
	v->a[88850] = sym_expansion;
	v->a[88851] = sym_command_substitution;
	v->a[88852] = 10;
	v->a[88853] = actions(3);
	v->a[88854] = 1;
	v->a[88855] = sym_comment;
	v->a[88856] = actions(3414);
	v->a[88857] = 1;
	v->a[88858] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88859] = actions(3420);
	small_parse_table_4443(v);
}

void	small_parse_table_4443(t_small_parse_table_array *v)
{
	v->a[88860] = 1;
	v->a[88861] = sym_string_content;
	v->a[88862] = actions(3422);
	v->a[88863] = 1;
	v->a[88864] = anon_sym_DOLLAR_LBRACE;
	v->a[88865] = actions(3424);
	v->a[88866] = 1;
	v->a[88867] = anon_sym_DOLLAR_LPAREN;
	v->a[88868] = actions(3426);
	v->a[88869] = 1;
	v->a[88870] = anon_sym_BQUOTE;
	v->a[88871] = actions(3746);
	v->a[88872] = 1;
	v->a[88873] = anon_sym_DOLLAR;
	v->a[88874] = actions(3748);
	v->a[88875] = 1;
	v->a[88876] = anon_sym_DQUOTE;
	v->a[88877] = state(1906);
	v->a[88878] = 1;
	v->a[88879] = aux_sym_string_repeat1;
	small_parse_table_4444(v);
}

void	small_parse_table_4444(t_small_parse_table_array *v)
{
	v->a[88880] = state(1959);
	v->a[88881] = 4;
	v->a[88882] = sym_arithmetic_expansion;
	v->a[88883] = sym_simple_expansion;
	v->a[88884] = sym_expansion;
	v->a[88885] = sym_command_substitution;
	v->a[88886] = 10;
	v->a[88887] = actions(3);
	v->a[88888] = 1;
	v->a[88889] = sym_comment;
	v->a[88890] = actions(3414);
	v->a[88891] = 1;
	v->a[88892] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88893] = actions(3420);
	v->a[88894] = 1;
	v->a[88895] = sym_string_content;
	v->a[88896] = actions(3422);
	v->a[88897] = 1;
	v->a[88898] = anon_sym_DOLLAR_LBRACE;
	v->a[88899] = actions(3424);
	small_parse_table_4445(v);
}

/* EOF small_parse_table_888.c */
