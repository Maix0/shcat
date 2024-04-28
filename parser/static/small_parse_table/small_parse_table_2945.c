/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2945.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14725(t_small_parse_table_array *v)
{
	v->a[294500] = sym_expansion;
	v->a[294501] = sym_command_substitution;
	v->a[294502] = 12;
	v->a[294503] = actions(3);
	v->a[294504] = 1;
	v->a[294505] = sym_comment;
	v->a[294506] = actions(13060);
	v->a[294507] = 1;
	v->a[294508] = anon_sym_DOLLAR_LBRACK;
	v->a[294509] = actions(13066);
	v->a[294510] = 1;
	v->a[294511] = sym_string_content;
	v->a[294512] = actions(13068);
	v->a[294513] = 1;
	v->a[294514] = anon_sym_DOLLAR_LBRACE;
	v->a[294515] = actions(13070);
	v->a[294516] = 1;
	v->a[294517] = anon_sym_DOLLAR_LPAREN;
	v->a[294518] = actions(13072);
	v->a[294519] = 1;
	small_parse_table_14726(v);
}

void	small_parse_table_14726(t_small_parse_table_array *v)
{
	v->a[294520] = anon_sym_BQUOTE;
	v->a[294521] = actions(13074);
	v->a[294522] = 1;
	v->a[294523] = anon_sym_DOLLAR_BQUOTE;
	v->a[294524] = actions(13108);
	v->a[294525] = 1;
	v->a[294526] = anon_sym_DOLLAR;
	v->a[294527] = actions(13110);
	v->a[294528] = 1;
	v->a[294529] = anon_sym_DQUOTE;
	v->a[294530] = state(5768);
	v->a[294531] = 1;
	v->a[294532] = aux_sym_string_repeat1;
	v->a[294533] = actions(13058);
	v->a[294534] = 2;
	v->a[294535] = anon_sym_LPAREN_LPAREN;
	v->a[294536] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[294537] = state(6127);
	v->a[294538] = 4;
	v->a[294539] = sym_arithmetic_expansion;
	small_parse_table_14727(v);
}

void	small_parse_table_14727(t_small_parse_table_array *v)
{
	v->a[294540] = sym_simple_expansion;
	v->a[294541] = sym_expansion;
	v->a[294542] = sym_command_substitution;
	v->a[294543] = 12;
	v->a[294544] = actions(3);
	v->a[294545] = 1;
	v->a[294546] = sym_comment;
	v->a[294547] = actions(13060);
	v->a[294548] = 1;
	v->a[294549] = anon_sym_DOLLAR_LBRACK;
	v->a[294550] = actions(13066);
	v->a[294551] = 1;
	v->a[294552] = sym_string_content;
	v->a[294553] = actions(13068);
	v->a[294554] = 1;
	v->a[294555] = anon_sym_DOLLAR_LBRACE;
	v->a[294556] = actions(13070);
	v->a[294557] = 1;
	v->a[294558] = anon_sym_DOLLAR_LPAREN;
	v->a[294559] = actions(13072);
	small_parse_table_14728(v);
}

void	small_parse_table_14728(t_small_parse_table_array *v)
{
	v->a[294560] = 1;
	v->a[294561] = anon_sym_BQUOTE;
	v->a[294562] = actions(13074);
	v->a[294563] = 1;
	v->a[294564] = anon_sym_DOLLAR_BQUOTE;
	v->a[294565] = actions(13112);
	v->a[294566] = 1;
	v->a[294567] = anon_sym_DOLLAR;
	v->a[294568] = actions(13114);
	v->a[294569] = 1;
	v->a[294570] = anon_sym_DQUOTE;
	v->a[294571] = state(5768);
	v->a[294572] = 1;
	v->a[294573] = aux_sym_string_repeat1;
	v->a[294574] = actions(13058);
	v->a[294575] = 2;
	v->a[294576] = anon_sym_LPAREN_LPAREN;
	v->a[294577] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[294578] = state(6127);
	v->a[294579] = 4;
	small_parse_table_14729(v);
}

void	small_parse_table_14729(t_small_parse_table_array *v)
{
	v->a[294580] = sym_arithmetic_expansion;
	v->a[294581] = sym_simple_expansion;
	v->a[294582] = sym_expansion;
	v->a[294583] = sym_command_substitution;
	v->a[294584] = 12;
	v->a[294585] = actions(3);
	v->a[294586] = 1;
	v->a[294587] = sym_comment;
	v->a[294588] = actions(13060);
	v->a[294589] = 1;
	v->a[294590] = anon_sym_DOLLAR_LBRACK;
	v->a[294591] = actions(13066);
	v->a[294592] = 1;
	v->a[294593] = sym_string_content;
	v->a[294594] = actions(13068);
	v->a[294595] = 1;
	v->a[294596] = anon_sym_DOLLAR_LBRACE;
	v->a[294597] = actions(13070);
	v->a[294598] = 1;
	v->a[294599] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_14730(v);
}

/* EOF small_parse_table_2945.c */
