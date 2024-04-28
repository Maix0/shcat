/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2978.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14890(t_small_parse_table_array *v)
{
	v->a[297800] = 1;
	v->a[297801] = sym_string_content;
	v->a[297802] = actions(13068);
	v->a[297803] = 1;
	v->a[297804] = anon_sym_DOLLAR_LBRACE;
	v->a[297805] = actions(13070);
	v->a[297806] = 1;
	v->a[297807] = anon_sym_DOLLAR_LPAREN;
	v->a[297808] = actions(13072);
	v->a[297809] = 1;
	v->a[297810] = anon_sym_BQUOTE;
	v->a[297811] = actions(13074);
	v->a[297812] = 1;
	v->a[297813] = anon_sym_DOLLAR_BQUOTE;
	v->a[297814] = actions(13442);
	v->a[297815] = 1;
	v->a[297816] = anon_sym_DOLLAR;
	v->a[297817] = actions(13444);
	v->a[297818] = 1;
	v->a[297819] = anon_sym_DQUOTE;
	small_parse_table_14891(v);
}

void	small_parse_table_14891(t_small_parse_table_array *v)
{
	v->a[297820] = state(5792);
	v->a[297821] = 1;
	v->a[297822] = aux_sym_string_repeat1;
	v->a[297823] = actions(13058);
	v->a[297824] = 2;
	v->a[297825] = anon_sym_LPAREN_LPAREN;
	v->a[297826] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[297827] = state(6127);
	v->a[297828] = 4;
	v->a[297829] = sym_arithmetic_expansion;
	v->a[297830] = sym_simple_expansion;
	v->a[297831] = sym_expansion;
	v->a[297832] = sym_command_substitution;
	v->a[297833] = 12;
	v->a[297834] = actions(3);
	v->a[297835] = 1;
	v->a[297836] = sym_comment;
	v->a[297837] = actions(13060);
	v->a[297838] = 1;
	v->a[297839] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_14892(v);
}

void	small_parse_table_14892(t_small_parse_table_array *v)
{
	v->a[297840] = actions(13066);
	v->a[297841] = 1;
	v->a[297842] = sym_string_content;
	v->a[297843] = actions(13068);
	v->a[297844] = 1;
	v->a[297845] = anon_sym_DOLLAR_LBRACE;
	v->a[297846] = actions(13070);
	v->a[297847] = 1;
	v->a[297848] = anon_sym_DOLLAR_LPAREN;
	v->a[297849] = actions(13072);
	v->a[297850] = 1;
	v->a[297851] = anon_sym_BQUOTE;
	v->a[297852] = actions(13074);
	v->a[297853] = 1;
	v->a[297854] = anon_sym_DOLLAR_BQUOTE;
	v->a[297855] = actions(13446);
	v->a[297856] = 1;
	v->a[297857] = anon_sym_DOLLAR;
	v->a[297858] = actions(13448);
	v->a[297859] = 1;
	small_parse_table_14893(v);
}

void	small_parse_table_14893(t_small_parse_table_array *v)
{
	v->a[297860] = anon_sym_DQUOTE;
	v->a[297861] = state(5768);
	v->a[297862] = 1;
	v->a[297863] = aux_sym_string_repeat1;
	v->a[297864] = actions(13058);
	v->a[297865] = 2;
	v->a[297866] = anon_sym_LPAREN_LPAREN;
	v->a[297867] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[297868] = state(6127);
	v->a[297869] = 4;
	v->a[297870] = sym_arithmetic_expansion;
	v->a[297871] = sym_simple_expansion;
	v->a[297872] = sym_expansion;
	v->a[297873] = sym_command_substitution;
	v->a[297874] = 12;
	v->a[297875] = actions(3);
	v->a[297876] = 1;
	v->a[297877] = sym_comment;
	v->a[297878] = actions(13060);
	v->a[297879] = 1;
	small_parse_table_14894(v);
}

void	small_parse_table_14894(t_small_parse_table_array *v)
{
	v->a[297880] = anon_sym_DOLLAR_LBRACK;
	v->a[297881] = actions(13066);
	v->a[297882] = 1;
	v->a[297883] = sym_string_content;
	v->a[297884] = actions(13068);
	v->a[297885] = 1;
	v->a[297886] = anon_sym_DOLLAR_LBRACE;
	v->a[297887] = actions(13070);
	v->a[297888] = 1;
	v->a[297889] = anon_sym_DOLLAR_LPAREN;
	v->a[297890] = actions(13072);
	v->a[297891] = 1;
	v->a[297892] = anon_sym_BQUOTE;
	v->a[297893] = actions(13074);
	v->a[297894] = 1;
	v->a[297895] = anon_sym_DOLLAR_BQUOTE;
	v->a[297896] = actions(13450);
	v->a[297897] = 1;
	v->a[297898] = anon_sym_DOLLAR;
	v->a[297899] = actions(13452);
	small_parse_table_14895(v);
}

/* EOF small_parse_table_2978.c */
