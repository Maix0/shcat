/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_313.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1565(t_small_parse_table_array *v)
{
	v->a[31300] = anon_sym_PIPE;
	v->a[31301] = anon_sym_RPAREN;
	v->a[31302] = anon_sym_SEMI_SEMI;
	v->a[31303] = anon_sym_AMP_AMP;
	v->a[31304] = anon_sym_PIPE_PIPE;
	v->a[31305] = anon_sym_LT;
	v->a[31306] = anon_sym_GT;
	v->a[31307] = anon_sym_GT_GT;
	v->a[31308] = anon_sym_AMP_GT;
	v->a[31309] = anon_sym_AMP_GT_GT;
	v->a[31310] = anon_sym_LT_AMP;
	v->a[31311] = anon_sym_GT_AMP;
	v->a[31312] = anon_sym_GT_PIPE;
	v->a[31313] = anon_sym_LT_AMP_DASH;
	v->a[31314] = anon_sym_GT_AMP_DASH;
	v->a[31315] = anon_sym_LT_LT;
	v->a[31316] = anon_sym_LT_LT_DASH;
	v->a[31317] = aux_sym_heredoc_redirect_token1;
	v->a[31318] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31319] = anon_sym_AMP;
	small_parse_table_1566(v);
}

void	small_parse_table_1566(t_small_parse_table_array *v)
{
	v->a[31320] = aux_sym_concatenation_token1;
	v->a[31321] = anon_sym_DOLLAR;
	v->a[31322] = anon_sym_DQUOTE;
	v->a[31323] = sym_raw_string;
	v->a[31324] = sym_number;
	v->a[31325] = anon_sym_DOLLAR_LBRACE;
	v->a[31326] = anon_sym_DOLLAR_LPAREN;
	v->a[31327] = anon_sym_BQUOTE;
	v->a[31328] = sym_word;
	v->a[31329] = anon_sym_SEMI;
	v->a[31330] = 6;
	v->a[31331] = actions(3);
	v->a[31332] = 1;
	v->a[31333] = sym_comment;
	v->a[31334] = actions(989);
	v->a[31335] = 1;
	v->a[31336] = aux_sym_concatenation_token1;
	v->a[31337] = actions(1227);
	v->a[31338] = 1;
	v->a[31339] = sym__concat;
	small_parse_table_1567(v);
}

void	small_parse_table_1567(t_small_parse_table_array *v)
{
	v->a[31340] = state(302);
	v->a[31341] = 1;
	v->a[31342] = aux_sym_concatenation_repeat1;
	v->a[31343] = actions(972);
	v->a[31344] = 2;
	v->a[31345] = sym_file_descriptor;
	v->a[31346] = sym__bare_dollar;
	v->a[31347] = actions(974);
	v->a[31348] = 29;
	v->a[31349] = anon_sym_LPAREN;
	v->a[31350] = anon_sym_PIPE;
	v->a[31351] = anon_sym_SEMI_SEMI;
	v->a[31352] = anon_sym_AMP_AMP;
	v->a[31353] = anon_sym_PIPE_PIPE;
	v->a[31354] = anon_sym_LT;
	v->a[31355] = anon_sym_GT;
	v->a[31356] = anon_sym_GT_GT;
	v->a[31357] = anon_sym_AMP_GT;
	v->a[31358] = anon_sym_AMP_GT_GT;
	v->a[31359] = anon_sym_LT_AMP;
	small_parse_table_1568(v);
}

void	small_parse_table_1568(t_small_parse_table_array *v)
{
	v->a[31360] = anon_sym_GT_AMP;
	v->a[31361] = anon_sym_GT_PIPE;
	v->a[31362] = anon_sym_LT_AMP_DASH;
	v->a[31363] = anon_sym_GT_AMP_DASH;
	v->a[31364] = anon_sym_LT_LT;
	v->a[31365] = anon_sym_LT_LT_DASH;
	v->a[31366] = aux_sym_heredoc_redirect_token1;
	v->a[31367] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31368] = anon_sym_AMP;
	v->a[31369] = anon_sym_DOLLAR;
	v->a[31370] = anon_sym_DQUOTE;
	v->a[31371] = sym_raw_string;
	v->a[31372] = sym_number;
	v->a[31373] = anon_sym_DOLLAR_LBRACE;
	v->a[31374] = anon_sym_DOLLAR_LPAREN;
	v->a[31375] = anon_sym_BQUOTE;
	v->a[31376] = sym_word;
	v->a[31377] = anon_sym_SEMI;
	v->a[31378] = 6;
	v->a[31379] = actions(3);
	small_parse_table_1569(v);
}

void	small_parse_table_1569(t_small_parse_table_array *v)
{
	v->a[31380] = 1;
	v->a[31381] = sym_comment;
	v->a[31382] = actions(1096);
	v->a[31383] = 1;
	v->a[31384] = aux_sym_concatenation_token1;
	v->a[31385] = actions(1098);
	v->a[31386] = 1;
	v->a[31387] = sym__concat;
	v->a[31388] = state(349);
	v->a[31389] = 1;
	v->a[31390] = aux_sym_concatenation_repeat1;
	v->a[31391] = actions(1175);
	v->a[31392] = 3;
	v->a[31393] = sym_file_descriptor;
	v->a[31394] = sym_variable_name;
	v->a[31395] = ts_builtin_sym_end;
	v->a[31396] = actions(1173);
	v->a[31397] = 28;
	v->a[31398] = anon_sym_PIPE;
	v->a[31399] = anon_sym_SEMI_SEMI;
	small_parse_table_1570(v);
}

/* EOF small_parse_table_313.c */
