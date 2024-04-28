/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2633.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13165(t_small_parse_table_array *v)
{
	v->a[263300] = anon_sym_GT;
	v->a[263301] = anon_sym_LT_LT;
	v->a[263302] = anon_sym_GT_GT;
	v->a[263303] = anon_sym_SEMI_SEMI;
	v->a[263304] = anon_sym_SEMI_AMP;
	v->a[263305] = anon_sym_SEMI_SEMI_AMP;
	v->a[263306] = anon_sym_PIPE_AMP;
	v->a[263307] = anon_sym_AMP_GT;
	v->a[263308] = anon_sym_AMP_GT_GT;
	v->a[263309] = anon_sym_LT_AMP;
	v->a[263310] = anon_sym_GT_AMP;
	v->a[263311] = anon_sym_GT_PIPE;
	v->a[263312] = anon_sym_LT_AMP_DASH;
	v->a[263313] = anon_sym_GT_AMP_DASH;
	v->a[263314] = anon_sym_LT_LT_DASH;
	v->a[263315] = aux_sym_concatenation_token1;
	v->a[263316] = 11;
	v->a[263317] = actions(3);
	v->a[263318] = 1;
	v->a[263319] = sym_comment;
	small_parse_table_13166(v);
}

void	small_parse_table_13166(t_small_parse_table_array *v)
{
	v->a[263320] = actions(4257);
	v->a[263321] = 1;
	v->a[263322] = anon_sym_RPAREN;
	v->a[263323] = actions(4411);
	v->a[263324] = 1;
	v->a[263325] = aux_sym_heredoc_redirect_token1;
	v->a[263326] = actions(11993);
	v->a[263327] = 1;
	v->a[263328] = sym_file_descriptor;
	v->a[263329] = actions(4253);
	v->a[263330] = 2;
	v->a[263331] = anon_sym_PIPE;
	v->a[263332] = anon_sym_PIPE_AMP;
	v->a[263333] = actions(4692);
	v->a[263334] = 2;
	v->a[263335] = anon_sym_LT_LT;
	v->a[263336] = anon_sym_LT_LT_DASH;
	v->a[263337] = actions(4809);
	v->a[263338] = 2;
	v->a[263339] = anon_sym_PIPE_PIPE;
	small_parse_table_13167(v);
}

void	small_parse_table_13167(t_small_parse_table_array *v)
{
	v->a[263340] = anon_sym_AMP_AMP;
	v->a[263341] = actions(11542);
	v->a[263342] = 2;
	v->a[263343] = anon_sym_LT_AMP_DASH;
	v->a[263344] = anon_sym_GT_AMP_DASH;
	v->a[263345] = actions(4409);
	v->a[263346] = 3;
	v->a[263347] = anon_sym_SEMI;
	v->a[263348] = anon_sym_AMP;
	v->a[263349] = anon_sym_SEMI_SEMI;
	v->a[263350] = state(4746);
	v->a[263351] = 3;
	v->a[263352] = sym_file_redirect;
	v->a[263353] = sym_heredoc_redirect;
	v->a[263354] = aux_sym_redirected_statement_repeat1;
	v->a[263355] = actions(11540);
	v->a[263356] = 8;
	v->a[263357] = anon_sym_LT;
	v->a[263358] = anon_sym_GT;
	v->a[263359] = anon_sym_GT_GT;
	small_parse_table_13168(v);
}

void	small_parse_table_13168(t_small_parse_table_array *v)
{
	v->a[263360] = anon_sym_AMP_GT;
	v->a[263361] = anon_sym_AMP_GT_GT;
	v->a[263362] = anon_sym_LT_AMP;
	v->a[263363] = anon_sym_GT_AMP;
	v->a[263364] = anon_sym_GT_PIPE;
	v->a[263365] = 16;
	v->a[263366] = actions(3);
	v->a[263367] = 1;
	v->a[263368] = sym_comment;
	v->a[263369] = actions(11760);
	v->a[263370] = 1;
	v->a[263371] = anon_sym_BANG2;
	v->a[263372] = actions(11764);
	v->a[263373] = 1;
	v->a[263374] = anon_sym_DOLLAR_LPAREN;
	v->a[263375] = actions(11766);
	v->a[263376] = 1;
	v->a[263377] = anon_sym_BQUOTE;
	v->a[263378] = actions(11768);
	v->a[263379] = 1;
	small_parse_table_13169(v);
}

void	small_parse_table_13169(t_small_parse_table_array *v)
{
	v->a[263380] = anon_sym_DOLLAR_BQUOTE;
	v->a[263381] = actions(11770);
	v->a[263382] = 1;
	v->a[263383] = aux_sym__simple_variable_name_token1;
	v->a[263384] = actions(11772);
	v->a[263385] = 1;
	v->a[263386] = sym_variable_name;
	v->a[263387] = actions(12042);
	v->a[263388] = 1;
	v->a[263389] = anon_sym_RBRACE3;
	v->a[263390] = state(3532);
	v->a[263391] = 1;
	v->a[263392] = sym_subscript;
	v->a[263393] = state(6428);
	v->a[263394] = 1;
	v->a[263395] = aux_sym__expansion_body_repeat1;
	v->a[263396] = state(6472);
	v->a[263397] = 1;
	v->a[263398] = sym_command_substitution;
	v->a[263399] = state(7128);
	small_parse_table_13170(v);
}

/* EOF small_parse_table_2633.c */
