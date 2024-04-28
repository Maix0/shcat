/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_968.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4840(t_small_parse_table_array *v)
{
	v->a[96800] = anon_sym_DOLLAR_LBRACK;
	v->a[96801] = actions(367);
	v->a[96802] = 1;
	v->a[96803] = anon_sym_DOLLAR;
	v->a[96804] = actions(371);
	v->a[96805] = 1;
	v->a[96806] = anon_sym_DQUOTE;
	v->a[96807] = actions(375);
	v->a[96808] = 1;
	v->a[96809] = aux_sym_number_token1;
	v->a[96810] = actions(377);
	v->a[96811] = 1;
	v->a[96812] = aux_sym_number_token2;
	v->a[96813] = actions(379);
	v->a[96814] = 1;
	v->a[96815] = anon_sym_DOLLAR_LBRACE;
	v->a[96816] = actions(381);
	v->a[96817] = 1;
	v->a[96818] = anon_sym_DOLLAR_LPAREN;
	v->a[96819] = actions(385);
	small_parse_table_4841(v);
}

void	small_parse_table_4841(t_small_parse_table_array *v)
{
	v->a[96820] = 1;
	v->a[96821] = anon_sym_DOLLAR_BQUOTE;
	v->a[96822] = actions(391);
	v->a[96823] = 1;
	v->a[96824] = sym__brace_start;
	v->a[96825] = actions(1091);
	v->a[96826] = 1;
	v->a[96827] = sym_word;
	v->a[96828] = actions(1093);
	v->a[96829] = 1;
	v->a[96830] = anon_sym_LPAREN;
	v->a[96831] = actions(1095);
	v->a[96832] = 1;
	v->a[96833] = anon_sym_BANG;
	v->a[96834] = actions(1103);
	v->a[96835] = 1;
	v->a[96836] = anon_sym_TILDE;
	v->a[96837] = actions(1113);
	v->a[96838] = 1;
	v->a[96839] = sym_test_operator;
	small_parse_table_4842(v);
}

void	small_parse_table_4842(t_small_parse_table_array *v)
{
	v->a[96840] = actions(5809);
	v->a[96841] = 1;
	v->a[96842] = anon_sym_BQUOTE;
	v->a[96843] = actions(5916);
	v->a[96844] = 1;
	v->a[96845] = sym__special_character;
	v->a[96846] = state(2472);
	v->a[96847] = 1;
	v->a[96848] = aux_sym__literal_repeat1;
	v->a[96849] = state(2738);
	v->a[96850] = 1;
	v->a[96851] = sym__expression;
	v->a[96852] = actions(352);
	v->a[96853] = 2;
	v->a[96854] = anon_sym_LPAREN_LPAREN;
	v->a[96855] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96856] = actions(387);
	v->a[96857] = 2;
	v->a[96858] = anon_sym_LT_LPAREN;
	v->a[96859] = anon_sym_GT_LPAREN;
	small_parse_table_4843(v);
}

void	small_parse_table_4843(t_small_parse_table_array *v)
{
	v->a[96860] = actions(1099);
	v->a[96861] = 2;
	v->a[96862] = anon_sym_PLUS_PLUS2;
	v->a[96863] = anon_sym_DASH_DASH2;
	v->a[96864] = actions(1101);
	v->a[96865] = 2;
	v->a[96866] = anon_sym_DASH2;
	v->a[96867] = anon_sym_PLUS2;
	v->a[96868] = actions(1109);
	v->a[96869] = 2;
	v->a[96870] = sym_raw_string;
	v->a[96871] = sym_ansi_c_string;
	v->a[96872] = state(2863);
	v->a[96873] = 6;
	v->a[96874] = sym_binary_expression;
	v->a[96875] = sym_ternary_expression;
	v->a[96876] = sym_unary_expression;
	v->a[96877] = sym_postfix_expression;
	v->a[96878] = sym_parenthesized_expression;
	v->a[96879] = sym_concatenation;
	small_parse_table_4844(v);
}

void	small_parse_table_4844(t_small_parse_table_array *v)
{
	v->a[96880] = state(2451);
	v->a[96881] = 9;
	v->a[96882] = sym_arithmetic_expansion;
	v->a[96883] = sym_brace_expression;
	v->a[96884] = sym_string;
	v->a[96885] = sym_translated_string;
	v->a[96886] = sym_number;
	v->a[96887] = sym_simple_expansion;
	v->a[96888] = sym_expansion;
	v->a[96889] = sym_command_substitution;
	v->a[96890] = sym_process_substitution;
	v->a[96891] = 6;
	v->a[96892] = actions(3);
	v->a[96893] = 1;
	v->a[96894] = sym_comment;
	v->a[96895] = actions(6013);
	v->a[96896] = 1;
	v->a[96897] = aux_sym_concatenation_token1;
	v->a[96898] = actions(6015);
	v->a[96899] = 1;
	small_parse_table_4845(v);
}

/* EOF small_parse_table_968.c */
