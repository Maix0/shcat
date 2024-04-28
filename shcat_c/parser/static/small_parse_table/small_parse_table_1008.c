/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1008.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5040(t_small_parse_table_array *v)
{
	v->a[100800] = actions(71);
	v->a[100801] = 1;
	v->a[100802] = sym_comment;
	v->a[100803] = actions(1131);
	v->a[100804] = 1;
	v->a[100805] = anon_sym_LPAREN;
	v->a[100806] = actions(1141);
	v->a[100807] = 1;
	v->a[100808] = anon_sym_DOLLAR_LBRACK;
	v->a[100809] = actions(1145);
	v->a[100810] = 1;
	v->a[100811] = anon_sym_DOLLAR;
	v->a[100812] = actions(1149);
	v->a[100813] = 1;
	v->a[100814] = anon_sym_DQUOTE;
	v->a[100815] = actions(1153);
	v->a[100816] = 1;
	v->a[100817] = aux_sym_number_token1;
	v->a[100818] = actions(1155);
	v->a[100819] = 1;
	small_parse_table_5041(v);
}

void	small_parse_table_5041(t_small_parse_table_array *v)
{
	v->a[100820] = aux_sym_number_token2;
	v->a[100821] = actions(1157);
	v->a[100822] = 1;
	v->a[100823] = anon_sym_DOLLAR_LBRACE;
	v->a[100824] = actions(1159);
	v->a[100825] = 1;
	v->a[100826] = anon_sym_DOLLAR_LPAREN;
	v->a[100827] = actions(1163);
	v->a[100828] = 1;
	v->a[100829] = anon_sym_DOLLAR_BQUOTE;
	v->a[100830] = actions(1169);
	v->a[100831] = 1;
	v->a[100832] = sym__brace_start;
	v->a[100833] = actions(1211);
	v->a[100834] = 1;
	v->a[100835] = sym_word;
	v->a[100836] = actions(1213);
	v->a[100837] = 1;
	v->a[100838] = anon_sym_BANG;
	v->a[100839] = actions(1219);
	small_parse_table_5042(v);
}

void	small_parse_table_5042(t_small_parse_table_array *v)
{
	v->a[100840] = 1;
	v->a[100841] = anon_sym_TILDE;
	v->a[100842] = actions(1221);
	v->a[100843] = 1;
	v->a[100844] = sym__special_character;
	v->a[100845] = actions(1225);
	v->a[100846] = 1;
	v->a[100847] = sym_test_operator;
	v->a[100848] = actions(3060);
	v->a[100849] = 1;
	v->a[100850] = anon_sym_BQUOTE;
	v->a[100851] = state(2484);
	v->a[100852] = 1;
	v->a[100853] = aux_sym__literal_repeat1;
	v->a[100854] = state(3347);
	v->a[100855] = 1;
	v->a[100856] = sym__expression;
	v->a[100857] = actions(1129);
	v->a[100858] = 2;
	v->a[100859] = anon_sym_LPAREN_LPAREN;
	small_parse_table_5043(v);
}

void	small_parse_table_5043(t_small_parse_table_array *v)
{
	v->a[100860] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100861] = actions(1165);
	v->a[100862] = 2;
	v->a[100863] = anon_sym_LT_LPAREN;
	v->a[100864] = anon_sym_GT_LPAREN;
	v->a[100865] = actions(1215);
	v->a[100866] = 2;
	v->a[100867] = anon_sym_PLUS_PLUS2;
	v->a[100868] = anon_sym_DASH_DASH2;
	v->a[100869] = actions(1217);
	v->a[100870] = 2;
	v->a[100871] = anon_sym_DASH2;
	v->a[100872] = anon_sym_PLUS2;
	v->a[100873] = actions(1223);
	v->a[100874] = 2;
	v->a[100875] = sym_raw_string;
	v->a[100876] = sym_ansi_c_string;
	v->a[100877] = state(2594);
	v->a[100878] = 6;
	v->a[100879] = sym_binary_expression;
	small_parse_table_5044(v);
}

void	small_parse_table_5044(t_small_parse_table_array *v)
{
	v->a[100880] = sym_ternary_expression;
	v->a[100881] = sym_unary_expression;
	v->a[100882] = sym_postfix_expression;
	v->a[100883] = sym_parenthesized_expression;
	v->a[100884] = sym_concatenation;
	v->a[100885] = state(2588);
	v->a[100886] = 9;
	v->a[100887] = sym_arithmetic_expansion;
	v->a[100888] = sym_brace_expression;
	v->a[100889] = sym_string;
	v->a[100890] = sym_translated_string;
	v->a[100891] = sym_number;
	v->a[100892] = sym_simple_expansion;
	v->a[100893] = sym_expansion;
	v->a[100894] = sym_command_substitution;
	v->a[100895] = sym_process_substitution;
	v->a[100896] = 7;
	v->a[100897] = actions(3);
	v->a[100898] = 1;
	v->a[100899] = sym_comment;
	small_parse_table_5045(v);
}

/* EOF small_parse_table_1008.c */
