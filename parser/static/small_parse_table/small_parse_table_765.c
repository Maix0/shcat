/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_765.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3825(t_small_parse_table_array *v)
{
	v->a[76500] = 1;
	v->a[76501] = anon_sym_BQUOTE;
	v->a[76502] = actions(3125);
	v->a[76503] = 1;
	v->a[76504] = anon_sym_DOLLAR;
	v->a[76505] = actions(3127);
	v->a[76506] = 1;
	v->a[76507] = anon_sym_DQUOTE;
	v->a[76508] = state(1681);
	v->a[76509] = 1;
	v->a[76510] = aux_sym_string_repeat1;
	v->a[76511] = state(1739);
	v->a[76512] = 4;
	v->a[76513] = sym_arithmetic_expansion;
	v->a[76514] = sym_simple_expansion;
	v->a[76515] = sym_expansion;
	v->a[76516] = sym_command_substitution;
	v->a[76517] = 4;
	v->a[76518] = actions(3);
	v->a[76519] = 1;
	small_parse_table_3826(v);
}

void	small_parse_table_3826(t_small_parse_table_array *v)
{
	v->a[76520] = sym_comment;
	v->a[76521] = actions(3131);
	v->a[76522] = 1;
	v->a[76523] = anon_sym_esac;
	v->a[76524] = actions(3133);
	v->a[76525] = 1;
	v->a[76526] = sym_extglob_pattern;
	v->a[76527] = actions(3129);
	v->a[76528] = 10;
	v->a[76529] = anon_sym_LPAREN;
	v->a[76530] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76531] = anon_sym_DOLLAR;
	v->a[76532] = anon_sym_DQUOTE;
	v->a[76533] = sym_raw_string;
	v->a[76534] = sym_number;
	v->a[76535] = anon_sym_DOLLAR_LBRACE;
	v->a[76536] = anon_sym_DOLLAR_LPAREN;
	v->a[76537] = anon_sym_BQUOTE;
	v->a[76538] = sym_word;
	v->a[76539] = 10;
	small_parse_table_3827(v);
}

void	small_parse_table_3827(t_small_parse_table_array *v)
{
	v->a[76540] = actions(3);
	v->a[76541] = 1;
	v->a[76542] = sym_comment;
	v->a[76543] = actions(3071);
	v->a[76544] = 1;
	v->a[76545] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76546] = actions(3077);
	v->a[76547] = 1;
	v->a[76548] = sym_string_content;
	v->a[76549] = actions(3079);
	v->a[76550] = 1;
	v->a[76551] = anon_sym_DOLLAR_LBRACE;
	v->a[76552] = actions(3081);
	v->a[76553] = 1;
	v->a[76554] = anon_sym_DOLLAR_LPAREN;
	v->a[76555] = actions(3083);
	v->a[76556] = 1;
	v->a[76557] = anon_sym_BQUOTE;
	v->a[76558] = actions(3135);
	v->a[76559] = 1;
	small_parse_table_3828(v);
}

void	small_parse_table_3828(t_small_parse_table_array *v)
{
	v->a[76560] = anon_sym_DOLLAR;
	v->a[76561] = actions(3137);
	v->a[76562] = 1;
	v->a[76563] = anon_sym_DQUOTE;
	v->a[76564] = state(1613);
	v->a[76565] = 1;
	v->a[76566] = aux_sym_string_repeat1;
	v->a[76567] = state(1739);
	v->a[76568] = 4;
	v->a[76569] = sym_arithmetic_expansion;
	v->a[76570] = sym_simple_expansion;
	v->a[76571] = sym_expansion;
	v->a[76572] = sym_command_substitution;
	v->a[76573] = 4;
	v->a[76574] = actions(3);
	v->a[76575] = 1;
	v->a[76576] = sym_comment;
	v->a[76577] = actions(1817);
	v->a[76578] = 1;
	v->a[76579] = sym_variable_name;
	small_parse_table_3829(v);
}

void	small_parse_table_3829(t_small_parse_table_array *v)
{
	v->a[76580] = actions(1815);
	v->a[76581] = 2;
	v->a[76582] = aux_sym__simple_variable_name_token1;
	v->a[76583] = aux_sym__multiline_variable_name_token1;
	v->a[76584] = actions(1813);
	v->a[76585] = 9;
	v->a[76586] = anon_sym_BANG;
	v->a[76587] = anon_sym_DASH;
	v->a[76588] = anon_sym_STAR;
	v->a[76589] = anon_sym_QMARK;
	v->a[76590] = anon_sym_DOLLAR;
	v->a[76591] = anon_sym_POUND;
	v->a[76592] = anon_sym_AT;
	v->a[76593] = anon_sym_0;
	v->a[76594] = anon_sym__;
	v->a[76595] = 10;
	v->a[76596] = actions(3);
	v->a[76597] = 1;
	v->a[76598] = sym_comment;
	v->a[76599] = actions(3071);
	small_parse_table_3830(v);
}

/* EOF small_parse_table_765.c */
