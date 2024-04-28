/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2575.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12875(t_small_parse_table_array *v)
{
	v->a[257500] = anon_sym_BQUOTE;
	v->a[257501] = actions(11768);
	v->a[257502] = 1;
	v->a[257503] = anon_sym_DOLLAR_BQUOTE;
	v->a[257504] = actions(11770);
	v->a[257505] = 1;
	v->a[257506] = aux_sym__simple_variable_name_token1;
	v->a[257507] = actions(11772);
	v->a[257508] = 1;
	v->a[257509] = sym_variable_name;
	v->a[257510] = actions(11877);
	v->a[257511] = 1;
	v->a[257512] = anon_sym_RBRACE3;
	v->a[257513] = state(3532);
	v->a[257514] = 1;
	v->a[257515] = sym_subscript;
	v->a[257516] = state(6428);
	v->a[257517] = 1;
	v->a[257518] = aux_sym__expansion_body_repeat1;
	v->a[257519] = state(6472);
	small_parse_table_12876(v);
}

void	small_parse_table_12876(t_small_parse_table_array *v)
{
	v->a[257520] = 1;
	v->a[257521] = sym_command_substitution;
	v->a[257522] = state(7126);
	v->a[257523] = 1;
	v->a[257524] = sym__expansion_body;
	v->a[257525] = actions(11762);
	v->a[257526] = 2;
	v->a[257527] = anon_sym_POUND2;
	v->a[257528] = anon_sym_EQ2;
	v->a[257529] = actions(8050);
	v->a[257530] = 3;
	v->a[257531] = sym__external_expansion_sym_hash;
	v->a[257532] = sym__external_expansion_sym_bang;
	v->a[257533] = sym__external_expansion_sym_equal;
	v->a[257534] = actions(11754);
	v->a[257535] = 4;
	v->a[257536] = anon_sym_DASH;
	v->a[257537] = anon_sym_STAR;
	v->a[257538] = anon_sym_QMARK;
	v->a[257539] = anon_sym_AT2;
	small_parse_table_12877(v);
}

void	small_parse_table_12877(t_small_parse_table_array *v)
{
	v->a[257540] = actions(11756);
	v->a[257541] = 5;
	v->a[257542] = anon_sym_BANG;
	v->a[257543] = anon_sym_DOLLAR;
	v->a[257544] = anon_sym_POUND;
	v->a[257545] = anon_sym_0;
	v->a[257546] = anon_sym__;
	v->a[257547] = 16;
	v->a[257548] = actions(3);
	v->a[257549] = 1;
	v->a[257550] = sym_comment;
	v->a[257551] = actions(11760);
	v->a[257552] = 1;
	v->a[257553] = anon_sym_BANG2;
	v->a[257554] = actions(11764);
	v->a[257555] = 1;
	v->a[257556] = anon_sym_DOLLAR_LPAREN;
	v->a[257557] = actions(11766);
	v->a[257558] = 1;
	v->a[257559] = anon_sym_BQUOTE;
	small_parse_table_12878(v);
}

void	small_parse_table_12878(t_small_parse_table_array *v)
{
	v->a[257560] = actions(11768);
	v->a[257561] = 1;
	v->a[257562] = anon_sym_DOLLAR_BQUOTE;
	v->a[257563] = actions(11770);
	v->a[257564] = 1;
	v->a[257565] = aux_sym__simple_variable_name_token1;
	v->a[257566] = actions(11772);
	v->a[257567] = 1;
	v->a[257568] = sym_variable_name;
	v->a[257569] = actions(11879);
	v->a[257570] = 1;
	v->a[257571] = anon_sym_RBRACE3;
	v->a[257572] = state(3532);
	v->a[257573] = 1;
	v->a[257574] = sym_subscript;
	v->a[257575] = state(6428);
	v->a[257576] = 1;
	v->a[257577] = aux_sym__expansion_body_repeat1;
	v->a[257578] = state(6472);
	v->a[257579] = 1;
	small_parse_table_12879(v);
}

void	small_parse_table_12879(t_small_parse_table_array *v)
{
	v->a[257580] = sym_command_substitution;
	v->a[257581] = state(7135);
	v->a[257582] = 1;
	v->a[257583] = sym__expansion_body;
	v->a[257584] = actions(11762);
	v->a[257585] = 2;
	v->a[257586] = anon_sym_POUND2;
	v->a[257587] = anon_sym_EQ2;
	v->a[257588] = actions(8050);
	v->a[257589] = 3;
	v->a[257590] = sym__external_expansion_sym_hash;
	v->a[257591] = sym__external_expansion_sym_bang;
	v->a[257592] = sym__external_expansion_sym_equal;
	v->a[257593] = actions(11754);
	v->a[257594] = 4;
	v->a[257595] = anon_sym_DASH;
	v->a[257596] = anon_sym_STAR;
	v->a[257597] = anon_sym_QMARK;
	v->a[257598] = anon_sym_AT2;
	v->a[257599] = actions(11756);
	small_parse_table_12880(v);
}

/* EOF small_parse_table_2575.c */
