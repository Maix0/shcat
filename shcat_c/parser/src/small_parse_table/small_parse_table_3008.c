/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3008.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15040(t_small_parse_table_array *v)
{
	v->a[300800] = 6;
	v->a[300801] = actions(3);
	v->a[300802] = 1;
	v->a[300803] = sym_comment;
	v->a[300804] = actions(13118);
	v->a[300805] = 1;
	v->a[300806] = anon_sym_DQUOTE;
	v->a[300807] = actions(13732);
	v->a[300808] = 1;
	v->a[300809] = sym_string_content;
	v->a[300810] = actions(13736);
	v->a[300811] = 1;
	v->a[300812] = sym_variable_name;
	v->a[300813] = actions(13734);
	v->a[300814] = 2;
	v->a[300815] = aux_sym__simple_variable_name_token1;
	v->a[300816] = aux_sym__multiline_variable_name_token1;
	v->a[300817] = actions(13730);
	v->a[300818] = 9;
	v->a[300819] = anon_sym_DASH;
	small_parse_table_15041(v);
}

void	small_parse_table_15041(t_small_parse_table_array *v)
{
	v->a[300820] = anon_sym_STAR;
	v->a[300821] = anon_sym_BANG;
	v->a[300822] = anon_sym_QMARK;
	v->a[300823] = anon_sym_DOLLAR;
	v->a[300824] = anon_sym_POUND;
	v->a[300825] = anon_sym_AT2;
	v->a[300826] = anon_sym_0;
	v->a[300827] = anon_sym__;
	v->a[300828] = 6;
	v->a[300829] = actions(3);
	v->a[300830] = 1;
	v->a[300831] = sym_comment;
	v->a[300832] = actions(13246);
	v->a[300833] = 1;
	v->a[300834] = anon_sym_DQUOTE;
	v->a[300835] = actions(13732);
	v->a[300836] = 1;
	v->a[300837] = sym_string_content;
	v->a[300838] = actions(13736);
	v->a[300839] = 1;
	small_parse_table_15042(v);
}

void	small_parse_table_15042(t_small_parse_table_array *v)
{
	v->a[300840] = sym_variable_name;
	v->a[300841] = actions(13734);
	v->a[300842] = 2;
	v->a[300843] = aux_sym__simple_variable_name_token1;
	v->a[300844] = aux_sym__multiline_variable_name_token1;
	v->a[300845] = actions(13730);
	v->a[300846] = 9;
	v->a[300847] = anon_sym_DASH;
	v->a[300848] = anon_sym_STAR;
	v->a[300849] = anon_sym_BANG;
	v->a[300850] = anon_sym_QMARK;
	v->a[300851] = anon_sym_DOLLAR;
	v->a[300852] = anon_sym_POUND;
	v->a[300853] = anon_sym_AT2;
	v->a[300854] = anon_sym_0;
	v->a[300855] = anon_sym__;
	v->a[300856] = 6;
	v->a[300857] = actions(3);
	v->a[300858] = 1;
	v->a[300859] = sym_comment;
	small_parse_table_15043(v);
}

void	small_parse_table_15043(t_small_parse_table_array *v)
{
	v->a[300860] = actions(13142);
	v->a[300861] = 1;
	v->a[300862] = anon_sym_DQUOTE;
	v->a[300863] = actions(13732);
	v->a[300864] = 1;
	v->a[300865] = sym_string_content;
	v->a[300866] = actions(13736);
	v->a[300867] = 1;
	v->a[300868] = sym_variable_name;
	v->a[300869] = actions(13734);
	v->a[300870] = 2;
	v->a[300871] = aux_sym__simple_variable_name_token1;
	v->a[300872] = aux_sym__multiline_variable_name_token1;
	v->a[300873] = actions(13730);
	v->a[300874] = 9;
	v->a[300875] = anon_sym_DASH;
	v->a[300876] = anon_sym_STAR;
	v->a[300877] = anon_sym_BANG;
	v->a[300878] = anon_sym_QMARK;
	v->a[300879] = anon_sym_DOLLAR;
	small_parse_table_15044(v);
}

void	small_parse_table_15044(t_small_parse_table_array *v)
{
	v->a[300880] = anon_sym_POUND;
	v->a[300881] = anon_sym_AT2;
	v->a[300882] = anon_sym_0;
	v->a[300883] = anon_sym__;
	v->a[300884] = 6;
	v->a[300885] = actions(3);
	v->a[300886] = 1;
	v->a[300887] = sym_comment;
	v->a[300888] = actions(8556);
	v->a[300889] = 1;
	v->a[300890] = anon_sym_DQUOTE;
	v->a[300891] = actions(8560);
	v->a[300892] = 1;
	v->a[300893] = sym_variable_name;
	v->a[300894] = state(5364);
	v->a[300895] = 1;
	v->a[300896] = sym_string;
	v->a[300897] = actions(8558);
	v->a[300898] = 2;
	v->a[300899] = aux_sym__simple_variable_name_token1;
	small_parse_table_15045(v);
}

/* EOF small_parse_table_3008.c */
