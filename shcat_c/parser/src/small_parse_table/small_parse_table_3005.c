/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3005.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15025(t_small_parse_table_array *v)
{
	v->a[300500] = 1;
	v->a[300501] = sym_comment;
	v->a[300502] = actions(13060);
	v->a[300503] = 1;
	v->a[300504] = anon_sym_DOLLAR_LBRACK;
	v->a[300505] = actions(13066);
	v->a[300506] = 1;
	v->a[300507] = sym_string_content;
	v->a[300508] = actions(13068);
	v->a[300509] = 1;
	v->a[300510] = anon_sym_DOLLAR_LBRACE;
	v->a[300511] = actions(13070);
	v->a[300512] = 1;
	v->a[300513] = anon_sym_DOLLAR_LPAREN;
	v->a[300514] = actions(13072);
	v->a[300515] = 1;
	v->a[300516] = anon_sym_BQUOTE;
	v->a[300517] = actions(13074);
	v->a[300518] = 1;
	v->a[300519] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_15026(v);
}

void	small_parse_table_15026(t_small_parse_table_array *v)
{
	v->a[300520] = actions(13706);
	v->a[300521] = 1;
	v->a[300522] = anon_sym_DOLLAR;
	v->a[300523] = actions(13708);
	v->a[300524] = 1;
	v->a[300525] = anon_sym_DQUOTE;
	v->a[300526] = state(5768);
	v->a[300527] = 1;
	v->a[300528] = aux_sym_string_repeat1;
	v->a[300529] = actions(13058);
	v->a[300530] = 2;
	v->a[300531] = anon_sym_LPAREN_LPAREN;
	v->a[300532] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300533] = state(6127);
	v->a[300534] = 4;
	v->a[300535] = sym_arithmetic_expansion;
	v->a[300536] = sym_simple_expansion;
	v->a[300537] = sym_expansion;
	v->a[300538] = sym_command_substitution;
	v->a[300539] = 12;
	small_parse_table_15027(v);
}

void	small_parse_table_15027(t_small_parse_table_array *v)
{
	v->a[300540] = actions(3);
	v->a[300541] = 1;
	v->a[300542] = sym_comment;
	v->a[300543] = actions(13060);
	v->a[300544] = 1;
	v->a[300545] = anon_sym_DOLLAR_LBRACK;
	v->a[300546] = actions(13066);
	v->a[300547] = 1;
	v->a[300548] = sym_string_content;
	v->a[300549] = actions(13068);
	v->a[300550] = 1;
	v->a[300551] = anon_sym_DOLLAR_LBRACE;
	v->a[300552] = actions(13070);
	v->a[300553] = 1;
	v->a[300554] = anon_sym_DOLLAR_LPAREN;
	v->a[300555] = actions(13072);
	v->a[300556] = 1;
	v->a[300557] = anon_sym_BQUOTE;
	v->a[300558] = actions(13074);
	v->a[300559] = 1;
	small_parse_table_15028(v);
}

void	small_parse_table_15028(t_small_parse_table_array *v)
{
	v->a[300560] = anon_sym_DOLLAR_BQUOTE;
	v->a[300561] = actions(13710);
	v->a[300562] = 1;
	v->a[300563] = anon_sym_DOLLAR;
	v->a[300564] = actions(13712);
	v->a[300565] = 1;
	v->a[300566] = anon_sym_DQUOTE;
	v->a[300567] = state(5768);
	v->a[300568] = 1;
	v->a[300569] = aux_sym_string_repeat1;
	v->a[300570] = actions(13058);
	v->a[300571] = 2;
	v->a[300572] = anon_sym_LPAREN_LPAREN;
	v->a[300573] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300574] = state(6127);
	v->a[300575] = 4;
	v->a[300576] = sym_arithmetic_expansion;
	v->a[300577] = sym_simple_expansion;
	v->a[300578] = sym_expansion;
	v->a[300579] = sym_command_substitution;
	small_parse_table_15029(v);
}

void	small_parse_table_15029(t_small_parse_table_array *v)
{
	v->a[300580] = 12;
	v->a[300581] = actions(3);
	v->a[300582] = 1;
	v->a[300583] = sym_comment;
	v->a[300584] = actions(13060);
	v->a[300585] = 1;
	v->a[300586] = anon_sym_DOLLAR_LBRACK;
	v->a[300587] = actions(13066);
	v->a[300588] = 1;
	v->a[300589] = sym_string_content;
	v->a[300590] = actions(13068);
	v->a[300591] = 1;
	v->a[300592] = anon_sym_DOLLAR_LBRACE;
	v->a[300593] = actions(13070);
	v->a[300594] = 1;
	v->a[300595] = anon_sym_DOLLAR_LPAREN;
	v->a[300596] = actions(13072);
	v->a[300597] = 1;
	v->a[300598] = anon_sym_BQUOTE;
	v->a[300599] = actions(13074);
	small_parse_table_15030(v);
}

/* EOF small_parse_table_3005.c */
