/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_728.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3640(t_small_parse_table_array *v)
{
	v->a[72800] = 6;
	v->a[72801] = actions(3);
	v->a[72802] = 1;
	v->a[72803] = sym_comment;
	v->a[72804] = actions(2881);
	v->a[72805] = 1;
	v->a[72806] = sym_string_content;
	v->a[72807] = actions(2885);
	v->a[72808] = 1;
	v->a[72809] = sym_variable_name;
	v->a[72810] = actions(2917);
	v->a[72811] = 1;
	v->a[72812] = anon_sym_DQUOTE;
	v->a[72813] = actions(2883);
	v->a[72814] = 2;
	v->a[72815] = aux_sym__simple_variable_name_token1;
	v->a[72816] = aux_sym__multiline_variable_name_token1;
	v->a[72817] = actions(2877);
	v->a[72818] = 9;
	v->a[72819] = anon_sym_BANG;
	small_parse_table_3641(v);
}

void	small_parse_table_3641(t_small_parse_table_array *v)
{
	v->a[72820] = anon_sym_DASH;
	v->a[72821] = anon_sym_STAR;
	v->a[72822] = anon_sym_QMARK;
	v->a[72823] = anon_sym_DOLLAR;
	v->a[72824] = anon_sym_POUND;
	v->a[72825] = anon_sym_AT;
	v->a[72826] = anon_sym_0;
	v->a[72827] = anon_sym__;
	v->a[72828] = 6;
	v->a[72829] = actions(3);
	v->a[72830] = 1;
	v->a[72831] = sym_comment;
	v->a[72832] = actions(2881);
	v->a[72833] = 1;
	v->a[72834] = sym_string_content;
	v->a[72835] = actions(2885);
	v->a[72836] = 1;
	v->a[72837] = sym_variable_name;
	v->a[72838] = actions(2919);
	v->a[72839] = 1;
	small_parse_table_3642(v);
}

void	small_parse_table_3642(t_small_parse_table_array *v)
{
	v->a[72840] = anon_sym_DQUOTE;
	v->a[72841] = actions(2883);
	v->a[72842] = 2;
	v->a[72843] = aux_sym__simple_variable_name_token1;
	v->a[72844] = aux_sym__multiline_variable_name_token1;
	v->a[72845] = actions(2877);
	v->a[72846] = 9;
	v->a[72847] = anon_sym_BANG;
	v->a[72848] = anon_sym_DASH;
	v->a[72849] = anon_sym_STAR;
	v->a[72850] = anon_sym_QMARK;
	v->a[72851] = anon_sym_DOLLAR;
	v->a[72852] = anon_sym_POUND;
	v->a[72853] = anon_sym_AT;
	v->a[72854] = anon_sym_0;
	v->a[72855] = anon_sym__;
	v->a[72856] = 6;
	v->a[72857] = actions(3);
	v->a[72858] = 1;
	v->a[72859] = sym_comment;
	small_parse_table_3643(v);
}

void	small_parse_table_3643(t_small_parse_table_array *v)
{
	v->a[72860] = actions(2881);
	v->a[72861] = 1;
	v->a[72862] = sym_string_content;
	v->a[72863] = actions(2885);
	v->a[72864] = 1;
	v->a[72865] = sym_variable_name;
	v->a[72866] = actions(2921);
	v->a[72867] = 1;
	v->a[72868] = anon_sym_DQUOTE;
	v->a[72869] = actions(2883);
	v->a[72870] = 2;
	v->a[72871] = aux_sym__simple_variable_name_token1;
	v->a[72872] = aux_sym__multiline_variable_name_token1;
	v->a[72873] = actions(2877);
	v->a[72874] = 9;
	v->a[72875] = anon_sym_BANG;
	v->a[72876] = anon_sym_DASH;
	v->a[72877] = anon_sym_STAR;
	v->a[72878] = anon_sym_QMARK;
	v->a[72879] = anon_sym_DOLLAR;
	small_parse_table_3644(v);
}

void	small_parse_table_3644(t_small_parse_table_array *v)
{
	v->a[72880] = anon_sym_POUND;
	v->a[72881] = anon_sym_AT;
	v->a[72882] = anon_sym_0;
	v->a[72883] = anon_sym__;
	v->a[72884] = 7;
	v->a[72885] = actions(3);
	v->a[72886] = 1;
	v->a[72887] = sym_comment;
	v->a[72888] = actions(1079);
	v->a[72889] = 1;
	v->a[72890] = sym_file_descriptor;
	v->a[72891] = actions(2923);
	v->a[72892] = 1;
	v->a[72893] = aux_sym_heredoc_redirect_token1;
	v->a[72894] = state(1956);
	v->a[72895] = 1;
	v->a[72896] = sym__heredoc_expression;
	v->a[72897] = actions(1061);
	v->a[72898] = 2;
	v->a[72899] = anon_sym_AMP_AMP;
	small_parse_table_3645(v);
}

/* EOF small_parse_table_728.c */
