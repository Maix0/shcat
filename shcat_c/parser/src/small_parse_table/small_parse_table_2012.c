/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2012.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10060(t_small_parse_table_array *v)
{
	v->a[201200] = anon_sym_GT_LPAREN;
	v->a[201201] = state(3458);
	v->a[201202] = 2;
	v->a[201203] = sym_concatenation;
	v->a[201204] = aux_sym_for_statement_repeat1;
	v->a[201205] = state(4460);
	v->a[201206] = 9;
	v->a[201207] = sym_arithmetic_expansion;
	v->a[201208] = sym_brace_expression;
	v->a[201209] = sym_string;
	v->a[201210] = sym_translated_string;
	v->a[201211] = sym_number;
	v->a[201212] = sym_simple_expansion;
	v->a[201213] = sym_expansion;
	v->a[201214] = sym_command_substitution;
	v->a[201215] = sym_process_substitution;
	v->a[201216] = 20;
	v->a[201217] = actions(71);
	v->a[201218] = 1;
	v->a[201219] = sym_comment;
	small_parse_table_10061(v);
}

void	small_parse_table_10061(t_small_parse_table_array *v)
{
	v->a[201220] = actions(7996);
	v->a[201221] = 1;
	v->a[201222] = anon_sym_DOLLAR_LBRACK;
	v->a[201223] = actions(7998);
	v->a[201224] = 1;
	v->a[201225] = anon_sym_DOLLAR;
	v->a[201226] = actions(8000);
	v->a[201227] = 1;
	v->a[201228] = sym__special_character;
	v->a[201229] = actions(8002);
	v->a[201230] = 1;
	v->a[201231] = anon_sym_DQUOTE;
	v->a[201232] = actions(8006);
	v->a[201233] = 1;
	v->a[201234] = aux_sym_number_token1;
	v->a[201235] = actions(8008);
	v->a[201236] = 1;
	v->a[201237] = aux_sym_number_token2;
	v->a[201238] = actions(8010);
	v->a[201239] = 1;
	small_parse_table_10062(v);
}

void	small_parse_table_10062(t_small_parse_table_array *v)
{
	v->a[201240] = anon_sym_DOLLAR_LBRACE;
	v->a[201241] = actions(8012);
	v->a[201242] = 1;
	v->a[201243] = anon_sym_DOLLAR_LPAREN;
	v->a[201244] = actions(8014);
	v->a[201245] = 1;
	v->a[201246] = anon_sym_BQUOTE;
	v->a[201247] = actions(8016);
	v->a[201248] = 1;
	v->a[201249] = anon_sym_DOLLAR_BQUOTE;
	v->a[201250] = actions(8026);
	v->a[201251] = 1;
	v->a[201252] = sym__brace_start;
	v->a[201253] = actions(9180);
	v->a[201254] = 1;
	v->a[201255] = sym_word;
	v->a[201256] = actions(9184);
	v->a[201257] = 1;
	v->a[201258] = sym_test_operator;
	v->a[201259] = state(3543);
	small_parse_table_10063(v);
}

void	small_parse_table_10063(t_small_parse_table_array *v)
{
	v->a[201260] = 1;
	v->a[201261] = aux_sym__literal_repeat1;
	v->a[201262] = actions(7992);
	v->a[201263] = 2;
	v->a[201264] = anon_sym_LPAREN_LPAREN;
	v->a[201265] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[201266] = actions(8018);
	v->a[201267] = 2;
	v->a[201268] = anon_sym_LT_LPAREN;
	v->a[201269] = anon_sym_GT_LPAREN;
	v->a[201270] = actions(9182);
	v->a[201271] = 2;
	v->a[201272] = sym_raw_string;
	v->a[201273] = sym_ansi_c_string;
	v->a[201274] = state(1808);
	v->a[201275] = 2;
	v->a[201276] = sym_concatenation;
	v->a[201277] = aux_sym_for_statement_repeat1;
	v->a[201278] = state(3480);
	v->a[201279] = 9;
	small_parse_table_10064(v);
}

void	small_parse_table_10064(t_small_parse_table_array *v)
{
	v->a[201280] = sym_arithmetic_expansion;
	v->a[201281] = sym_brace_expression;
	v->a[201282] = sym_string;
	v->a[201283] = sym_translated_string;
	v->a[201284] = sym_number;
	v->a[201285] = sym_simple_expansion;
	v->a[201286] = sym_expansion;
	v->a[201287] = sym_command_substitution;
	v->a[201288] = sym_process_substitution;
	v->a[201289] = 20;
	v->a[201290] = actions(71);
	v->a[201291] = 1;
	v->a[201292] = sym_comment;
	v->a[201293] = actions(8178);
	v->a[201294] = 1;
	v->a[201295] = anon_sym_DOLLAR_LBRACK;
	v->a[201296] = actions(8180);
	v->a[201297] = 1;
	v->a[201298] = anon_sym_DOLLAR;
	v->a[201299] = actions(8184);
	small_parse_table_10065(v);
}

/* EOF small_parse_table_2012.c */
