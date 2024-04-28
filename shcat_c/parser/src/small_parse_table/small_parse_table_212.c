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
	v->a[21200] = 1;
	v->a[21201] = aux_sym__literal_repeat1;
	v->a[21202] = state(2558);
	v->a[21203] = 1;
	v->a[21204] = sym_concatenation;
	v->a[21205] = state(2562);
	v->a[21206] = 1;
	v->a[21207] = sym_herestring_redirect;
	v->a[21208] = actions(3981);
	v->a[21209] = 2;
	v->a[21210] = anon_sym_LPAREN_LPAREN;
	v->a[21211] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21212] = actions(3984);
	v->a[21213] = 2;
	v->a[21214] = anon_sym_EQ_EQ;
	v->a[21215] = anon_sym_EQ_TILDE;
	v->a[21216] = actions(4002);
	v->a[21217] = 2;
	v->a[21218] = sym_raw_string;
	v->a[21219] = sym_ansi_c_string;
	small_parse_table_1061(v);
}

void	small_parse_table_1061(t_small_parse_table_array *v)
{
	v->a[21220] = actions(4023);
	v->a[21221] = 2;
	v->a[21222] = anon_sym_LT_LPAREN;
	v->a[21223] = anon_sym_GT_LPAREN;
	v->a[21224] = actions(1486);
	v->a[21225] = 7;
	v->a[21226] = anon_sym_PIPE;
	v->a[21227] = anon_sym_LT;
	v->a[21228] = anon_sym_GT;
	v->a[21229] = anon_sym_LT_LT;
	v->a[21230] = anon_sym_AMP_GT;
	v->a[21231] = anon_sym_LT_AMP;
	v->a[21232] = anon_sym_GT_AMP;
	v->a[21233] = actions(1491);
	v->a[21234] = 9;
	v->a[21235] = anon_sym_PIPE_PIPE;
	v->a[21236] = anon_sym_AMP_AMP;
	v->a[21237] = anon_sym_GT_GT;
	v->a[21238] = anon_sym_PIPE_AMP;
	v->a[21239] = anon_sym_AMP_GT_GT;
	small_parse_table_1062(v);
}

void	small_parse_table_1062(t_small_parse_table_array *v)
{
	v->a[21240] = anon_sym_GT_PIPE;
	v->a[21241] = anon_sym_LT_AMP_DASH;
	v->a[21242] = anon_sym_GT_AMP_DASH;
	v->a[21243] = anon_sym_LT_LT_DASH;
	v->a[21244] = state(2211);
	v->a[21245] = 9;
	v->a[21246] = sym_arithmetic_expansion;
	v->a[21247] = sym_brace_expression;
	v->a[21248] = sym_string;
	v->a[21249] = sym_translated_string;
	v->a[21250] = sym_number;
	v->a[21251] = sym_simple_expansion;
	v->a[21252] = sym_expansion;
	v->a[21253] = sym_command_substitution;
	v->a[21254] = sym_process_substitution;
	v->a[21255] = 27;
	v->a[21256] = actions(71);
	v->a[21257] = 1;
	v->a[21258] = sym_comment;
	v->a[21259] = actions(2628);
	small_parse_table_1063(v);
}

void	small_parse_table_1063(t_small_parse_table_array *v)
{
	v->a[21260] = 1;
	v->a[21261] = sym_word;
	v->a[21262] = actions(2634);
	v->a[21263] = 1;
	v->a[21264] = anon_sym_LT_LT_LT;
	v->a[21265] = actions(2636);
	v->a[21266] = 1;
	v->a[21267] = anon_sym_DOLLAR_LBRACK;
	v->a[21268] = actions(2638);
	v->a[21269] = 1;
	v->a[21270] = anon_sym_DOLLAR;
	v->a[21271] = actions(2640);
	v->a[21272] = 1;
	v->a[21273] = sym__special_character;
	v->a[21274] = actions(2642);
	v->a[21275] = 1;
	v->a[21276] = anon_sym_DQUOTE;
	v->a[21277] = actions(2646);
	v->a[21278] = 1;
	v->a[21279] = aux_sym_number_token1;
	small_parse_table_1064(v);
}

void	small_parse_table_1064(t_small_parse_table_array *v)
{
	v->a[21280] = actions(2648);
	v->a[21281] = 1;
	v->a[21282] = aux_sym_number_token2;
	v->a[21283] = actions(2650);
	v->a[21284] = 1;
	v->a[21285] = anon_sym_DOLLAR_LBRACE;
	v->a[21286] = actions(2652);
	v->a[21287] = 1;
	v->a[21288] = anon_sym_DOLLAR_LPAREN;
	v->a[21289] = actions(2654);
	v->a[21290] = 1;
	v->a[21291] = anon_sym_BQUOTE;
	v->a[21292] = actions(2656);
	v->a[21293] = 1;
	v->a[21294] = anon_sym_DOLLAR_BQUOTE;
	v->a[21295] = actions(2660);
	v->a[21296] = 1;
	v->a[21297] = sym_test_operator;
	v->a[21298] = actions(2662);
	v->a[21299] = 1;
	small_parse_table_1065(v);
}

/* EOF small_parse_table_212.c */
