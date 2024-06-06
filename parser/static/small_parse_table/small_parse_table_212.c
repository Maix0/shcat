/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_212.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1060(t_small_parse_table_array *v)
{
	v->a[21200] = anon_sym_LT_AMP_DASH;
	v->a[21201] = anon_sym_GT_AMP_DASH;
	v->a[21202] = anon_sym_LT_LT;
	v->a[21203] = anon_sym_LT_LT_DASH;
	v->a[21204] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21205] = anon_sym_AMP;
	v->a[21206] = anon_sym_DOLLAR;
	v->a[21207] = sym__special_character;
	v->a[21208] = anon_sym_DQUOTE;
	v->a[21209] = sym_raw_string;
	v->a[21210] = aux_sym_number_token1;
	v->a[21211] = aux_sym_number_token2;
	v->a[21212] = anon_sym_DOLLAR_LBRACE;
	v->a[21213] = anon_sym_DOLLAR_LPAREN;
	v->a[21214] = anon_sym_BQUOTE;
	v->a[21215] = anon_sym_DOLLAR_BQUOTE;
	v->a[21216] = aux_sym__simple_variable_name_token1;
	v->a[21217] = sym_word;
	v->a[21218] = anon_sym_SEMI;
	v->a[21219] = 19;
	small_parse_table_1061(v);
}

void	small_parse_table_1061(t_small_parse_table_array *v)
{
	v->a[21220] = actions(57);
	v->a[21221] = 1;
	v->a[21222] = sym_comment;
	v->a[21223] = actions(2979);
	v->a[21224] = 1;
	v->a[21225] = sym_word;
	v->a[21226] = actions(2982);
	v->a[21227] = 1;
	v->a[21228] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21229] = actions(2985);
	v->a[21230] = 1;
	v->a[21231] = anon_sym_DOLLAR;
	v->a[21232] = actions(2988);
	v->a[21233] = 1;
	v->a[21234] = sym__special_character;
	v->a[21235] = actions(2991);
	v->a[21236] = 1;
	v->a[21237] = anon_sym_DQUOTE;
	v->a[21238] = actions(2997);
	v->a[21239] = 1;
	small_parse_table_1062(v);
}

void	small_parse_table_1062(t_small_parse_table_array *v)
{
	v->a[21240] = aux_sym_number_token1;
	v->a[21241] = actions(3000);
	v->a[21242] = 1;
	v->a[21243] = aux_sym_number_token2;
	v->a[21244] = actions(3003);
	v->a[21245] = 1;
	v->a[21246] = anon_sym_DOLLAR_LBRACE;
	v->a[21247] = actions(3006);
	v->a[21248] = 1;
	v->a[21249] = anon_sym_DOLLAR_LPAREN;
	v->a[21250] = actions(3009);
	v->a[21251] = 1;
	v->a[21252] = anon_sym_BQUOTE;
	v->a[21253] = actions(3012);
	v->a[21254] = 1;
	v->a[21255] = anon_sym_DOLLAR_BQUOTE;
	v->a[21256] = actions(3015);
	v->a[21257] = 1;
	v->a[21258] = sym__brace_start;
	v->a[21259] = state(1662);
	small_parse_table_1063(v);
}

void	small_parse_table_1063(t_small_parse_table_array *v)
{
	v->a[21260] = 1;
	v->a[21261] = aux_sym__literal_repeat1;
	v->a[21262] = actions(2994);
	v->a[21263] = 2;
	v->a[21264] = sym_test_operator;
	v->a[21265] = sym_raw_string;
	v->a[21266] = state(546);
	v->a[21267] = 2;
	v->a[21268] = sym_concatenation;
	v->a[21269] = aux_sym_for_statement_repeat1;
	v->a[21270] = actions(1285);
	v->a[21271] = 7;
	v->a[21272] = anon_sym_PIPE;
	v->a[21273] = anon_sym_LT;
	v->a[21274] = anon_sym_GT;
	v->a[21275] = anon_sym_AMP_GT;
	v->a[21276] = anon_sym_LT_AMP;
	v->a[21277] = anon_sym_GT_AMP;
	v->a[21278] = anon_sym_LT_LT;
	v->a[21279] = state(1461);
	small_parse_table_1064(v);
}

void	small_parse_table_1064(t_small_parse_table_array *v)
{
	v->a[21280] = 7;
	v->a[21281] = sym_arithmetic_expansion;
	v->a[21282] = sym_brace_expression;
	v->a[21283] = sym_string;
	v->a[21284] = sym_number;
	v->a[21285] = sym_simple_expansion;
	v->a[21286] = sym_expansion;
	v->a[21287] = sym_command_substitution;
	v->a[21288] = actions(1287);
	v->a[21289] = 11;
	v->a[21290] = sym_file_descriptor;
	v->a[21291] = sym_variable_name;
	v->a[21292] = anon_sym_PIPE_AMP;
	v->a[21293] = anon_sym_AMP_AMP;
	v->a[21294] = anon_sym_PIPE_PIPE;
	v->a[21295] = anon_sym_GT_GT;
	v->a[21296] = anon_sym_AMP_GT_GT;
	v->a[21297] = anon_sym_GT_PIPE;
	v->a[21298] = anon_sym_LT_AMP_DASH;
	v->a[21299] = anon_sym_GT_AMP_DASH;
	small_parse_table_1065(v);
}

/* EOF small_parse_table_212.c */
