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
	v->a[121200] = anon_sym_PIPE_PIPE;
	v->a[121201] = anon_sym_AMP_AMP;
	v->a[121202] = anon_sym_PIPE;
	v->a[121203] = anon_sym_AMP;
	v->a[121204] = anon_sym_LT;
	v->a[121205] = anon_sym_GT;
	v->a[121206] = anon_sym_LT_LT;
	v->a[121207] = anon_sym_GT_GT;
	v->a[121208] = anon_sym_SEMI_SEMI;
	v->a[121209] = anon_sym_PIPE_AMP;
	v->a[121210] = anon_sym_AMP_GT;
	v->a[121211] = anon_sym_AMP_GT_GT;
	v->a[121212] = anon_sym_LT_AMP;
	v->a[121213] = anon_sym_GT_AMP;
	v->a[121214] = anon_sym_GT_PIPE;
	v->a[121215] = anon_sym_LT_AMP_DASH;
	v->a[121216] = anon_sym_GT_AMP_DASH;
	v->a[121217] = anon_sym_LT_LT_DASH;
	v->a[121218] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121219] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_6061(v);
}

void	small_parse_table_6061(t_small_parse_table_array *v)
{
	v->a[121220] = anon_sym_DOLLAR;
	v->a[121221] = anon_sym_DQUOTE;
	v->a[121222] = sym_raw_string;
	v->a[121223] = sym_ansi_c_string;
	v->a[121224] = aux_sym_number_token1;
	v->a[121225] = aux_sym_number_token2;
	v->a[121226] = anon_sym_DOLLAR_LBRACE;
	v->a[121227] = anon_sym_DOLLAR_LPAREN;
	v->a[121228] = anon_sym_BQUOTE;
	v->a[121229] = anon_sym_DOLLAR_BQUOTE;
	v->a[121230] = anon_sym_LT_LPAREN;
	v->a[121231] = anon_sym_GT_LPAREN;
	v->a[121232] = sym_word;
	v->a[121233] = 3;
	v->a[121234] = actions(71);
	v->a[121235] = 1;
	v->a[121236] = sym_comment;
	v->a[121237] = actions(1304);
	v->a[121238] = 14;
	v->a[121239] = anon_sym_EQ;
	small_parse_table_6062(v);
}

void	small_parse_table_6062(t_small_parse_table_array *v)
{
	v->a[121240] = anon_sym_PIPE;
	v->a[121241] = anon_sym_CARET;
	v->a[121242] = anon_sym_AMP;
	v->a[121243] = anon_sym_LT;
	v->a[121244] = anon_sym_GT;
	v->a[121245] = anon_sym_LT_LT;
	v->a[121246] = anon_sym_GT_GT;
	v->a[121247] = anon_sym_PLUS;
	v->a[121248] = anon_sym_DASH;
	v->a[121249] = anon_sym_STAR;
	v->a[121250] = anon_sym_SLASH;
	v->a[121251] = anon_sym_PERCENT;
	v->a[121252] = anon_sym_STAR_STAR;
	v->a[121253] = actions(1306);
	v->a[121254] = 28;
	v->a[121255] = sym__concat;
	v->a[121256] = sym_test_operator;
	v->a[121257] = anon_sym_RPAREN_RPAREN;
	v->a[121258] = anon_sym_COMMA;
	v->a[121259] = anon_sym_PLUS_PLUS;
	small_parse_table_6063(v);
}

void	small_parse_table_6063(t_small_parse_table_array *v)
{
	v->a[121260] = anon_sym_DASH_DASH;
	v->a[121261] = anon_sym_PLUS_EQ;
	v->a[121262] = anon_sym_DASH_EQ;
	v->a[121263] = anon_sym_STAR_EQ;
	v->a[121264] = anon_sym_SLASH_EQ;
	v->a[121265] = anon_sym_PERCENT_EQ;
	v->a[121266] = anon_sym_STAR_STAR_EQ;
	v->a[121267] = anon_sym_LT_LT_EQ;
	v->a[121268] = anon_sym_GT_GT_EQ;
	v->a[121269] = anon_sym_AMP_EQ;
	v->a[121270] = anon_sym_CARET_EQ;
	v->a[121271] = anon_sym_PIPE_EQ;
	v->a[121272] = anon_sym_PIPE_PIPE;
	v->a[121273] = anon_sym_AMP_AMP;
	v->a[121274] = anon_sym_EQ_EQ;
	v->a[121275] = anon_sym_BANG_EQ;
	v->a[121276] = anon_sym_LT_EQ;
	v->a[121277] = anon_sym_GT_EQ;
	v->a[121278] = anon_sym_RBRACK_RBRACK;
	v->a[121279] = anon_sym_EQ_TILDE;
	small_parse_table_6064(v);
}

void	small_parse_table_6064(t_small_parse_table_array *v)
{
	v->a[121280] = anon_sym_QMARK;
	v->a[121281] = anon_sym_COLON;
	v->a[121282] = aux_sym_concatenation_token1;
	v->a[121283] = 3;
	v->a[121284] = actions(71);
	v->a[121285] = 1;
	v->a[121286] = sym_comment;
	v->a[121287] = actions(1336);
	v->a[121288] = 15;
	v->a[121289] = anon_sym_PIPE;
	v->a[121290] = anon_sym_EQ_EQ;
	v->a[121291] = anon_sym_LT;
	v->a[121292] = anon_sym_GT;
	v->a[121293] = anon_sym_LT_LT;
	v->a[121294] = anon_sym_EQ_TILDE;
	v->a[121295] = anon_sym_AMP_GT;
	v->a[121296] = anon_sym_LT_AMP;
	v->a[121297] = anon_sym_GT_AMP;
	v->a[121298] = anon_sym_DOLLAR;
	v->a[121299] = aux_sym_number_token1;
	small_parse_table_6065(v);
}

/* EOF small_parse_table_1212.c */
