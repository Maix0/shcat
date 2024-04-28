/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_877.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4385(t_small_parse_table_array *v)
{
	v->a[87700] = actions(1155);
	v->a[87701] = 1;
	v->a[87702] = aux_sym_number_token2;
	v->a[87703] = actions(1157);
	v->a[87704] = 1;
	v->a[87705] = anon_sym_DOLLAR_LBRACE;
	v->a[87706] = actions(1159);
	v->a[87707] = 1;
	v->a[87708] = anon_sym_DOLLAR_LPAREN;
	v->a[87709] = actions(1163);
	v->a[87710] = 1;
	v->a[87711] = anon_sym_DOLLAR_BQUOTE;
	v->a[87712] = actions(1169);
	v->a[87713] = 1;
	v->a[87714] = sym__brace_start;
	v->a[87715] = actions(1187);
	v->a[87716] = 1;
	v->a[87717] = sym_word;
	v->a[87718] = actions(1189);
	v->a[87719] = 1;
	small_parse_table_4386(v);
}

void	small_parse_table_4386(t_small_parse_table_array *v)
{
	v->a[87720] = anon_sym_BANG;
	v->a[87721] = actions(1195);
	v->a[87722] = 1;
	v->a[87723] = anon_sym_TILDE;
	v->a[87724] = actions(1201);
	v->a[87725] = 1;
	v->a[87726] = sym_test_operator;
	v->a[87727] = actions(3060);
	v->a[87728] = 1;
	v->a[87729] = anon_sym_BQUOTE;
	v->a[87730] = actions(5779);
	v->a[87731] = 1;
	v->a[87732] = sym__special_character;
	v->a[87733] = state(2717);
	v->a[87734] = 1;
	v->a[87735] = aux_sym__literal_repeat1;
	v->a[87736] = state(3125);
	v->a[87737] = 1;
	v->a[87738] = sym__expression;
	v->a[87739] = state(7188);
	small_parse_table_4387(v);
}

void	small_parse_table_4387(t_small_parse_table_array *v)
{
	v->a[87740] = 1;
	v->a[87741] = sym__test_command_binary_expression;
	v->a[87742] = actions(1129);
	v->a[87743] = 2;
	v->a[87744] = anon_sym_LPAREN_LPAREN;
	v->a[87745] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87746] = actions(1165);
	v->a[87747] = 2;
	v->a[87748] = anon_sym_LT_LPAREN;
	v->a[87749] = anon_sym_GT_LPAREN;
	v->a[87750] = actions(1191);
	v->a[87751] = 2;
	v->a[87752] = anon_sym_PLUS_PLUS2;
	v->a[87753] = anon_sym_DASH_DASH2;
	v->a[87754] = actions(1193);
	v->a[87755] = 2;
	v->a[87756] = anon_sym_DASH2;
	v->a[87757] = anon_sym_PLUS2;
	v->a[87758] = actions(1199);
	v->a[87759] = 2;
	small_parse_table_4388(v);
}

void	small_parse_table_4388(t_small_parse_table_array *v)
{
	v->a[87760] = sym_raw_string;
	v->a[87761] = sym_ansi_c_string;
	v->a[87762] = state(2594);
	v->a[87763] = 6;
	v->a[87764] = sym_binary_expression;
	v->a[87765] = sym_ternary_expression;
	v->a[87766] = sym_unary_expression;
	v->a[87767] = sym_postfix_expression;
	v->a[87768] = sym_parenthesized_expression;
	v->a[87769] = sym_concatenation;
	v->a[87770] = state(2503);
	v->a[87771] = 9;
	v->a[87772] = sym_arithmetic_expansion;
	v->a[87773] = sym_brace_expression;
	v->a[87774] = sym_string;
	v->a[87775] = sym_translated_string;
	v->a[87776] = sym_number;
	v->a[87777] = sym_simple_expansion;
	v->a[87778] = sym_expansion;
	v->a[87779] = sym_command_substitution;
	small_parse_table_4389(v);
}

void	small_parse_table_4389(t_small_parse_table_array *v)
{
	v->a[87780] = sym_process_substitution;
	v->a[87781] = 3;
	v->a[87782] = actions(3);
	v->a[87783] = 1;
	v->a[87784] = sym_comment;
	v->a[87785] = actions(1350);
	v->a[87786] = 5;
	v->a[87787] = sym_file_descriptor;
	v->a[87788] = sym__concat;
	v->a[87789] = sym_test_operator;
	v->a[87790] = sym__brace_start;
	v->a[87791] = aux_sym_heredoc_redirect_token1;
	v->a[87792] = actions(1348);
	v->a[87793] = 39;
	v->a[87794] = anon_sym_LPAREN_LPAREN;
	v->a[87795] = anon_sym_SEMI;
	v->a[87796] = anon_sym_PIPE_PIPE;
	v->a[87797] = anon_sym_AMP_AMP;
	v->a[87798] = anon_sym_PIPE;
	v->a[87799] = anon_sym_AMP;
	small_parse_table_4390(v);
}

/* EOF small_parse_table_877.c */
