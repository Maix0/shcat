/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1232.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6160(t_small_parse_table_array *v)
{
	v->a[123200] = actions(6504);
	v->a[123201] = 1;
	v->a[123202] = anon_sym_DOLLAR_BQUOTE;
	v->a[123203] = actions(6508);
	v->a[123204] = 1;
	v->a[123205] = sym_test_operator;
	v->a[123206] = actions(6510);
	v->a[123207] = 1;
	v->a[123208] = sym_extglob_pattern;
	v->a[123209] = actions(6512);
	v->a[123210] = 1;
	v->a[123211] = sym__brace_start;
	v->a[123212] = actions(6522);
	v->a[123213] = 1;
	v->a[123214] = anon_sym_esac;
	v->a[123215] = actions(6524);
	v->a[123216] = 1;
	v->a[123217] = aux_sym_heredoc_redirect_token1;
	v->a[123218] = state(6426);
	v->a[123219] = 1;
	small_parse_table_6161(v);
}

void	small_parse_table_6161(t_small_parse_table_array *v)
{
	v->a[123220] = aux_sym__literal_repeat1;
	v->a[123221] = state(7056);
	v->a[123222] = 1;
	v->a[123223] = sym_last_case_item;
	v->a[123224] = actions(6476);
	v->a[123225] = 2;
	v->a[123226] = anon_sym_LPAREN_LPAREN;
	v->a[123227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[123228] = actions(6506);
	v->a[123229] = 2;
	v->a[123230] = anon_sym_LT_LPAREN;
	v->a[123231] = anon_sym_GT_LPAREN;
	v->a[123232] = state(3233);
	v->a[123233] = 2;
	v->a[123234] = sym_case_item;
	v->a[123235] = aux_sym_case_statement_repeat1;
	v->a[123236] = state(6695);
	v->a[123237] = 2;
	v->a[123238] = sym_concatenation;
	v->a[123239] = sym__extglob_blob;
	small_parse_table_6162(v);
}

void	small_parse_table_6162(t_small_parse_table_array *v)
{
	v->a[123240] = actions(6474);
	v->a[123241] = 3;
	v->a[123242] = sym_raw_string;
	v->a[123243] = sym_ansi_c_string;
	v->a[123244] = sym_word;
	v->a[123245] = actions(6520);
	v->a[123246] = 3;
	v->a[123247] = anon_sym_SEMI;
	v->a[123248] = anon_sym_AMP;
	v->a[123249] = anon_sym_SEMI_SEMI;
	v->a[123250] = state(6303);
	v->a[123251] = 9;
	v->a[123252] = sym_arithmetic_expansion;
	v->a[123253] = sym_brace_expression;
	v->a[123254] = sym_string;
	v->a[123255] = sym_translated_string;
	v->a[123256] = sym_number;
	v->a[123257] = sym_simple_expansion;
	v->a[123258] = sym_expansion;
	v->a[123259] = sym_command_substitution;
	small_parse_table_6163(v);
}

void	small_parse_table_6163(t_small_parse_table_array *v)
{
	v->a[123260] = sym_process_substitution;
	v->a[123261] = 3;
	v->a[123262] = actions(71);
	v->a[123263] = 1;
	v->a[123264] = sym_comment;
	v->a[123265] = actions(1300);
	v->a[123266] = 14;
	v->a[123267] = anon_sym_EQ;
	v->a[123268] = anon_sym_PIPE;
	v->a[123269] = anon_sym_CARET;
	v->a[123270] = anon_sym_AMP;
	v->a[123271] = anon_sym_LT;
	v->a[123272] = anon_sym_GT;
	v->a[123273] = anon_sym_LT_LT;
	v->a[123274] = anon_sym_GT_GT;
	v->a[123275] = anon_sym_PLUS;
	v->a[123276] = anon_sym_DASH;
	v->a[123277] = anon_sym_STAR;
	v->a[123278] = anon_sym_SLASH;
	v->a[123279] = anon_sym_PERCENT;
	small_parse_table_6164(v);
}

void	small_parse_table_6164(t_small_parse_table_array *v)
{
	v->a[123280] = anon_sym_STAR_STAR;
	v->a[123281] = actions(1302);
	v->a[123282] = 27;
	v->a[123283] = sym__concat;
	v->a[123284] = sym_test_operator;
	v->a[123285] = anon_sym_RPAREN_RPAREN;
	v->a[123286] = anon_sym_PLUS_PLUS;
	v->a[123287] = anon_sym_DASH_DASH;
	v->a[123288] = anon_sym_PLUS_EQ;
	v->a[123289] = anon_sym_DASH_EQ;
	v->a[123290] = anon_sym_STAR_EQ;
	v->a[123291] = anon_sym_SLASH_EQ;
	v->a[123292] = anon_sym_PERCENT_EQ;
	v->a[123293] = anon_sym_STAR_STAR_EQ;
	v->a[123294] = anon_sym_LT_LT_EQ;
	v->a[123295] = anon_sym_GT_GT_EQ;
	v->a[123296] = anon_sym_AMP_EQ;
	v->a[123297] = anon_sym_CARET_EQ;
	v->a[123298] = anon_sym_PIPE_EQ;
	v->a[123299] = anon_sym_PIPE_PIPE;
	small_parse_table_6165(v);
}

/* EOF small_parse_table_1232.c */
