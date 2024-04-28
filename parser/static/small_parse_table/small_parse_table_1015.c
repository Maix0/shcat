/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1015.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5075(t_small_parse_table_array *v)
{
	v->a[101500] = anon_sym_TILDE;
	v->a[101501] = actions(1113);
	v->a[101502] = 1;
	v->a[101503] = sym_test_operator;
	v->a[101504] = actions(5809);
	v->a[101505] = 1;
	v->a[101506] = anon_sym_BQUOTE;
	v->a[101507] = actions(5916);
	v->a[101508] = 1;
	v->a[101509] = sym__special_character;
	v->a[101510] = state(2472);
	v->a[101511] = 1;
	v->a[101512] = aux_sym__literal_repeat1;
	v->a[101513] = state(2830);
	v->a[101514] = 1;
	v->a[101515] = sym__expression;
	v->a[101516] = actions(352);
	v->a[101517] = 2;
	v->a[101518] = anon_sym_LPAREN_LPAREN;
	v->a[101519] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5076(v);
}

void	small_parse_table_5076(t_small_parse_table_array *v)
{
	v->a[101520] = actions(387);
	v->a[101521] = 2;
	v->a[101522] = anon_sym_LT_LPAREN;
	v->a[101523] = anon_sym_GT_LPAREN;
	v->a[101524] = actions(1099);
	v->a[101525] = 2;
	v->a[101526] = anon_sym_PLUS_PLUS2;
	v->a[101527] = anon_sym_DASH_DASH2;
	v->a[101528] = actions(1101);
	v->a[101529] = 2;
	v->a[101530] = anon_sym_DASH2;
	v->a[101531] = anon_sym_PLUS2;
	v->a[101532] = actions(1109);
	v->a[101533] = 2;
	v->a[101534] = sym_raw_string;
	v->a[101535] = sym_ansi_c_string;
	v->a[101536] = state(2863);
	v->a[101537] = 6;
	v->a[101538] = sym_binary_expression;
	v->a[101539] = sym_ternary_expression;
	small_parse_table_5077(v);
}

void	small_parse_table_5077(t_small_parse_table_array *v)
{
	v->a[101540] = sym_unary_expression;
	v->a[101541] = sym_postfix_expression;
	v->a[101542] = sym_parenthesized_expression;
	v->a[101543] = sym_concatenation;
	v->a[101544] = state(2451);
	v->a[101545] = 9;
	v->a[101546] = sym_arithmetic_expansion;
	v->a[101547] = sym_brace_expression;
	v->a[101548] = sym_string;
	v->a[101549] = sym_translated_string;
	v->a[101550] = sym_number;
	v->a[101551] = sym_simple_expansion;
	v->a[101552] = sym_expansion;
	v->a[101553] = sym_command_substitution;
	v->a[101554] = sym_process_substitution;
	v->a[101555] = 26;
	v->a[101556] = actions(71);
	v->a[101557] = 1;
	v->a[101558] = sym_comment;
	v->a[101559] = actions(1131);
	small_parse_table_5078(v);
}

void	small_parse_table_5078(t_small_parse_table_array *v)
{
	v->a[101560] = 1;
	v->a[101561] = anon_sym_LPAREN;
	v->a[101562] = actions(1141);
	v->a[101563] = 1;
	v->a[101564] = anon_sym_DOLLAR_LBRACK;
	v->a[101565] = actions(1145);
	v->a[101566] = 1;
	v->a[101567] = anon_sym_DOLLAR;
	v->a[101568] = actions(1149);
	v->a[101569] = 1;
	v->a[101570] = anon_sym_DQUOTE;
	v->a[101571] = actions(1153);
	v->a[101572] = 1;
	v->a[101573] = aux_sym_number_token1;
	v->a[101574] = actions(1155);
	v->a[101575] = 1;
	v->a[101576] = aux_sym_number_token2;
	v->a[101577] = actions(1157);
	v->a[101578] = 1;
	v->a[101579] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5079(v);
}

void	small_parse_table_5079(t_small_parse_table_array *v)
{
	v->a[101580] = actions(1159);
	v->a[101581] = 1;
	v->a[101582] = anon_sym_DOLLAR_LPAREN;
	v->a[101583] = actions(1163);
	v->a[101584] = 1;
	v->a[101585] = anon_sym_DOLLAR_BQUOTE;
	v->a[101586] = actions(1169);
	v->a[101587] = 1;
	v->a[101588] = sym__brace_start;
	v->a[101589] = actions(1171);
	v->a[101590] = 1;
	v->a[101591] = sym_word;
	v->a[101592] = actions(1173);
	v->a[101593] = 1;
	v->a[101594] = anon_sym_BANG;
	v->a[101595] = actions(1179);
	v->a[101596] = 1;
	v->a[101597] = anon_sym_TILDE;
	v->a[101598] = actions(1181);
	v->a[101599] = 1;
	small_parse_table_5080(v);
}

/* EOF small_parse_table_1015.c */
