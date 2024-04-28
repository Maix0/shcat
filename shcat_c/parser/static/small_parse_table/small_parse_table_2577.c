/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2577.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12885(t_small_parse_table_array *v)
{
	v->a[257700] = actions(11770);
	v->a[257701] = 1;
	v->a[257702] = aux_sym__simple_variable_name_token1;
	v->a[257703] = actions(11772);
	v->a[257704] = 1;
	v->a[257705] = sym_variable_name;
	v->a[257706] = actions(11883);
	v->a[257707] = 1;
	v->a[257708] = anon_sym_RBRACE3;
	v->a[257709] = state(3532);
	v->a[257710] = 1;
	v->a[257711] = sym_subscript;
	v->a[257712] = state(6428);
	v->a[257713] = 1;
	v->a[257714] = aux_sym__expansion_body_repeat1;
	v->a[257715] = state(6472);
	v->a[257716] = 1;
	v->a[257717] = sym_command_substitution;
	v->a[257718] = state(7141);
	v->a[257719] = 1;
	small_parse_table_12886(v);
}

void	small_parse_table_12886(t_small_parse_table_array *v)
{
	v->a[257720] = sym__expansion_body;
	v->a[257721] = actions(11762);
	v->a[257722] = 2;
	v->a[257723] = anon_sym_POUND2;
	v->a[257724] = anon_sym_EQ2;
	v->a[257725] = actions(8050);
	v->a[257726] = 3;
	v->a[257727] = sym__external_expansion_sym_hash;
	v->a[257728] = sym__external_expansion_sym_bang;
	v->a[257729] = sym__external_expansion_sym_equal;
	v->a[257730] = actions(11754);
	v->a[257731] = 4;
	v->a[257732] = anon_sym_DASH;
	v->a[257733] = anon_sym_STAR;
	v->a[257734] = anon_sym_QMARK;
	v->a[257735] = anon_sym_AT2;
	v->a[257736] = actions(11756);
	v->a[257737] = 5;
	v->a[257738] = anon_sym_BANG;
	v->a[257739] = anon_sym_DOLLAR;
	small_parse_table_12887(v);
}

void	small_parse_table_12887(t_small_parse_table_array *v)
{
	v->a[257740] = anon_sym_POUND;
	v->a[257741] = anon_sym_0;
	v->a[257742] = anon_sym__;
	v->a[257743] = 16;
	v->a[257744] = actions(3);
	v->a[257745] = 1;
	v->a[257746] = sym_comment;
	v->a[257747] = actions(11760);
	v->a[257748] = 1;
	v->a[257749] = anon_sym_BANG2;
	v->a[257750] = actions(11764);
	v->a[257751] = 1;
	v->a[257752] = anon_sym_DOLLAR_LPAREN;
	v->a[257753] = actions(11766);
	v->a[257754] = 1;
	v->a[257755] = anon_sym_BQUOTE;
	v->a[257756] = actions(11768);
	v->a[257757] = 1;
	v->a[257758] = anon_sym_DOLLAR_BQUOTE;
	v->a[257759] = actions(11770);
	small_parse_table_12888(v);
}

void	small_parse_table_12888(t_small_parse_table_array *v)
{
	v->a[257760] = 1;
	v->a[257761] = aux_sym__simple_variable_name_token1;
	v->a[257762] = actions(11772);
	v->a[257763] = 1;
	v->a[257764] = sym_variable_name;
	v->a[257765] = actions(11885);
	v->a[257766] = 1;
	v->a[257767] = anon_sym_RBRACE3;
	v->a[257768] = state(3532);
	v->a[257769] = 1;
	v->a[257770] = sym_subscript;
	v->a[257771] = state(6428);
	v->a[257772] = 1;
	v->a[257773] = aux_sym__expansion_body_repeat1;
	v->a[257774] = state(6472);
	v->a[257775] = 1;
	v->a[257776] = sym_command_substitution;
	v->a[257777] = state(7163);
	v->a[257778] = 1;
	v->a[257779] = sym__expansion_body;
	small_parse_table_12889(v);
}

void	small_parse_table_12889(t_small_parse_table_array *v)
{
	v->a[257780] = actions(11762);
	v->a[257781] = 2;
	v->a[257782] = anon_sym_POUND2;
	v->a[257783] = anon_sym_EQ2;
	v->a[257784] = actions(8050);
	v->a[257785] = 3;
	v->a[257786] = sym__external_expansion_sym_hash;
	v->a[257787] = sym__external_expansion_sym_bang;
	v->a[257788] = sym__external_expansion_sym_equal;
	v->a[257789] = actions(11754);
	v->a[257790] = 4;
	v->a[257791] = anon_sym_DASH;
	v->a[257792] = anon_sym_STAR;
	v->a[257793] = anon_sym_QMARK;
	v->a[257794] = anon_sym_AT2;
	v->a[257795] = actions(11756);
	v->a[257796] = 5;
	v->a[257797] = anon_sym_BANG;
	v->a[257798] = anon_sym_DOLLAR;
	v->a[257799] = anon_sym_POUND;
	small_parse_table_12890(v);
}

/* EOF small_parse_table_2577.c */
