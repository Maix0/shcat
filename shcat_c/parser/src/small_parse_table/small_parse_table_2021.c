/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2021.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10105(t_small_parse_table_array *v)
{
	v->a[202100] = 1;
	v->a[202101] = anon_sym_DOLLAR_LBRACK;
	v->a[202102] = actions(4949);
	v->a[202103] = 1;
	v->a[202104] = anon_sym_DOLLAR;
	v->a[202105] = actions(4953);
	v->a[202106] = 1;
	v->a[202107] = anon_sym_DQUOTE;
	v->a[202108] = actions(4957);
	v->a[202109] = 1;
	v->a[202110] = aux_sym_number_token1;
	v->a[202111] = actions(4959);
	v->a[202112] = 1;
	v->a[202113] = aux_sym_number_token2;
	v->a[202114] = actions(4961);
	v->a[202115] = 1;
	v->a[202116] = anon_sym_DOLLAR_LBRACE;
	v->a[202117] = actions(4963);
	v->a[202118] = 1;
	v->a[202119] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_10106(v);
}

void	small_parse_table_10106(t_small_parse_table_array *v)
{
	v->a[202120] = actions(4965);
	v->a[202121] = 1;
	v->a[202122] = anon_sym_BQUOTE;
	v->a[202123] = actions(4967);
	v->a[202124] = 1;
	v->a[202125] = anon_sym_DOLLAR_BQUOTE;
	v->a[202126] = actions(4971);
	v->a[202127] = 1;
	v->a[202128] = sym_test_operator;
	v->a[202129] = actions(4973);
	v->a[202130] = 1;
	v->a[202131] = sym__brace_start;
	v->a[202132] = actions(9192);
	v->a[202133] = 1;
	v->a[202134] = sym__special_character;
	v->a[202135] = state(2776);
	v->a[202136] = 1;
	v->a[202137] = aux_sym__literal_repeat1;
	v->a[202138] = actions(4945);
	v->a[202139] = 2;
	small_parse_table_10107(v);
}

void	small_parse_table_10107(t_small_parse_table_array *v)
{
	v->a[202140] = anon_sym_LPAREN_LPAREN;
	v->a[202141] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[202142] = actions(4955);
	v->a[202143] = 2;
	v->a[202144] = sym_raw_string;
	v->a[202145] = sym_ansi_c_string;
	v->a[202146] = actions(4969);
	v->a[202147] = 2;
	v->a[202148] = anon_sym_LT_LPAREN;
	v->a[202149] = anon_sym_GT_LPAREN;
	v->a[202150] = state(981);
	v->a[202151] = 2;
	v->a[202152] = sym_concatenation;
	v->a[202153] = aux_sym_for_statement_repeat1;
	v->a[202154] = state(2489);
	v->a[202155] = 9;
	v->a[202156] = sym_arithmetic_expansion;
	v->a[202157] = sym_brace_expression;
	v->a[202158] = sym_string;
	v->a[202159] = sym_translated_string;
	small_parse_table_10108(v);
}

void	small_parse_table_10108(t_small_parse_table_array *v)
{
	v->a[202160] = sym_number;
	v->a[202161] = sym_simple_expansion;
	v->a[202162] = sym_expansion;
	v->a[202163] = sym_command_substitution;
	v->a[202164] = sym_process_substitution;
	v->a[202165] = 20;
	v->a[202166] = actions(71);
	v->a[202167] = 1;
	v->a[202168] = sym_comment;
	v->a[202169] = actions(8474);
	v->a[202170] = 1;
	v->a[202171] = anon_sym_DOLLAR_LBRACK;
	v->a[202172] = actions(8476);
	v->a[202173] = 1;
	v->a[202174] = anon_sym_DOLLAR;
	v->a[202175] = actions(8478);
	v->a[202176] = 1;
	v->a[202177] = sym__special_character;
	v->a[202178] = actions(8480);
	v->a[202179] = 1;
	small_parse_table_10109(v);
}

void	small_parse_table_10109(t_small_parse_table_array *v)
{
	v->a[202180] = anon_sym_DQUOTE;
	v->a[202181] = actions(8484);
	v->a[202182] = 1;
	v->a[202183] = aux_sym_number_token1;
	v->a[202184] = actions(8486);
	v->a[202185] = 1;
	v->a[202186] = aux_sym_number_token2;
	v->a[202187] = actions(8488);
	v->a[202188] = 1;
	v->a[202189] = anon_sym_DOLLAR_LBRACE;
	v->a[202190] = actions(8490);
	v->a[202191] = 1;
	v->a[202192] = anon_sym_DOLLAR_LPAREN;
	v->a[202193] = actions(8492);
	v->a[202194] = 1;
	v->a[202195] = anon_sym_BQUOTE;
	v->a[202196] = actions(8494);
	v->a[202197] = 1;
	v->a[202198] = anon_sym_DOLLAR_BQUOTE;
	v->a[202199] = actions(8504);
	small_parse_table_10110(v);
}

/* EOF small_parse_table_2021.c */
