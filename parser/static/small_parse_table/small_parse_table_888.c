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
	v->a[88800] = actions(3422);
	v->a[88801] = 1;
	v->a[88802] = anon_sym_DOLLAR_LBRACE;
	v->a[88803] = actions(3424);
	v->a[88804] = 1;
	v->a[88805] = anon_sym_DOLLAR_LPAREN;
	v->a[88806] = actions(3426);
	v->a[88807] = 1;
	v->a[88808] = anon_sym_BQUOTE;
	v->a[88809] = actions(3454);
	v->a[88810] = 1;
	v->a[88811] = anon_sym_DOLLAR;
	v->a[88812] = actions(3456);
	v->a[88813] = 1;
	v->a[88814] = anon_sym_DQUOTE;
	v->a[88815] = state(1863);
	v->a[88816] = 1;
	v->a[88817] = aux_sym_string_repeat1;
	v->a[88818] = state(1963);
	v->a[88819] = 4;
	small_parse_table_4441(v);
}

void	small_parse_table_4441(t_small_parse_table_array *v)
{
	v->a[88820] = sym_arithmetic_expansion;
	v->a[88821] = sym_simple_expansion;
	v->a[88822] = sym_expansion;
	v->a[88823] = sym_command_substitution;
	v->a[88824] = 4;
	v->a[88825] = actions(3);
	v->a[88826] = 1;
	v->a[88827] = sym_comment;
	v->a[88828] = actions(3450);
	v->a[88829] = 1;
	v->a[88830] = anon_sym_esac;
	v->a[88831] = actions(3452);
	v->a[88832] = 1;
	v->a[88833] = sym_extglob_pattern;
	v->a[88834] = actions(3448);
	v->a[88835] = 10;
	v->a[88836] = anon_sym_LPAREN;
	v->a[88837] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88838] = anon_sym_DOLLAR;
	v->a[88839] = anon_sym_DQUOTE;
	small_parse_table_4442(v);
}

void	small_parse_table_4442(t_small_parse_table_array *v)
{
	v->a[88840] = sym_raw_string;
	v->a[88841] = sym_number;
	v->a[88842] = anon_sym_DOLLAR_LBRACE;
	v->a[88843] = anon_sym_DOLLAR_LPAREN;
	v->a[88844] = anon_sym_BQUOTE;
	v->a[88845] = sym_word;
	v->a[88846] = 10;
	v->a[88847] = actions(3);
	v->a[88848] = 1;
	v->a[88849] = sym_comment;
	v->a[88850] = actions(3414);
	v->a[88851] = 1;
	v->a[88852] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88853] = actions(3420);
	v->a[88854] = 1;
	v->a[88855] = sym_string_content;
	v->a[88856] = actions(3422);
	v->a[88857] = 1;
	v->a[88858] = anon_sym_DOLLAR_LBRACE;
	v->a[88859] = actions(3424);
	small_parse_table_4443(v);
}

void	small_parse_table_4443(t_small_parse_table_array *v)
{
	v->a[88860] = 1;
	v->a[88861] = anon_sym_DOLLAR_LPAREN;
	v->a[88862] = actions(3426);
	v->a[88863] = 1;
	v->a[88864] = anon_sym_BQUOTE;
	v->a[88865] = actions(3458);
	v->a[88866] = 1;
	v->a[88867] = anon_sym_DOLLAR;
	v->a[88868] = actions(3460);
	v->a[88869] = 1;
	v->a[88870] = anon_sym_DQUOTE;
	v->a[88871] = state(1843);
	v->a[88872] = 1;
	v->a[88873] = aux_sym_string_repeat1;
	v->a[88874] = state(1963);
	v->a[88875] = 4;
	v->a[88876] = sym_arithmetic_expansion;
	v->a[88877] = sym_simple_expansion;
	v->a[88878] = sym_expansion;
	v->a[88879] = sym_command_substitution;
	small_parse_table_4444(v);
}

void	small_parse_table_4444(t_small_parse_table_array *v)
{
	v->a[88880] = 4;
	v->a[88881] = actions(3);
	v->a[88882] = 1;
	v->a[88883] = sym_comment;
	v->a[88884] = actions(3464);
	v->a[88885] = 1;
	v->a[88886] = anon_sym_esac;
	v->a[88887] = actions(3466);
	v->a[88888] = 1;
	v->a[88889] = sym_extglob_pattern;
	v->a[88890] = actions(3462);
	v->a[88891] = 10;
	v->a[88892] = anon_sym_LPAREN;
	v->a[88893] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88894] = anon_sym_DOLLAR;
	v->a[88895] = anon_sym_DQUOTE;
	v->a[88896] = sym_raw_string;
	v->a[88897] = sym_number;
	v->a[88898] = anon_sym_DOLLAR_LBRACE;
	v->a[88899] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4445(v);
}

/* EOF small_parse_table_888.c */
