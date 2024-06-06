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
	v->a[50200] = anon_sym_LT_AMP_DASH;
	v->a[50201] = anon_sym_GT_AMP_DASH;
	v->a[50202] = anon_sym_LT_LT;
	v->a[50203] = anon_sym_LT_LT_DASH;
	v->a[50204] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50205] = anon_sym_AMP;
	v->a[50206] = aux_sym_concatenation_token1;
	v->a[50207] = anon_sym_DOLLAR;
	v->a[50208] = sym__special_character;
	v->a[50209] = anon_sym_DQUOTE;
	v->a[50210] = sym_raw_string;
	v->a[50211] = aux_sym_number_token1;
	v->a[50212] = aux_sym_number_token2;
	v->a[50213] = anon_sym_DOLLAR_LBRACE;
	v->a[50214] = anon_sym_DOLLAR_LPAREN;
	v->a[50215] = anon_sym_BQUOTE;
	v->a[50216] = anon_sym_DOLLAR_BQUOTE;
	v->a[50217] = sym_word;
	v->a[50218] = anon_sym_SEMI;
	v->a[50219] = 3;
	small_parse_table_2511(v);
}

void	small_parse_table_2511(t_small_parse_table_array *v)
{
	v->a[50220] = actions(3);
	v->a[50221] = 1;
	v->a[50222] = sym_comment;
	v->a[50223] = actions(3159);
	v->a[50224] = 7;
	v->a[50225] = sym_file_descriptor;
	v->a[50226] = sym__concat;
	v->a[50227] = sym_variable_name;
	v->a[50228] = sym_test_operator;
	v->a[50229] = sym__brace_start;
	v->a[50230] = ts_builtin_sym_end;
	v->a[50231] = aux_sym_heredoc_redirect_token1;
	v->a[50232] = actions(3157);
	v->a[50233] = 32;
	v->a[50234] = anon_sym_PIPE;
	v->a[50235] = anon_sym_SEMI_SEMI;
	v->a[50236] = anon_sym_PIPE_AMP;
	v->a[50237] = anon_sym_AMP_AMP;
	v->a[50238] = anon_sym_PIPE_PIPE;
	v->a[50239] = anon_sym_LT;
	small_parse_table_2512(v);
}

void	small_parse_table_2512(t_small_parse_table_array *v)
{
	v->a[50240] = anon_sym_GT;
	v->a[50241] = anon_sym_GT_GT;
	v->a[50242] = anon_sym_AMP_GT;
	v->a[50243] = anon_sym_AMP_GT_GT;
	v->a[50244] = anon_sym_LT_AMP;
	v->a[50245] = anon_sym_GT_AMP;
	v->a[50246] = anon_sym_GT_PIPE;
	v->a[50247] = anon_sym_LT_AMP_DASH;
	v->a[50248] = anon_sym_GT_AMP_DASH;
	v->a[50249] = anon_sym_LT_LT;
	v->a[50250] = anon_sym_LT_LT_DASH;
	v->a[50251] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50252] = anon_sym_AMP;
	v->a[50253] = aux_sym_concatenation_token1;
	v->a[50254] = anon_sym_DOLLAR;
	v->a[50255] = sym__special_character;
	v->a[50256] = anon_sym_DQUOTE;
	v->a[50257] = sym_raw_string;
	v->a[50258] = aux_sym_number_token1;
	v->a[50259] = aux_sym_number_token2;
	small_parse_table_2513(v);
}

void	small_parse_table_2513(t_small_parse_table_array *v)
{
	v->a[50260] = anon_sym_DOLLAR_LBRACE;
	v->a[50261] = anon_sym_DOLLAR_LPAREN;
	v->a[50262] = anon_sym_BQUOTE;
	v->a[50263] = anon_sym_DOLLAR_BQUOTE;
	v->a[50264] = sym_word;
	v->a[50265] = anon_sym_SEMI;
	v->a[50266] = 3;
	v->a[50267] = actions(3);
	v->a[50268] = 1;
	v->a[50269] = sym_comment;
	v->a[50270] = actions(2774);
	v->a[50271] = 7;
	v->a[50272] = sym_file_descriptor;
	v->a[50273] = sym__concat;
	v->a[50274] = sym_test_operator;
	v->a[50275] = sym__bare_dollar;
	v->a[50276] = sym__brace_start;
	v->a[50277] = ts_builtin_sym_end;
	v->a[50278] = aux_sym_heredoc_redirect_token1;
	v->a[50279] = actions(2772);
	small_parse_table_2514(v);
}

void	small_parse_table_2514(t_small_parse_table_array *v)
{
	v->a[50280] = 32;
	v->a[50281] = anon_sym_PIPE;
	v->a[50282] = anon_sym_SEMI_SEMI;
	v->a[50283] = anon_sym_PIPE_AMP;
	v->a[50284] = anon_sym_AMP_AMP;
	v->a[50285] = anon_sym_PIPE_PIPE;
	v->a[50286] = anon_sym_LT;
	v->a[50287] = anon_sym_GT;
	v->a[50288] = anon_sym_GT_GT;
	v->a[50289] = anon_sym_AMP_GT;
	v->a[50290] = anon_sym_AMP_GT_GT;
	v->a[50291] = anon_sym_LT_AMP;
	v->a[50292] = anon_sym_GT_AMP;
	v->a[50293] = anon_sym_GT_PIPE;
	v->a[50294] = anon_sym_LT_AMP_DASH;
	v->a[50295] = anon_sym_GT_AMP_DASH;
	v->a[50296] = anon_sym_LT_LT;
	v->a[50297] = anon_sym_LT_LT_DASH;
	v->a[50298] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50299] = anon_sym_AMP;
	small_parse_table_2515(v);
}

/* EOF small_parse_table_502.c */
