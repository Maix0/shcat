/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_342.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1710(t_small_parse_table_array *v)
{
	v->a[34200] = 5;
	v->a[34201] = sym_file_descriptor;
	v->a[34202] = sym__concat;
	v->a[34203] = sym_test_operator;
	v->a[34204] = sym__brace_start;
	v->a[34205] = aux_sym_heredoc_redirect_token1;
	v->a[34206] = actions(3022);
	v->a[34207] = 35;
	v->a[34208] = anon_sym_esac;
	v->a[34209] = anon_sym_PIPE;
	v->a[34210] = anon_sym_SEMI_SEMI;
	v->a[34211] = anon_sym_SEMI_AMP;
	v->a[34212] = anon_sym_SEMI_SEMI_AMP;
	v->a[34213] = anon_sym_PIPE_AMP;
	v->a[34214] = anon_sym_AMP_AMP;
	v->a[34215] = anon_sym_PIPE_PIPE;
	v->a[34216] = anon_sym_LT;
	v->a[34217] = anon_sym_GT;
	v->a[34218] = anon_sym_GT_GT;
	v->a[34219] = anon_sym_AMP_GT;
	small_parse_table_1711(v);
}

void	small_parse_table_1711(t_small_parse_table_array *v)
{
	v->a[34220] = anon_sym_AMP_GT_GT;
	v->a[34221] = anon_sym_LT_AMP;
	v->a[34222] = anon_sym_GT_AMP;
	v->a[34223] = anon_sym_GT_PIPE;
	v->a[34224] = anon_sym_LT_AMP_DASH;
	v->a[34225] = anon_sym_GT_AMP_DASH;
	v->a[34226] = anon_sym_LT_LT;
	v->a[34227] = anon_sym_LT_LT_DASH;
	v->a[34228] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34229] = anon_sym_AMP;
	v->a[34230] = aux_sym_concatenation_token1;
	v->a[34231] = anon_sym_DOLLAR;
	v->a[34232] = sym__special_character;
	v->a[34233] = anon_sym_DQUOTE;
	v->a[34234] = sym_raw_string;
	v->a[34235] = aux_sym_number_token1;
	v->a[34236] = aux_sym_number_token2;
	v->a[34237] = anon_sym_DOLLAR_LBRACE;
	v->a[34238] = anon_sym_DOLLAR_LPAREN;
	v->a[34239] = anon_sym_BQUOTE;
	small_parse_table_1712(v);
}

void	small_parse_table_1712(t_small_parse_table_array *v)
{
	v->a[34240] = anon_sym_DOLLAR_BQUOTE;
	v->a[34241] = sym_word;
	v->a[34242] = anon_sym_SEMI;
	v->a[34243] = 6;
	v->a[34244] = actions(3);
	v->a[34245] = 1;
	v->a[34246] = sym_comment;
	v->a[34247] = actions(3427);
	v->a[34248] = 1;
	v->a[34249] = aux_sym_concatenation_token1;
	v->a[34250] = actions(3429);
	v->a[34251] = 1;
	v->a[34252] = sym__concat;
	v->a[34253] = state(798);
	v->a[34254] = 1;
	v->a[34255] = aux_sym_concatenation_repeat1;
	v->a[34256] = actions(2664);
	v->a[34257] = 5;
	v->a[34258] = sym_file_descriptor;
	v->a[34259] = sym_test_operator;
	small_parse_table_1713(v);
}

void	small_parse_table_1713(t_small_parse_table_array *v)
{
	v->a[34260] = sym__bare_dollar;
	v->a[34261] = sym__brace_start;
	v->a[34262] = aux_sym_heredoc_redirect_token1;
	v->a[34263] = actions(2662);
	v->a[34264] = 32;
	v->a[34265] = anon_sym_PIPE;
	v->a[34266] = anon_sym_RPAREN;
	v->a[34267] = anon_sym_SEMI_SEMI;
	v->a[34268] = anon_sym_PIPE_AMP;
	v->a[34269] = anon_sym_AMP_AMP;
	v->a[34270] = anon_sym_PIPE_PIPE;
	v->a[34271] = anon_sym_LT;
	v->a[34272] = anon_sym_GT;
	v->a[34273] = anon_sym_GT_GT;
	v->a[34274] = anon_sym_AMP_GT;
	v->a[34275] = anon_sym_AMP_GT_GT;
	v->a[34276] = anon_sym_LT_AMP;
	v->a[34277] = anon_sym_GT_AMP;
	v->a[34278] = anon_sym_GT_PIPE;
	v->a[34279] = anon_sym_LT_AMP_DASH;
	small_parse_table_1714(v);
}

void	small_parse_table_1714(t_small_parse_table_array *v)
{
	v->a[34280] = anon_sym_GT_AMP_DASH;
	v->a[34281] = anon_sym_LT_LT;
	v->a[34282] = anon_sym_LT_LT_DASH;
	v->a[34283] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34284] = anon_sym_AMP;
	v->a[34285] = anon_sym_DOLLAR;
	v->a[34286] = sym__special_character;
	v->a[34287] = anon_sym_DQUOTE;
	v->a[34288] = sym_raw_string;
	v->a[34289] = aux_sym_number_token1;
	v->a[34290] = aux_sym_number_token2;
	v->a[34291] = anon_sym_DOLLAR_LBRACE;
	v->a[34292] = anon_sym_DOLLAR_LPAREN;
	v->a[34293] = anon_sym_BQUOTE;
	v->a[34294] = anon_sym_DOLLAR_BQUOTE;
	v->a[34295] = sym_word;
	v->a[34296] = anon_sym_SEMI;
	v->a[34297] = 3;
	v->a[34298] = actions(3);
	v->a[34299] = 1;
	small_parse_table_1715(v);
}

/* EOF small_parse_table_342.c */
