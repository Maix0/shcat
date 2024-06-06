/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1102.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5510(t_small_parse_table_array *v)
{
	v->a[110200] = actions(6286);
	v->a[110201] = 3;
	v->a[110202] = sym_test_operator;
	v->a[110203] = sym__bare_dollar;
	v->a[110204] = sym_raw_string;
	v->a[110205] = state(1502);
	v->a[110206] = 7;
	v->a[110207] = sym_arithmetic_expansion;
	v->a[110208] = sym_brace_expression;
	v->a[110209] = sym_string;
	v->a[110210] = sym_number;
	v->a[110211] = sym_simple_expansion;
	v->a[110212] = sym_expansion;
	v->a[110213] = sym_command_substitution;
	v->a[110214] = 16;
	v->a[110215] = actions(3);
	v->a[110216] = 1;
	v->a[110217] = sym_comment;
	v->a[110218] = actions(3483);
	v->a[110219] = 1;
	small_parse_table_5511(v);
}

void	small_parse_table_5511(t_small_parse_table_array *v)
{
	v->a[110220] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110221] = actions(3489);
	v->a[110222] = 1;
	v->a[110223] = anon_sym_DQUOTE;
	v->a[110224] = actions(3493);
	v->a[110225] = 1;
	v->a[110226] = aux_sym_number_token1;
	v->a[110227] = actions(3495);
	v->a[110228] = 1;
	v->a[110229] = aux_sym_number_token2;
	v->a[110230] = actions(3497);
	v->a[110231] = 1;
	v->a[110232] = anon_sym_DOLLAR_LBRACE;
	v->a[110233] = actions(3499);
	v->a[110234] = 1;
	v->a[110235] = anon_sym_DOLLAR_LPAREN;
	v->a[110236] = actions(3501);
	v->a[110237] = 1;
	v->a[110238] = anon_sym_BQUOTE;
	v->a[110239] = actions(3503);
	small_parse_table_5512(v);
}

void	small_parse_table_5512(t_small_parse_table_array *v)
{
	v->a[110240] = 1;
	v->a[110241] = anon_sym_DOLLAR_BQUOTE;
	v->a[110242] = actions(3505);
	v->a[110243] = 1;
	v->a[110244] = sym__brace_start;
	v->a[110245] = actions(6290);
	v->a[110246] = 1;
	v->a[110247] = sym_word;
	v->a[110248] = actions(6292);
	v->a[110249] = 1;
	v->a[110250] = anon_sym_DOLLAR;
	v->a[110251] = actions(6294);
	v->a[110252] = 1;
	v->a[110253] = sym__special_character;
	v->a[110254] = actions(6298);
	v->a[110255] = 1;
	v->a[110256] = sym__comment_word;
	v->a[110257] = actions(6296);
	v->a[110258] = 3;
	v->a[110259] = sym_test_operator;
	small_parse_table_5513(v);
}

void	small_parse_table_5513(t_small_parse_table_array *v)
{
	v->a[110260] = sym__bare_dollar;
	v->a[110261] = sym_raw_string;
	v->a[110262] = state(2690);
	v->a[110263] = 7;
	v->a[110264] = sym_arithmetic_expansion;
	v->a[110265] = sym_brace_expression;
	v->a[110266] = sym_string;
	v->a[110267] = sym_number;
	v->a[110268] = sym_simple_expansion;
	v->a[110269] = sym_expansion;
	v->a[110270] = sym_command_substitution;
	v->a[110271] = 16;
	v->a[110272] = actions(3);
	v->a[110273] = 1;
	v->a[110274] = sym_comment;
	v->a[110275] = actions(1051);
	v->a[110276] = 1;
	v->a[110277] = aux_sym_number_token1;
	v->a[110278] = actions(1053);
	v->a[110279] = 1;
	small_parse_table_5514(v);
}

void	small_parse_table_5514(t_small_parse_table_array *v)
{
	v->a[110280] = aux_sym_number_token2;
	v->a[110281] = actions(1057);
	v->a[110282] = 1;
	v->a[110283] = anon_sym_DOLLAR_LPAREN;
	v->a[110284] = actions(1067);
	v->a[110285] = 1;
	v->a[110286] = sym__brace_start;
	v->a[110287] = actions(6300);
	v->a[110288] = 1;
	v->a[110289] = sym_word;
	v->a[110290] = actions(6302);
	v->a[110291] = 1;
	v->a[110292] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110293] = actions(6304);
	v->a[110294] = 1;
	v->a[110295] = anon_sym_DOLLAR;
	v->a[110296] = actions(6306);
	v->a[110297] = 1;
	v->a[110298] = sym__special_character;
	v->a[110299] = actions(6308);
	small_parse_table_5515(v);
}

/* EOF small_parse_table_1102.c */
