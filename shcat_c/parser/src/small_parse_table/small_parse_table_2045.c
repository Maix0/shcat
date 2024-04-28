/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2045.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10225(t_small_parse_table_array *v)
{
	v->a[204500] = sym__arithmetic_binary_expression;
	v->a[204501] = state(3396);
	v->a[204502] = 1;
	v->a[204503] = sym__arithmetic_ternary_expression;
	v->a[204504] = state(3398);
	v->a[204505] = 1;
	v->a[204506] = sym__arithmetic_unary_expression;
	v->a[204507] = state(3400);
	v->a[204508] = 1;
	v->a[204509] = sym__arithmetic_postfix_expression;
	v->a[204510] = actions(9368);
	v->a[204511] = 2;
	v->a[204512] = anon_sym_PLUS_PLUS2;
	v->a[204513] = anon_sym_DASH_DASH2;
	v->a[204514] = actions(9370);
	v->a[204515] = 2;
	v->a[204516] = anon_sym_DASH2;
	v->a[204517] = anon_sym_PLUS2;
	v->a[204518] = state(3348);
	v->a[204519] = 9;
	small_parse_table_10226(v);
}

void	small_parse_table_10226(t_small_parse_table_array *v)
{
	v->a[204520] = sym_subscript;
	v->a[204521] = sym__arithmetic_expression;
	v->a[204522] = sym__arithmetic_literal;
	v->a[204523] = sym__arithmetic_parenthesized_expression;
	v->a[204524] = sym_string;
	v->a[204525] = sym_number;
	v->a[204526] = sym_simple_expansion;
	v->a[204527] = sym_expansion;
	v->a[204528] = sym_command_substitution;
	v->a[204529] = 18;
	v->a[204530] = actions(3);
	v->a[204531] = 1;
	v->a[204532] = sym_comment;
	v->a[204533] = actions(5261);
	v->a[204534] = 1;
	v->a[204535] = anon_sym_DOLLAR_LBRACK;
	v->a[204536] = actions(5267);
	v->a[204537] = 1;
	v->a[204538] = anon_sym_DQUOTE;
	v->a[204539] = actions(5271);
	small_parse_table_10227(v);
}

void	small_parse_table_10227(t_small_parse_table_array *v)
{
	v->a[204540] = 1;
	v->a[204541] = aux_sym_number_token1;
	v->a[204542] = actions(5273);
	v->a[204543] = 1;
	v->a[204544] = aux_sym_number_token2;
	v->a[204545] = actions(5275);
	v->a[204546] = 1;
	v->a[204547] = anon_sym_DOLLAR_LBRACE;
	v->a[204548] = actions(5277);
	v->a[204549] = 1;
	v->a[204550] = anon_sym_DOLLAR_LPAREN;
	v->a[204551] = actions(5279);
	v->a[204552] = 1;
	v->a[204553] = anon_sym_BQUOTE;
	v->a[204554] = actions(5281);
	v->a[204555] = 1;
	v->a[204556] = anon_sym_DOLLAR_BQUOTE;
	v->a[204557] = actions(5287);
	v->a[204558] = 1;
	v->a[204559] = sym__brace_start;
	small_parse_table_10228(v);
}

void	small_parse_table_10228(t_small_parse_table_array *v)
{
	v->a[204560] = actions(9472);
	v->a[204561] = 1;
	v->a[204562] = sym_word;
	v->a[204563] = actions(9474);
	v->a[204564] = 1;
	v->a[204565] = anon_sym_DOLLAR;
	v->a[204566] = actions(9480);
	v->a[204567] = 1;
	v->a[204568] = sym__comment_word;
	v->a[204569] = actions(5259);
	v->a[204570] = 2;
	v->a[204571] = anon_sym_LPAREN_LPAREN;
	v->a[204572] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[204573] = actions(5283);
	v->a[204574] = 2;
	v->a[204575] = anon_sym_LT_LPAREN;
	v->a[204576] = anon_sym_GT_LPAREN;
	v->a[204577] = actions(9476);
	v->a[204578] = 2;
	v->a[204579] = sym_test_operator;
	small_parse_table_10229(v);
}

void	small_parse_table_10229(t_small_parse_table_array *v)
{
	v->a[204580] = sym__special_character;
	v->a[204581] = actions(9478);
	v->a[204582] = 3;
	v->a[204583] = sym__bare_dollar;
	v->a[204584] = sym_raw_string;
	v->a[204585] = sym_ansi_c_string;
	v->a[204586] = state(5440);
	v->a[204587] = 9;
	v->a[204588] = sym_arithmetic_expansion;
	v->a[204589] = sym_brace_expression;
	v->a[204590] = sym_string;
	v->a[204591] = sym_translated_string;
	v->a[204592] = sym_number;
	v->a[204593] = sym_simple_expansion;
	v->a[204594] = sym_expansion;
	v->a[204595] = sym_command_substitution;
	v->a[204596] = sym_process_substitution;
	v->a[204597] = 21;
	v->a[204598] = actions(71);
	v->a[204599] = 1;
	small_parse_table_10230(v);
}

/* EOF small_parse_table_2045.c */
