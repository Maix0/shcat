/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2282.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11410(t_small_parse_table_array *v)
{
	v->a[228200] = 1;
	v->a[228201] = sym__brace_start;
	v->a[228202] = actions(10236);
	v->a[228203] = 1;
	v->a[228204] = sym_word;
	v->a[228205] = actions(10242);
	v->a[228206] = 1;
	v->a[228207] = sym__comment_word;
	v->a[228208] = actions(10834);
	v->a[228209] = 1;
	v->a[228210] = anon_sym_DOLLAR;
	v->a[228211] = actions(5313);
	v->a[228212] = 2;
	v->a[228213] = anon_sym_LPAREN_LPAREN;
	v->a[228214] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[228215] = actions(5337);
	v->a[228216] = 2;
	v->a[228217] = anon_sym_LT_LPAREN;
	v->a[228218] = anon_sym_GT_LPAREN;
	v->a[228219] = actions(10238);
	small_parse_table_11411(v);
}

void	small_parse_table_11411(t_small_parse_table_array *v)
{
	v->a[228220] = 2;
	v->a[228221] = sym_test_operator;
	v->a[228222] = sym__special_character;
	v->a[228223] = actions(10240);
	v->a[228224] = 3;
	v->a[228225] = sym__bare_dollar;
	v->a[228226] = sym_raw_string;
	v->a[228227] = sym_ansi_c_string;
	v->a[228228] = state(5461);
	v->a[228229] = 9;
	v->a[228230] = sym_arithmetic_expansion;
	v->a[228231] = sym_brace_expression;
	v->a[228232] = sym_string;
	v->a[228233] = sym_translated_string;
	v->a[228234] = sym_number;
	v->a[228235] = sym_simple_expansion;
	v->a[228236] = sym_expansion;
	v->a[228237] = sym_command_substitution;
	v->a[228238] = sym_process_substitution;
	v->a[228239] = 21;
	small_parse_table_11412(v);
}

void	small_parse_table_11412(t_small_parse_table_array *v)
{
	v->a[228240] = actions(71);
	v->a[228241] = 1;
	v->a[228242] = sym_comment;
	v->a[228243] = actions(3602);
	v->a[228244] = 1;
	v->a[228245] = sym_variable_name;
	v->a[228246] = actions(9898);
	v->a[228247] = 1;
	v->a[228248] = anon_sym_LPAREN;
	v->a[228249] = actions(9900);
	v->a[228250] = 1;
	v->a[228251] = anon_sym_BANG;
	v->a[228252] = actions(9906);
	v->a[228253] = 1;
	v->a[228254] = anon_sym_TILDE;
	v->a[228255] = actions(9908);
	v->a[228256] = 1;
	v->a[228257] = anon_sym_DOLLAR;
	v->a[228258] = actions(9910);
	v->a[228259] = 1;
	small_parse_table_11413(v);
}

void	small_parse_table_11413(t_small_parse_table_array *v)
{
	v->a[228260] = anon_sym_DQUOTE;
	v->a[228261] = actions(9912);
	v->a[228262] = 1;
	v->a[228263] = aux_sym_number_token1;
	v->a[228264] = actions(9914);
	v->a[228265] = 1;
	v->a[228266] = aux_sym_number_token2;
	v->a[228267] = actions(9916);
	v->a[228268] = 1;
	v->a[228269] = anon_sym_DOLLAR_LBRACE;
	v->a[228270] = actions(9918);
	v->a[228271] = 1;
	v->a[228272] = anon_sym_DOLLAR_LPAREN;
	v->a[228273] = actions(9920);
	v->a[228274] = 1;
	v->a[228275] = anon_sym_BQUOTE;
	v->a[228276] = actions(9922);
	v->a[228277] = 1;
	v->a[228278] = anon_sym_DOLLAR_BQUOTE;
	v->a[228279] = actions(10836);
	small_parse_table_11414(v);
}

void	small_parse_table_11414(t_small_parse_table_array *v)
{
	v->a[228280] = 1;
	v->a[228281] = aux_sym__simple_variable_name_token1;
	v->a[228282] = state(3359);
	v->a[228283] = 1;
	v->a[228284] = sym__arithmetic_postfix_expression;
	v->a[228285] = state(3361);
	v->a[228286] = 1;
	v->a[228287] = sym__arithmetic_unary_expression;
	v->a[228288] = state(3367);
	v->a[228289] = 1;
	v->a[228290] = sym__arithmetic_ternary_expression;
	v->a[228291] = state(3375);
	v->a[228292] = 1;
	v->a[228293] = sym__arithmetic_binary_expression;
	v->a[228294] = actions(9902);
	v->a[228295] = 2;
	v->a[228296] = anon_sym_PLUS_PLUS2;
	v->a[228297] = anon_sym_DASH_DASH2;
	v->a[228298] = actions(9904);
	v->a[228299] = 2;
	small_parse_table_11415(v);
}

/* EOF small_parse_table_2282.c */
