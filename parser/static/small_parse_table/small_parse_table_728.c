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
	v->a[72800] = actions(2896);
	v->a[72801] = 1;
	v->a[72802] = anon_sym_DQUOTE;
	v->a[72803] = actions(2854);
	v->a[72804] = 2;
	v->a[72805] = aux_sym__simple_variable_name_token1;
	v->a[72806] = aux_sym__multiline_variable_name_token1;
	v->a[72807] = actions(2848);
	v->a[72808] = 9;
	v->a[72809] = anon_sym_BANG;
	v->a[72810] = anon_sym_DASH;
	v->a[72811] = anon_sym_STAR;
	v->a[72812] = anon_sym_QMARK;
	v->a[72813] = anon_sym_DOLLAR;
	v->a[72814] = anon_sym_POUND;
	v->a[72815] = anon_sym_AT;
	v->a[72816] = anon_sym_0;
	v->a[72817] = anon_sym__;
	v->a[72818] = 6;
	v->a[72819] = actions(3);
	small_parse_table_3641(v);
}

void	small_parse_table_3641(t_small_parse_table_array *v)
{
	v->a[72820] = 1;
	v->a[72821] = sym_comment;
	v->a[72822] = actions(2852);
	v->a[72823] = 1;
	v->a[72824] = sym_string_content;
	v->a[72825] = actions(2856);
	v->a[72826] = 1;
	v->a[72827] = sym_variable_name;
	v->a[72828] = actions(2898);
	v->a[72829] = 1;
	v->a[72830] = anon_sym_DQUOTE;
	v->a[72831] = actions(2854);
	v->a[72832] = 2;
	v->a[72833] = aux_sym__simple_variable_name_token1;
	v->a[72834] = aux_sym__multiline_variable_name_token1;
	v->a[72835] = actions(2848);
	v->a[72836] = 9;
	v->a[72837] = anon_sym_BANG;
	v->a[72838] = anon_sym_DASH;
	v->a[72839] = anon_sym_STAR;
	small_parse_table_3642(v);
}

void	small_parse_table_3642(t_small_parse_table_array *v)
{
	v->a[72840] = anon_sym_QMARK;
	v->a[72841] = anon_sym_DOLLAR;
	v->a[72842] = anon_sym_POUND;
	v->a[72843] = anon_sym_AT;
	v->a[72844] = anon_sym_0;
	v->a[72845] = anon_sym__;
	v->a[72846] = 7;
	v->a[72847] = actions(3);
	v->a[72848] = 1;
	v->a[72849] = sym_comment;
	v->a[72850] = actions(1086);
	v->a[72851] = 1;
	v->a[72852] = sym_file_descriptor;
	v->a[72853] = actions(2900);
	v->a[72854] = 1;
	v->a[72855] = aux_sym_heredoc_redirect_token1;
	v->a[72856] = state(1993);
	v->a[72857] = 1;
	v->a[72858] = sym__heredoc_expression;
	v->a[72859] = actions(1068);
	small_parse_table_3643(v);
}

void	small_parse_table_3643(t_small_parse_table_array *v)
{
	v->a[72860] = 2;
	v->a[72861] = anon_sym_AMP_AMP;
	v->a[72862] = anon_sym_PIPE_PIPE;
	v->a[72863] = state(1600);
	v->a[72864] = 2;
	v->a[72865] = sym_file_redirect;
	v->a[72866] = aux_sym_redirected_statement_repeat2;
	v->a[72867] = actions(1070);
	v->a[72868] = 7;
	v->a[72869] = anon_sym_LT;
	v->a[72870] = anon_sym_GT;
	v->a[72871] = anon_sym_GT_GT;
	v->a[72872] = anon_sym_LT_AMP;
	v->a[72873] = anon_sym_GT_AMP;
	v->a[72874] = anon_sym_GT_PIPE;
	v->a[72875] = anon_sym_LT_GT;
	v->a[72876] = 6;
	v->a[72877] = actions(3);
	v->a[72878] = 1;
	v->a[72879] = sym_comment;
	small_parse_table_3644(v);
}

void	small_parse_table_3644(t_small_parse_table_array *v)
{
	v->a[72880] = actions(2852);
	v->a[72881] = 1;
	v->a[72882] = sym_string_content;
	v->a[72883] = actions(2856);
	v->a[72884] = 1;
	v->a[72885] = sym_variable_name;
	v->a[72886] = actions(2902);
	v->a[72887] = 1;
	v->a[72888] = anon_sym_DQUOTE;
	v->a[72889] = actions(2854);
	v->a[72890] = 2;
	v->a[72891] = aux_sym__simple_variable_name_token1;
	v->a[72892] = aux_sym__multiline_variable_name_token1;
	v->a[72893] = actions(2848);
	v->a[72894] = 9;
	v->a[72895] = anon_sym_BANG;
	v->a[72896] = anon_sym_DASH;
	v->a[72897] = anon_sym_STAR;
	v->a[72898] = anon_sym_QMARK;
	v->a[72899] = anon_sym_DOLLAR;
	small_parse_table_3645(v);
}

/* EOF small_parse_table_728.c */
