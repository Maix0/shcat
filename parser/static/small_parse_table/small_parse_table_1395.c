/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1395.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6975(t_small_parse_table_array *v)
{
	v->a[139500] = actions(8179);
	v->a[139501] = 1;
	v->a[139502] = anon_sym_DOLLAR;
	v->a[139503] = state(3061);
	v->a[139504] = 1;
	v->a[139505] = aux_sym_string_repeat1;
	v->a[139506] = state(3218);
	v->a[139507] = 4;
	v->a[139508] = sym_arithmetic_expansion;
	v->a[139509] = sym_simple_expansion;
	v->a[139510] = sym_expansion;
	v->a[139511] = sym_command_substitution;
	v->a[139512] = 7;
	v->a[139513] = actions(3);
	v->a[139514] = 1;
	v->a[139515] = sym_comment;
	v->a[139516] = actions(7754);
	v->a[139517] = 1;
	v->a[139518] = aux_sym__simple_variable_name_token1;
	v->a[139519] = actions(7758);
	small_parse_table_6976(v);
}

void	small_parse_table_6976(t_small_parse_table_array *v)
{
	v->a[139520] = 1;
	v->a[139521] = sym_variable_name;
	v->a[139522] = actions(8181);
	v->a[139523] = 1;
	v->a[139524] = anon_sym_RBRACE3;
	v->a[139525] = state(3864);
	v->a[139526] = 1;
	v->a[139527] = sym__expansion_body;
	v->a[139528] = actions(7756);
	v->a[139529] = 2;
	v->a[139530] = anon_sym_0;
	v->a[139531] = anon_sym__;
	v->a[139532] = actions(7750);
	v->a[139533] = 7;
	v->a[139534] = anon_sym_BANG;
	v->a[139535] = anon_sym_DASH;
	v->a[139536] = anon_sym_STAR;
	v->a[139537] = anon_sym_QMARK;
	v->a[139538] = anon_sym_DOLLAR;
	v->a[139539] = anon_sym_POUND;
	small_parse_table_6977(v);
}

void	small_parse_table_6977(t_small_parse_table_array *v)
{
	v->a[139540] = anon_sym_AT;
	v->a[139541] = 11;
	v->a[139542] = actions(3);
	v->a[139543] = 1;
	v->a[139544] = sym_comment;
	v->a[139545] = actions(7760);
	v->a[139546] = 1;
	v->a[139547] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[139548] = actions(7766);
	v->a[139549] = 1;
	v->a[139550] = sym_string_content;
	v->a[139551] = actions(7768);
	v->a[139552] = 1;
	v->a[139553] = anon_sym_DOLLAR_LBRACE;
	v->a[139554] = actions(7770);
	v->a[139555] = 1;
	v->a[139556] = anon_sym_DOLLAR_LPAREN;
	v->a[139557] = actions(7772);
	v->a[139558] = 1;
	v->a[139559] = anon_sym_BQUOTE;
	small_parse_table_6978(v);
}

void	small_parse_table_6978(t_small_parse_table_array *v)
{
	v->a[139560] = actions(7774);
	v->a[139561] = 1;
	v->a[139562] = anon_sym_DOLLAR_BQUOTE;
	v->a[139563] = actions(8183);
	v->a[139564] = 1;
	v->a[139565] = anon_sym_DOLLAR;
	v->a[139566] = actions(8185);
	v->a[139567] = 1;
	v->a[139568] = anon_sym_DQUOTE;
	v->a[139569] = state(3131);
	v->a[139570] = 1;
	v->a[139571] = aux_sym_string_repeat1;
	v->a[139572] = state(3218);
	v->a[139573] = 4;
	v->a[139574] = sym_arithmetic_expansion;
	v->a[139575] = sym_simple_expansion;
	v->a[139576] = sym_expansion;
	v->a[139577] = sym_command_substitution;
	v->a[139578] = 4;
	v->a[139579] = actions(3);
	small_parse_table_6979(v);
}

void	small_parse_table_6979(t_small_parse_table_array *v)
{
	v->a[139580] = 1;
	v->a[139581] = sym_comment;
	v->a[139582] = actions(1595);
	v->a[139583] = 1;
	v->a[139584] = sym_variable_name;
	v->a[139585] = actions(1593);
	v->a[139586] = 2;
	v->a[139587] = aux_sym__simple_variable_name_token1;
	v->a[139588] = aux_sym__multiline_variable_name_token1;
	v->a[139589] = actions(1591);
	v->a[139590] = 9;
	v->a[139591] = anon_sym_BANG;
	v->a[139592] = anon_sym_DASH;
	v->a[139593] = anon_sym_STAR;
	v->a[139594] = anon_sym_QMARK;
	v->a[139595] = anon_sym_DOLLAR;
	v->a[139596] = anon_sym_POUND;
	v->a[139597] = anon_sym_AT;
	v->a[139598] = anon_sym_0;
	v->a[139599] = anon_sym__;
	small_parse_table_6980(v);
}

/* EOF small_parse_table_1395.c */
