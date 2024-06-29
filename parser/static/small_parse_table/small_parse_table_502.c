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
	v->a[50200] = anon_sym_GT_AMP;
	v->a[50201] = anon_sym_GT_PIPE;
	v->a[50202] = anon_sym_LT_AMP_DASH;
	v->a[50203] = anon_sym_GT_AMP_DASH;
	v->a[50204] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50205] = anon_sym_DOLLAR;
	v->a[50206] = anon_sym_DQUOTE;
	v->a[50207] = sym_raw_string;
	v->a[50208] = sym_number;
	v->a[50209] = anon_sym_DOLLAR_LBRACE;
	v->a[50210] = anon_sym_DOLLAR_LPAREN;
	v->a[50211] = anon_sym_BQUOTE;
	v->a[50212] = sym_word;
	v->a[50213] = 7;
	v->a[50214] = actions(3);
	v->a[50215] = 1;
	v->a[50216] = sym_comment;
	v->a[50217] = actions(1690);
	v->a[50218] = 1;
	v->a[50219] = anon_sym_LPAREN;
	small_parse_table_2511(v);
}

void	small_parse_table_2511(t_small_parse_table_array *v)
{
	v->a[50220] = actions(1693);
	v->a[50221] = 1;
	v->a[50222] = aux_sym_concatenation_token1;
	v->a[50223] = actions(1695);
	v->a[50224] = 1;
	v->a[50225] = sym__concat;
	v->a[50226] = state(802);
	v->a[50227] = 1;
	v->a[50228] = aux_sym_concatenation_repeat1;
	v->a[50229] = actions(1000);
	v->a[50230] = 2;
	v->a[50231] = sym_file_descriptor;
	v->a[50232] = sym__bare_dollar;
	v->a[50233] = actions(993);
	v->a[50234] = 24;
	v->a[50235] = anon_sym_PIPE;
	v->a[50236] = anon_sym_AMP_AMP;
	v->a[50237] = anon_sym_PIPE_PIPE;
	v->a[50238] = anon_sym_LT;
	v->a[50239] = anon_sym_GT;
	small_parse_table_2512(v);
}

void	small_parse_table_2512(t_small_parse_table_array *v)
{
	v->a[50240] = anon_sym_GT_GT;
	v->a[50241] = anon_sym_AMP_GT;
	v->a[50242] = anon_sym_AMP_GT_GT;
	v->a[50243] = anon_sym_LT_AMP;
	v->a[50244] = anon_sym_GT_AMP;
	v->a[50245] = anon_sym_GT_PIPE;
	v->a[50246] = anon_sym_LT_AMP_DASH;
	v->a[50247] = anon_sym_GT_AMP_DASH;
	v->a[50248] = anon_sym_LT_LT;
	v->a[50249] = anon_sym_LT_LT_DASH;
	v->a[50250] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50251] = anon_sym_DOLLAR;
	v->a[50252] = anon_sym_DQUOTE;
	v->a[50253] = sym_raw_string;
	v->a[50254] = sym_number;
	v->a[50255] = anon_sym_DOLLAR_LBRACE;
	v->a[50256] = anon_sym_DOLLAR_LPAREN;
	v->a[50257] = anon_sym_BQUOTE;
	v->a[50258] = sym_word;
	v->a[50259] = 4;
	small_parse_table_2513(v);
}

void	small_parse_table_2513(t_small_parse_table_array *v)
{
	v->a[50260] = actions(3);
	v->a[50261] = 1;
	v->a[50262] = sym_comment;
	v->a[50263] = actions(1697);
	v->a[50264] = 1;
	v->a[50265] = ts_builtin_sym_end;
	v->a[50266] = actions(1524);
	v->a[50267] = 2;
	v->a[50268] = sym_file_descriptor;
	v->a[50269] = sym_variable_name;
	v->a[50270] = actions(1520);
	v->a[50271] = 27;
	v->a[50272] = anon_sym_for;
	v->a[50273] = anon_sym_while;
	v->a[50274] = anon_sym_until;
	v->a[50275] = anon_sym_if;
	v->a[50276] = anon_sym_case;
	v->a[50277] = anon_sym_LPAREN;
	v->a[50278] = anon_sym_LBRACE;
	v->a[50279] = anon_sym_BANG;
	small_parse_table_2514(v);
}

void	small_parse_table_2514(t_small_parse_table_array *v)
{
	v->a[50280] = anon_sym_LT;
	v->a[50281] = anon_sym_GT;
	v->a[50282] = anon_sym_GT_GT;
	v->a[50283] = anon_sym_AMP_GT;
	v->a[50284] = anon_sym_AMP_GT_GT;
	v->a[50285] = anon_sym_LT_AMP;
	v->a[50286] = anon_sym_GT_AMP;
	v->a[50287] = anon_sym_GT_PIPE;
	v->a[50288] = anon_sym_LT_AMP_DASH;
	v->a[50289] = anon_sym_GT_AMP_DASH;
	v->a[50290] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50291] = anon_sym_DOLLAR;
	v->a[50292] = anon_sym_DQUOTE;
	v->a[50293] = sym_raw_string;
	v->a[50294] = sym_number;
	v->a[50295] = anon_sym_DOLLAR_LBRACE;
	v->a[50296] = anon_sym_DOLLAR_LPAREN;
	v->a[50297] = anon_sym_BQUOTE;
	v->a[50298] = sym_word;
	v->a[50299] = 3;
	small_parse_table_2515(v);
}

/* EOF small_parse_table_502.c */
