/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_885.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4425(t_small_parse_table_array *v)
{
	v->a[88500] = actions(3);
	v->a[88501] = 1;
	v->a[88502] = sym_comment;
	v->a[88503] = actions(3712);
	v->a[88504] = 1;
	v->a[88505] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88506] = actions(3716);
	v->a[88507] = 1;
	v->a[88508] = sym_string_content;
	v->a[88509] = actions(3718);
	v->a[88510] = 1;
	v->a[88511] = anon_sym_DOLLAR_LBRACE;
	v->a[88512] = actions(3720);
	v->a[88513] = 1;
	v->a[88514] = anon_sym_DOLLAR_LPAREN;
	v->a[88515] = actions(3722);
	v->a[88516] = 1;
	v->a[88517] = anon_sym_BQUOTE;
	v->a[88518] = actions(3804);
	v->a[88519] = 1;
	small_parse_table_4426(v);
}

void	small_parse_table_4426(t_small_parse_table_array *v)
{
	v->a[88520] = anon_sym_DOLLAR;
	v->a[88521] = actions(3806);
	v->a[88522] = 1;
	v->a[88523] = anon_sym_DQUOTE;
	v->a[88524] = state(1747);
	v->a[88525] = 1;
	v->a[88526] = aux_sym_string_repeat1;
	v->a[88527] = state(1869);
	v->a[88528] = 4;
	v->a[88529] = sym_arithmetic_expansion;
	v->a[88530] = sym_simple_expansion;
	v->a[88531] = sym_expansion;
	v->a[88532] = sym_command_substitution;
	v->a[88533] = 4;
	v->a[88534] = actions(3);
	v->a[88535] = 1;
	v->a[88536] = sym_comment;
	v->a[88537] = actions(1048);
	v->a[88538] = 1;
	v->a[88539] = sym_variable_name;
	small_parse_table_4427(v);
}

void	small_parse_table_4427(t_small_parse_table_array *v)
{
	v->a[88540] = actions(1046);
	v->a[88541] = 2;
	v->a[88542] = aux_sym__simple_variable_name_token1;
	v->a[88543] = aux_sym__multiline_variable_name_token1;
	v->a[88544] = actions(1044);
	v->a[88545] = 9;
	v->a[88546] = anon_sym_BANG;
	v->a[88547] = anon_sym_DASH;
	v->a[88548] = anon_sym_STAR;
	v->a[88549] = anon_sym_QMARK;
	v->a[88550] = anon_sym_DOLLAR;
	v->a[88551] = anon_sym_POUND;
	v->a[88552] = anon_sym_AT;
	v->a[88553] = anon_sym_0;
	v->a[88554] = anon_sym__;
	v->a[88555] = 4;
	v->a[88556] = actions(3);
	v->a[88557] = 1;
	v->a[88558] = sym_comment;
	v->a[88559] = actions(427);
	small_parse_table_4428(v);
}

void	small_parse_table_4428(t_small_parse_table_array *v)
{
	v->a[88560] = 1;
	v->a[88561] = sym_variable_name;
	v->a[88562] = actions(425);
	v->a[88563] = 2;
	v->a[88564] = aux_sym__simple_variable_name_token1;
	v->a[88565] = aux_sym__multiline_variable_name_token1;
	v->a[88566] = actions(423);
	v->a[88567] = 9;
	v->a[88568] = anon_sym_BANG;
	v->a[88569] = anon_sym_DASH;
	v->a[88570] = anon_sym_STAR;
	v->a[88571] = anon_sym_QMARK;
	v->a[88572] = anon_sym_DOLLAR;
	v->a[88573] = anon_sym_POUND;
	v->a[88574] = anon_sym_AT;
	v->a[88575] = anon_sym_0;
	v->a[88576] = anon_sym__;
	v->a[88577] = 4;
	v->a[88578] = actions(3);
	v->a[88579] = 1;
	small_parse_table_4429(v);
}

void	small_parse_table_4429(t_small_parse_table_array *v)
{
	v->a[88580] = sym_comment;
	v->a[88581] = actions(1650);
	v->a[88582] = 1;
	v->a[88583] = sym_variable_name;
	v->a[88584] = actions(1648);
	v->a[88585] = 2;
	v->a[88586] = aux_sym__simple_variable_name_token1;
	v->a[88587] = aux_sym__multiline_variable_name_token1;
	v->a[88588] = actions(1646);
	v->a[88589] = 9;
	v->a[88590] = anon_sym_BANG;
	v->a[88591] = anon_sym_DASH;
	v->a[88592] = anon_sym_STAR;
	v->a[88593] = anon_sym_QMARK;
	v->a[88594] = anon_sym_DOLLAR;
	v->a[88595] = anon_sym_POUND;
	v->a[88596] = anon_sym_AT;
	v->a[88597] = anon_sym_0;
	v->a[88598] = anon_sym__;
	v->a[88599] = 10;
	small_parse_table_4430(v);
}

/* EOF small_parse_table_885.c */
