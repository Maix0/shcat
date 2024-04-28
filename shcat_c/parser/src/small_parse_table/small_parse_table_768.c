/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_768.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3840(t_small_parse_table_array *v)
{
	v->a[76800] = sym_comment;
	v->a[76801] = actions(1131);
	v->a[76802] = 1;
	v->a[76803] = anon_sym_LPAREN;
	v->a[76804] = actions(1141);
	v->a[76805] = 1;
	v->a[76806] = anon_sym_DOLLAR_LBRACK;
	v->a[76807] = actions(1145);
	v->a[76808] = 1;
	v->a[76809] = anon_sym_DOLLAR;
	v->a[76810] = actions(1149);
	v->a[76811] = 1;
	v->a[76812] = anon_sym_DQUOTE;
	v->a[76813] = actions(1153);
	v->a[76814] = 1;
	v->a[76815] = aux_sym_number_token1;
	v->a[76816] = actions(1155);
	v->a[76817] = 1;
	v->a[76818] = aux_sym_number_token2;
	v->a[76819] = actions(1157);
	small_parse_table_3841(v);
}

void	small_parse_table_3841(t_small_parse_table_array *v)
{
	v->a[76820] = 1;
	v->a[76821] = anon_sym_DOLLAR_LBRACE;
	v->a[76822] = actions(1159);
	v->a[76823] = 1;
	v->a[76824] = anon_sym_DOLLAR_LPAREN;
	v->a[76825] = actions(1163);
	v->a[76826] = 1;
	v->a[76827] = anon_sym_DOLLAR_BQUOTE;
	v->a[76828] = actions(1169);
	v->a[76829] = 1;
	v->a[76830] = sym__brace_start;
	v->a[76831] = actions(1211);
	v->a[76832] = 1;
	v->a[76833] = sym_word;
	v->a[76834] = actions(1213);
	v->a[76835] = 1;
	v->a[76836] = anon_sym_BANG;
	v->a[76837] = actions(1219);
	v->a[76838] = 1;
	v->a[76839] = anon_sym_TILDE;
	small_parse_table_3842(v);
}

void	small_parse_table_3842(t_small_parse_table_array *v)
{
	v->a[76840] = actions(1221);
	v->a[76841] = 1;
	v->a[76842] = sym__special_character;
	v->a[76843] = actions(1225);
	v->a[76844] = 1;
	v->a[76845] = sym_test_operator;
	v->a[76846] = actions(3060);
	v->a[76847] = 1;
	v->a[76848] = anon_sym_BQUOTE;
	v->a[76849] = actions(5781);
	v->a[76850] = 1;
	v->a[76851] = sym_extglob_pattern;
	v->a[76852] = state(2484);
	v->a[76853] = 1;
	v->a[76854] = aux_sym__literal_repeat1;
	v->a[76855] = state(2648);
	v->a[76856] = 1;
	v->a[76857] = sym__extglob_blob;
	v->a[76858] = state(3333);
	v->a[76859] = 1;
	small_parse_table_3843(v);
}

void	small_parse_table_3843(t_small_parse_table_array *v)
{
	v->a[76860] = sym__expression;
	v->a[76861] = actions(1129);
	v->a[76862] = 2;
	v->a[76863] = anon_sym_LPAREN_LPAREN;
	v->a[76864] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76865] = actions(1165);
	v->a[76866] = 2;
	v->a[76867] = anon_sym_LT_LPAREN;
	v->a[76868] = anon_sym_GT_LPAREN;
	v->a[76869] = actions(1215);
	v->a[76870] = 2;
	v->a[76871] = anon_sym_PLUS_PLUS2;
	v->a[76872] = anon_sym_DASH_DASH2;
	v->a[76873] = actions(1217);
	v->a[76874] = 2;
	v->a[76875] = anon_sym_DASH2;
	v->a[76876] = anon_sym_PLUS2;
	v->a[76877] = actions(1223);
	v->a[76878] = 2;
	v->a[76879] = sym_raw_string;
	small_parse_table_3844(v);
}

void	small_parse_table_3844(t_small_parse_table_array *v)
{
	v->a[76880] = sym_ansi_c_string;
	v->a[76881] = state(2594);
	v->a[76882] = 6;
	v->a[76883] = sym_binary_expression;
	v->a[76884] = sym_ternary_expression;
	v->a[76885] = sym_unary_expression;
	v->a[76886] = sym_postfix_expression;
	v->a[76887] = sym_parenthesized_expression;
	v->a[76888] = sym_concatenation;
	v->a[76889] = state(2588);
	v->a[76890] = 9;
	v->a[76891] = sym_arithmetic_expansion;
	v->a[76892] = sym_brace_expression;
	v->a[76893] = sym_string;
	v->a[76894] = sym_translated_string;
	v->a[76895] = sym_number;
	v->a[76896] = sym_simple_expansion;
	v->a[76897] = sym_expansion;
	v->a[76898] = sym_command_substitution;
	v->a[76899] = sym_process_substitution;
	small_parse_table_3845(v);
}

/* EOF small_parse_table_768.c */
