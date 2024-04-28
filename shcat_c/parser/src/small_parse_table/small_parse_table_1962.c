/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1962.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9810(t_small_parse_table_array *v)
{
	v->a[196200] = anon_sym_DOLLAR_LBRACE;
	v->a[196201] = actions(8587);
	v->a[196202] = 1;
	v->a[196203] = anon_sym_DOLLAR_LPAREN;
	v->a[196204] = actions(8589);
	v->a[196205] = 1;
	v->a[196206] = anon_sym_BQUOTE;
	v->a[196207] = actions(8591);
	v->a[196208] = 1;
	v->a[196209] = anon_sym_DOLLAR_BQUOTE;
	v->a[196210] = actions(8595);
	v->a[196211] = 1;
	v->a[196212] = sym_test_operator;
	v->a[196213] = actions(8597);
	v->a[196214] = 1;
	v->a[196215] = sym__brace_start;
	v->a[196216] = actions(8802);
	v->a[196217] = 1;
	v->a[196218] = anon_sym_RPAREN;
	v->a[196219] = state(5365);
	small_parse_table_9811(v);
}

void	small_parse_table_9811(t_small_parse_table_array *v)
{
	v->a[196220] = 1;
	v->a[196221] = aux_sym__literal_repeat1;
	v->a[196222] = actions(8567);
	v->a[196223] = 2;
	v->a[196224] = anon_sym_LPAREN_LPAREN;
	v->a[196225] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[196226] = actions(8579);
	v->a[196227] = 2;
	v->a[196228] = sym_raw_string;
	v->a[196229] = sym_ansi_c_string;
	v->a[196230] = actions(8593);
	v->a[196231] = 2;
	v->a[196232] = anon_sym_LT_LPAREN;
	v->a[196233] = anon_sym_GT_LPAREN;
	v->a[196234] = state(3604);
	v->a[196235] = 2;
	v->a[196236] = sym_concatenation;
	v->a[196237] = aux_sym_for_statement_repeat1;
	v->a[196238] = state(5045);
	v->a[196239] = 9;
	small_parse_table_9812(v);
}

void	small_parse_table_9812(t_small_parse_table_array *v)
{
	v->a[196240] = sym_arithmetic_expansion;
	v->a[196241] = sym_brace_expression;
	v->a[196242] = sym_string;
	v->a[196243] = sym_translated_string;
	v->a[196244] = sym_number;
	v->a[196245] = sym_simple_expansion;
	v->a[196246] = sym_expansion;
	v->a[196247] = sym_command_substitution;
	v->a[196248] = sym_process_substitution;
	v->a[196249] = 8;
	v->a[196250] = actions(3);
	v->a[196251] = 1;
	v->a[196252] = sym_comment;
	v->a[196253] = actions(1241);
	v->a[196254] = 1;
	v->a[196255] = sym_file_descriptor;
	v->a[196256] = actions(7673);
	v->a[196257] = 1;
	v->a[196258] = anon_sym_DQUOTE;
	v->a[196259] = actions(7677);
	small_parse_table_9813(v);
}

void	small_parse_table_9813(t_small_parse_table_array *v)
{
	v->a[196260] = 1;
	v->a[196261] = sym_variable_name;
	v->a[196262] = state(4393);
	v->a[196263] = 1;
	v->a[196264] = sym_string;
	v->a[196265] = actions(7675);
	v->a[196266] = 2;
	v->a[196267] = aux_sym__simple_variable_name_token1;
	v->a[196268] = aux_sym__multiline_variable_name_token1;
	v->a[196269] = actions(7671);
	v->a[196270] = 9;
	v->a[196271] = anon_sym_DASH;
	v->a[196272] = anon_sym_STAR;
	v->a[196273] = anon_sym_BANG;
	v->a[196274] = anon_sym_QMARK;
	v->a[196275] = anon_sym_DOLLAR;
	v->a[196276] = anon_sym_POUND;
	v->a[196277] = anon_sym_AT2;
	v->a[196278] = anon_sym_0;
	v->a[196279] = anon_sym__;
	small_parse_table_9814(v);
}

void	small_parse_table_9814(t_small_parse_table_array *v)
{
	v->a[196280] = actions(1239);
	v->a[196281] = 17;
	v->a[196282] = anon_sym_PIPE_PIPE;
	v->a[196283] = anon_sym_AMP_AMP;
	v->a[196284] = anon_sym_PIPE;
	v->a[196285] = anon_sym_LT;
	v->a[196286] = anon_sym_GT;
	v->a[196287] = anon_sym_LT_LT;
	v->a[196288] = anon_sym_GT_GT;
	v->a[196289] = anon_sym_PIPE_AMP;
	v->a[196290] = anon_sym_AMP_GT;
	v->a[196291] = anon_sym_AMP_GT_GT;
	v->a[196292] = anon_sym_LT_AMP;
	v->a[196293] = anon_sym_GT_AMP;
	v->a[196294] = anon_sym_GT_PIPE;
	v->a[196295] = anon_sym_LT_AMP_DASH;
	v->a[196296] = anon_sym_GT_AMP_DASH;
	v->a[196297] = anon_sym_LT_LT_DASH;
	v->a[196298] = aux_sym_heredoc_redirect_token1;
	v->a[196299] = 21;
	small_parse_table_9815(v);
}

/* EOF small_parse_table_1962.c */
