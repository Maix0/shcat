/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3018.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15090(t_small_parse_table_array *v)
{
	v->a[301800] = anon_sym_STAR;
	v->a[301801] = anon_sym_BANG;
	v->a[301802] = anon_sym_QMARK;
	v->a[301803] = anon_sym_DOLLAR;
	v->a[301804] = anon_sym_POUND;
	v->a[301805] = anon_sym_AT2;
	v->a[301806] = anon_sym_0;
	v->a[301807] = anon_sym__;
	v->a[301808] = 6;
	v->a[301809] = actions(3);
	v->a[301810] = 1;
	v->a[301811] = sym_comment;
	v->a[301812] = actions(8623);
	v->a[301813] = 1;
	v->a[301814] = anon_sym_DQUOTE;
	v->a[301815] = actions(8627);
	v->a[301816] = 1;
	v->a[301817] = sym_variable_name;
	v->a[301818] = state(5204);
	v->a[301819] = 1;
	small_parse_table_15091(v);
}

void	small_parse_table_15091(t_small_parse_table_array *v)
{
	v->a[301820] = sym_string;
	v->a[301821] = actions(8625);
	v->a[301822] = 2;
	v->a[301823] = aux_sym__simple_variable_name_token1;
	v->a[301824] = aux_sym__multiline_variable_name_token1;
	v->a[301825] = actions(8621);
	v->a[301826] = 9;
	v->a[301827] = anon_sym_DASH;
	v->a[301828] = anon_sym_STAR;
	v->a[301829] = anon_sym_BANG;
	v->a[301830] = anon_sym_QMARK;
	v->a[301831] = anon_sym_DOLLAR;
	v->a[301832] = anon_sym_POUND;
	v->a[301833] = anon_sym_AT2;
	v->a[301834] = anon_sym_0;
	v->a[301835] = anon_sym__;
	v->a[301836] = 6;
	v->a[301837] = actions(3);
	v->a[301838] = 1;
	v->a[301839] = sym_comment;
	small_parse_table_15092(v);
}

void	small_parse_table_15092(t_small_parse_table_array *v)
{
	v->a[301840] = actions(13732);
	v->a[301841] = 1;
	v->a[301842] = sym_string_content;
	v->a[301843] = actions(13736);
	v->a[301844] = 1;
	v->a[301845] = sym_variable_name;
	v->a[301846] = actions(13762);
	v->a[301847] = 1;
	v->a[301848] = anon_sym_DQUOTE;
	v->a[301849] = actions(13734);
	v->a[301850] = 2;
	v->a[301851] = aux_sym__simple_variable_name_token1;
	v->a[301852] = aux_sym__multiline_variable_name_token1;
	v->a[301853] = actions(13730);
	v->a[301854] = 9;
	v->a[301855] = anon_sym_DASH;
	v->a[301856] = anon_sym_STAR;
	v->a[301857] = anon_sym_BANG;
	v->a[301858] = anon_sym_QMARK;
	v->a[301859] = anon_sym_DOLLAR;
	small_parse_table_15093(v);
}

void	small_parse_table_15093(t_small_parse_table_array *v)
{
	v->a[301860] = anon_sym_POUND;
	v->a[301861] = anon_sym_AT2;
	v->a[301862] = anon_sym_0;
	v->a[301863] = anon_sym__;
	v->a[301864] = 6;
	v->a[301865] = actions(3);
	v->a[301866] = 1;
	v->a[301867] = sym_comment;
	v->a[301868] = actions(13732);
	v->a[301869] = 1;
	v->a[301870] = sym_string_content;
	v->a[301871] = actions(13736);
	v->a[301872] = 1;
	v->a[301873] = sym_variable_name;
	v->a[301874] = actions(13764);
	v->a[301875] = 1;
	v->a[301876] = anon_sym_DQUOTE;
	v->a[301877] = actions(13734);
	v->a[301878] = 2;
	v->a[301879] = aux_sym__simple_variable_name_token1;
	small_parse_table_15094(v);
}

void	small_parse_table_15094(t_small_parse_table_array *v)
{
	v->a[301880] = aux_sym__multiline_variable_name_token1;
	v->a[301881] = actions(13730);
	v->a[301882] = 9;
	v->a[301883] = anon_sym_DASH;
	v->a[301884] = anon_sym_STAR;
	v->a[301885] = anon_sym_BANG;
	v->a[301886] = anon_sym_QMARK;
	v->a[301887] = anon_sym_DOLLAR;
	v->a[301888] = anon_sym_POUND;
	v->a[301889] = anon_sym_AT2;
	v->a[301890] = anon_sym_0;
	v->a[301891] = anon_sym__;
	v->a[301892] = 6;
	v->a[301893] = actions(3);
	v->a[301894] = 1;
	v->a[301895] = sym_comment;
	v->a[301896] = actions(13290);
	v->a[301897] = 1;
	v->a[301898] = anon_sym_DQUOTE;
	v->a[301899] = actions(13732);
	small_parse_table_15095(v);
}

/* EOF small_parse_table_3018.c */
