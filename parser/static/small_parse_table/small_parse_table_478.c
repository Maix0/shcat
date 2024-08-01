/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_478.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2390(t_small_parse_table_array *v)
{
	v->a[47800] = actions(2015);
	v->a[47801] = 2;
	v->a[47802] = aux_sym__simple_variable_name_token1;
	v->a[47803] = aux_sym__multiline_variable_name_token1;
	v->a[47804] = actions(2009);
	v->a[47805] = 8;
	v->a[47806] = anon_sym_BANG;
	v->a[47807] = anon_sym_DASH;
	v->a[47808] = anon_sym_STAR;
	v->a[47809] = anon_sym_QMARK;
	v->a[47810] = anon_sym_DOLLAR;
	v->a[47811] = anon_sym_POUND;
	v->a[47812] = anon_sym_AT;
	v->a[47813] = anon_sym_0;
	v->a[47814] = 6;
	v->a[47815] = actions(3);
	v->a[47816] = 1;
	v->a[47817] = sym_comment;
	v->a[47818] = actions(2013);
	v->a[47819] = 1;
	small_parse_table_2391(v);
}

void	small_parse_table_2391(t_small_parse_table_array *v)
{
	v->a[47820] = sym_string_content;
	v->a[47821] = actions(2017);
	v->a[47822] = 1;
	v->a[47823] = sym_variable_name;
	v->a[47824] = actions(2209);
	v->a[47825] = 1;
	v->a[47826] = anon_sym_DQUOTE;
	v->a[47827] = actions(2015);
	v->a[47828] = 2;
	v->a[47829] = aux_sym__simple_variable_name_token1;
	v->a[47830] = aux_sym__multiline_variable_name_token1;
	v->a[47831] = actions(2009);
	v->a[47832] = 8;
	v->a[47833] = anon_sym_BANG;
	v->a[47834] = anon_sym_DASH;
	v->a[47835] = anon_sym_STAR;
	v->a[47836] = anon_sym_QMARK;
	v->a[47837] = anon_sym_DOLLAR;
	v->a[47838] = anon_sym_POUND;
	v->a[47839] = anon_sym_AT;
	small_parse_table_2392(v);
}

void	small_parse_table_2392(t_small_parse_table_array *v)
{
	v->a[47840] = anon_sym_0;
	v->a[47841] = 8;
	v->a[47842] = actions(3);
	v->a[47843] = 1;
	v->a[47844] = sym_comment;
	v->a[47845] = actions(597);
	v->a[47846] = 1;
	v->a[47847] = anon_sym_LT_LT;
	v->a[47848] = actions(1870);
	v->a[47849] = 1;
	v->a[47850] = aux_sym_heredoc_redirect_token1;
	v->a[47851] = state(416);
	v->a[47852] = 1;
	v->a[47853] = sym_terminator;
	v->a[47854] = actions(593);
	v->a[47855] = 2;
	v->a[47856] = anon_sym_SEMI_SEMI;
	v->a[47857] = anon_sym_SEMI;
	v->a[47858] = actions(769);
	v->a[47859] = 2;
	small_parse_table_2393(v);
}

void	small_parse_table_2393(t_small_parse_table_array *v)
{
	v->a[47860] = anon_sym_AMP_AMP;
	v->a[47861] = anon_sym_PIPE_PIPE;
	v->a[47862] = actions(1924);
	v->a[47863] = 3;
	v->a[47864] = anon_sym_LT;
	v->a[47865] = anon_sym_GT;
	v->a[47866] = anon_sym_GT_GT;
	v->a[47867] = state(1040);
	v->a[47868] = 3;
	v->a[47869] = sym_file_redirect;
	v->a[47870] = sym_heredoc_redirect;
	v->a[47871] = aux_sym_redirected_statement_repeat1;
	v->a[47872] = 6;
	v->a[47873] = actions(3);
	v->a[47874] = 1;
	v->a[47875] = sym_comment;
	v->a[47876] = actions(2013);
	v->a[47877] = 1;
	v->a[47878] = sym_string_content;
	v->a[47879] = actions(2017);
	small_parse_table_2394(v);
}

void	small_parse_table_2394(t_small_parse_table_array *v)
{
	v->a[47880] = 1;
	v->a[47881] = sym_variable_name;
	v->a[47882] = actions(2211);
	v->a[47883] = 1;
	v->a[47884] = anon_sym_DQUOTE;
	v->a[47885] = actions(2015);
	v->a[47886] = 2;
	v->a[47887] = aux_sym__simple_variable_name_token1;
	v->a[47888] = aux_sym__multiline_variable_name_token1;
	v->a[47889] = actions(2009);
	v->a[47890] = 8;
	v->a[47891] = anon_sym_BANG;
	v->a[47892] = anon_sym_DASH;
	v->a[47893] = anon_sym_STAR;
	v->a[47894] = anon_sym_QMARK;
	v->a[47895] = anon_sym_DOLLAR;
	v->a[47896] = anon_sym_POUND;
	v->a[47897] = anon_sym_AT;
	v->a[47898] = anon_sym_0;
	v->a[47899] = 3;
	small_parse_table_2395(v);
}

/* EOF small_parse_table_478.c */
