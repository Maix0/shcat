/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2215.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11075(t_small_parse_table_array *v)
{
	v->a[221500] = 1;
	v->a[221501] = anon_sym_DOLLAR_LBRACK;
	v->a[221502] = actions(7998);
	v->a[221503] = 1;
	v->a[221504] = anon_sym_DOLLAR;
	v->a[221505] = actions(8000);
	v->a[221506] = 1;
	v->a[221507] = sym__special_character;
	v->a[221508] = actions(8002);
	v->a[221509] = 1;
	v->a[221510] = anon_sym_DQUOTE;
	v->a[221511] = actions(8006);
	v->a[221512] = 1;
	v->a[221513] = aux_sym_number_token1;
	v->a[221514] = actions(8008);
	v->a[221515] = 1;
	v->a[221516] = aux_sym_number_token2;
	v->a[221517] = actions(8010);
	v->a[221518] = 1;
	v->a[221519] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11076(v);
}

void	small_parse_table_11076(t_small_parse_table_array *v)
{
	v->a[221520] = actions(8012);
	v->a[221521] = 1;
	v->a[221522] = anon_sym_DOLLAR_LPAREN;
	v->a[221523] = actions(8014);
	v->a[221524] = 1;
	v->a[221525] = anon_sym_BQUOTE;
	v->a[221526] = actions(8016);
	v->a[221527] = 1;
	v->a[221528] = anon_sym_DOLLAR_BQUOTE;
	v->a[221529] = actions(8026);
	v->a[221530] = 1;
	v->a[221531] = sym__brace_start;
	v->a[221532] = actions(10598);
	v->a[221533] = 1;
	v->a[221534] = sym_word;
	v->a[221535] = actions(10602);
	v->a[221536] = 1;
	v->a[221537] = sym_test_operator;
	v->a[221538] = state(3542);
	v->a[221539] = 1;
	small_parse_table_11077(v);
}

void	small_parse_table_11077(t_small_parse_table_array *v)
{
	v->a[221540] = aux_sym__literal_repeat1;
	v->a[221541] = state(3569);
	v->a[221542] = 1;
	v->a[221543] = sym_concatenation;
	v->a[221544] = actions(7992);
	v->a[221545] = 2;
	v->a[221546] = anon_sym_LPAREN_LPAREN;
	v->a[221547] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[221548] = actions(8018);
	v->a[221549] = 2;
	v->a[221550] = anon_sym_LT_LPAREN;
	v->a[221551] = anon_sym_GT_LPAREN;
	v->a[221552] = actions(10600);
	v->a[221553] = 2;
	v->a[221554] = sym_raw_string;
	v->a[221555] = sym_ansi_c_string;
	v->a[221556] = state(3456);
	v->a[221557] = 9;
	v->a[221558] = sym_arithmetic_expansion;
	v->a[221559] = sym_brace_expression;
	small_parse_table_11078(v);
}

void	small_parse_table_11078(t_small_parse_table_array *v)
{
	v->a[221560] = sym_string;
	v->a[221561] = sym_translated_string;
	v->a[221562] = sym_number;
	v->a[221563] = sym_simple_expansion;
	v->a[221564] = sym_expansion;
	v->a[221565] = sym_command_substitution;
	v->a[221566] = sym_process_substitution;
	v->a[221567] = 21;
	v->a[221568] = actions(71);
	v->a[221569] = 1;
	v->a[221570] = sym_comment;
	v->a[221571] = actions(3064);
	v->a[221572] = 1;
	v->a[221573] = sym_variable_name;
	v->a[221574] = actions(9278);
	v->a[221575] = 1;
	v->a[221576] = anon_sym_LPAREN;
	v->a[221577] = actions(9280);
	v->a[221578] = 1;
	v->a[221579] = anon_sym_BANG;
	small_parse_table_11079(v);
}

void	small_parse_table_11079(t_small_parse_table_array *v)
{
	v->a[221580] = actions(9286);
	v->a[221581] = 1;
	v->a[221582] = anon_sym_TILDE;
	v->a[221583] = actions(9288);
	v->a[221584] = 1;
	v->a[221585] = anon_sym_DOLLAR;
	v->a[221586] = actions(9290);
	v->a[221587] = 1;
	v->a[221588] = anon_sym_DQUOTE;
	v->a[221589] = actions(9292);
	v->a[221590] = 1;
	v->a[221591] = aux_sym_number_token1;
	v->a[221592] = actions(9294);
	v->a[221593] = 1;
	v->a[221594] = aux_sym_number_token2;
	v->a[221595] = actions(9296);
	v->a[221596] = 1;
	v->a[221597] = anon_sym_DOLLAR_LBRACE;
	v->a[221598] = actions(9298);
	v->a[221599] = 1;
	small_parse_table_11080(v);
}

/* EOF small_parse_table_2215.c */
