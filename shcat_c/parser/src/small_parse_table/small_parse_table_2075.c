/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2075.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10375(t_small_parse_table_array *v)
{
	v->a[207500] = state(2809);
	v->a[207501] = 1;
	v->a[207502] = sym__arithmetic_unary_expression;
	v->a[207503] = state(2825);
	v->a[207504] = 1;
	v->a[207505] = sym__arithmetic_postfix_expression;
	v->a[207506] = actions(9282);
	v->a[207507] = 2;
	v->a[207508] = anon_sym_PLUS_PLUS2;
	v->a[207509] = anon_sym_DASH_DASH2;
	v->a[207510] = actions(9284);
	v->a[207511] = 2;
	v->a[207512] = anon_sym_DASH2;
	v->a[207513] = anon_sym_PLUS2;
	v->a[207514] = state(2751);
	v->a[207515] = 9;
	v->a[207516] = sym_subscript;
	v->a[207517] = sym__arithmetic_expression;
	v->a[207518] = sym__arithmetic_literal;
	v->a[207519] = sym__arithmetic_parenthesized_expression;
	small_parse_table_10376(v);
}

void	small_parse_table_10376(t_small_parse_table_array *v)
{
	v->a[207520] = sym_string;
	v->a[207521] = sym_number;
	v->a[207522] = sym_simple_expansion;
	v->a[207523] = sym_expansion;
	v->a[207524] = sym_command_substitution;
	v->a[207525] = 20;
	v->a[207526] = actions(71);
	v->a[207527] = 1;
	v->a[207528] = sym_comment;
	v->a[207529] = actions(5405);
	v->a[207530] = 1;
	v->a[207531] = anon_sym_DOLLAR_LBRACK;
	v->a[207532] = actions(5407);
	v->a[207533] = 1;
	v->a[207534] = anon_sym_DOLLAR;
	v->a[207535] = actions(5409);
	v->a[207536] = 1;
	v->a[207537] = sym__special_character;
	v->a[207538] = actions(5411);
	v->a[207539] = 1;
	small_parse_table_10377(v);
}

void	small_parse_table_10377(t_small_parse_table_array *v)
{
	v->a[207540] = anon_sym_DQUOTE;
	v->a[207541] = actions(5415);
	v->a[207542] = 1;
	v->a[207543] = aux_sym_number_token1;
	v->a[207544] = actions(5417);
	v->a[207545] = 1;
	v->a[207546] = aux_sym_number_token2;
	v->a[207547] = actions(5419);
	v->a[207548] = 1;
	v->a[207549] = anon_sym_DOLLAR_LBRACE;
	v->a[207550] = actions(5421);
	v->a[207551] = 1;
	v->a[207552] = anon_sym_DOLLAR_LPAREN;
	v->a[207553] = actions(5423);
	v->a[207554] = 1;
	v->a[207555] = anon_sym_BQUOTE;
	v->a[207556] = actions(5425);
	v->a[207557] = 1;
	v->a[207558] = anon_sym_DOLLAR_BQUOTE;
	v->a[207559] = actions(5431);
	small_parse_table_10378(v);
}

void	small_parse_table_10378(t_small_parse_table_array *v)
{
	v->a[207560] = 1;
	v->a[207561] = sym__brace_start;
	v->a[207562] = actions(9668);
	v->a[207563] = 1;
	v->a[207564] = sym_word;
	v->a[207565] = actions(9672);
	v->a[207566] = 1;
	v->a[207567] = sym_test_operator;
	v->a[207568] = state(5500);
	v->a[207569] = 1;
	v->a[207570] = aux_sym__literal_repeat1;
	v->a[207571] = state(5671);
	v->a[207572] = 1;
	v->a[207573] = sym_concatenation;
	v->a[207574] = actions(5403);
	v->a[207575] = 2;
	v->a[207576] = anon_sym_LPAREN_LPAREN;
	v->a[207577] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[207578] = actions(5427);
	v->a[207579] = 2;
	small_parse_table_10379(v);
}

void	small_parse_table_10379(t_small_parse_table_array *v)
{
	v->a[207580] = anon_sym_LT_LPAREN;
	v->a[207581] = anon_sym_GT_LPAREN;
	v->a[207582] = actions(9670);
	v->a[207583] = 2;
	v->a[207584] = sym_raw_string;
	v->a[207585] = sym_ansi_c_string;
	v->a[207586] = state(5415);
	v->a[207587] = 9;
	v->a[207588] = sym_arithmetic_expansion;
	v->a[207589] = sym_brace_expression;
	v->a[207590] = sym_string;
	v->a[207591] = sym_translated_string;
	v->a[207592] = sym_number;
	v->a[207593] = sym_simple_expansion;
	v->a[207594] = sym_expansion;
	v->a[207595] = sym_command_substitution;
	v->a[207596] = sym_process_substitution;
	v->a[207597] = 18;
	v->a[207598] = actions(3);
	v->a[207599] = 1;
	small_parse_table_10380(v);
}

/* EOF small_parse_table_2075.c */
