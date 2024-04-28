/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_957.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4785(t_small_parse_table_array *v)
{
	v->a[95700] = 2;
	v->a[95701] = anon_sym_DASH2;
	v->a[95702] = anon_sym_PLUS2;
	v->a[95703] = actions(1151);
	v->a[95704] = 2;
	v->a[95705] = sym_raw_string;
	v->a[95706] = sym_ansi_c_string;
	v->a[95707] = actions(1165);
	v->a[95708] = 2;
	v->a[95709] = anon_sym_LT_LPAREN;
	v->a[95710] = anon_sym_GT_LPAREN;
	v->a[95711] = state(2594);
	v->a[95712] = 6;
	v->a[95713] = sym_binary_expression;
	v->a[95714] = sym_ternary_expression;
	v->a[95715] = sym_unary_expression;
	v->a[95716] = sym_postfix_expression;
	v->a[95717] = sym_parenthesized_expression;
	v->a[95718] = sym_concatenation;
	v->a[95719] = state(2573);
	small_parse_table_4786(v);
}

void	small_parse_table_4786(t_small_parse_table_array *v)
{
	v->a[95720] = 9;
	v->a[95721] = sym_arithmetic_expansion;
	v->a[95722] = sym_brace_expression;
	v->a[95723] = sym_string;
	v->a[95724] = sym_translated_string;
	v->a[95725] = sym_number;
	v->a[95726] = sym_simple_expansion;
	v->a[95727] = sym_expansion;
	v->a[95728] = sym_command_substitution;
	v->a[95729] = sym_process_substitution;
	v->a[95730] = 26;
	v->a[95731] = actions(71);
	v->a[95732] = 1;
	v->a[95733] = sym_comment;
	v->a[95734] = actions(363);
	v->a[95735] = 1;
	v->a[95736] = anon_sym_DOLLAR_LBRACK;
	v->a[95737] = actions(367);
	v->a[95738] = 1;
	v->a[95739] = anon_sym_DOLLAR;
	small_parse_table_4787(v);
}

void	small_parse_table_4787(t_small_parse_table_array *v)
{
	v->a[95740] = actions(371);
	v->a[95741] = 1;
	v->a[95742] = anon_sym_DQUOTE;
	v->a[95743] = actions(375);
	v->a[95744] = 1;
	v->a[95745] = aux_sym_number_token1;
	v->a[95746] = actions(377);
	v->a[95747] = 1;
	v->a[95748] = aux_sym_number_token2;
	v->a[95749] = actions(379);
	v->a[95750] = 1;
	v->a[95751] = anon_sym_DOLLAR_LBRACE;
	v->a[95752] = actions(381);
	v->a[95753] = 1;
	v->a[95754] = anon_sym_DOLLAR_LPAREN;
	v->a[95755] = actions(385);
	v->a[95756] = 1;
	v->a[95757] = anon_sym_DOLLAR_BQUOTE;
	v->a[95758] = actions(391);
	v->a[95759] = 1;
	small_parse_table_4788(v);
}

void	small_parse_table_4788(t_small_parse_table_array *v)
{
	v->a[95760] = sym__brace_start;
	v->a[95761] = actions(1091);
	v->a[95762] = 1;
	v->a[95763] = sym_word;
	v->a[95764] = actions(1093);
	v->a[95765] = 1;
	v->a[95766] = anon_sym_LPAREN;
	v->a[95767] = actions(1095);
	v->a[95768] = 1;
	v->a[95769] = anon_sym_BANG;
	v->a[95770] = actions(1103);
	v->a[95771] = 1;
	v->a[95772] = anon_sym_TILDE;
	v->a[95773] = actions(1113);
	v->a[95774] = 1;
	v->a[95775] = sym_test_operator;
	v->a[95776] = actions(5809);
	v->a[95777] = 1;
	v->a[95778] = anon_sym_BQUOTE;
	v->a[95779] = actions(5916);
	small_parse_table_4789(v);
}

void	small_parse_table_4789(t_small_parse_table_array *v)
{
	v->a[95780] = 1;
	v->a[95781] = sym__special_character;
	v->a[95782] = state(2472);
	v->a[95783] = 1;
	v->a[95784] = aux_sym__literal_repeat1;
	v->a[95785] = state(2924);
	v->a[95786] = 1;
	v->a[95787] = sym__expression;
	v->a[95788] = actions(352);
	v->a[95789] = 2;
	v->a[95790] = anon_sym_LPAREN_LPAREN;
	v->a[95791] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95792] = actions(387);
	v->a[95793] = 2;
	v->a[95794] = anon_sym_LT_LPAREN;
	v->a[95795] = anon_sym_GT_LPAREN;
	v->a[95796] = actions(1099);
	v->a[95797] = 2;
	v->a[95798] = anon_sym_PLUS_PLUS2;
	v->a[95799] = anon_sym_DASH_DASH2;
	small_parse_table_4790(v);
}

/* EOF small_parse_table_957.c */
