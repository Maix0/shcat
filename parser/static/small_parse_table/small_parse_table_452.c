/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_452.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2260(t_small_parse_table_array *v)
{
	v->a[45200] = sym_case_item;
	v->a[45201] = state(1772);
	v->a[45202] = 1;
	v->a[45203] = sym__case_item_last;
	v->a[45204] = state(1594);
	v->a[45205] = 2;
	v->a[45206] = sym_concatenation;
	v->a[45207] = sym__extglob_blob;
	v->a[45208] = actions(1333);
	v->a[45209] = 3;
	v->a[45210] = sym_raw_string;
	v->a[45211] = sym_number;
	v->a[45212] = sym_word;
	v->a[45213] = state(1520);
	v->a[45214] = 5;
	v->a[45215] = sym_arithmetic_expansion;
	v->a[45216] = sym_string;
	v->a[45217] = sym_simple_expansion;
	v->a[45218] = sym_expansion;
	v->a[45219] = sym_command_substitution;
	small_parse_table_2261(v);
}

void	small_parse_table_2261(t_small_parse_table_array *v)
{
	v->a[45220] = 3;
	v->a[45221] = actions(3);
	v->a[45222] = 1;
	v->a[45223] = sym_comment;
	v->a[45224] = actions(473);
	v->a[45225] = 4;
	v->a[45226] = sym__concat;
	v->a[45227] = sym_variable_name;
	v->a[45228] = ts_builtin_sym_end;
	v->a[45229] = aux_sym_heredoc_redirect_token1;
	v->a[45230] = actions(471);
	v->a[45231] = 17;
	v->a[45232] = anon_sym_PIPE;
	v->a[45233] = anon_sym_RPAREN;
	v->a[45234] = anon_sym_SEMI_SEMI;
	v->a[45235] = anon_sym_AMP_AMP;
	v->a[45236] = anon_sym_PIPE_PIPE;
	v->a[45237] = anon_sym_LT;
	v->a[45238] = anon_sym_GT;
	v->a[45239] = anon_sym_GT_GT;
	small_parse_table_2262(v);
}

void	small_parse_table_2262(t_small_parse_table_array *v)
{
	v->a[45240] = anon_sym_LT_AMP;
	v->a[45241] = anon_sym_GT_AMP;
	v->a[45242] = anon_sym_GT_PIPE;
	v->a[45243] = anon_sym_LT_GT;
	v->a[45244] = anon_sym_LT_LT;
	v->a[45245] = anon_sym_LT_LT_DASH;
	v->a[45246] = aux_sym_concatenation_token1;
	v->a[45247] = anon_sym_BQUOTE;
	v->a[45248] = anon_sym_SEMI;
	v->a[45249] = 15;
	v->a[45250] = actions(3);
	v->a[45251] = 1;
	v->a[45252] = sym_comment;
	v->a[45253] = actions(1337);
	v->a[45254] = 1;
	v->a[45255] = anon_sym_LPAREN;
	v->a[45256] = actions(1341);
	v->a[45257] = 1;
	v->a[45258] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45259] = actions(1343);
	small_parse_table_2263(v);
}

void	small_parse_table_2263(t_small_parse_table_array *v)
{
	v->a[45260] = 1;
	v->a[45261] = anon_sym_DOLLAR;
	v->a[45262] = actions(1345);
	v->a[45263] = 1;
	v->a[45264] = anon_sym_DQUOTE;
	v->a[45265] = actions(1347);
	v->a[45266] = 1;
	v->a[45267] = anon_sym_DOLLAR_LBRACE;
	v->a[45268] = actions(1349);
	v->a[45269] = 1;
	v->a[45270] = anon_sym_DOLLAR_LPAREN;
	v->a[45271] = actions(1351);
	v->a[45272] = 1;
	v->a[45273] = anon_sym_BQUOTE;
	v->a[45274] = actions(1353);
	v->a[45275] = 1;
	v->a[45276] = sym_extglob_pattern;
	v->a[45277] = state(839);
	v->a[45278] = 1;
	v->a[45279] = aux_sym_case_statement_repeat1;
	small_parse_table_2264(v);
}

void	small_parse_table_2264(t_small_parse_table_array *v)
{
	v->a[45280] = state(1432);
	v->a[45281] = 1;
	v->a[45282] = sym_case_item;
	v->a[45283] = state(1658);
	v->a[45284] = 1;
	v->a[45285] = sym__case_item_last;
	v->a[45286] = state(1594);
	v->a[45287] = 2;
	v->a[45288] = sym_concatenation;
	v->a[45289] = sym__extglob_blob;
	v->a[45290] = actions(1333);
	v->a[45291] = 3;
	v->a[45292] = sym_raw_string;
	v->a[45293] = sym_number;
	v->a[45294] = sym_word;
	v->a[45295] = state(1520);
	v->a[45296] = 5;
	v->a[45297] = sym_arithmetic_expansion;
	v->a[45298] = sym_string;
	v->a[45299] = sym_simple_expansion;
	small_parse_table_2265(v);
}

/* EOF small_parse_table_452.c */
