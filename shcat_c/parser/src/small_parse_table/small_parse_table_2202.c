/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2202.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11010(t_small_parse_table_array *v)
{
	v->a[220200] = actions(2792);
	v->a[220201] = 1;
	v->a[220202] = aux_sym_number_token1;
	v->a[220203] = actions(2794);
	v->a[220204] = 1;
	v->a[220205] = aux_sym_number_token2;
	v->a[220206] = actions(2798);
	v->a[220207] = 1;
	v->a[220208] = anon_sym_DOLLAR_LPAREN;
	v->a[220209] = actions(2810);
	v->a[220210] = 1;
	v->a[220211] = sym__brace_start;
	v->a[220212] = actions(10500);
	v->a[220213] = 1;
	v->a[220214] = sym_word;
	v->a[220215] = actions(10504);
	v->a[220216] = 1;
	v->a[220217] = anon_sym_DOLLAR_LBRACK;
	v->a[220218] = actions(10508);
	v->a[220219] = 1;
	small_parse_table_11011(v);
}

void	small_parse_table_11011(t_small_parse_table_array *v)
{
	v->a[220220] = anon_sym_DQUOTE;
	v->a[220221] = actions(10512);
	v->a[220222] = 1;
	v->a[220223] = anon_sym_DOLLAR_LBRACE;
	v->a[220224] = actions(10514);
	v->a[220225] = 1;
	v->a[220226] = anon_sym_BQUOTE;
	v->a[220227] = actions(10516);
	v->a[220228] = 1;
	v->a[220229] = anon_sym_DOLLAR_BQUOTE;
	v->a[220230] = actions(10520);
	v->a[220231] = 1;
	v->a[220232] = sym__comment_word;
	v->a[220233] = actions(10502);
	v->a[220234] = 2;
	v->a[220235] = anon_sym_LPAREN_LPAREN;
	v->a[220236] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[220237] = actions(10506);
	v->a[220238] = 2;
	v->a[220239] = sym_test_operator;
	small_parse_table_11012(v);
}

void	small_parse_table_11012(t_small_parse_table_array *v)
{
	v->a[220240] = sym__special_character;
	v->a[220241] = actions(10518);
	v->a[220242] = 2;
	v->a[220243] = anon_sym_LT_LPAREN;
	v->a[220244] = anon_sym_GT_LPAREN;
	v->a[220245] = actions(10510);
	v->a[220246] = 3;
	v->a[220247] = sym__bare_dollar;
	v->a[220248] = sym_raw_string;
	v->a[220249] = sym_ansi_c_string;
	v->a[220250] = state(1569);
	v->a[220251] = 9;
	v->a[220252] = sym_arithmetic_expansion;
	v->a[220253] = sym_brace_expression;
	v->a[220254] = sym_string;
	v->a[220255] = sym_translated_string;
	v->a[220256] = sym_number;
	v->a[220257] = sym_simple_expansion;
	v->a[220258] = sym_expansion;
	v->a[220259] = sym_command_substitution;
	small_parse_table_11013(v);
}

void	small_parse_table_11013(t_small_parse_table_array *v)
{
	v->a[220260] = sym_process_substitution;
	v->a[220261] = 18;
	v->a[220262] = actions(3);
	v->a[220263] = 1;
	v->a[220264] = sym_comment;
	v->a[220265] = actions(1454);
	v->a[220266] = 1;
	v->a[220267] = anon_sym_DOLLAR;
	v->a[220268] = actions(1460);
	v->a[220269] = 1;
	v->a[220270] = aux_sym_number_token1;
	v->a[220271] = actions(1462);
	v->a[220272] = 1;
	v->a[220273] = aux_sym_number_token2;
	v->a[220274] = actions(1466);
	v->a[220275] = 1;
	v->a[220276] = anon_sym_DOLLAR_LPAREN;
	v->a[220277] = actions(1478);
	v->a[220278] = 1;
	v->a[220279] = sym__brace_start;
	small_parse_table_11014(v);
}

void	small_parse_table_11014(t_small_parse_table_array *v)
{
	v->a[220280] = actions(8878);
	v->a[220281] = 1;
	v->a[220282] = anon_sym_DOLLAR_LBRACK;
	v->a[220283] = actions(8882);
	v->a[220284] = 1;
	v->a[220285] = anon_sym_DQUOTE;
	v->a[220286] = actions(8886);
	v->a[220287] = 1;
	v->a[220288] = anon_sym_DOLLAR_LBRACE;
	v->a[220289] = actions(8888);
	v->a[220290] = 1;
	v->a[220291] = anon_sym_BQUOTE;
	v->a[220292] = actions(8890);
	v->a[220293] = 1;
	v->a[220294] = anon_sym_DOLLAR_BQUOTE;
	v->a[220295] = actions(10522);
	v->a[220296] = 1;
	v->a[220297] = sym_word;
	v->a[220298] = actions(10528);
	v->a[220299] = 1;
	small_parse_table_11015(v);
}

/* EOF small_parse_table_2202.c */
