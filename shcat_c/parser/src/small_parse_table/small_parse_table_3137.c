/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3137.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15685(t_small_parse_table_array *v)
{
	v->a[313700] = state(5002);
	v->a[313701] = 1;
	v->a[313702] = sym__heredoc_body;
	v->a[313703] = state(5011);
	v->a[313704] = 1;
	v->a[313705] = sym__simple_heredoc_body;
	v->a[313706] = state(6845);
	v->a[313707] = 1;
	v->a[313708] = sym_heredoc_body;
	v->a[313709] = 5;
	v->a[313710] = actions(71);
	v->a[313711] = 1;
	v->a[313712] = sym_comment;
	v->a[313713] = actions(14710);
	v->a[313714] = 1;
	v->a[313715] = sym__heredoc_body_beginning;
	v->a[313716] = actions(14722);
	v->a[313717] = 1;
	v->a[313718] = sym_simple_heredoc_body;
	v->a[313719] = state(6845);
	small_parse_table_15686(v);
}

void	small_parse_table_15686(t_small_parse_table_array *v)
{
	v->a[313720] = 1;
	v->a[313721] = sym_heredoc_body;
	v->a[313722] = state(4915);
	v->a[313723] = 2;
	v->a[313724] = sym__heredoc_body;
	v->a[313725] = sym__simple_heredoc_body;
	v->a[313726] = 4;
	v->a[313727] = actions(71);
	v->a[313728] = 1;
	v->a[313729] = sym_comment;
	v->a[313730] = actions(14751);
	v->a[313731] = 1;
	v->a[313732] = anon_sym_RBRACE3;
	v->a[313733] = state(6474);
	v->a[313734] = 1;
	v->a[313735] = aux_sym__expansion_body_repeat1;
	v->a[313736] = actions(8050);
	v->a[313737] = 3;
	v->a[313738] = sym__external_expansion_sym_hash;
	v->a[313739] = sym__external_expansion_sym_bang;
	small_parse_table_15687(v);
}

void	small_parse_table_15687(t_small_parse_table_array *v)
{
	v->a[313740] = sym__external_expansion_sym_equal;
	v->a[313741] = 5;
	v->a[313742] = actions(71);
	v->a[313743] = 1;
	v->a[313744] = sym_comment;
	v->a[313745] = actions(14780);
	v->a[313746] = 1;
	v->a[313747] = anon_sym_SLASH;
	v->a[313748] = actions(14782);
	v->a[313749] = 1;
	v->a[313750] = anon_sym_RBRACE3;
	v->a[313751] = state(6475);
	v->a[313752] = 1;
	v->a[313753] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[313754] = actions(14590);
	v->a[313755] = 2;
	v->a[313756] = sym__concat;
	v->a[313757] = aux_sym_concatenation_token1;
	v->a[313758] = 6;
	v->a[313759] = actions(71);
	small_parse_table_15688(v);
}

void	small_parse_table_15688(t_small_parse_table_array *v)
{
	v->a[313760] = 1;
	v->a[313761] = sym_comment;
	v->a[313762] = actions(14564);
	v->a[313763] = 1;
	v->a[313764] = anon_sym_PIPE;
	v->a[313765] = actions(14580);
	v->a[313766] = 1;
	v->a[313767] = anon_sym_RPAREN;
	v->a[313768] = actions(14755);
	v->a[313769] = 1;
	v->a[313770] = sym__special_character;
	v->a[313771] = state(6545);
	v->a[313772] = 1;
	v->a[313773] = aux_sym__literal_repeat1;
	v->a[313774] = state(6694);
	v->a[313775] = 1;
	v->a[313776] = aux_sym_case_item_repeat1;
	v->a[313777] = 5;
	v->a[313778] = actions(71);
	v->a[313779] = 1;
	small_parse_table_15689(v);
}

void	small_parse_table_15689(t_small_parse_table_array *v)
{
	v->a[313780] = sym_comment;
	v->a[313781] = actions(14658);
	v->a[313782] = 1;
	v->a[313783] = anon_sym_SLASH;
	v->a[313784] = actions(14660);
	v->a[313785] = 1;
	v->a[313786] = anon_sym_RBRACE3;
	v->a[313787] = state(6475);
	v->a[313788] = 1;
	v->a[313789] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[313790] = actions(14590);
	v->a[313791] = 2;
	v->a[313792] = sym__concat;
	v->a[313793] = aux_sym_concatenation_token1;
	v->a[313794] = 4;
	v->a[313795] = actions(71);
	v->a[313796] = 1;
	v->a[313797] = sym_comment;
	v->a[313798] = actions(14784);
	v->a[313799] = 1;
	small_parse_table_15690(v);
}

/* EOF small_parse_table_3137.c */
