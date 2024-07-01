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
	v->a[76500] = sym_arithmetic_expansion;
	v->a[76501] = sym_string;
	v->a[76502] = sym_simple_expansion;
	v->a[76503] = sym_expansion;
	v->a[76504] = sym_command_substitution;
	v->a[76505] = 10;
	v->a[76506] = actions(3);
	v->a[76507] = 1;
	v->a[76508] = sym_comment;
	v->a[76509] = actions(699);
	v->a[76510] = 1;
	v->a[76511] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76512] = actions(703);
	v->a[76513] = 1;
	v->a[76514] = anon_sym_DQUOTE;
	v->a[76515] = actions(705);
	v->a[76516] = 1;
	v->a[76517] = anon_sym_DOLLAR_LBRACE;
	v->a[76518] = actions(707);
	v->a[76519] = 1;
	small_parse_table_3826(v);
}

void	small_parse_table_3826(t_small_parse_table_array *v)
{
	v->a[76520] = anon_sym_DOLLAR_LPAREN;
	v->a[76521] = actions(709);
	v->a[76522] = 1;
	v->a[76523] = anon_sym_BQUOTE;
	v->a[76524] = actions(2605);
	v->a[76525] = 1;
	v->a[76526] = sym__bare_dollar;
	v->a[76527] = actions(2919);
	v->a[76528] = 1;
	v->a[76529] = anon_sym_DOLLAR;
	v->a[76530] = actions(2601);
	v->a[76531] = 5;
	v->a[76532] = aux_sym_concatenation_token1;
	v->a[76533] = sym_raw_string;
	v->a[76534] = sym_number;
	v->a[76535] = sym__comment_word;
	v->a[76536] = sym_word;
	v->a[76537] = state(619);
	v->a[76538] = 5;
	v->a[76539] = sym_arithmetic_expansion;
	small_parse_table_3827(v);
}

void	small_parse_table_3827(t_small_parse_table_array *v)
{
	v->a[76540] = sym_string;
	v->a[76541] = sym_simple_expansion;
	v->a[76542] = sym_expansion;
	v->a[76543] = sym_command_substitution;
	v->a[76544] = 10;
	v->a[76545] = actions(3);
	v->a[76546] = 1;
	v->a[76547] = sym_comment;
	v->a[76548] = actions(1778);
	v->a[76549] = 1;
	v->a[76550] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76551] = actions(1780);
	v->a[76552] = 1;
	v->a[76553] = anon_sym_DOLLAR;
	v->a[76554] = actions(1782);
	v->a[76555] = 1;
	v->a[76556] = anon_sym_DQUOTE;
	v->a[76557] = actions(1784);
	v->a[76558] = 1;
	v->a[76559] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3828(v);
}

void	small_parse_table_3828(t_small_parse_table_array *v)
{
	v->a[76560] = actions(1786);
	v->a[76561] = 1;
	v->a[76562] = anon_sym_DOLLAR_LPAREN;
	v->a[76563] = actions(1788);
	v->a[76564] = 1;
	v->a[76565] = anon_sym_BQUOTE;
	v->a[76566] = actions(2703);
	v->a[76567] = 1;
	v->a[76568] = sym__bare_dollar;
	v->a[76569] = actions(2699);
	v->a[76570] = 5;
	v->a[76571] = aux_sym_concatenation_token1;
	v->a[76572] = sym_raw_string;
	v->a[76573] = sym_number;
	v->a[76574] = sym__comment_word;
	v->a[76575] = sym_word;
	v->a[76576] = state(2072);
	v->a[76577] = 5;
	v->a[76578] = sym_arithmetic_expansion;
	v->a[76579] = sym_string;
	small_parse_table_3829(v);
}

void	small_parse_table_3829(t_small_parse_table_array *v)
{
	v->a[76580] = sym_simple_expansion;
	v->a[76581] = sym_expansion;
	v->a[76582] = sym_command_substitution;
	v->a[76583] = 12;
	v->a[76584] = actions(3);
	v->a[76585] = 1;
	v->a[76586] = sym_comment;
	v->a[76587] = actions(2663);
	v->a[76588] = 1;
	v->a[76589] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76590] = actions(2667);
	v->a[76591] = 1;
	v->a[76592] = anon_sym_DQUOTE;
	v->a[76593] = actions(2669);
	v->a[76594] = 1;
	v->a[76595] = anon_sym_DOLLAR_LBRACE;
	v->a[76596] = actions(2671);
	v->a[76597] = 1;
	v->a[76598] = anon_sym_DOLLAR_LPAREN;
	v->a[76599] = actions(2673);
	small_parse_table_3830(v);
}

/* EOF small_parse_table_765.c */
