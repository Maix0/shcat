/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_502.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2510(t_small_parse_table_array *v)
{
	v->a[50200] = anon_sym_PIPE_PIPE;
	v->a[50201] = anon_sym_AMP_AMP;
	v->a[50202] = anon_sym_PIPE;
	v->a[50203] = anon_sym_AMP;
	v->a[50204] = anon_sym_EQ_EQ;
	v->a[50205] = anon_sym_LT;
	v->a[50206] = anon_sym_GT;
	v->a[50207] = anon_sym_LT_LT;
	v->a[50208] = anon_sym_GT_GT;
	v->a[50209] = anon_sym_esac;
	v->a[50210] = anon_sym_SEMI_SEMI;
	v->a[50211] = anon_sym_SEMI_AMP;
	v->a[50212] = anon_sym_SEMI_SEMI_AMP;
	v->a[50213] = anon_sym_PIPE_AMP;
	v->a[50214] = anon_sym_EQ_TILDE;
	v->a[50215] = anon_sym_AMP_GT;
	v->a[50216] = anon_sym_AMP_GT_GT;
	v->a[50217] = anon_sym_LT_AMP;
	v->a[50218] = anon_sym_GT_AMP;
	v->a[50219] = anon_sym_GT_PIPE;
	small_parse_table_2511(v);
}

void	small_parse_table_2511(t_small_parse_table_array *v)
{
	v->a[50220] = anon_sym_LT_AMP_DASH;
	v->a[50221] = anon_sym_GT_AMP_DASH;
	v->a[50222] = anon_sym_LT_LT_DASH;
	v->a[50223] = anon_sym_LT_LT_LT;
	v->a[50224] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50225] = anon_sym_DOLLAR_LBRACK;
	v->a[50226] = anon_sym_DOLLAR;
	v->a[50227] = sym__special_character;
	v->a[50228] = anon_sym_DQUOTE;
	v->a[50229] = sym_raw_string;
	v->a[50230] = sym_ansi_c_string;
	v->a[50231] = aux_sym_number_token1;
	v->a[50232] = aux_sym_number_token2;
	v->a[50233] = anon_sym_DOLLAR_LBRACE;
	v->a[50234] = anon_sym_DOLLAR_LPAREN;
	v->a[50235] = anon_sym_BQUOTE;
	v->a[50236] = anon_sym_DOLLAR_BQUOTE;
	v->a[50237] = anon_sym_LT_LPAREN;
	v->a[50238] = anon_sym_GT_LPAREN;
	v->a[50239] = sym_word;
	small_parse_table_2512(v);
}

void	small_parse_table_2512(t_small_parse_table_array *v)
{
	v->a[50240] = 3;
	v->a[50241] = actions(3);
	v->a[50242] = 1;
	v->a[50243] = sym_comment;
	v->a[50244] = actions(1281);
	v->a[50245] = 5;
	v->a[50246] = sym_file_descriptor;
	v->a[50247] = sym_test_operator;
	v->a[50248] = sym__bare_dollar;
	v->a[50249] = sym__brace_start;
	v->a[50250] = aux_sym_heredoc_redirect_token1;
	v->a[50251] = actions(1271);
	v->a[50252] = 42;
	v->a[50253] = anon_sym_LPAREN_LPAREN;
	v->a[50254] = anon_sym_SEMI;
	v->a[50255] = anon_sym_PIPE_PIPE;
	v->a[50256] = anon_sym_AMP_AMP;
	v->a[50257] = anon_sym_PIPE;
	v->a[50258] = anon_sym_AMP;
	v->a[50259] = anon_sym_EQ_EQ;
	small_parse_table_2513(v);
}

void	small_parse_table_2513(t_small_parse_table_array *v)
{
	v->a[50260] = anon_sym_LT;
	v->a[50261] = anon_sym_GT;
	v->a[50262] = anon_sym_LT_LT;
	v->a[50263] = anon_sym_GT_GT;
	v->a[50264] = anon_sym_LPAREN;
	v->a[50265] = anon_sym_SEMI_SEMI;
	v->a[50266] = anon_sym_SEMI_AMP;
	v->a[50267] = anon_sym_SEMI_SEMI_AMP;
	v->a[50268] = anon_sym_PIPE_AMP;
	v->a[50269] = anon_sym_EQ_TILDE;
	v->a[50270] = anon_sym_AMP_GT;
	v->a[50271] = anon_sym_AMP_GT_GT;
	v->a[50272] = anon_sym_LT_AMP;
	v->a[50273] = anon_sym_GT_AMP;
	v->a[50274] = anon_sym_GT_PIPE;
	v->a[50275] = anon_sym_LT_AMP_DASH;
	v->a[50276] = anon_sym_GT_AMP_DASH;
	v->a[50277] = anon_sym_LT_LT_DASH;
	v->a[50278] = anon_sym_LT_LT_LT;
	v->a[50279] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2514(v);
}

void	small_parse_table_2514(t_small_parse_table_array *v)
{
	v->a[50280] = anon_sym_DOLLAR_LBRACK;
	v->a[50281] = anon_sym_DOLLAR;
	v->a[50282] = sym__special_character;
	v->a[50283] = anon_sym_DQUOTE;
	v->a[50284] = sym_raw_string;
	v->a[50285] = sym_ansi_c_string;
	v->a[50286] = aux_sym_number_token1;
	v->a[50287] = aux_sym_number_token2;
	v->a[50288] = anon_sym_DOLLAR_LBRACE;
	v->a[50289] = anon_sym_DOLLAR_LPAREN;
	v->a[50290] = anon_sym_BQUOTE;
	v->a[50291] = anon_sym_DOLLAR_BQUOTE;
	v->a[50292] = anon_sym_LT_LPAREN;
	v->a[50293] = anon_sym_GT_LPAREN;
	v->a[50294] = sym_word;
	v->a[50295] = 6;
	v->a[50296] = actions(3);
	v->a[50297] = 1;
	v->a[50298] = sym_comment;
	v->a[50299] = actions(5397);
	small_parse_table_2515(v);
}

/* EOF small_parse_table_502.c */
