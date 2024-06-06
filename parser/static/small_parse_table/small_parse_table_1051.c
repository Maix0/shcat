/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1051.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5255(t_small_parse_table_array *v)
{
	v->a[105100] = actions(6022);
	v->a[105101] = 1;
	v->a[105102] = anon_sym_DOLLAR_LBRACE;
	v->a[105103] = actions(6024);
	v->a[105104] = 1;
	v->a[105105] = anon_sym_BQUOTE;
	v->a[105106] = actions(6026);
	v->a[105107] = 1;
	v->a[105108] = anon_sym_DOLLAR_BQUOTE;
	v->a[105109] = state(1824);
	v->a[105110] = 1;
	v->a[105111] = aux_sym__literal_repeat1;
	v->a[105112] = actions(3738);
	v->a[105113] = 2;
	v->a[105114] = sym_test_operator;
	v->a[105115] = sym_raw_string;
	v->a[105116] = state(1163);
	v->a[105117] = 2;
	v->a[105118] = sym_concatenation;
	v->a[105119] = aux_sym_for_statement_repeat1;
	small_parse_table_5256(v);
}

void	small_parse_table_5256(t_small_parse_table_array *v)
{
	v->a[105120] = state(1685);
	v->a[105121] = 7;
	v->a[105122] = sym_arithmetic_expansion;
	v->a[105123] = sym_brace_expression;
	v->a[105124] = sym_string;
	v->a[105125] = sym_number;
	v->a[105126] = sym_simple_expansion;
	v->a[105127] = sym_expansion;
	v->a[105128] = sym_command_substitution;
	v->a[105129] = 17;
	v->a[105130] = actions(57);
	v->a[105131] = 1;
	v->a[105132] = sym_comment;
	v->a[105133] = actions(5483);
	v->a[105134] = 1;
	v->a[105135] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105136] = actions(5485);
	v->a[105137] = 1;
	v->a[105138] = anon_sym_DOLLAR;
	v->a[105139] = actions(5487);
	small_parse_table_5257(v);
}

void	small_parse_table_5257(t_small_parse_table_array *v)
{
	v->a[105140] = 1;
	v->a[105141] = sym__special_character;
	v->a[105142] = actions(5489);
	v->a[105143] = 1;
	v->a[105144] = anon_sym_DQUOTE;
	v->a[105145] = actions(5493);
	v->a[105146] = 1;
	v->a[105147] = aux_sym_number_token1;
	v->a[105148] = actions(5495);
	v->a[105149] = 1;
	v->a[105150] = aux_sym_number_token2;
	v->a[105151] = actions(5497);
	v->a[105152] = 1;
	v->a[105153] = anon_sym_DOLLAR_LBRACE;
	v->a[105154] = actions(5499);
	v->a[105155] = 1;
	v->a[105156] = anon_sym_DOLLAR_LPAREN;
	v->a[105157] = actions(5501);
	v->a[105158] = 1;
	v->a[105159] = anon_sym_BQUOTE;
	small_parse_table_5258(v);
}

void	small_parse_table_5258(t_small_parse_table_array *v)
{
	v->a[105160] = actions(5503);
	v->a[105161] = 1;
	v->a[105162] = anon_sym_DOLLAR_BQUOTE;
	v->a[105163] = actions(5509);
	v->a[105164] = 1;
	v->a[105165] = sym__brace_start;
	v->a[105166] = actions(6037);
	v->a[105167] = 1;
	v->a[105168] = sym_word;
	v->a[105169] = state(1920);
	v->a[105170] = 1;
	v->a[105171] = aux_sym__literal_repeat1;
	v->a[105172] = actions(6039);
	v->a[105173] = 2;
	v->a[105174] = sym_test_operator;
	v->a[105175] = sym_raw_string;
	v->a[105176] = state(1335);
	v->a[105177] = 2;
	v->a[105178] = sym_concatenation;
	v->a[105179] = aux_sym_for_statement_repeat1;
	small_parse_table_5259(v);
}

void	small_parse_table_5259(t_small_parse_table_array *v)
{
	v->a[105180] = state(1800);
	v->a[105181] = 7;
	v->a[105182] = sym_arithmetic_expansion;
	v->a[105183] = sym_brace_expression;
	v->a[105184] = sym_string;
	v->a[105185] = sym_number;
	v->a[105186] = sym_simple_expansion;
	v->a[105187] = sym_expansion;
	v->a[105188] = sym_command_substitution;
	v->a[105189] = 3;
	v->a[105190] = actions(3);
	v->a[105191] = 1;
	v->a[105192] = sym_comment;
	v->a[105193] = actions(6049);
	v->a[105194] = 2;
	v->a[105195] = sym_file_descriptor;
	v->a[105196] = aux_sym_heredoc_redirect_token1;
	v->a[105197] = actions(6047);
	v->a[105198] = 22;
	v->a[105199] = anon_sym_esac;
	small_parse_table_5260(v);
}

/* EOF small_parse_table_1051.c */
