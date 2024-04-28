/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2641.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13205(t_small_parse_table_array *v)
{
	v->a[264100] = sym_command_substitution;
	v->a[264101] = state(7113);
	v->a[264102] = 1;
	v->a[264103] = sym__expansion_body;
	v->a[264104] = actions(11762);
	v->a[264105] = 2;
	v->a[264106] = anon_sym_POUND2;
	v->a[264107] = anon_sym_EQ2;
	v->a[264108] = actions(8050);
	v->a[264109] = 3;
	v->a[264110] = sym__external_expansion_sym_hash;
	v->a[264111] = sym__external_expansion_sym_bang;
	v->a[264112] = sym__external_expansion_sym_equal;
	v->a[264113] = actions(11754);
	v->a[264114] = 4;
	v->a[264115] = anon_sym_DASH;
	v->a[264116] = anon_sym_STAR;
	v->a[264117] = anon_sym_QMARK;
	v->a[264118] = anon_sym_AT2;
	v->a[264119] = actions(11756);
	small_parse_table_13206(v);
}

void	small_parse_table_13206(t_small_parse_table_array *v)
{
	v->a[264120] = 5;
	v->a[264121] = anon_sym_BANG;
	v->a[264122] = anon_sym_DOLLAR;
	v->a[264123] = anon_sym_POUND;
	v->a[264124] = anon_sym_0;
	v->a[264125] = anon_sym__;
	v->a[264126] = 16;
	v->a[264127] = actions(3);
	v->a[264128] = 1;
	v->a[264129] = sym_comment;
	v->a[264130] = actions(11760);
	v->a[264131] = 1;
	v->a[264132] = anon_sym_BANG2;
	v->a[264133] = actions(11764);
	v->a[264134] = 1;
	v->a[264135] = anon_sym_DOLLAR_LPAREN;
	v->a[264136] = actions(11766);
	v->a[264137] = 1;
	v->a[264138] = anon_sym_BQUOTE;
	v->a[264139] = actions(11768);
	small_parse_table_13207(v);
}

void	small_parse_table_13207(t_small_parse_table_array *v)
{
	v->a[264140] = 1;
	v->a[264141] = anon_sym_DOLLAR_BQUOTE;
	v->a[264142] = actions(11770);
	v->a[264143] = 1;
	v->a[264144] = aux_sym__simple_variable_name_token1;
	v->a[264145] = actions(11772);
	v->a[264146] = 1;
	v->a[264147] = sym_variable_name;
	v->a[264148] = actions(12056);
	v->a[264149] = 1;
	v->a[264150] = anon_sym_RBRACE3;
	v->a[264151] = state(3532);
	v->a[264152] = 1;
	v->a[264153] = sym_subscript;
	v->a[264154] = state(6428);
	v->a[264155] = 1;
	v->a[264156] = aux_sym__expansion_body_repeat1;
	v->a[264157] = state(6472);
	v->a[264158] = 1;
	v->a[264159] = sym_command_substitution;
	small_parse_table_13208(v);
}

void	small_parse_table_13208(t_small_parse_table_array *v)
{
	v->a[264160] = state(7524);
	v->a[264161] = 1;
	v->a[264162] = sym__expansion_body;
	v->a[264163] = actions(11762);
	v->a[264164] = 2;
	v->a[264165] = anon_sym_POUND2;
	v->a[264166] = anon_sym_EQ2;
	v->a[264167] = actions(8050);
	v->a[264168] = 3;
	v->a[264169] = sym__external_expansion_sym_hash;
	v->a[264170] = sym__external_expansion_sym_bang;
	v->a[264171] = sym__external_expansion_sym_equal;
	v->a[264172] = actions(11754);
	v->a[264173] = 4;
	v->a[264174] = anon_sym_DASH;
	v->a[264175] = anon_sym_STAR;
	v->a[264176] = anon_sym_QMARK;
	v->a[264177] = anon_sym_AT2;
	v->a[264178] = actions(11756);
	v->a[264179] = 5;
	small_parse_table_13209(v);
}

void	small_parse_table_13209(t_small_parse_table_array *v)
{
	v->a[264180] = anon_sym_BANG;
	v->a[264181] = anon_sym_DOLLAR;
	v->a[264182] = anon_sym_POUND;
	v->a[264183] = anon_sym_0;
	v->a[264184] = anon_sym__;
	v->a[264185] = 6;
	v->a[264186] = actions(3);
	v->a[264187] = 1;
	v->a[264188] = sym_comment;
	v->a[264189] = actions(11512);
	v->a[264190] = 1;
	v->a[264191] = aux_sym_concatenation_token1;
	v->a[264192] = actions(11514);
	v->a[264193] = 1;
	v->a[264194] = sym__concat;
	v->a[264195] = state(4776);
	v->a[264196] = 1;
	v->a[264197] = aux_sym_concatenation_repeat1;
	v->a[264198] = actions(5723);
	v->a[264199] = 2;
	small_parse_table_13210(v);
}

/* EOF small_parse_table_2641.c */
