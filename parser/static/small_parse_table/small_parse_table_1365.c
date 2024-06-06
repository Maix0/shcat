/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1365.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6825(t_small_parse_table_array *v)
{
	v->a[136500] = 7;
	v->a[136501] = actions(3);
	v->a[136502] = 1;
	v->a[136503] = sym_comment;
	v->a[136504] = actions(7754);
	v->a[136505] = 1;
	v->a[136506] = aux_sym__simple_variable_name_token1;
	v->a[136507] = actions(7758);
	v->a[136508] = 1;
	v->a[136509] = sym_variable_name;
	v->a[136510] = actions(7932);
	v->a[136511] = 1;
	v->a[136512] = anon_sym_RBRACE3;
	v->a[136513] = state(3741);
	v->a[136514] = 1;
	v->a[136515] = sym__expansion_body;
	v->a[136516] = actions(7756);
	v->a[136517] = 2;
	v->a[136518] = anon_sym_0;
	v->a[136519] = anon_sym__;
	small_parse_table_6826(v);
}

void	small_parse_table_6826(t_small_parse_table_array *v)
{
	v->a[136520] = actions(7750);
	v->a[136521] = 7;
	v->a[136522] = anon_sym_BANG;
	v->a[136523] = anon_sym_DASH;
	v->a[136524] = anon_sym_STAR;
	v->a[136525] = anon_sym_QMARK;
	v->a[136526] = anon_sym_DOLLAR;
	v->a[136527] = anon_sym_POUND;
	v->a[136528] = anon_sym_AT;
	v->a[136529] = 11;
	v->a[136530] = actions(3);
	v->a[136531] = 1;
	v->a[136532] = sym_comment;
	v->a[136533] = actions(7614);
	v->a[136534] = 1;
	v->a[136535] = anon_sym_DQUOTE;
	v->a[136536] = actions(7760);
	v->a[136537] = 1;
	v->a[136538] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136539] = actions(7766);
	small_parse_table_6827(v);
}

void	small_parse_table_6827(t_small_parse_table_array *v)
{
	v->a[136540] = 1;
	v->a[136541] = sym_string_content;
	v->a[136542] = actions(7768);
	v->a[136543] = 1;
	v->a[136544] = anon_sym_DOLLAR_LBRACE;
	v->a[136545] = actions(7770);
	v->a[136546] = 1;
	v->a[136547] = anon_sym_DOLLAR_LPAREN;
	v->a[136548] = actions(7772);
	v->a[136549] = 1;
	v->a[136550] = anon_sym_BQUOTE;
	v->a[136551] = actions(7774);
	v->a[136552] = 1;
	v->a[136553] = anon_sym_DOLLAR_BQUOTE;
	v->a[136554] = actions(7934);
	v->a[136555] = 1;
	v->a[136556] = anon_sym_DOLLAR;
	v->a[136557] = state(3061);
	v->a[136558] = 1;
	v->a[136559] = aux_sym_string_repeat1;
	small_parse_table_6828(v);
}

void	small_parse_table_6828(t_small_parse_table_array *v)
{
	v->a[136560] = state(3218);
	v->a[136561] = 4;
	v->a[136562] = sym_arithmetic_expansion;
	v->a[136563] = sym_simple_expansion;
	v->a[136564] = sym_expansion;
	v->a[136565] = sym_command_substitution;
	v->a[136566] = 11;
	v->a[136567] = actions(3);
	v->a[136568] = 1;
	v->a[136569] = sym_comment;
	v->a[136570] = actions(7646);
	v->a[136571] = 1;
	v->a[136572] = anon_sym_DQUOTE;
	v->a[136573] = actions(7760);
	v->a[136574] = 1;
	v->a[136575] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136576] = actions(7766);
	v->a[136577] = 1;
	v->a[136578] = sym_string_content;
	v->a[136579] = actions(7768);
	small_parse_table_6829(v);
}

void	small_parse_table_6829(t_small_parse_table_array *v)
{
	v->a[136580] = 1;
	v->a[136581] = anon_sym_DOLLAR_LBRACE;
	v->a[136582] = actions(7770);
	v->a[136583] = 1;
	v->a[136584] = anon_sym_DOLLAR_LPAREN;
	v->a[136585] = actions(7772);
	v->a[136586] = 1;
	v->a[136587] = anon_sym_BQUOTE;
	v->a[136588] = actions(7774);
	v->a[136589] = 1;
	v->a[136590] = anon_sym_DOLLAR_BQUOTE;
	v->a[136591] = actions(7936);
	v->a[136592] = 1;
	v->a[136593] = anon_sym_DOLLAR;
	v->a[136594] = state(3061);
	v->a[136595] = 1;
	v->a[136596] = aux_sym_string_repeat1;
	v->a[136597] = state(3218);
	v->a[136598] = 4;
	v->a[136599] = sym_arithmetic_expansion;
	small_parse_table_6830(v);
}

/* EOF small_parse_table_1365.c */
