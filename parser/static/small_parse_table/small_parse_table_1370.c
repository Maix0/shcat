/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1370.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6850(t_small_parse_table_array *v)
{
	v->a[137000] = actions(7985);
	v->a[137001] = 1;
	v->a[137002] = anon_sym_BQUOTE;
	v->a[137003] = actions(7988);
	v->a[137004] = 1;
	v->a[137005] = anon_sym_DOLLAR_BQUOTE;
	v->a[137006] = state(3061);
	v->a[137007] = 1;
	v->a[137008] = aux_sym_string_repeat1;
	v->a[137009] = state(3218);
	v->a[137010] = 4;
	v->a[137011] = sym_arithmetic_expansion;
	v->a[137012] = sym_simple_expansion;
	v->a[137013] = sym_expansion;
	v->a[137014] = sym_command_substitution;
	v->a[137015] = 11;
	v->a[137016] = actions(3);
	v->a[137017] = 1;
	v->a[137018] = sym_comment;
	v->a[137019] = actions(7688);
	small_parse_table_6851(v);
}

void	small_parse_table_6851(t_small_parse_table_array *v)
{
	v->a[137020] = 1;
	v->a[137021] = anon_sym_DQUOTE;
	v->a[137022] = actions(7760);
	v->a[137023] = 1;
	v->a[137024] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137025] = actions(7766);
	v->a[137026] = 1;
	v->a[137027] = sym_string_content;
	v->a[137028] = actions(7768);
	v->a[137029] = 1;
	v->a[137030] = anon_sym_DOLLAR_LBRACE;
	v->a[137031] = actions(7770);
	v->a[137032] = 1;
	v->a[137033] = anon_sym_DOLLAR_LPAREN;
	v->a[137034] = actions(7772);
	v->a[137035] = 1;
	v->a[137036] = anon_sym_BQUOTE;
	v->a[137037] = actions(7774);
	v->a[137038] = 1;
	v->a[137039] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6852(v);
}

void	small_parse_table_6852(t_small_parse_table_array *v)
{
	v->a[137040] = actions(7991);
	v->a[137041] = 1;
	v->a[137042] = anon_sym_DOLLAR;
	v->a[137043] = state(3061);
	v->a[137044] = 1;
	v->a[137045] = aux_sym_string_repeat1;
	v->a[137046] = state(3218);
	v->a[137047] = 4;
	v->a[137048] = sym_arithmetic_expansion;
	v->a[137049] = sym_simple_expansion;
	v->a[137050] = sym_expansion;
	v->a[137051] = sym_command_substitution;
	v->a[137052] = 11;
	v->a[137053] = actions(3);
	v->a[137054] = 1;
	v->a[137055] = sym_comment;
	v->a[137056] = actions(7592);
	v->a[137057] = 1;
	v->a[137058] = anon_sym_DQUOTE;
	v->a[137059] = actions(7760);
	small_parse_table_6853(v);
}

void	small_parse_table_6853(t_small_parse_table_array *v)
{
	v->a[137060] = 1;
	v->a[137061] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137062] = actions(7766);
	v->a[137063] = 1;
	v->a[137064] = sym_string_content;
	v->a[137065] = actions(7768);
	v->a[137066] = 1;
	v->a[137067] = anon_sym_DOLLAR_LBRACE;
	v->a[137068] = actions(7770);
	v->a[137069] = 1;
	v->a[137070] = anon_sym_DOLLAR_LPAREN;
	v->a[137071] = actions(7772);
	v->a[137072] = 1;
	v->a[137073] = anon_sym_BQUOTE;
	v->a[137074] = actions(7774);
	v->a[137075] = 1;
	v->a[137076] = anon_sym_DOLLAR_BQUOTE;
	v->a[137077] = actions(7993);
	v->a[137078] = 1;
	v->a[137079] = anon_sym_DOLLAR;
	small_parse_table_6854(v);
}

void	small_parse_table_6854(t_small_parse_table_array *v)
{
	v->a[137080] = state(3061);
	v->a[137081] = 1;
	v->a[137082] = aux_sym_string_repeat1;
	v->a[137083] = state(3218);
	v->a[137084] = 4;
	v->a[137085] = sym_arithmetic_expansion;
	v->a[137086] = sym_simple_expansion;
	v->a[137087] = sym_expansion;
	v->a[137088] = sym_command_substitution;
	v->a[137089] = 7;
	v->a[137090] = actions(3);
	v->a[137091] = 1;
	v->a[137092] = sym_comment;
	v->a[137093] = actions(7754);
	v->a[137094] = 1;
	v->a[137095] = aux_sym__simple_variable_name_token1;
	v->a[137096] = actions(7758);
	v->a[137097] = 1;
	v->a[137098] = sym_variable_name;
	v->a[137099] = actions(7995);
	small_parse_table_6855(v);
}

/* EOF small_parse_table_1370.c */
