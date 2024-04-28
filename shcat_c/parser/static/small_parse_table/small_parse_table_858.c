/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_858.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4290(t_small_parse_table_array *v)
{
	v->a[85800] = anon_sym_DOLLAR;
	v->a[85801] = actions(1149);
	v->a[85802] = 1;
	v->a[85803] = anon_sym_DQUOTE;
	v->a[85804] = actions(1153);
	v->a[85805] = 1;
	v->a[85806] = aux_sym_number_token1;
	v->a[85807] = actions(1155);
	v->a[85808] = 1;
	v->a[85809] = aux_sym_number_token2;
	v->a[85810] = actions(1157);
	v->a[85811] = 1;
	v->a[85812] = anon_sym_DOLLAR_LBRACE;
	v->a[85813] = actions(1159);
	v->a[85814] = 1;
	v->a[85815] = anon_sym_DOLLAR_LPAREN;
	v->a[85816] = actions(1163);
	v->a[85817] = 1;
	v->a[85818] = anon_sym_DOLLAR_BQUOTE;
	v->a[85819] = actions(1169);
	small_parse_table_4291(v);
}

void	small_parse_table_4291(t_small_parse_table_array *v)
{
	v->a[85820] = 1;
	v->a[85821] = sym__brace_start;
	v->a[85822] = actions(1171);
	v->a[85823] = 1;
	v->a[85824] = sym_word;
	v->a[85825] = actions(1173);
	v->a[85826] = 1;
	v->a[85827] = anon_sym_BANG;
	v->a[85828] = actions(1179);
	v->a[85829] = 1;
	v->a[85830] = anon_sym_TILDE;
	v->a[85831] = actions(1181);
	v->a[85832] = 1;
	v->a[85833] = sym__special_character;
	v->a[85834] = actions(1185);
	v->a[85835] = 1;
	v->a[85836] = sym_test_operator;
	v->a[85837] = actions(3060);
	v->a[85838] = 1;
	v->a[85839] = anon_sym_BQUOTE;
	small_parse_table_4292(v);
}

void	small_parse_table_4292(t_small_parse_table_array *v)
{
	v->a[85840] = state(2484);
	v->a[85841] = 1;
	v->a[85842] = aux_sym__literal_repeat1;
	v->a[85843] = state(3144);
	v->a[85844] = 1;
	v->a[85845] = sym__expression;
	v->a[85846] = actions(1129);
	v->a[85847] = 2;
	v->a[85848] = anon_sym_LPAREN_LPAREN;
	v->a[85849] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85850] = actions(1165);
	v->a[85851] = 2;
	v->a[85852] = anon_sym_LT_LPAREN;
	v->a[85853] = anon_sym_GT_LPAREN;
	v->a[85854] = actions(1175);
	v->a[85855] = 2;
	v->a[85856] = anon_sym_PLUS_PLUS2;
	v->a[85857] = anon_sym_DASH_DASH2;
	v->a[85858] = actions(1177);
	v->a[85859] = 2;
	small_parse_table_4293(v);
}

void	small_parse_table_4293(t_small_parse_table_array *v)
{
	v->a[85860] = anon_sym_DASH2;
	v->a[85861] = anon_sym_PLUS2;
	v->a[85862] = actions(1183);
	v->a[85863] = 2;
	v->a[85864] = sym_raw_string;
	v->a[85865] = sym_ansi_c_string;
	v->a[85866] = state(2594);
	v->a[85867] = 6;
	v->a[85868] = sym_binary_expression;
	v->a[85869] = sym_ternary_expression;
	v->a[85870] = sym_unary_expression;
	v->a[85871] = sym_postfix_expression;
	v->a[85872] = sym_parenthesized_expression;
	v->a[85873] = sym_concatenation;
	v->a[85874] = state(2456);
	v->a[85875] = 9;
	v->a[85876] = sym_arithmetic_expansion;
	v->a[85877] = sym_brace_expression;
	v->a[85878] = sym_string;
	v->a[85879] = sym_translated_string;
	small_parse_table_4294(v);
}

void	small_parse_table_4294(t_small_parse_table_array *v)
{
	v->a[85880] = sym_number;
	v->a[85881] = sym_simple_expansion;
	v->a[85882] = sym_expansion;
	v->a[85883] = sym_command_substitution;
	v->a[85884] = sym_process_substitution;
	v->a[85885] = 3;
	v->a[85886] = actions(3);
	v->a[85887] = 1;
	v->a[85888] = sym_comment;
	v->a[85889] = actions(1322);
	v->a[85890] = 5;
	v->a[85891] = sym_file_descriptor;
	v->a[85892] = sym__concat;
	v->a[85893] = sym_test_operator;
	v->a[85894] = sym__brace_start;
	v->a[85895] = aux_sym_heredoc_redirect_token1;
	v->a[85896] = actions(1320);
	v->a[85897] = 39;
	v->a[85898] = anon_sym_LPAREN_LPAREN;
	v->a[85899] = anon_sym_SEMI;
	small_parse_table_4295(v);
}

/* EOF small_parse_table_858.c */
