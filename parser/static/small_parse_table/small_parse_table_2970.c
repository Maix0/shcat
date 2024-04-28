/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2970.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14850(t_small_parse_table_array *v)
{
	v->a[297000] = actions(13068);
	v->a[297001] = 1;
	v->a[297002] = anon_sym_DOLLAR_LBRACE;
	v->a[297003] = actions(13070);
	v->a[297004] = 1;
	v->a[297005] = anon_sym_DOLLAR_LPAREN;
	v->a[297006] = actions(13072);
	v->a[297007] = 1;
	v->a[297008] = anon_sym_BQUOTE;
	v->a[297009] = actions(13074);
	v->a[297010] = 1;
	v->a[297011] = anon_sym_DOLLAR_BQUOTE;
	v->a[297012] = actions(13366);
	v->a[297013] = 1;
	v->a[297014] = anon_sym_DOLLAR;
	v->a[297015] = actions(13368);
	v->a[297016] = 1;
	v->a[297017] = anon_sym_DQUOTE;
	v->a[297018] = state(5771);
	v->a[297019] = 1;
	small_parse_table_14851(v);
}

void	small_parse_table_14851(t_small_parse_table_array *v)
{
	v->a[297020] = aux_sym_string_repeat1;
	v->a[297021] = actions(13058);
	v->a[297022] = 2;
	v->a[297023] = anon_sym_LPAREN_LPAREN;
	v->a[297024] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[297025] = state(6127);
	v->a[297026] = 4;
	v->a[297027] = sym_arithmetic_expansion;
	v->a[297028] = sym_simple_expansion;
	v->a[297029] = sym_expansion;
	v->a[297030] = sym_command_substitution;
	v->a[297031] = 12;
	v->a[297032] = actions(3);
	v->a[297033] = 1;
	v->a[297034] = sym_comment;
	v->a[297035] = actions(13060);
	v->a[297036] = 1;
	v->a[297037] = anon_sym_DOLLAR_LBRACK;
	v->a[297038] = actions(13066);
	v->a[297039] = 1;
	small_parse_table_14852(v);
}

void	small_parse_table_14852(t_small_parse_table_array *v)
{
	v->a[297040] = sym_string_content;
	v->a[297041] = actions(13068);
	v->a[297042] = 1;
	v->a[297043] = anon_sym_DOLLAR_LBRACE;
	v->a[297044] = actions(13070);
	v->a[297045] = 1;
	v->a[297046] = anon_sym_DOLLAR_LPAREN;
	v->a[297047] = actions(13072);
	v->a[297048] = 1;
	v->a[297049] = anon_sym_BQUOTE;
	v->a[297050] = actions(13074);
	v->a[297051] = 1;
	v->a[297052] = anon_sym_DOLLAR_BQUOTE;
	v->a[297053] = actions(13370);
	v->a[297054] = 1;
	v->a[297055] = anon_sym_DOLLAR;
	v->a[297056] = actions(13372);
	v->a[297057] = 1;
	v->a[297058] = anon_sym_DQUOTE;
	v->a[297059] = state(5768);
	small_parse_table_14853(v);
}

void	small_parse_table_14853(t_small_parse_table_array *v)
{
	v->a[297060] = 1;
	v->a[297061] = aux_sym_string_repeat1;
	v->a[297062] = actions(13058);
	v->a[297063] = 2;
	v->a[297064] = anon_sym_LPAREN_LPAREN;
	v->a[297065] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[297066] = state(6127);
	v->a[297067] = 4;
	v->a[297068] = sym_arithmetic_expansion;
	v->a[297069] = sym_simple_expansion;
	v->a[297070] = sym_expansion;
	v->a[297071] = sym_command_substitution;
	v->a[297072] = 12;
	v->a[297073] = actions(3);
	v->a[297074] = 1;
	v->a[297075] = sym_comment;
	v->a[297076] = actions(13060);
	v->a[297077] = 1;
	v->a[297078] = anon_sym_DOLLAR_LBRACK;
	v->a[297079] = actions(13066);
	small_parse_table_14854(v);
}

void	small_parse_table_14854(t_small_parse_table_array *v)
{
	v->a[297080] = 1;
	v->a[297081] = sym_string_content;
	v->a[297082] = actions(13068);
	v->a[297083] = 1;
	v->a[297084] = anon_sym_DOLLAR_LBRACE;
	v->a[297085] = actions(13070);
	v->a[297086] = 1;
	v->a[297087] = anon_sym_DOLLAR_LPAREN;
	v->a[297088] = actions(13072);
	v->a[297089] = 1;
	v->a[297090] = anon_sym_BQUOTE;
	v->a[297091] = actions(13074);
	v->a[297092] = 1;
	v->a[297093] = anon_sym_DOLLAR_BQUOTE;
	v->a[297094] = actions(13374);
	v->a[297095] = 1;
	v->a[297096] = anon_sym_DOLLAR;
	v->a[297097] = actions(13376);
	v->a[297098] = 1;
	v->a[297099] = anon_sym_DQUOTE;
	small_parse_table_14855(v);
}

/* EOF small_parse_table_2970.c */
