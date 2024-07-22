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
	v->a[76501] = aux_sym__simple_variable_name_token1;
	v->a[76502] = actions(3044);
	v->a[76503] = 1;
	v->a[76504] = anon_sym_0;
	v->a[76505] = actions(3046);
	v->a[76506] = 1;
	v->a[76507] = sym_variable_name;
	v->a[76508] = actions(3264);
	v->a[76509] = 1;
	v->a[76510] = anon_sym_RBRACE;
	v->a[76511] = state(2035);
	v->a[76512] = 1;
	v->a[76513] = sym__expansion_body;
	v->a[76514] = actions(3038);
	v->a[76515] = 6;
	v->a[76516] = anon_sym_BANG;
	v->a[76517] = anon_sym_DASH;
	v->a[76518] = anon_sym_STAR;
	v->a[76519] = anon_sym_QMARK;
	small_parse_table_3826(v);
}

void	small_parse_table_3826(t_small_parse_table_array *v)
{
	v->a[76520] = anon_sym_DOLLAR;
	v->a[76521] = anon_sym_AT;
	v->a[76522] = 10;
	v->a[76523] = actions(3);
	v->a[76524] = 1;
	v->a[76525] = sym_comment;
	v->a[76526] = actions(3058);
	v->a[76527] = 1;
	v->a[76528] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76529] = actions(3064);
	v->a[76530] = 1;
	v->a[76531] = sym_string_content;
	v->a[76532] = actions(3066);
	v->a[76533] = 1;
	v->a[76534] = anon_sym_DOLLAR_LBRACE;
	v->a[76535] = actions(3068);
	v->a[76536] = 1;
	v->a[76537] = anon_sym_DOLLAR_LPAREN;
	v->a[76538] = actions(3070);
	v->a[76539] = 1;
	small_parse_table_3827(v);
}

void	small_parse_table_3827(t_small_parse_table_array *v)
{
	v->a[76540] = anon_sym_BQUOTE;
	v->a[76541] = actions(3266);
	v->a[76542] = 1;
	v->a[76543] = anon_sym_DOLLAR;
	v->a[76544] = actions(3268);
	v->a[76545] = 1;
	v->a[76546] = anon_sym_DQUOTE;
	v->a[76547] = state(1610);
	v->a[76548] = 1;
	v->a[76549] = aux_sym_string_repeat1;
	v->a[76550] = state(1748);
	v->a[76551] = 4;
	v->a[76552] = sym_arithmetic_expansion;
	v->a[76553] = sym_simple_expansion;
	v->a[76554] = sym_expansion;
	v->a[76555] = sym_command_substitution;
	v->a[76556] = 10;
	v->a[76557] = actions(3);
	v->a[76558] = 1;
	v->a[76559] = sym_comment;
	small_parse_table_3828(v);
}

void	small_parse_table_3828(t_small_parse_table_array *v)
{
	v->a[76560] = actions(3058);
	v->a[76561] = 1;
	v->a[76562] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76563] = actions(3064);
	v->a[76564] = 1;
	v->a[76565] = sym_string_content;
	v->a[76566] = actions(3066);
	v->a[76567] = 1;
	v->a[76568] = anon_sym_DOLLAR_LBRACE;
	v->a[76569] = actions(3068);
	v->a[76570] = 1;
	v->a[76571] = anon_sym_DOLLAR_LPAREN;
	v->a[76572] = actions(3070);
	v->a[76573] = 1;
	v->a[76574] = anon_sym_BQUOTE;
	v->a[76575] = actions(3270);
	v->a[76576] = 1;
	v->a[76577] = anon_sym_DOLLAR;
	v->a[76578] = actions(3272);
	v->a[76579] = 1;
	small_parse_table_3829(v);
}

void	small_parse_table_3829(t_small_parse_table_array *v)
{
	v->a[76580] = anon_sym_DQUOTE;
	v->a[76581] = state(1610);
	v->a[76582] = 1;
	v->a[76583] = aux_sym_string_repeat1;
	v->a[76584] = state(1748);
	v->a[76585] = 4;
	v->a[76586] = sym_arithmetic_expansion;
	v->a[76587] = sym_simple_expansion;
	v->a[76588] = sym_expansion;
	v->a[76589] = sym_command_substitution;
	v->a[76590] = 4;
	v->a[76591] = actions(3);
	v->a[76592] = 1;
	v->a[76593] = sym_comment;
	v->a[76594] = actions(3276);
	v->a[76595] = 1;
	v->a[76596] = anon_sym_esac;
	v->a[76597] = actions(3278);
	v->a[76598] = 1;
	v->a[76599] = sym_extglob_pattern;
	small_parse_table_3830(v);
}

/* EOF small_parse_table_765.c */
