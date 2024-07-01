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
	v->a[31300] = actions(357);
	v->a[31301] = 1;
	v->a[31302] = sym_variable_name;
	v->a[31303] = actions(1152);
	v->a[31304] = 1;
	v->a[31305] = sym_file_descriptor;
	v->a[31306] = state(261);
	v->a[31307] = 1;
	v->a[31308] = sym_command_name;
	v->a[31309] = state(603);
	v->a[31310] = 1;
	v->a[31311] = sym_concatenation;
	v->a[31312] = state(635);
	v->a[31313] = 1;
	v->a[31314] = sym_variable_assignment;
	v->a[31315] = state(705);
	v->a[31316] = 1;
	v->a[31317] = aux_sym_command_repeat1;
	v->a[31318] = state(1096);
	v->a[31319] = 1;
	small_parse_table_1566(v);
}

void	small_parse_table_1566(t_small_parse_table_array *v)
{
	v->a[31320] = sym_subshell;
	v->a[31321] = state(1097);
	v->a[31322] = 1;
	v->a[31323] = sym_command;
	v->a[31324] = state(1225);
	v->a[31325] = 1;
	v->a[31326] = sym_file_redirect;
	v->a[31327] = actions(353);
	v->a[31328] = 3;
	v->a[31329] = sym_raw_string;
	v->a[31330] = sym_number;
	v->a[31331] = sym_word;
	v->a[31332] = state(625);
	v->a[31333] = 5;
	v->a[31334] = sym_arithmetic_expansion;
	v->a[31335] = sym_string;
	v->a[31336] = sym_simple_expansion;
	v->a[31337] = sym_expansion;
	v->a[31338] = sym_command_substitution;
	v->a[31339] = actions(1150);
	small_parse_table_1567(v);
}

void	small_parse_table_1567(t_small_parse_table_array *v)
{
	v->a[31340] = 7;
	v->a[31341] = anon_sym_LT;
	v->a[31342] = anon_sym_GT;
	v->a[31343] = anon_sym_GT_GT;
	v->a[31344] = anon_sym_LT_AMP;
	v->a[31345] = anon_sym_GT_AMP;
	v->a[31346] = anon_sym_GT_PIPE;
	v->a[31347] = anon_sym_LT_GT;
	v->a[31348] = 3;
	v->a[31349] = actions(3);
	v->a[31350] = 1;
	v->a[31351] = sym_comment;
	v->a[31352] = actions(1201);
	v->a[31353] = 3;
	v->a[31354] = sym_file_descriptor;
	v->a[31355] = sym__concat;
	v->a[31356] = sym__bare_dollar;
	v->a[31357] = actions(1199);
	v->a[31358] = 28;
	v->a[31359] = anon_sym_esac;
	small_parse_table_1568(v);
}

void	small_parse_table_1568(t_small_parse_table_array *v)
{
	v->a[31360] = anon_sym_LPAREN;
	v->a[31361] = anon_sym_PIPE;
	v->a[31362] = anon_sym_SEMI_SEMI;
	v->a[31363] = anon_sym_AMP_AMP;
	v->a[31364] = anon_sym_PIPE_PIPE;
	v->a[31365] = anon_sym_LT;
	v->a[31366] = anon_sym_GT;
	v->a[31367] = anon_sym_GT_GT;
	v->a[31368] = anon_sym_LT_AMP;
	v->a[31369] = anon_sym_GT_AMP;
	v->a[31370] = anon_sym_GT_PIPE;
	v->a[31371] = anon_sym_LT_GT;
	v->a[31372] = anon_sym_LT_LT;
	v->a[31373] = anon_sym_LT_LT_DASH;
	v->a[31374] = aux_sym_heredoc_redirect_token1;
	v->a[31375] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31376] = anon_sym_AMP;
	v->a[31377] = aux_sym_concatenation_token1;
	v->a[31378] = anon_sym_DOLLAR;
	v->a[31379] = anon_sym_DQUOTE;
	small_parse_table_1569(v);
}

void	small_parse_table_1569(t_small_parse_table_array *v)
{
	v->a[31380] = sym_raw_string;
	v->a[31381] = sym_number;
	v->a[31382] = anon_sym_DOLLAR_LBRACE;
	v->a[31383] = anon_sym_DOLLAR_LPAREN;
	v->a[31384] = anon_sym_BQUOTE;
	v->a[31385] = sym_word;
	v->a[31386] = anon_sym_SEMI;
	v->a[31387] = 3;
	v->a[31388] = actions(3);
	v->a[31389] = 1;
	v->a[31390] = sym_comment;
	v->a[31391] = actions(662);
	v->a[31392] = 3;
	v->a[31393] = sym_file_descriptor;
	v->a[31394] = sym__concat;
	v->a[31395] = sym__bare_dollar;
	v->a[31396] = actions(660);
	v->a[31397] = 28;
	v->a[31398] = anon_sym_LPAREN;
	v->a[31399] = anon_sym_PIPE;
	small_parse_table_1570(v);
}

/* EOF small_parse_table_313.c */
