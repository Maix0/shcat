/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1082.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5410(t_small_parse_table_array *v)
{
	v->a[108200] = sym_comment;
	v->a[108201] = actions(5826);
	v->a[108202] = 1;
	v->a[108203] = aux_sym_heredoc_redirect_token1;
	v->a[108204] = actions(5828);
	v->a[108205] = 1;
	v->a[108206] = sym_file_descriptor;
	v->a[108207] = actions(6219);
	v->a[108208] = 1;
	v->a[108209] = anon_sym_RPAREN;
	v->a[108210] = actions(5831);
	v->a[108211] = 3;
	v->a[108212] = sym_variable_name;
	v->a[108213] = sym_test_operator;
	v->a[108214] = sym__brace_start;
	v->a[108215] = actions(5821);
	v->a[108216] = 9;
	v->a[108217] = anon_sym_SEMI;
	v->a[108218] = anon_sym_PIPE_PIPE;
	v->a[108219] = anon_sym_AMP_AMP;
	small_parse_table_5411(v);
}

void	small_parse_table_5411(t_small_parse_table_array *v)
{
	v->a[108220] = anon_sym_PIPE;
	v->a[108221] = anon_sym_AMP;
	v->a[108222] = anon_sym_LT_LT;
	v->a[108223] = anon_sym_SEMI_SEMI;
	v->a[108224] = anon_sym_PIPE_AMP;
	v->a[108225] = anon_sym_LT_LT_DASH;
	v->a[108226] = actions(5823);
	v->a[108227] = 11;
	v->a[108228] = anon_sym_LT;
	v->a[108229] = anon_sym_GT;
	v->a[108230] = anon_sym_GT_GT;
	v->a[108231] = anon_sym_AMP_GT;
	v->a[108232] = anon_sym_AMP_GT_GT;
	v->a[108233] = anon_sym_LT_AMP;
	v->a[108234] = anon_sym_GT_AMP;
	v->a[108235] = anon_sym_GT_PIPE;
	v->a[108236] = anon_sym_LT_AMP_DASH;
	v->a[108237] = anon_sym_GT_AMP_DASH;
	v->a[108238] = anon_sym_LT_LT_LT;
	v->a[108239] = actions(5819);
	small_parse_table_5412(v);
}

void	small_parse_table_5412(t_small_parse_table_array *v)
{
	v->a[108240] = 17;
	v->a[108241] = anon_sym_LPAREN_LPAREN;
	v->a[108242] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108243] = anon_sym_DOLLAR_LBRACK;
	v->a[108244] = anon_sym_DOLLAR;
	v->a[108245] = sym__special_character;
	v->a[108246] = anon_sym_DQUOTE;
	v->a[108247] = sym_raw_string;
	v->a[108248] = sym_ansi_c_string;
	v->a[108249] = aux_sym_number_token1;
	v->a[108250] = aux_sym_number_token2;
	v->a[108251] = anon_sym_DOLLAR_LBRACE;
	v->a[108252] = anon_sym_DOLLAR_LPAREN;
	v->a[108253] = anon_sym_BQUOTE;
	v->a[108254] = anon_sym_DOLLAR_BQUOTE;
	v->a[108255] = anon_sym_LT_LPAREN;
	v->a[108256] = anon_sym_GT_LPAREN;
	v->a[108257] = sym_word;
	v->a[108258] = 3;
	v->a[108259] = actions(3);
	small_parse_table_5413(v);
}

void	small_parse_table_5413(t_small_parse_table_array *v)
{
	v->a[108260] = 1;
	v->a[108261] = sym_comment;
	v->a[108262] = actions(1350);
	v->a[108263] = 5;
	v->a[108264] = sym_file_descriptor;
	v->a[108265] = sym__concat;
	v->a[108266] = sym_test_operator;
	v->a[108267] = sym__brace_start;
	v->a[108268] = aux_sym_heredoc_redirect_token1;
	v->a[108269] = actions(1348);
	v->a[108270] = 38;
	v->a[108271] = anon_sym_LPAREN_LPAREN;
	v->a[108272] = anon_sym_SEMI;
	v->a[108273] = anon_sym_PIPE_PIPE;
	v->a[108274] = anon_sym_AMP_AMP;
	v->a[108275] = anon_sym_PIPE;
	v->a[108276] = anon_sym_AMP;
	v->a[108277] = anon_sym_LT;
	v->a[108278] = anon_sym_GT;
	v->a[108279] = anon_sym_LT_LT;
	small_parse_table_5414(v);
}

void	small_parse_table_5414(t_small_parse_table_array *v)
{
	v->a[108280] = anon_sym_GT_GT;
	v->a[108281] = anon_sym_RPAREN;
	v->a[108282] = anon_sym_SEMI_SEMI;
	v->a[108283] = anon_sym_PIPE_AMP;
	v->a[108284] = anon_sym_AMP_GT;
	v->a[108285] = anon_sym_AMP_GT_GT;
	v->a[108286] = anon_sym_LT_AMP;
	v->a[108287] = anon_sym_GT_AMP;
	v->a[108288] = anon_sym_GT_PIPE;
	v->a[108289] = anon_sym_LT_AMP_DASH;
	v->a[108290] = anon_sym_GT_AMP_DASH;
	v->a[108291] = anon_sym_LT_LT_DASH;
	v->a[108292] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108293] = anon_sym_DOLLAR_LBRACK;
	v->a[108294] = aux_sym_concatenation_token1;
	v->a[108295] = anon_sym_DOLLAR;
	v->a[108296] = sym__special_character;
	v->a[108297] = anon_sym_DQUOTE;
	v->a[108298] = sym_raw_string;
	v->a[108299] = sym_ansi_c_string;
	small_parse_table_5415(v);
}

/* EOF small_parse_table_1082.c */
