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
	v->a[50200] = aux_sym_redirected_statement_repeat1;
	v->a[50201] = actions(1603);
	v->a[50202] = 7;
	v->a[50203] = anon_sym_LT;
	v->a[50204] = anon_sym_GT;
	v->a[50205] = anon_sym_GT_GT;
	v->a[50206] = anon_sym_LT_AMP;
	v->a[50207] = anon_sym_GT_AMP;
	v->a[50208] = anon_sym_GT_PIPE;
	v->a[50209] = anon_sym_LT_GT;
	v->a[50210] = 9;
	v->a[50211] = actions(3);
	v->a[50212] = 1;
	v->a[50213] = sym_comment;
	v->a[50214] = actions(752);
	v->a[50215] = 1;
	v->a[50216] = anon_sym_SEMI;
	v->a[50217] = actions(1595);
	v->a[50218] = 1;
	v->a[50219] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2511(v);
}

void	small_parse_table_2511(t_small_parse_table_array *v)
{
	v->a[50220] = state(507);
	v->a[50221] = 1;
	v->a[50222] = sym_terminator;
	v->a[50223] = actions(744);
	v->a[50224] = 2;
	v->a[50225] = anon_sym_esac;
	v->a[50226] = anon_sym_SEMI_SEMI;
	v->a[50227] = actions(748);
	v->a[50228] = 2;
	v->a[50229] = anon_sym_AMP_AMP;
	v->a[50230] = anon_sym_PIPE_PIPE;
	v->a[50231] = actions(750);
	v->a[50232] = 2;
	v->a[50233] = anon_sym_LT_LT;
	v->a[50234] = anon_sym_LT_LT_DASH;
	v->a[50235] = state(931);
	v->a[50236] = 3;
	v->a[50237] = sym_file_redirect;
	v->a[50238] = sym_heredoc_redirect;
	v->a[50239] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2512(v);
}

void	small_parse_table_2512(t_small_parse_table_array *v)
{
	v->a[50240] = actions(1593);
	v->a[50241] = 7;
	v->a[50242] = anon_sym_LT;
	v->a[50243] = anon_sym_GT;
	v->a[50244] = anon_sym_GT_GT;
	v->a[50245] = anon_sym_LT_AMP;
	v->a[50246] = anon_sym_GT_AMP;
	v->a[50247] = anon_sym_GT_PIPE;
	v->a[50248] = anon_sym_LT_GT;
	v->a[50249] = 4;
	v->a[50250] = actions(3);
	v->a[50251] = 1;
	v->a[50252] = sym_comment;
	v->a[50253] = actions(1185);
	v->a[50254] = 1;
	v->a[50255] = sym_variable_name;
	v->a[50256] = state(1162);
	v->a[50257] = 2;
	v->a[50258] = sym_variable_assignment;
	v->a[50259] = aux_sym__variable_assignments_repeat1;
	small_parse_table_2513(v);
}

void	small_parse_table_2513(t_small_parse_table_array *v)
{
	v->a[50260] = actions(742);
	v->a[50261] = 16;
	v->a[50262] = anon_sym_LT;
	v->a[50263] = anon_sym_GT;
	v->a[50264] = anon_sym_GT_GT;
	v->a[50265] = anon_sym_LT_AMP;
	v->a[50266] = anon_sym_GT_AMP;
	v->a[50267] = anon_sym_GT_PIPE;
	v->a[50268] = anon_sym_LT_GT;
	v->a[50269] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50270] = anon_sym_DOLLAR;
	v->a[50271] = anon_sym_DQUOTE;
	v->a[50272] = sym_raw_string;
	v->a[50273] = sym_number;
	v->a[50274] = anon_sym_DOLLAR_LBRACE;
	v->a[50275] = anon_sym_DOLLAR_LPAREN;
	v->a[50276] = anon_sym_BQUOTE;
	v->a[50277] = sym_word;
	v->a[50278] = 3;
	v->a[50279] = actions(3);
	small_parse_table_2514(v);
}

void	small_parse_table_2514(t_small_parse_table_array *v)
{
	v->a[50280] = 1;
	v->a[50281] = sym_comment;
	v->a[50282] = actions(1147);
	v->a[50283] = 3;
	v->a[50284] = sym__concat;
	v->a[50285] = sym_variable_name;
	v->a[50286] = aux_sym_heredoc_redirect_token1;
	v->a[50287] = actions(1145);
	v->a[50288] = 16;
	v->a[50289] = anon_sym_esac;
	v->a[50290] = anon_sym_PIPE;
	v->a[50291] = anon_sym_SEMI_SEMI;
	v->a[50292] = anon_sym_AMP_AMP;
	v->a[50293] = anon_sym_PIPE_PIPE;
	v->a[50294] = anon_sym_LT;
	v->a[50295] = anon_sym_GT;
	v->a[50296] = anon_sym_GT_GT;
	v->a[50297] = anon_sym_LT_AMP;
	v->a[50298] = anon_sym_GT_AMP;
	v->a[50299] = anon_sym_GT_PIPE;
	small_parse_table_2515(v);
}

/* EOF small_parse_table_502.c */
