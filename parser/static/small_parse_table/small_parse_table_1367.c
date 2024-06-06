/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1367.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6835(t_small_parse_table_array *v)
{
	v->a[136700] = 1;
	v->a[136701] = sym_comment;
	v->a[136702] = actions(7760);
	v->a[136703] = 1;
	v->a[136704] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136705] = actions(7766);
	v->a[136706] = 1;
	v->a[136707] = sym_string_content;
	v->a[136708] = actions(7768);
	v->a[136709] = 1;
	v->a[136710] = anon_sym_DOLLAR_LBRACE;
	v->a[136711] = actions(7770);
	v->a[136712] = 1;
	v->a[136713] = anon_sym_DOLLAR_LPAREN;
	v->a[136714] = actions(7772);
	v->a[136715] = 1;
	v->a[136716] = anon_sym_BQUOTE;
	v->a[136717] = actions(7774);
	v->a[136718] = 1;
	v->a[136719] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6836(v);
}

void	small_parse_table_6836(t_small_parse_table_array *v)
{
	v->a[136720] = actions(7946);
	v->a[136721] = 1;
	v->a[136722] = anon_sym_DOLLAR;
	v->a[136723] = actions(7948);
	v->a[136724] = 1;
	v->a[136725] = anon_sym_DQUOTE;
	v->a[136726] = state(3058);
	v->a[136727] = 1;
	v->a[136728] = aux_sym_string_repeat1;
	v->a[136729] = state(3218);
	v->a[136730] = 4;
	v->a[136731] = sym_arithmetic_expansion;
	v->a[136732] = sym_simple_expansion;
	v->a[136733] = sym_expansion;
	v->a[136734] = sym_command_substitution;
	v->a[136735] = 11;
	v->a[136736] = actions(3);
	v->a[136737] = 1;
	v->a[136738] = sym_comment;
	v->a[136739] = actions(7532);
	small_parse_table_6837(v);
}

void	small_parse_table_6837(t_small_parse_table_array *v)
{
	v->a[136740] = 1;
	v->a[136741] = anon_sym_DQUOTE;
	v->a[136742] = actions(7760);
	v->a[136743] = 1;
	v->a[136744] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136745] = actions(7766);
	v->a[136746] = 1;
	v->a[136747] = sym_string_content;
	v->a[136748] = actions(7768);
	v->a[136749] = 1;
	v->a[136750] = anon_sym_DOLLAR_LBRACE;
	v->a[136751] = actions(7770);
	v->a[136752] = 1;
	v->a[136753] = anon_sym_DOLLAR_LPAREN;
	v->a[136754] = actions(7772);
	v->a[136755] = 1;
	v->a[136756] = anon_sym_BQUOTE;
	v->a[136757] = actions(7774);
	v->a[136758] = 1;
	v->a[136759] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6838(v);
}

void	small_parse_table_6838(t_small_parse_table_array *v)
{
	v->a[136760] = actions(7950);
	v->a[136761] = 1;
	v->a[136762] = anon_sym_DOLLAR;
	v->a[136763] = state(3061);
	v->a[136764] = 1;
	v->a[136765] = aux_sym_string_repeat1;
	v->a[136766] = state(3218);
	v->a[136767] = 4;
	v->a[136768] = sym_arithmetic_expansion;
	v->a[136769] = sym_simple_expansion;
	v->a[136770] = sym_expansion;
	v->a[136771] = sym_command_substitution;
	v->a[136772] = 7;
	v->a[136773] = actions(3);
	v->a[136774] = 1;
	v->a[136775] = sym_comment;
	v->a[136776] = actions(7754);
	v->a[136777] = 1;
	v->a[136778] = aux_sym__simple_variable_name_token1;
	v->a[136779] = actions(7758);
	small_parse_table_6839(v);
}

void	small_parse_table_6839(t_small_parse_table_array *v)
{
	v->a[136780] = 1;
	v->a[136781] = sym_variable_name;
	v->a[136782] = actions(7952);
	v->a[136783] = 1;
	v->a[136784] = anon_sym_RBRACE3;
	v->a[136785] = state(3668);
	v->a[136786] = 1;
	v->a[136787] = sym__expansion_body;
	v->a[136788] = actions(7756);
	v->a[136789] = 2;
	v->a[136790] = anon_sym_0;
	v->a[136791] = anon_sym__;
	v->a[136792] = actions(7750);
	v->a[136793] = 7;
	v->a[136794] = anon_sym_BANG;
	v->a[136795] = anon_sym_DASH;
	v->a[136796] = anon_sym_STAR;
	v->a[136797] = anon_sym_QMARK;
	v->a[136798] = anon_sym_DOLLAR;
	v->a[136799] = anon_sym_POUND;
	small_parse_table_6840(v);
}

/* EOF small_parse_table_1367.c */
