/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2123.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10615(t_small_parse_table_array *v)
{
	v->a[212300] = sym_word;
	v->a[212301] = actions(10086);
	v->a[212302] = 1;
	v->a[212303] = sym_test_operator;
	v->a[212304] = state(1202);
	v->a[212305] = 1;
	v->a[212306] = aux_sym__literal_repeat1;
	v->a[212307] = state(1390);
	v->a[212308] = 1;
	v->a[212309] = sym_concatenation;
	v->a[212310] = actions(8876);
	v->a[212311] = 2;
	v->a[212312] = anon_sym_LPAREN_LPAREN;
	v->a[212313] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[212314] = actions(8892);
	v->a[212315] = 2;
	v->a[212316] = anon_sym_LT_LPAREN;
	v->a[212317] = anon_sym_GT_LPAREN;
	v->a[212318] = actions(10084);
	v->a[212319] = 2;
	small_parse_table_10616(v);
}

void	small_parse_table_10616(t_small_parse_table_array *v)
{
	v->a[212320] = sym_raw_string;
	v->a[212321] = sym_ansi_c_string;
	v->a[212322] = state(993);
	v->a[212323] = 9;
	v->a[212324] = sym_arithmetic_expansion;
	v->a[212325] = sym_brace_expression;
	v->a[212326] = sym_string;
	v->a[212327] = sym_translated_string;
	v->a[212328] = sym_number;
	v->a[212329] = sym_simple_expansion;
	v->a[212330] = sym_expansion;
	v->a[212331] = sym_command_substitution;
	v->a[212332] = sym_process_substitution;
	v->a[212333] = 20;
	v->a[212334] = actions(71);
	v->a[212335] = 1;
	v->a[212336] = sym_comment;
	v->a[212337] = actions(1454);
	v->a[212338] = 1;
	v->a[212339] = anon_sym_DOLLAR;
	small_parse_table_10617(v);
}

void	small_parse_table_10617(t_small_parse_table_array *v)
{
	v->a[212340] = actions(1460);
	v->a[212341] = 1;
	v->a[212342] = aux_sym_number_token1;
	v->a[212343] = actions(1462);
	v->a[212344] = 1;
	v->a[212345] = aux_sym_number_token2;
	v->a[212346] = actions(1466);
	v->a[212347] = 1;
	v->a[212348] = anon_sym_DOLLAR_LPAREN;
	v->a[212349] = actions(1478);
	v->a[212350] = 1;
	v->a[212351] = sym__brace_start;
	v->a[212352] = actions(8878);
	v->a[212353] = 1;
	v->a[212354] = anon_sym_DOLLAR_LBRACK;
	v->a[212355] = actions(8880);
	v->a[212356] = 1;
	v->a[212357] = sym__special_character;
	v->a[212358] = actions(8882);
	v->a[212359] = 1;
	small_parse_table_10618(v);
}

void	small_parse_table_10618(t_small_parse_table_array *v)
{
	v->a[212360] = anon_sym_DQUOTE;
	v->a[212361] = actions(8886);
	v->a[212362] = 1;
	v->a[212363] = anon_sym_DOLLAR_LBRACE;
	v->a[212364] = actions(8888);
	v->a[212365] = 1;
	v->a[212366] = anon_sym_BQUOTE;
	v->a[212367] = actions(8890);
	v->a[212368] = 1;
	v->a[212369] = anon_sym_DOLLAR_BQUOTE;
	v->a[212370] = actions(10088);
	v->a[212371] = 1;
	v->a[212372] = sym_word;
	v->a[212373] = actions(10092);
	v->a[212374] = 1;
	v->a[212375] = sym_test_operator;
	v->a[212376] = state(1201);
	v->a[212377] = 1;
	v->a[212378] = aux_sym__literal_repeat1;
	v->a[212379] = state(1387);
	small_parse_table_10619(v);
}

void	small_parse_table_10619(t_small_parse_table_array *v)
{
	v->a[212380] = 1;
	v->a[212381] = sym_concatenation;
	v->a[212382] = actions(8876);
	v->a[212383] = 2;
	v->a[212384] = anon_sym_LPAREN_LPAREN;
	v->a[212385] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[212386] = actions(8892);
	v->a[212387] = 2;
	v->a[212388] = anon_sym_LT_LPAREN;
	v->a[212389] = anon_sym_GT_LPAREN;
	v->a[212390] = actions(10090);
	v->a[212391] = 2;
	v->a[212392] = sym_raw_string;
	v->a[212393] = sym_ansi_c_string;
	v->a[212394] = state(995);
	v->a[212395] = 9;
	v->a[212396] = sym_arithmetic_expansion;
	v->a[212397] = sym_brace_expression;
	v->a[212398] = sym_string;
	v->a[212399] = sym_translated_string;
	small_parse_table_10620(v);
}

/* EOF small_parse_table_2123.c */
