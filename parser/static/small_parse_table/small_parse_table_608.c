/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_608.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3040(t_small_parse_table_array *v)
{
	v->a[60800] = 1;
	v->a[60801] = sym_comment;
	v->a[60802] = actions(2431);
	v->a[60803] = 1;
	v->a[60804] = sym_string_content;
	v->a[60805] = actions(2435);
	v->a[60806] = 1;
	v->a[60807] = sym_variable_name;
	v->a[60808] = actions(2511);
	v->a[60809] = 1;
	v->a[60810] = anon_sym_DQUOTE;
	v->a[60811] = actions(2433);
	v->a[60812] = 2;
	v->a[60813] = aux_sym__simple_variable_name_token1;
	v->a[60814] = aux_sym__multiline_variable_name_token1;
	v->a[60815] = actions(2427);
	v->a[60816] = 8;
	v->a[60817] = anon_sym_BANG;
	v->a[60818] = anon_sym_DASH;
	v->a[60819] = anon_sym_STAR;
	small_parse_table_3041(v);
}

void	small_parse_table_3041(t_small_parse_table_array *v)
{
	v->a[60820] = anon_sym_QMARK;
	v->a[60821] = anon_sym_DOLLAR;
	v->a[60822] = anon_sym_POUND;
	v->a[60823] = anon_sym_AT;
	v->a[60824] = anon_sym_0;
	v->a[60825] = 6;
	v->a[60826] = actions(3);
	v->a[60827] = 1;
	v->a[60828] = sym_comment;
	v->a[60829] = actions(2431);
	v->a[60830] = 1;
	v->a[60831] = sym_string_content;
	v->a[60832] = actions(2435);
	v->a[60833] = 1;
	v->a[60834] = sym_variable_name;
	v->a[60835] = actions(2513);
	v->a[60836] = 1;
	v->a[60837] = anon_sym_DQUOTE;
	v->a[60838] = actions(2433);
	v->a[60839] = 2;
	small_parse_table_3042(v);
}

void	small_parse_table_3042(t_small_parse_table_array *v)
{
	v->a[60840] = aux_sym__simple_variable_name_token1;
	v->a[60841] = aux_sym__multiline_variable_name_token1;
	v->a[60842] = actions(2427);
	v->a[60843] = 8;
	v->a[60844] = anon_sym_BANG;
	v->a[60845] = anon_sym_DASH;
	v->a[60846] = anon_sym_STAR;
	v->a[60847] = anon_sym_QMARK;
	v->a[60848] = anon_sym_DOLLAR;
	v->a[60849] = anon_sym_POUND;
	v->a[60850] = anon_sym_AT;
	v->a[60851] = anon_sym_0;
	v->a[60852] = 6;
	v->a[60853] = actions(3);
	v->a[60854] = 1;
	v->a[60855] = sym_comment;
	v->a[60856] = actions(2431);
	v->a[60857] = 1;
	v->a[60858] = sym_string_content;
	v->a[60859] = actions(2435);
	small_parse_table_3043(v);
}

void	small_parse_table_3043(t_small_parse_table_array *v)
{
	v->a[60860] = 1;
	v->a[60861] = sym_variable_name;
	v->a[60862] = actions(2515);
	v->a[60863] = 1;
	v->a[60864] = anon_sym_DQUOTE;
	v->a[60865] = actions(2433);
	v->a[60866] = 2;
	v->a[60867] = aux_sym__simple_variable_name_token1;
	v->a[60868] = aux_sym__multiline_variable_name_token1;
	v->a[60869] = actions(2427);
	v->a[60870] = 8;
	v->a[60871] = anon_sym_BANG;
	v->a[60872] = anon_sym_DASH;
	v->a[60873] = anon_sym_STAR;
	v->a[60874] = anon_sym_QMARK;
	v->a[60875] = anon_sym_DOLLAR;
	v->a[60876] = anon_sym_POUND;
	v->a[60877] = anon_sym_AT;
	v->a[60878] = anon_sym_0;
	v->a[60879] = 5;
	small_parse_table_3044(v);
}

void	small_parse_table_3044(t_small_parse_table_array *v)
{
	v->a[60880] = actions(3);
	v->a[60881] = 1;
	v->a[60882] = sym_comment;
	v->a[60883] = actions(1577);
	v->a[60884] = 1;
	v->a[60885] = aux_sym_concatenation_token1;
	v->a[60886] = actions(1579);
	v->a[60887] = 1;
	v->a[60888] = sym__concat;
	v->a[60889] = state(1256);
	v->a[60890] = 1;
	v->a[60891] = aux_sym_concatenation_repeat1;
	v->a[60892] = actions(2517);
	v->a[60893] = 10;
	v->a[60894] = aux_sym_heredoc_redirect_token1;
	v->a[60895] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60896] = anon_sym_DOLLAR;
	v->a[60897] = anon_sym_DQUOTE;
	v->a[60898] = sym_raw_string;
	v->a[60899] = sym_number;
	small_parse_table_3045(v);
}

/* EOF small_parse_table_608.c */
