/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_510.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2550(t_small_parse_table_array *v)
{
	v->a[51000] = actions(2013);
	v->a[51001] = 1;
	v->a[51002] = sym_string_content;
	v->a[51003] = actions(2017);
	v->a[51004] = 1;
	v->a[51005] = sym_variable_name;
	v->a[51006] = actions(2015);
	v->a[51007] = 2;
	v->a[51008] = aux_sym__simple_variable_name_token1;
	v->a[51009] = aux_sym__multiline_variable_name_token1;
	v->a[51010] = actions(2009);
	v->a[51011] = 8;
	v->a[51012] = anon_sym_BANG;
	v->a[51013] = anon_sym_DASH;
	v->a[51014] = anon_sym_STAR;
	v->a[51015] = anon_sym_QMARK;
	v->a[51016] = anon_sym_DOLLAR;
	v->a[51017] = anon_sym_POUND;
	v->a[51018] = anon_sym_AT;
	v->a[51019] = anon_sym_0;
	small_parse_table_2551(v);
}

void	small_parse_table_2551(t_small_parse_table_array *v)
{
	v->a[51020] = 10;
	v->a[51021] = actions(3);
	v->a[51022] = 1;
	v->a[51023] = sym_comment;
	v->a[51024] = actions(2293);
	v->a[51025] = 1;
	v->a[51026] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51027] = actions(2299);
	v->a[51028] = 1;
	v->a[51029] = sym_string_content;
	v->a[51030] = actions(2301);
	v->a[51031] = 1;
	v->a[51032] = anon_sym_DOLLAR_LBRACE;
	v->a[51033] = actions(2303);
	v->a[51034] = 1;
	v->a[51035] = anon_sym_DOLLAR_LPAREN;
	v->a[51036] = actions(2305);
	v->a[51037] = 1;
	v->a[51038] = anon_sym_BQUOTE;
	v->a[51039] = actions(2553);
	small_parse_table_2552(v);
}

void	small_parse_table_2552(t_small_parse_table_array *v)
{
	v->a[51040] = 1;
	v->a[51041] = anon_sym_DOLLAR;
	v->a[51042] = actions(2555);
	v->a[51043] = 1;
	v->a[51044] = anon_sym_DQUOTE;
	v->a[51045] = state(1176);
	v->a[51046] = 1;
	v->a[51047] = aux_sym_string_repeat1;
	v->a[51048] = state(1394);
	v->a[51049] = 4;
	v->a[51050] = sym_arithmetic_expansion;
	v->a[51051] = sym_simple_expansion;
	v->a[51052] = sym_expansion;
	v->a[51053] = sym_command_substitution;
	v->a[51054] = 6;
	v->a[51055] = actions(3);
	v->a[51056] = 1;
	v->a[51057] = sym_comment;
	v->a[51058] = actions(1890);
	v->a[51059] = 1;
	small_parse_table_2553(v);
}

void	small_parse_table_2553(t_small_parse_table_array *v)
{
	v->a[51060] = aux_sym_concatenation_token1;
	v->a[51061] = actions(1892);
	v->a[51062] = 1;
	v->a[51063] = sym__concat;
	v->a[51064] = state(1175);
	v->a[51065] = 1;
	v->a[51066] = aux_sym_concatenation_repeat1;
	v->a[51067] = actions(917);
	v->a[51068] = 2;
	v->a[51069] = sym_variable_name;
	v->a[51070] = aux_sym_heredoc_redirect_token1;
	v->a[51071] = actions(919);
	v->a[51072] = 7;
	v->a[51073] = anon_sym_PIPE;
	v->a[51074] = anon_sym_AMP_AMP;
	v->a[51075] = anon_sym_PIPE_PIPE;
	v->a[51076] = anon_sym_LT;
	v->a[51077] = anon_sym_GT;
	v->a[51078] = anon_sym_GT_GT;
	v->a[51079] = anon_sym_LT_LT;
	small_parse_table_2554(v);
}

void	small_parse_table_2554(t_small_parse_table_array *v)
{
	v->a[51080] = 8;
	v->a[51081] = actions(3);
	v->a[51082] = 1;
	v->a[51083] = sym_comment;
	v->a[51084] = actions(2277);
	v->a[51085] = 1;
	v->a[51086] = anon_sym_POUND;
	v->a[51087] = actions(2279);
	v->a[51088] = 1;
	v->a[51089] = aux_sym__simple_variable_name_token1;
	v->a[51090] = actions(2281);
	v->a[51091] = 1;
	v->a[51092] = anon_sym_0;
	v->a[51093] = actions(2283);
	v->a[51094] = 1;
	v->a[51095] = sym_variable_name;
	v->a[51096] = actions(2557);
	v->a[51097] = 1;
	v->a[51098] = anon_sym_RBRACE;
	v->a[51099] = state(1616);
	small_parse_table_2555(v);
}

/* EOF small_parse_table_510.c */
