/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2011.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10055(t_small_parse_table_array *v)
{
	v->a[201100] = anon_sym_BQUOTE;
	v->a[201101] = actions(8016);
	v->a[201102] = 1;
	v->a[201103] = anon_sym_DOLLAR_BQUOTE;
	v->a[201104] = actions(8026);
	v->a[201105] = 1;
	v->a[201106] = sym__brace_start;
	v->a[201107] = actions(9180);
	v->a[201108] = 1;
	v->a[201109] = sym_word;
	v->a[201110] = actions(9184);
	v->a[201111] = 1;
	v->a[201112] = sym_test_operator;
	v->a[201113] = state(3543);
	v->a[201114] = 1;
	v->a[201115] = aux_sym__literal_repeat1;
	v->a[201116] = actions(7992);
	v->a[201117] = 2;
	v->a[201118] = anon_sym_LPAREN_LPAREN;
	v->a[201119] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_10056(v);
}

void	small_parse_table_10056(t_small_parse_table_array *v)
{
	v->a[201120] = actions(8018);
	v->a[201121] = 2;
	v->a[201122] = anon_sym_LT_LPAREN;
	v->a[201123] = anon_sym_GT_LPAREN;
	v->a[201124] = actions(9182);
	v->a[201125] = 2;
	v->a[201126] = sym_raw_string;
	v->a[201127] = sym_ansi_c_string;
	v->a[201128] = state(1831);
	v->a[201129] = 2;
	v->a[201130] = sym_concatenation;
	v->a[201131] = aux_sym_for_statement_repeat1;
	v->a[201132] = state(3480);
	v->a[201133] = 9;
	v->a[201134] = sym_arithmetic_expansion;
	v->a[201135] = sym_brace_expression;
	v->a[201136] = sym_string;
	v->a[201137] = sym_translated_string;
	v->a[201138] = sym_number;
	v->a[201139] = sym_simple_expansion;
	small_parse_table_10057(v);
}

void	small_parse_table_10057(t_small_parse_table_array *v)
{
	v->a[201140] = sym_expansion;
	v->a[201141] = sym_command_substitution;
	v->a[201142] = sym_process_substitution;
	v->a[201143] = 20;
	v->a[201144] = actions(71);
	v->a[201145] = 1;
	v->a[201146] = sym_comment;
	v->a[201147] = actions(3731);
	v->a[201148] = 1;
	v->a[201149] = anon_sym_DOLLAR;
	v->a[201150] = actions(3737);
	v->a[201151] = 1;
	v->a[201152] = aux_sym_number_token1;
	v->a[201153] = actions(3739);
	v->a[201154] = 1;
	v->a[201155] = aux_sym_number_token2;
	v->a[201156] = actions(3743);
	v->a[201157] = 1;
	v->a[201158] = anon_sym_DOLLAR_LPAREN;
	v->a[201159] = actions(3755);
	small_parse_table_10058(v);
}

void	small_parse_table_10058(t_small_parse_table_array *v)
{
	v->a[201160] = 1;
	v->a[201161] = sym__brace_start;
	v->a[201162] = actions(7759);
	v->a[201163] = 1;
	v->a[201164] = sym_word;
	v->a[201165] = actions(7767);
	v->a[201166] = 1;
	v->a[201167] = sym_test_operator;
	v->a[201168] = actions(8820);
	v->a[201169] = 1;
	v->a[201170] = anon_sym_DOLLAR_LBRACK;
	v->a[201171] = actions(8822);
	v->a[201172] = 1;
	v->a[201173] = sym__special_character;
	v->a[201174] = actions(8824);
	v->a[201175] = 1;
	v->a[201176] = anon_sym_DQUOTE;
	v->a[201177] = actions(8828);
	v->a[201178] = 1;
	v->a[201179] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10059(v);
}

void	small_parse_table_10059(t_small_parse_table_array *v)
{
	v->a[201180] = actions(8830);
	v->a[201181] = 1;
	v->a[201182] = anon_sym_BQUOTE;
	v->a[201183] = actions(8832);
	v->a[201184] = 1;
	v->a[201185] = anon_sym_DOLLAR_BQUOTE;
	v->a[201186] = state(4975);
	v->a[201187] = 1;
	v->a[201188] = aux_sym__literal_repeat1;
	v->a[201189] = actions(8818);
	v->a[201190] = 2;
	v->a[201191] = anon_sym_LPAREN_LPAREN;
	v->a[201192] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[201193] = actions(8826);
	v->a[201194] = 2;
	v->a[201195] = sym_raw_string;
	v->a[201196] = sym_ansi_c_string;
	v->a[201197] = actions(8834);
	v->a[201198] = 2;
	v->a[201199] = anon_sym_LT_LPAREN;
	small_parse_table_10060(v);
}

/* EOF small_parse_table_2011.c */
