/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1385.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6925(t_small_parse_table_array *v)
{
	v->a[138500] = 1;
	v->a[138501] = anon_sym_DOLLAR;
	v->a[138502] = state(3061);
	v->a[138503] = 1;
	v->a[138504] = aux_sym_string_repeat1;
	v->a[138505] = state(3218);
	v->a[138506] = 4;
	v->a[138507] = sym_arithmetic_expansion;
	v->a[138508] = sym_simple_expansion;
	v->a[138509] = sym_expansion;
	v->a[138510] = sym_command_substitution;
	v->a[138511] = 11;
	v->a[138512] = actions(3);
	v->a[138513] = 1;
	v->a[138514] = sym_comment;
	v->a[138515] = actions(7690);
	v->a[138516] = 1;
	v->a[138517] = anon_sym_DQUOTE;
	v->a[138518] = actions(7760);
	v->a[138519] = 1;
	small_parse_table_6926(v);
}

void	small_parse_table_6926(t_small_parse_table_array *v)
{
	v->a[138520] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[138521] = actions(7766);
	v->a[138522] = 1;
	v->a[138523] = sym_string_content;
	v->a[138524] = actions(7768);
	v->a[138525] = 1;
	v->a[138526] = anon_sym_DOLLAR_LBRACE;
	v->a[138527] = actions(7770);
	v->a[138528] = 1;
	v->a[138529] = anon_sym_DOLLAR_LPAREN;
	v->a[138530] = actions(7772);
	v->a[138531] = 1;
	v->a[138532] = anon_sym_BQUOTE;
	v->a[138533] = actions(7774);
	v->a[138534] = 1;
	v->a[138535] = anon_sym_DOLLAR_BQUOTE;
	v->a[138536] = actions(8105);
	v->a[138537] = 1;
	v->a[138538] = anon_sym_DOLLAR;
	v->a[138539] = state(3061);
	small_parse_table_6927(v);
}

void	small_parse_table_6927(t_small_parse_table_array *v)
{
	v->a[138540] = 1;
	v->a[138541] = aux_sym_string_repeat1;
	v->a[138542] = state(3218);
	v->a[138543] = 4;
	v->a[138544] = sym_arithmetic_expansion;
	v->a[138545] = sym_simple_expansion;
	v->a[138546] = sym_expansion;
	v->a[138547] = sym_command_substitution;
	v->a[138548] = 7;
	v->a[138549] = actions(3);
	v->a[138550] = 1;
	v->a[138551] = sym_comment;
	v->a[138552] = actions(7754);
	v->a[138553] = 1;
	v->a[138554] = aux_sym__simple_variable_name_token1;
	v->a[138555] = actions(7758);
	v->a[138556] = 1;
	v->a[138557] = sym_variable_name;
	v->a[138558] = actions(8107);
	v->a[138559] = 1;
	small_parse_table_6928(v);
}

void	small_parse_table_6928(t_small_parse_table_array *v)
{
	v->a[138560] = anon_sym_RBRACE3;
	v->a[138561] = state(3581);
	v->a[138562] = 1;
	v->a[138563] = sym__expansion_body;
	v->a[138564] = actions(7756);
	v->a[138565] = 2;
	v->a[138566] = anon_sym_0;
	v->a[138567] = anon_sym__;
	v->a[138568] = actions(7750);
	v->a[138569] = 7;
	v->a[138570] = anon_sym_BANG;
	v->a[138571] = anon_sym_DASH;
	v->a[138572] = anon_sym_STAR;
	v->a[138573] = anon_sym_QMARK;
	v->a[138574] = anon_sym_DOLLAR;
	v->a[138575] = anon_sym_POUND;
	v->a[138576] = anon_sym_AT;
	v->a[138577] = 11;
	v->a[138578] = actions(3);
	v->a[138579] = 1;
	small_parse_table_6929(v);
}

void	small_parse_table_6929(t_small_parse_table_array *v)
{
	v->a[138580] = sym_comment;
	v->a[138581] = actions(7760);
	v->a[138582] = 1;
	v->a[138583] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[138584] = actions(7766);
	v->a[138585] = 1;
	v->a[138586] = sym_string_content;
	v->a[138587] = actions(7768);
	v->a[138588] = 1;
	v->a[138589] = anon_sym_DOLLAR_LBRACE;
	v->a[138590] = actions(7770);
	v->a[138591] = 1;
	v->a[138592] = anon_sym_DOLLAR_LPAREN;
	v->a[138593] = actions(7772);
	v->a[138594] = 1;
	v->a[138595] = anon_sym_BQUOTE;
	v->a[138596] = actions(7774);
	v->a[138597] = 1;
	v->a[138598] = anon_sym_DOLLAR_BQUOTE;
	v->a[138599] = actions(8109);
	small_parse_table_6930(v);
}

/* EOF small_parse_table_1385.c */
