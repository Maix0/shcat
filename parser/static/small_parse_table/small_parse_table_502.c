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
	v->a[50200] = sym_file_descriptor;
	v->a[50201] = sym__bare_dollar;
	v->a[50202] = actions(984);
	v->a[50203] = 25;
	v->a[50204] = anon_sym_PIPE;
	v->a[50205] = anon_sym_AMP_AMP;
	v->a[50206] = anon_sym_PIPE_PIPE;
	v->a[50207] = anon_sym_LT;
	v->a[50208] = anon_sym_GT;
	v->a[50209] = anon_sym_GT_GT;
	v->a[50210] = anon_sym_AMP_GT;
	v->a[50211] = anon_sym_AMP_GT_GT;
	v->a[50212] = anon_sym_LT_AMP;
	v->a[50213] = anon_sym_GT_AMP;
	v->a[50214] = anon_sym_GT_PIPE;
	v->a[50215] = anon_sym_LT_AMP_DASH;
	v->a[50216] = anon_sym_GT_AMP_DASH;
	v->a[50217] = anon_sym_LT_LT;
	v->a[50218] = anon_sym_LT_LT_DASH;
	v->a[50219] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2511(v);
}

void	small_parse_table_2511(t_small_parse_table_array *v)
{
	v->a[50220] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50221] = anon_sym_DOLLAR;
	v->a[50222] = anon_sym_DQUOTE;
	v->a[50223] = sym_raw_string;
	v->a[50224] = sym_number;
	v->a[50225] = anon_sym_DOLLAR_LBRACE;
	v->a[50226] = anon_sym_DOLLAR_LPAREN;
	v->a[50227] = anon_sym_BQUOTE;
	v->a[50228] = sym_word;
	v->a[50229] = 6;
	v->a[50230] = actions(3);
	v->a[50231] = 1;
	v->a[50232] = sym_comment;
	v->a[50233] = actions(379);
	v->a[50234] = 1;
	v->a[50235] = sym_file_descriptor;
	v->a[50236] = actions(1660);
	v->a[50237] = 1;
	v->a[50238] = sym_variable_name;
	v->a[50239] = actions(1658);
	small_parse_table_2512(v);
}

void	small_parse_table_2512(t_small_parse_table_array *v)
{
	v->a[50240] = 2;
	v->a[50241] = aux_sym__simple_variable_name_token1;
	v->a[50242] = aux_sym__multiline_variable_name_token1;
	v->a[50243] = actions(1656);
	v->a[50244] = 9;
	v->a[50245] = anon_sym_BANG;
	v->a[50246] = anon_sym_DASH;
	v->a[50247] = anon_sym_STAR;
	v->a[50248] = anon_sym_QMARK;
	v->a[50249] = anon_sym_DOLLAR;
	v->a[50250] = anon_sym_POUND;
	v->a[50251] = anon_sym_AT;
	v->a[50252] = anon_sym_0;
	v->a[50253] = anon_sym__;
	v->a[50254] = actions(381);
	v->a[50255] = 18;
	v->a[50256] = anon_sym_LT;
	v->a[50257] = anon_sym_GT;
	v->a[50258] = anon_sym_GT_GT;
	v->a[50259] = anon_sym_AMP_GT;
	small_parse_table_2513(v);
}

void	small_parse_table_2513(t_small_parse_table_array *v)
{
	v->a[50260] = anon_sym_AMP_GT_GT;
	v->a[50261] = anon_sym_LT_AMP;
	v->a[50262] = anon_sym_GT_AMP;
	v->a[50263] = anon_sym_GT_PIPE;
	v->a[50264] = anon_sym_LT_AMP_DASH;
	v->a[50265] = anon_sym_GT_AMP_DASH;
	v->a[50266] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50267] = anon_sym_DQUOTE;
	v->a[50268] = sym_raw_string;
	v->a[50269] = sym_number;
	v->a[50270] = anon_sym_DOLLAR_LBRACE;
	v->a[50271] = anon_sym_DOLLAR_LPAREN;
	v->a[50272] = anon_sym_BQUOTE;
	v->a[50273] = sym_word;
	v->a[50274] = 4;
	v->a[50275] = actions(3);
	v->a[50276] = 1;
	v->a[50277] = sym_comment;
	v->a[50278] = actions(1554);
	v->a[50279] = 2;
	small_parse_table_2514(v);
}

void	small_parse_table_2514(t_small_parse_table_array *v)
{
	v->a[50280] = anon_sym_RPAREN;
	v->a[50281] = anon_sym_SEMI_SEMI;
	v->a[50282] = actions(1556);
	v->a[50283] = 2;
	v->a[50284] = sym_file_descriptor;
	v->a[50285] = sym_variable_name;
	v->a[50286] = actions(1552);
	v->a[50287] = 27;
	v->a[50288] = anon_sym_for;
	v->a[50289] = anon_sym_while;
	v->a[50290] = anon_sym_until;
	v->a[50291] = anon_sym_if;
	v->a[50292] = anon_sym_case;
	v->a[50293] = anon_sym_LPAREN;
	v->a[50294] = anon_sym_LBRACE;
	v->a[50295] = anon_sym_BANG;
	v->a[50296] = anon_sym_LT;
	v->a[50297] = anon_sym_GT;
	v->a[50298] = anon_sym_GT_GT;
	v->a[50299] = anon_sym_AMP_GT;
	small_parse_table_2515(v);
}

/* EOF small_parse_table_502.c */
