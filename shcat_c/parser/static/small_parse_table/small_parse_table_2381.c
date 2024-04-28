/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2381.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11905(t_small_parse_table_array *v)
{
	v->a[238100] = state(4493);
	v->a[238101] = 9;
	v->a[238102] = sym_arithmetic_expansion;
	v->a[238103] = sym_brace_expression;
	v->a[238104] = sym_string;
	v->a[238105] = sym_translated_string;
	v->a[238106] = sym_number;
	v->a[238107] = sym_simple_expansion;
	v->a[238108] = sym_expansion;
	v->a[238109] = sym_command_substitution;
	v->a[238110] = sym_process_substitution;
	v->a[238111] = 18;
	v->a[238112] = actions(3);
	v->a[238113] = 1;
	v->a[238114] = sym_comment;
	v->a[238115] = actions(3032);
	v->a[238116] = 1;
	v->a[238117] = aux_sym_number_token1;
	v->a[238118] = actions(3034);
	v->a[238119] = 1;
	small_parse_table_11906(v);
}

void	small_parse_table_11906(t_small_parse_table_array *v)
{
	v->a[238120] = aux_sym_number_token2;
	v->a[238121] = actions(3038);
	v->a[238122] = 1;
	v->a[238123] = anon_sym_DOLLAR_LPAREN;
	v->a[238124] = actions(3048);
	v->a[238125] = 1;
	v->a[238126] = sym__brace_start;
	v->a[238127] = actions(10134);
	v->a[238128] = 1;
	v->a[238129] = anon_sym_DOLLAR_LBRACK;
	v->a[238130] = actions(10138);
	v->a[238131] = 1;
	v->a[238132] = anon_sym_DQUOTE;
	v->a[238133] = actions(10142);
	v->a[238134] = 1;
	v->a[238135] = anon_sym_DOLLAR_LBRACE;
	v->a[238136] = actions(10144);
	v->a[238137] = 1;
	v->a[238138] = anon_sym_BQUOTE;
	v->a[238139] = actions(10146);
	small_parse_table_11907(v);
}

void	small_parse_table_11907(t_small_parse_table_array *v)
{
	v->a[238140] = 1;
	v->a[238141] = anon_sym_DOLLAR_BQUOTE;
	v->a[238142] = actions(10556);
	v->a[238143] = 1;
	v->a[238144] = sym_word;
	v->a[238145] = actions(10562);
	v->a[238146] = 1;
	v->a[238147] = sym__comment_word;
	v->a[238148] = actions(11204);
	v->a[238149] = 1;
	v->a[238150] = anon_sym_DOLLAR;
	v->a[238151] = actions(10132);
	v->a[238152] = 2;
	v->a[238153] = anon_sym_LPAREN_LPAREN;
	v->a[238154] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[238155] = actions(10148);
	v->a[238156] = 2;
	v->a[238157] = anon_sym_LT_LPAREN;
	v->a[238158] = anon_sym_GT_LPAREN;
	v->a[238159] = actions(10558);
	small_parse_table_11908(v);
}

void	small_parse_table_11908(t_small_parse_table_array *v)
{
	v->a[238160] = 2;
	v->a[238161] = sym_test_operator;
	v->a[238162] = sym__special_character;
	v->a[238163] = actions(10560);
	v->a[238164] = 3;
	v->a[238165] = sym__bare_dollar;
	v->a[238166] = sym_raw_string;
	v->a[238167] = sym_ansi_c_string;
	v->a[238168] = state(4493);
	v->a[238169] = 9;
	v->a[238170] = sym_arithmetic_expansion;
	v->a[238171] = sym_brace_expression;
	v->a[238172] = sym_string;
	v->a[238173] = sym_translated_string;
	v->a[238174] = sym_number;
	v->a[238175] = sym_simple_expansion;
	v->a[238176] = sym_expansion;
	v->a[238177] = sym_command_substitution;
	v->a[238178] = sym_process_substitution;
	v->a[238179] = 18;
	small_parse_table_11909(v);
}

void	small_parse_table_11909(t_small_parse_table_array *v)
{
	v->a[238180] = actions(3);
	v->a[238181] = 1;
	v->a[238182] = sym_comment;
	v->a[238183] = actions(8306);
	v->a[238184] = 1;
	v->a[238185] = anon_sym_DOLLAR_LBRACK;
	v->a[238186] = actions(8312);
	v->a[238187] = 1;
	v->a[238188] = anon_sym_DQUOTE;
	v->a[238189] = actions(8316);
	v->a[238190] = 1;
	v->a[238191] = aux_sym_number_token1;
	v->a[238192] = actions(8318);
	v->a[238193] = 1;
	v->a[238194] = aux_sym_number_token2;
	v->a[238195] = actions(8320);
	v->a[238196] = 1;
	v->a[238197] = anon_sym_DOLLAR_LBRACE;
	v->a[238198] = actions(8322);
	v->a[238199] = 1;
	small_parse_table_11910(v);
}

/* EOF small_parse_table_2381.c */
