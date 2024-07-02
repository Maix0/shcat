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
	v->a[76500] = sym_variable_name;
	v->a[76501] = actions(3130);
	v->a[76502] = 2;
	v->a[76503] = aux_sym__simple_variable_name_token1;
	v->a[76504] = aux_sym__multiline_variable_name_token1;
	v->a[76505] = actions(3128);
	v->a[76506] = 9;
	v->a[76507] = anon_sym_BANG;
	v->a[76508] = anon_sym_DASH;
	v->a[76509] = anon_sym_STAR;
	v->a[76510] = anon_sym_QMARK;
	v->a[76511] = anon_sym_DOLLAR;
	v->a[76512] = anon_sym_POUND;
	v->a[76513] = anon_sym_AT;
	v->a[76514] = anon_sym_0;
	v->a[76515] = anon_sym__;
	v->a[76516] = 10;
	v->a[76517] = actions(3);
	v->a[76518] = 1;
	v->a[76519] = sym_comment;
	small_parse_table_3826(v);
}

void	small_parse_table_3826(t_small_parse_table_array *v)
{
	v->a[76520] = actions(3104);
	v->a[76521] = 1;
	v->a[76522] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76523] = actions(3110);
	v->a[76524] = 1;
	v->a[76525] = sym_string_content;
	v->a[76526] = actions(3112);
	v->a[76527] = 1;
	v->a[76528] = anon_sym_DOLLAR_LBRACE;
	v->a[76529] = actions(3114);
	v->a[76530] = 1;
	v->a[76531] = anon_sym_DOLLAR_LPAREN;
	v->a[76532] = actions(3116);
	v->a[76533] = 1;
	v->a[76534] = anon_sym_BQUOTE;
	v->a[76535] = actions(3134);
	v->a[76536] = 1;
	v->a[76537] = anon_sym_DOLLAR;
	v->a[76538] = actions(3136);
	v->a[76539] = 1;
	small_parse_table_3827(v);
}

void	small_parse_table_3827(t_small_parse_table_array *v)
{
	v->a[76540] = anon_sym_DQUOTE;
	v->a[76541] = state(1621);
	v->a[76542] = 1;
	v->a[76543] = aux_sym_string_repeat1;
	v->a[76544] = state(1748);
	v->a[76545] = 4;
	v->a[76546] = sym_arithmetic_expansion;
	v->a[76547] = sym_simple_expansion;
	v->a[76548] = sym_expansion;
	v->a[76549] = sym_command_substitution;
	v->a[76550] = 4;
	v->a[76551] = actions(3);
	v->a[76552] = 1;
	v->a[76553] = sym_comment;
	v->a[76554] = actions(3140);
	v->a[76555] = 1;
	v->a[76556] = anon_sym_esac;
	v->a[76557] = actions(3142);
	v->a[76558] = 1;
	v->a[76559] = sym_extglob_pattern;
	small_parse_table_3828(v);
}

void	small_parse_table_3828(t_small_parse_table_array *v)
{
	v->a[76560] = actions(3138);
	v->a[76561] = 10;
	v->a[76562] = anon_sym_LPAREN;
	v->a[76563] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76564] = anon_sym_DOLLAR;
	v->a[76565] = anon_sym_DQUOTE;
	v->a[76566] = sym_raw_string;
	v->a[76567] = sym_number;
	v->a[76568] = anon_sym_DOLLAR_LBRACE;
	v->a[76569] = anon_sym_DOLLAR_LPAREN;
	v->a[76570] = anon_sym_BQUOTE;
	v->a[76571] = sym_word;
	v->a[76572] = 4;
	v->a[76573] = actions(3);
	v->a[76574] = 1;
	v->a[76575] = sym_comment;
	v->a[76576] = actions(3146);
	v->a[76577] = 1;
	v->a[76578] = anon_sym_esac;
	v->a[76579] = actions(3148);
	small_parse_table_3829(v);
}

void	small_parse_table_3829(t_small_parse_table_array *v)
{
	v->a[76580] = 1;
	v->a[76581] = sym_extglob_pattern;
	v->a[76582] = actions(3144);
	v->a[76583] = 10;
	v->a[76584] = anon_sym_LPAREN;
	v->a[76585] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76586] = anon_sym_DOLLAR;
	v->a[76587] = anon_sym_DQUOTE;
	v->a[76588] = sym_raw_string;
	v->a[76589] = sym_number;
	v->a[76590] = anon_sym_DOLLAR_LBRACE;
	v->a[76591] = anon_sym_DOLLAR_LPAREN;
	v->a[76592] = anon_sym_BQUOTE;
	v->a[76593] = sym_word;
	v->a[76594] = 10;
	v->a[76595] = actions(3);
	v->a[76596] = 1;
	v->a[76597] = sym_comment;
	v->a[76598] = actions(3104);
	v->a[76599] = 1;
	small_parse_table_3830(v);
}

/* EOF small_parse_table_765.c */
