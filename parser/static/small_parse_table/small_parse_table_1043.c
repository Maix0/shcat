/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1043.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5215(t_small_parse_table_array *v)
{
	v->a[104300] = 22;
	v->a[104301] = anon_sym_esac;
	v->a[104302] = anon_sym_PIPE;
	v->a[104303] = anon_sym_SEMI_SEMI;
	v->a[104304] = anon_sym_SEMI_AMP;
	v->a[104305] = anon_sym_SEMI_SEMI_AMP;
	v->a[104306] = anon_sym_PIPE_AMP;
	v->a[104307] = anon_sym_AMP_AMP;
	v->a[104308] = anon_sym_PIPE_PIPE;
	v->a[104309] = anon_sym_LT;
	v->a[104310] = anon_sym_GT;
	v->a[104311] = anon_sym_GT_GT;
	v->a[104312] = anon_sym_AMP_GT;
	v->a[104313] = anon_sym_AMP_GT_GT;
	v->a[104314] = anon_sym_LT_AMP;
	v->a[104315] = anon_sym_GT_AMP;
	v->a[104316] = anon_sym_GT_PIPE;
	v->a[104317] = anon_sym_LT_AMP_DASH;
	v->a[104318] = anon_sym_GT_AMP_DASH;
	v->a[104319] = anon_sym_LT_LT;
	small_parse_table_5216(v);
}

void	small_parse_table_5216(t_small_parse_table_array *v)
{
	v->a[104320] = anon_sym_LT_LT_DASH;
	v->a[104321] = anon_sym_AMP;
	v->a[104322] = anon_sym_SEMI;
	v->a[104323] = 17;
	v->a[104324] = actions(57);
	v->a[104325] = 1;
	v->a[104326] = sym_comment;
	v->a[104327] = actions(2154);
	v->a[104328] = 1;
	v->a[104329] = anon_sym_DOLLAR;
	v->a[104330] = actions(2160);
	v->a[104331] = 1;
	v->a[104332] = aux_sym_number_token1;
	v->a[104333] = actions(2162);
	v->a[104334] = 1;
	v->a[104335] = aux_sym_number_token2;
	v->a[104336] = actions(2166);
	v->a[104337] = 1;
	v->a[104338] = anon_sym_DOLLAR_LPAREN;
	v->a[104339] = actions(2174);
	small_parse_table_5217(v);
}

void	small_parse_table_5217(t_small_parse_table_array *v)
{
	v->a[104340] = 1;
	v->a[104341] = sym__brace_start;
	v->a[104342] = actions(2384);
	v->a[104343] = 1;
	v->a[104344] = sym_word;
	v->a[104345] = actions(5989);
	v->a[104346] = 1;
	v->a[104347] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104348] = actions(5993);
	v->a[104349] = 1;
	v->a[104350] = anon_sym_DQUOTE;
	v->a[104351] = actions(5995);
	v->a[104352] = 1;
	v->a[104353] = anon_sym_DOLLAR_LBRACE;
	v->a[104354] = actions(5997);
	v->a[104355] = 1;
	v->a[104356] = anon_sym_BQUOTE;
	v->a[104357] = actions(5999);
	v->a[104358] = 1;
	v->a[104359] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5218(v);
}

void	small_parse_table_5218(t_small_parse_table_array *v)
{
	v->a[104360] = actions(6001);
	v->a[104361] = 1;
	v->a[104362] = sym__special_character;
	v->a[104363] = state(1270);
	v->a[104364] = 1;
	v->a[104365] = aux_sym__literal_repeat1;
	v->a[104366] = actions(2388);
	v->a[104367] = 2;
	v->a[104368] = sym_test_operator;
	v->a[104369] = sym_raw_string;
	v->a[104370] = state(436);
	v->a[104371] = 2;
	v->a[104372] = sym_concatenation;
	v->a[104373] = aux_sym_for_statement_repeat1;
	v->a[104374] = state(1222);
	v->a[104375] = 7;
	v->a[104376] = sym_arithmetic_expansion;
	v->a[104377] = sym_brace_expression;
	v->a[104378] = sym_string;
	v->a[104379] = sym_number;
	small_parse_table_5219(v);
}

void	small_parse_table_5219(t_small_parse_table_array *v)
{
	v->a[104380] = sym_simple_expansion;
	v->a[104381] = sym_expansion;
	v->a[104382] = sym_command_substitution;
	v->a[104383] = 3;
	v->a[104384] = actions(3);
	v->a[104385] = 1;
	v->a[104386] = sym_comment;
	v->a[104387] = actions(3641);
	v->a[104388] = 2;
	v->a[104389] = sym_file_descriptor;
	v->a[104390] = aux_sym_heredoc_redirect_token1;
	v->a[104391] = actions(3639);
	v->a[104392] = 22;
	v->a[104393] = anon_sym_esac;
	v->a[104394] = anon_sym_PIPE;
	v->a[104395] = anon_sym_SEMI_SEMI;
	v->a[104396] = anon_sym_SEMI_AMP;
	v->a[104397] = anon_sym_SEMI_SEMI_AMP;
	v->a[104398] = anon_sym_PIPE_AMP;
	v->a[104399] = anon_sym_AMP_AMP;
	small_parse_table_5220(v);
}

/* EOF small_parse_table_1043.c */
