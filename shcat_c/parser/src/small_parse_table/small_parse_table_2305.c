/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2305.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11525(t_small_parse_table_array *v)
{
	v->a[230500] = 1;
	v->a[230501] = anon_sym_DOLLAR_LBRACE;
	v->a[230502] = actions(9298);
	v->a[230503] = 1;
	v->a[230504] = anon_sym_DOLLAR_LPAREN;
	v->a[230505] = actions(9300);
	v->a[230506] = 1;
	v->a[230507] = anon_sym_BQUOTE;
	v->a[230508] = actions(9302);
	v->a[230509] = 1;
	v->a[230510] = anon_sym_DOLLAR_BQUOTE;
	v->a[230511] = actions(10904);
	v->a[230512] = 1;
	v->a[230513] = aux_sym__simple_variable_name_token1;
	v->a[230514] = state(2801);
	v->a[230515] = 1;
	v->a[230516] = sym__arithmetic_binary_expression;
	v->a[230517] = state(2803);
	v->a[230518] = 1;
	v->a[230519] = sym__arithmetic_ternary_expression;
	small_parse_table_11526(v);
}

void	small_parse_table_11526(t_small_parse_table_array *v)
{
	v->a[230520] = state(2809);
	v->a[230521] = 1;
	v->a[230522] = sym__arithmetic_unary_expression;
	v->a[230523] = state(2825);
	v->a[230524] = 1;
	v->a[230525] = sym__arithmetic_postfix_expression;
	v->a[230526] = actions(9282);
	v->a[230527] = 2;
	v->a[230528] = anon_sym_PLUS_PLUS2;
	v->a[230529] = anon_sym_DASH_DASH2;
	v->a[230530] = actions(9284);
	v->a[230531] = 2;
	v->a[230532] = anon_sym_DASH2;
	v->a[230533] = anon_sym_PLUS2;
	v->a[230534] = state(2915);
	v->a[230535] = 9;
	v->a[230536] = sym_subscript;
	v->a[230537] = sym__arithmetic_expression;
	v->a[230538] = sym__arithmetic_literal;
	v->a[230539] = sym__arithmetic_parenthesized_expression;
	small_parse_table_11527(v);
}

void	small_parse_table_11527(t_small_parse_table_array *v)
{
	v->a[230540] = sym_string;
	v->a[230541] = sym_number;
	v->a[230542] = sym_simple_expansion;
	v->a[230543] = sym_expansion;
	v->a[230544] = sym_command_substitution;
	v->a[230545] = 18;
	v->a[230546] = actions(3);
	v->a[230547] = 1;
	v->a[230548] = sym_comment;
	v->a[230549] = actions(7996);
	v->a[230550] = 1;
	v->a[230551] = anon_sym_DOLLAR_LBRACK;
	v->a[230552] = actions(8002);
	v->a[230553] = 1;
	v->a[230554] = anon_sym_DQUOTE;
	v->a[230555] = actions(8006);
	v->a[230556] = 1;
	v->a[230557] = aux_sym_number_token1;
	v->a[230558] = actions(8008);
	v->a[230559] = 1;
	small_parse_table_11528(v);
}

void	small_parse_table_11528(t_small_parse_table_array *v)
{
	v->a[230560] = aux_sym_number_token2;
	v->a[230561] = actions(8010);
	v->a[230562] = 1;
	v->a[230563] = anon_sym_DOLLAR_LBRACE;
	v->a[230564] = actions(8012);
	v->a[230565] = 1;
	v->a[230566] = anon_sym_DOLLAR_LPAREN;
	v->a[230567] = actions(8014);
	v->a[230568] = 1;
	v->a[230569] = anon_sym_BQUOTE;
	v->a[230570] = actions(8016);
	v->a[230571] = 1;
	v->a[230572] = anon_sym_DOLLAR_BQUOTE;
	v->a[230573] = actions(8026);
	v->a[230574] = 1;
	v->a[230575] = sym__brace_start;
	v->a[230576] = actions(9356);
	v->a[230577] = 1;
	v->a[230578] = sym_word;
	v->a[230579] = actions(9362);
	small_parse_table_11529(v);
}

void	small_parse_table_11529(t_small_parse_table_array *v)
{
	v->a[230580] = 1;
	v->a[230581] = sym__comment_word;
	v->a[230582] = actions(10906);
	v->a[230583] = 1;
	v->a[230584] = anon_sym_DOLLAR;
	v->a[230585] = actions(7992);
	v->a[230586] = 2;
	v->a[230587] = anon_sym_LPAREN_LPAREN;
	v->a[230588] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[230589] = actions(8018);
	v->a[230590] = 2;
	v->a[230591] = anon_sym_LT_LPAREN;
	v->a[230592] = anon_sym_GT_LPAREN;
	v->a[230593] = actions(9358);
	v->a[230594] = 2;
	v->a[230595] = sym_test_operator;
	v->a[230596] = sym__special_character;
	v->a[230597] = actions(9360);
	v->a[230598] = 3;
	v->a[230599] = sym__bare_dollar;
	small_parse_table_11530(v);
}

/* EOF small_parse_table_2305.c */
