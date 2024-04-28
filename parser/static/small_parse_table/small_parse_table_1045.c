/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1045.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5225(t_small_parse_table_array *v)
{
	v->a[104500] = sym_arithmetic_expansion;
	v->a[104501] = sym_brace_expression;
	v->a[104502] = sym_string;
	v->a[104503] = sym_translated_string;
	v->a[104504] = sym_number;
	v->a[104505] = sym_simple_expansion;
	v->a[104506] = sym_expansion;
	v->a[104507] = sym_command_substitution;
	v->a[104508] = sym_process_substitution;
	v->a[104509] = 26;
	v->a[104510] = actions(71);
	v->a[104511] = 1;
	v->a[104512] = sym_comment;
	v->a[104513] = actions(363);
	v->a[104514] = 1;
	v->a[104515] = anon_sym_DOLLAR_LBRACK;
	v->a[104516] = actions(367);
	v->a[104517] = 1;
	v->a[104518] = anon_sym_DOLLAR;
	v->a[104519] = actions(371);
	small_parse_table_5226(v);
}

void	small_parse_table_5226(t_small_parse_table_array *v)
{
	v->a[104520] = 1;
	v->a[104521] = anon_sym_DQUOTE;
	v->a[104522] = actions(375);
	v->a[104523] = 1;
	v->a[104524] = aux_sym_number_token1;
	v->a[104525] = actions(377);
	v->a[104526] = 1;
	v->a[104527] = aux_sym_number_token2;
	v->a[104528] = actions(379);
	v->a[104529] = 1;
	v->a[104530] = anon_sym_DOLLAR_LBRACE;
	v->a[104531] = actions(381);
	v->a[104532] = 1;
	v->a[104533] = anon_sym_DOLLAR_LPAREN;
	v->a[104534] = actions(385);
	v->a[104535] = 1;
	v->a[104536] = anon_sym_DOLLAR_BQUOTE;
	v->a[104537] = actions(391);
	v->a[104538] = 1;
	v->a[104539] = sym__brace_start;
	small_parse_table_5227(v);
}

void	small_parse_table_5227(t_small_parse_table_array *v)
{
	v->a[104540] = actions(1091);
	v->a[104541] = 1;
	v->a[104542] = sym_word;
	v->a[104543] = actions(1093);
	v->a[104544] = 1;
	v->a[104545] = anon_sym_LPAREN;
	v->a[104546] = actions(1095);
	v->a[104547] = 1;
	v->a[104548] = anon_sym_BANG;
	v->a[104549] = actions(1103);
	v->a[104550] = 1;
	v->a[104551] = anon_sym_TILDE;
	v->a[104552] = actions(1113);
	v->a[104553] = 1;
	v->a[104554] = sym_test_operator;
	v->a[104555] = actions(5809);
	v->a[104556] = 1;
	v->a[104557] = anon_sym_BQUOTE;
	v->a[104558] = actions(5916);
	v->a[104559] = 1;
	small_parse_table_5228(v);
}

void	small_parse_table_5228(t_small_parse_table_array *v)
{
	v->a[104560] = sym__special_character;
	v->a[104561] = state(2472);
	v->a[104562] = 1;
	v->a[104563] = aux_sym__literal_repeat1;
	v->a[104564] = state(2812);
	v->a[104565] = 1;
	v->a[104566] = sym__expression;
	v->a[104567] = actions(352);
	v->a[104568] = 2;
	v->a[104569] = anon_sym_LPAREN_LPAREN;
	v->a[104570] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104571] = actions(387);
	v->a[104572] = 2;
	v->a[104573] = anon_sym_LT_LPAREN;
	v->a[104574] = anon_sym_GT_LPAREN;
	v->a[104575] = actions(1099);
	v->a[104576] = 2;
	v->a[104577] = anon_sym_PLUS_PLUS2;
	v->a[104578] = anon_sym_DASH_DASH2;
	v->a[104579] = actions(1101);
	small_parse_table_5229(v);
}

void	small_parse_table_5229(t_small_parse_table_array *v)
{
	v->a[104580] = 2;
	v->a[104581] = anon_sym_DASH2;
	v->a[104582] = anon_sym_PLUS2;
	v->a[104583] = actions(1109);
	v->a[104584] = 2;
	v->a[104585] = sym_raw_string;
	v->a[104586] = sym_ansi_c_string;
	v->a[104587] = state(2863);
	v->a[104588] = 6;
	v->a[104589] = sym_binary_expression;
	v->a[104590] = sym_ternary_expression;
	v->a[104591] = sym_unary_expression;
	v->a[104592] = sym_postfix_expression;
	v->a[104593] = sym_parenthesized_expression;
	v->a[104594] = sym_concatenation;
	v->a[104595] = state(2451);
	v->a[104596] = 9;
	v->a[104597] = sym_arithmetic_expansion;
	v->a[104598] = sym_brace_expression;
	v->a[104599] = sym_string;
	small_parse_table_5230(v);
}

/* EOF small_parse_table_1045.c */
