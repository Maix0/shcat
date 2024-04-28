/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_851.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4255(t_small_parse_table_array *v)
{
	v->a[85100] = actions(1101);
	v->a[85101] = 2;
	v->a[85102] = anon_sym_DASH2;
	v->a[85103] = anon_sym_PLUS2;
	v->a[85104] = actions(1109);
	v->a[85105] = 2;
	v->a[85106] = sym_raw_string;
	v->a[85107] = sym_ansi_c_string;
	v->a[85108] = state(2863);
	v->a[85109] = 6;
	v->a[85110] = sym_binary_expression;
	v->a[85111] = sym_ternary_expression;
	v->a[85112] = sym_unary_expression;
	v->a[85113] = sym_postfix_expression;
	v->a[85114] = sym_parenthesized_expression;
	v->a[85115] = sym_concatenation;
	v->a[85116] = state(2451);
	v->a[85117] = 9;
	v->a[85118] = sym_arithmetic_expansion;
	v->a[85119] = sym_brace_expression;
	small_parse_table_4256(v);
}

void	small_parse_table_4256(t_small_parse_table_array *v)
{
	v->a[85120] = sym_string;
	v->a[85121] = sym_translated_string;
	v->a[85122] = sym_number;
	v->a[85123] = sym_simple_expansion;
	v->a[85124] = sym_expansion;
	v->a[85125] = sym_command_substitution;
	v->a[85126] = sym_process_substitution;
	v->a[85127] = 6;
	v->a[85128] = actions(3);
	v->a[85129] = 1;
	v->a[85130] = sym_comment;
	v->a[85131] = actions(5920);
	v->a[85132] = 1;
	v->a[85133] = aux_sym_concatenation_token1;
	v->a[85134] = actions(5979);
	v->a[85135] = 1;
	v->a[85136] = sym__concat;
	v->a[85137] = state(1704);
	v->a[85138] = 1;
	v->a[85139] = aux_sym_concatenation_repeat1;
	small_parse_table_4257(v);
}

void	small_parse_table_4257(t_small_parse_table_array *v)
{
	v->a[85140] = actions(1267);
	v->a[85141] = 4;
	v->a[85142] = sym_file_descriptor;
	v->a[85143] = sym_test_operator;
	v->a[85144] = sym__brace_start;
	v->a[85145] = aux_sym_heredoc_redirect_token1;
	v->a[85146] = actions(1265);
	v->a[85147] = 37;
	v->a[85148] = anon_sym_LPAREN_LPAREN;
	v->a[85149] = anon_sym_SEMI;
	v->a[85150] = anon_sym_PIPE_PIPE;
	v->a[85151] = anon_sym_AMP_AMP;
	v->a[85152] = anon_sym_PIPE;
	v->a[85153] = anon_sym_AMP;
	v->a[85154] = anon_sym_LT;
	v->a[85155] = anon_sym_GT;
	v->a[85156] = anon_sym_LT_LT;
	v->a[85157] = anon_sym_GT_GT;
	v->a[85158] = anon_sym_SEMI_SEMI;
	v->a[85159] = anon_sym_PIPE_AMP;
	small_parse_table_4258(v);
}

void	small_parse_table_4258(t_small_parse_table_array *v)
{
	v->a[85160] = anon_sym_AMP_GT;
	v->a[85161] = anon_sym_AMP_GT_GT;
	v->a[85162] = anon_sym_LT_AMP;
	v->a[85163] = anon_sym_GT_AMP;
	v->a[85164] = anon_sym_GT_PIPE;
	v->a[85165] = anon_sym_LT_AMP_DASH;
	v->a[85166] = anon_sym_GT_AMP_DASH;
	v->a[85167] = anon_sym_LT_LT_DASH;
	v->a[85168] = anon_sym_LT_LT_LT;
	v->a[85169] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85170] = anon_sym_DOLLAR_LBRACK;
	v->a[85171] = anon_sym_DOLLAR;
	v->a[85172] = sym__special_character;
	v->a[85173] = anon_sym_DQUOTE;
	v->a[85174] = sym_raw_string;
	v->a[85175] = sym_ansi_c_string;
	v->a[85176] = aux_sym_number_token1;
	v->a[85177] = aux_sym_number_token2;
	v->a[85178] = anon_sym_DOLLAR_LBRACE;
	v->a[85179] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4259(v);
}

void	small_parse_table_4259(t_small_parse_table_array *v)
{
	v->a[85180] = anon_sym_BQUOTE;
	v->a[85181] = anon_sym_DOLLAR_BQUOTE;
	v->a[85182] = anon_sym_LT_LPAREN;
	v->a[85183] = anon_sym_GT_LPAREN;
	v->a[85184] = sym_word;
	v->a[85185] = 6;
	v->a[85186] = actions(3);
	v->a[85187] = 1;
	v->a[85188] = sym_comment;
	v->a[85189] = actions(5920);
	v->a[85190] = 1;
	v->a[85191] = aux_sym_concatenation_token1;
	v->a[85192] = actions(5981);
	v->a[85193] = 1;
	v->a[85194] = sym__concat;
	v->a[85195] = state(1704);
	v->a[85196] = 1;
	v->a[85197] = aux_sym_concatenation_repeat1;
	v->a[85198] = actions(1288);
	v->a[85199] = 4;
	small_parse_table_4260(v);
}

/* EOF small_parse_table_851.c */
