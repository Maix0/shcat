/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2657.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13285(t_small_parse_table_array *v)
{
	v->a[265700] = state(6472);
	v->a[265701] = 1;
	v->a[265702] = sym_command_substitution;
	v->a[265703] = state(7104);
	v->a[265704] = 1;
	v->a[265705] = sym__expansion_body;
	v->a[265706] = actions(11762);
	v->a[265707] = 2;
	v->a[265708] = anon_sym_POUND2;
	v->a[265709] = anon_sym_EQ2;
	v->a[265710] = actions(8050);
	v->a[265711] = 3;
	v->a[265712] = sym__external_expansion_sym_hash;
	v->a[265713] = sym__external_expansion_sym_bang;
	v->a[265714] = sym__external_expansion_sym_equal;
	v->a[265715] = actions(11754);
	v->a[265716] = 4;
	v->a[265717] = anon_sym_DASH;
	v->a[265718] = anon_sym_STAR;
	v->a[265719] = anon_sym_QMARK;
	small_parse_table_13286(v);
}

void	small_parse_table_13286(t_small_parse_table_array *v)
{
	v->a[265720] = anon_sym_AT2;
	v->a[265721] = actions(11756);
	v->a[265722] = 5;
	v->a[265723] = anon_sym_BANG;
	v->a[265724] = anon_sym_DOLLAR;
	v->a[265725] = anon_sym_POUND;
	v->a[265726] = anon_sym_0;
	v->a[265727] = anon_sym__;
	v->a[265728] = 16;
	v->a[265729] = actions(3);
	v->a[265730] = 1;
	v->a[265731] = sym_comment;
	v->a[265732] = actions(11760);
	v->a[265733] = 1;
	v->a[265734] = anon_sym_BANG2;
	v->a[265735] = actions(11764);
	v->a[265736] = 1;
	v->a[265737] = anon_sym_DOLLAR_LPAREN;
	v->a[265738] = actions(11766);
	v->a[265739] = 1;
	small_parse_table_13287(v);
}

void	small_parse_table_13287(t_small_parse_table_array *v)
{
	v->a[265740] = anon_sym_BQUOTE;
	v->a[265741] = actions(11768);
	v->a[265742] = 1;
	v->a[265743] = anon_sym_DOLLAR_BQUOTE;
	v->a[265744] = actions(11770);
	v->a[265745] = 1;
	v->a[265746] = aux_sym__simple_variable_name_token1;
	v->a[265747] = actions(11772);
	v->a[265748] = 1;
	v->a[265749] = sym_variable_name;
	v->a[265750] = actions(12090);
	v->a[265751] = 1;
	v->a[265752] = anon_sym_RBRACE3;
	v->a[265753] = state(3532);
	v->a[265754] = 1;
	v->a[265755] = sym_subscript;
	v->a[265756] = state(6428);
	v->a[265757] = 1;
	v->a[265758] = aux_sym__expansion_body_repeat1;
	v->a[265759] = state(6472);
	small_parse_table_13288(v);
}

void	small_parse_table_13288(t_small_parse_table_array *v)
{
	v->a[265760] = 1;
	v->a[265761] = sym_command_substitution;
	v->a[265762] = state(6800);
	v->a[265763] = 1;
	v->a[265764] = sym__expansion_body;
	v->a[265765] = actions(11762);
	v->a[265766] = 2;
	v->a[265767] = anon_sym_POUND2;
	v->a[265768] = anon_sym_EQ2;
	v->a[265769] = actions(8050);
	v->a[265770] = 3;
	v->a[265771] = sym__external_expansion_sym_hash;
	v->a[265772] = sym__external_expansion_sym_bang;
	v->a[265773] = sym__external_expansion_sym_equal;
	v->a[265774] = actions(11754);
	v->a[265775] = 4;
	v->a[265776] = anon_sym_DASH;
	v->a[265777] = anon_sym_STAR;
	v->a[265778] = anon_sym_QMARK;
	v->a[265779] = anon_sym_AT2;
	small_parse_table_13289(v);
}

void	small_parse_table_13289(t_small_parse_table_array *v)
{
	v->a[265780] = actions(11756);
	v->a[265781] = 5;
	v->a[265782] = anon_sym_BANG;
	v->a[265783] = anon_sym_DOLLAR;
	v->a[265784] = anon_sym_POUND;
	v->a[265785] = anon_sym_0;
	v->a[265786] = anon_sym__;
	v->a[265787] = 3;
	v->a[265788] = actions(3);
	v->a[265789] = 1;
	v->a[265790] = sym_comment;
	v->a[265791] = actions(1306);
	v->a[265792] = 3;
	v->a[265793] = sym_file_descriptor;
	v->a[265794] = sym__concat;
	v->a[265795] = aux_sym_heredoc_redirect_token1;
	v->a[265796] = actions(1304);
	v->a[265797] = 22;
	v->a[265798] = anon_sym_SEMI;
	v->a[265799] = anon_sym_PIPE_PIPE;
	small_parse_table_13290(v);
}

/* EOF small_parse_table_2657.c */
