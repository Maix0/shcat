/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1038.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5190(t_small_parse_table_array *v)
{
	v->a[103800] = 26;
	v->a[103801] = actions(71);
	v->a[103802] = 1;
	v->a[103803] = sym_comment;
	v->a[103804] = actions(1131);
	v->a[103805] = 1;
	v->a[103806] = anon_sym_LPAREN;
	v->a[103807] = actions(1141);
	v->a[103808] = 1;
	v->a[103809] = anon_sym_DOLLAR_LBRACK;
	v->a[103810] = actions(1145);
	v->a[103811] = 1;
	v->a[103812] = anon_sym_DOLLAR;
	v->a[103813] = actions(1149);
	v->a[103814] = 1;
	v->a[103815] = anon_sym_DQUOTE;
	v->a[103816] = actions(1153);
	v->a[103817] = 1;
	v->a[103818] = aux_sym_number_token1;
	v->a[103819] = actions(1155);
	small_parse_table_5191(v);
}

void	small_parse_table_5191(t_small_parse_table_array *v)
{
	v->a[103820] = 1;
	v->a[103821] = aux_sym_number_token2;
	v->a[103822] = actions(1157);
	v->a[103823] = 1;
	v->a[103824] = anon_sym_DOLLAR_LBRACE;
	v->a[103825] = actions(1159);
	v->a[103826] = 1;
	v->a[103827] = anon_sym_DOLLAR_LPAREN;
	v->a[103828] = actions(1163);
	v->a[103829] = 1;
	v->a[103830] = anon_sym_DOLLAR_BQUOTE;
	v->a[103831] = actions(1169);
	v->a[103832] = 1;
	v->a[103833] = sym__brace_start;
	v->a[103834] = actions(1171);
	v->a[103835] = 1;
	v->a[103836] = sym_word;
	v->a[103837] = actions(1173);
	v->a[103838] = 1;
	v->a[103839] = anon_sym_BANG;
	small_parse_table_5192(v);
}

void	small_parse_table_5192(t_small_parse_table_array *v)
{
	v->a[103840] = actions(1179);
	v->a[103841] = 1;
	v->a[103842] = anon_sym_TILDE;
	v->a[103843] = actions(1181);
	v->a[103844] = 1;
	v->a[103845] = sym__special_character;
	v->a[103846] = actions(1185);
	v->a[103847] = 1;
	v->a[103848] = sym_test_operator;
	v->a[103849] = actions(3060);
	v->a[103850] = 1;
	v->a[103851] = anon_sym_BQUOTE;
	v->a[103852] = state(2484);
	v->a[103853] = 1;
	v->a[103854] = aux_sym__literal_repeat1;
	v->a[103855] = state(3068);
	v->a[103856] = 1;
	v->a[103857] = sym__expression;
	v->a[103858] = actions(1129);
	v->a[103859] = 2;
	small_parse_table_5193(v);
}

void	small_parse_table_5193(t_small_parse_table_array *v)
{
	v->a[103860] = anon_sym_LPAREN_LPAREN;
	v->a[103861] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[103862] = actions(1165);
	v->a[103863] = 2;
	v->a[103864] = anon_sym_LT_LPAREN;
	v->a[103865] = anon_sym_GT_LPAREN;
	v->a[103866] = actions(1175);
	v->a[103867] = 2;
	v->a[103868] = anon_sym_PLUS_PLUS2;
	v->a[103869] = anon_sym_DASH_DASH2;
	v->a[103870] = actions(1177);
	v->a[103871] = 2;
	v->a[103872] = anon_sym_DASH2;
	v->a[103873] = anon_sym_PLUS2;
	v->a[103874] = actions(1183);
	v->a[103875] = 2;
	v->a[103876] = sym_raw_string;
	v->a[103877] = sym_ansi_c_string;
	v->a[103878] = state(2594);
	v->a[103879] = 6;
	small_parse_table_5194(v);
}

void	small_parse_table_5194(t_small_parse_table_array *v)
{
	v->a[103880] = sym_binary_expression;
	v->a[103881] = sym_ternary_expression;
	v->a[103882] = sym_unary_expression;
	v->a[103883] = sym_postfix_expression;
	v->a[103884] = sym_parenthesized_expression;
	v->a[103885] = sym_concatenation;
	v->a[103886] = state(2456);
	v->a[103887] = 9;
	v->a[103888] = sym_arithmetic_expansion;
	v->a[103889] = sym_brace_expression;
	v->a[103890] = sym_string;
	v->a[103891] = sym_translated_string;
	v->a[103892] = sym_number;
	v->a[103893] = sym_simple_expansion;
	v->a[103894] = sym_expansion;
	v->a[103895] = sym_command_substitution;
	v->a[103896] = sym_process_substitution;
	v->a[103897] = 26;
	v->a[103898] = actions(71);
	v->a[103899] = 1;
	small_parse_table_5195(v);
}

/* EOF small_parse_table_1038.c */
