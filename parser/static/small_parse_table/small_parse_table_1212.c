/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1212.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6060(t_small_parse_table_array *v)
{
	v->a[121200] = 1;
	v->a[121201] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121202] = actions(6815);
	v->a[121203] = 1;
	v->a[121204] = sym__special_character;
	v->a[121205] = actions(6817);
	v->a[121206] = 1;
	v->a[121207] = anon_sym_DQUOTE;
	v->a[121208] = actions(6821);
	v->a[121209] = 1;
	v->a[121210] = anon_sym_DOLLAR_LBRACE;
	v->a[121211] = actions(6823);
	v->a[121212] = 1;
	v->a[121213] = anon_sym_BQUOTE;
	v->a[121214] = actions(6825);
	v->a[121215] = 1;
	v->a[121216] = anon_sym_DOLLAR_BQUOTE;
	v->a[121217] = actions(6827);
	v->a[121218] = 1;
	v->a[121219] = sym__comment_word;
	small_parse_table_6061(v);
}

void	small_parse_table_6061(t_small_parse_table_array *v)
{
	v->a[121220] = actions(7035);
	v->a[121221] = 1;
	v->a[121222] = anon_sym_DOLLAR;
	v->a[121223] = actions(6819);
	v->a[121224] = 3;
	v->a[121225] = sym_test_operator;
	v->a[121226] = sym__bare_dollar;
	v->a[121227] = sym_raw_string;
	v->a[121228] = state(2035);
	v->a[121229] = 7;
	v->a[121230] = sym_arithmetic_expansion;
	v->a[121231] = sym_brace_expression;
	v->a[121232] = sym_string;
	v->a[121233] = sym_number;
	v->a[121234] = sym_simple_expansion;
	v->a[121235] = sym_expansion;
	v->a[121236] = sym_command_substitution;
	v->a[121237] = 16;
	v->a[121238] = actions(3);
	v->a[121239] = 1;
	small_parse_table_6062(v);
}

void	small_parse_table_6062(t_small_parse_table_array *v)
{
	v->a[121240] = sym_comment;
	v->a[121241] = actions(5334);
	v->a[121242] = 1;
	v->a[121243] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121244] = actions(5336);
	v->a[121245] = 1;
	v->a[121246] = anon_sym_DOLLAR;
	v->a[121247] = actions(5340);
	v->a[121248] = 1;
	v->a[121249] = anon_sym_DQUOTE;
	v->a[121250] = actions(5344);
	v->a[121251] = 1;
	v->a[121252] = aux_sym_number_token1;
	v->a[121253] = actions(5346);
	v->a[121254] = 1;
	v->a[121255] = aux_sym_number_token2;
	v->a[121256] = actions(5348);
	v->a[121257] = 1;
	v->a[121258] = anon_sym_DOLLAR_LBRACE;
	v->a[121259] = actions(5350);
	small_parse_table_6063(v);
}

void	small_parse_table_6063(t_small_parse_table_array *v)
{
	v->a[121260] = 1;
	v->a[121261] = anon_sym_DOLLAR_LPAREN;
	v->a[121262] = actions(5352);
	v->a[121263] = 1;
	v->a[121264] = anon_sym_BQUOTE;
	v->a[121265] = actions(5354);
	v->a[121266] = 1;
	v->a[121267] = anon_sym_DOLLAR_BQUOTE;
	v->a[121268] = actions(5360);
	v->a[121269] = 1;
	v->a[121270] = sym__brace_start;
	v->a[121271] = actions(6833);
	v->a[121272] = 1;
	v->a[121273] = sym_word;
	v->a[121274] = actions(6837);
	v->a[121275] = 1;
	v->a[121276] = sym__special_character;
	v->a[121277] = actions(6841);
	v->a[121278] = 1;
	v->a[121279] = sym__comment_word;
	small_parse_table_6064(v);
}

void	small_parse_table_6064(t_small_parse_table_array *v)
{
	v->a[121280] = actions(6839);
	v->a[121281] = 3;
	v->a[121282] = sym_test_operator;
	v->a[121283] = sym__bare_dollar;
	v->a[121284] = sym_raw_string;
	v->a[121285] = state(1070);
	v->a[121286] = 7;
	v->a[121287] = sym_arithmetic_expansion;
	v->a[121288] = sym_brace_expression;
	v->a[121289] = sym_string;
	v->a[121290] = sym_number;
	v->a[121291] = sym_simple_expansion;
	v->a[121292] = sym_expansion;
	v->a[121293] = sym_command_substitution;
	v->a[121294] = 10;
	v->a[121295] = actions(3);
	v->a[121296] = 1;
	v->a[121297] = sym_comment;
	v->a[121298] = actions(1995);
	v->a[121299] = 1;
	small_parse_table_6065(v);
}

/* EOF small_parse_table_1212.c */
