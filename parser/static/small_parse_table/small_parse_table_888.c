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
	v->a[88800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88801] = actions(3716);
	v->a[88802] = 1;
	v->a[88803] = sym_string_content;
	v->a[88804] = actions(3718);
	v->a[88805] = 1;
	v->a[88806] = anon_sym_DOLLAR_LBRACE;
	v->a[88807] = actions(3720);
	v->a[88808] = 1;
	v->a[88809] = anon_sym_DOLLAR_LPAREN;
	v->a[88810] = actions(3722);
	v->a[88811] = 1;
	v->a[88812] = anon_sym_BQUOTE;
	v->a[88813] = actions(3824);
	v->a[88814] = 1;
	v->a[88815] = anon_sym_DOLLAR;
	v->a[88816] = state(1738);
	v->a[88817] = 1;
	v->a[88818] = aux_sym_string_repeat1;
	v->a[88819] = state(1869);
	small_parse_table_4441(v);
}

void	small_parse_table_4441(t_small_parse_table_array *v)
{
	v->a[88820] = 4;
	v->a[88821] = sym_arithmetic_expansion;
	v->a[88822] = sym_simple_expansion;
	v->a[88823] = sym_expansion;
	v->a[88824] = sym_command_substitution;
	v->a[88825] = 4;
	v->a[88826] = actions(3);
	v->a[88827] = 1;
	v->a[88828] = sym_comment;
	v->a[88829] = actions(1557);
	v->a[88830] = 1;
	v->a[88831] = sym_variable_name;
	v->a[88832] = actions(1555);
	v->a[88833] = 2;
	v->a[88834] = aux_sym__simple_variable_name_token1;
	v->a[88835] = aux_sym__multiline_variable_name_token1;
	v->a[88836] = actions(1553);
	v->a[88837] = 9;
	v->a[88838] = anon_sym_BANG;
	v->a[88839] = anon_sym_DASH;
	small_parse_table_4442(v);
}

void	small_parse_table_4442(t_small_parse_table_array *v)
{
	v->a[88840] = anon_sym_STAR;
	v->a[88841] = anon_sym_QMARK;
	v->a[88842] = anon_sym_DOLLAR;
	v->a[88843] = anon_sym_POUND;
	v->a[88844] = anon_sym_AT;
	v->a[88845] = anon_sym_0;
	v->a[88846] = anon_sym__;
	v->a[88847] = 10;
	v->a[88848] = actions(3);
	v->a[88849] = 1;
	v->a[88850] = sym_comment;
	v->a[88851] = actions(3712);
	v->a[88852] = 1;
	v->a[88853] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88854] = actions(3716);
	v->a[88855] = 1;
	v->a[88856] = sym_string_content;
	v->a[88857] = actions(3718);
	v->a[88858] = 1;
	v->a[88859] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4443(v);
}

void	small_parse_table_4443(t_small_parse_table_array *v)
{
	v->a[88860] = actions(3720);
	v->a[88861] = 1;
	v->a[88862] = anon_sym_DOLLAR_LPAREN;
	v->a[88863] = actions(3722);
	v->a[88864] = 1;
	v->a[88865] = anon_sym_BQUOTE;
	v->a[88866] = actions(3826);
	v->a[88867] = 1;
	v->a[88868] = anon_sym_DOLLAR;
	v->a[88869] = actions(3828);
	v->a[88870] = 1;
	v->a[88871] = anon_sym_DQUOTE;
	v->a[88872] = state(1777);
	v->a[88873] = 1;
	v->a[88874] = aux_sym_string_repeat1;
	v->a[88875] = state(1869);
	v->a[88876] = 4;
	v->a[88877] = sym_arithmetic_expansion;
	v->a[88878] = sym_simple_expansion;
	v->a[88879] = sym_expansion;
	small_parse_table_4444(v);
}

void	small_parse_table_4444(t_small_parse_table_array *v)
{
	v->a[88880] = sym_command_substitution;
	v->a[88881] = 4;
	v->a[88882] = actions(3);
	v->a[88883] = 1;
	v->a[88884] = sym_comment;
	v->a[88885] = actions(874);
	v->a[88886] = 1;
	v->a[88887] = sym_variable_name;
	v->a[88888] = actions(872);
	v->a[88889] = 2;
	v->a[88890] = aux_sym__simple_variable_name_token1;
	v->a[88891] = aux_sym__multiline_variable_name_token1;
	v->a[88892] = actions(870);
	v->a[88893] = 9;
	v->a[88894] = anon_sym_BANG;
	v->a[88895] = anon_sym_DASH;
	v->a[88896] = anon_sym_STAR;
	v->a[88897] = anon_sym_QMARK;
	v->a[88898] = anon_sym_DOLLAR;
	v->a[88899] = anon_sym_POUND;
	small_parse_table_4445(v);
}

/* EOF small_parse_table_888.c */
