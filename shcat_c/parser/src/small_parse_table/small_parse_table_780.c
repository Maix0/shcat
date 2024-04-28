/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_780.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3900(t_small_parse_table_array *v)
{
	v->a[78000] = sym_ansi_c_string;
	v->a[78001] = aux_sym_number_token1;
	v->a[78002] = aux_sym_number_token2;
	v->a[78003] = anon_sym_DOLLAR_LBRACE;
	v->a[78004] = anon_sym_DOLLAR_LPAREN;
	v->a[78005] = anon_sym_BQUOTE;
	v->a[78006] = anon_sym_DOLLAR_BQUOTE;
	v->a[78007] = anon_sym_LT_LPAREN;
	v->a[78008] = anon_sym_GT_LPAREN;
	v->a[78009] = aux_sym__simple_variable_name_token1;
	v->a[78010] = sym_word;
	v->a[78011] = 3;
	v->a[78012] = actions(3);
	v->a[78013] = 1;
	v->a[78014] = sym_comment;
	v->a[78015] = actions(1263);
	v->a[78016] = 5;
	v->a[78017] = sym_file_descriptor;
	v->a[78018] = sym_test_operator;
	v->a[78019] = sym__bare_dollar;
	small_parse_table_3901(v);
}

void	small_parse_table_3901(t_small_parse_table_array *v)
{
	v->a[78020] = sym__brace_start;
	v->a[78021] = aux_sym_heredoc_redirect_token1;
	v->a[78022] = actions(1261);
	v->a[78023] = 40;
	v->a[78024] = anon_sym_LPAREN_LPAREN;
	v->a[78025] = anon_sym_SEMI;
	v->a[78026] = anon_sym_PIPE_PIPE;
	v->a[78027] = anon_sym_AMP_AMP;
	v->a[78028] = anon_sym_PIPE;
	v->a[78029] = anon_sym_AMP;
	v->a[78030] = anon_sym_EQ_EQ;
	v->a[78031] = anon_sym_LT;
	v->a[78032] = anon_sym_GT;
	v->a[78033] = anon_sym_LT_LT;
	v->a[78034] = anon_sym_GT_GT;
	v->a[78035] = anon_sym_RPAREN;
	v->a[78036] = anon_sym_SEMI_SEMI;
	v->a[78037] = anon_sym_PIPE_AMP;
	v->a[78038] = anon_sym_EQ_TILDE;
	v->a[78039] = anon_sym_AMP_GT;
	small_parse_table_3902(v);
}

void	small_parse_table_3902(t_small_parse_table_array *v)
{
	v->a[78040] = anon_sym_AMP_GT_GT;
	v->a[78041] = anon_sym_LT_AMP;
	v->a[78042] = anon_sym_GT_AMP;
	v->a[78043] = anon_sym_GT_PIPE;
	v->a[78044] = anon_sym_LT_AMP_DASH;
	v->a[78045] = anon_sym_GT_AMP_DASH;
	v->a[78046] = anon_sym_LT_LT_DASH;
	v->a[78047] = anon_sym_LT_LT_LT;
	v->a[78048] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78049] = anon_sym_DOLLAR_LBRACK;
	v->a[78050] = anon_sym_DOLLAR;
	v->a[78051] = sym__special_character;
	v->a[78052] = anon_sym_DQUOTE;
	v->a[78053] = sym_raw_string;
	v->a[78054] = sym_ansi_c_string;
	v->a[78055] = aux_sym_number_token1;
	v->a[78056] = aux_sym_number_token2;
	v->a[78057] = anon_sym_DOLLAR_LBRACE;
	v->a[78058] = anon_sym_DOLLAR_LPAREN;
	v->a[78059] = anon_sym_BQUOTE;
	small_parse_table_3903(v);
}

void	small_parse_table_3903(t_small_parse_table_array *v)
{
	v->a[78060] = anon_sym_DOLLAR_BQUOTE;
	v->a[78061] = anon_sym_LT_LPAREN;
	v->a[78062] = anon_sym_GT_LPAREN;
	v->a[78063] = sym_word;
	v->a[78064] = 3;
	v->a[78065] = actions(3);
	v->a[78066] = 1;
	v->a[78067] = sym_comment;
	v->a[78068] = actions(1338);
	v->a[78069] = 5;
	v->a[78070] = sym_file_descriptor;
	v->a[78071] = sym__concat;
	v->a[78072] = sym_test_operator;
	v->a[78073] = sym__brace_start;
	v->a[78074] = aux_sym_heredoc_redirect_token1;
	v->a[78075] = actions(1336);
	v->a[78076] = 40;
	v->a[78077] = anon_sym_LPAREN_LPAREN;
	v->a[78078] = anon_sym_SEMI;
	v->a[78079] = anon_sym_PIPE_PIPE;
	small_parse_table_3904(v);
}

void	small_parse_table_3904(t_small_parse_table_array *v)
{
	v->a[78080] = anon_sym_AMP_AMP;
	v->a[78081] = anon_sym_PIPE;
	v->a[78082] = anon_sym_AMP;
	v->a[78083] = anon_sym_LT;
	v->a[78084] = anon_sym_GT;
	v->a[78085] = anon_sym_LT_LT;
	v->a[78086] = anon_sym_GT_GT;
	v->a[78087] = anon_sym_SEMI_SEMI;
	v->a[78088] = anon_sym_SEMI_AMP;
	v->a[78089] = anon_sym_SEMI_SEMI_AMP;
	v->a[78090] = anon_sym_PIPE_AMP;
	v->a[78091] = anon_sym_AMP_GT;
	v->a[78092] = anon_sym_AMP_GT_GT;
	v->a[78093] = anon_sym_LT_AMP;
	v->a[78094] = anon_sym_GT_AMP;
	v->a[78095] = anon_sym_GT_PIPE;
	v->a[78096] = anon_sym_LT_AMP_DASH;
	v->a[78097] = anon_sym_GT_AMP_DASH;
	v->a[78098] = anon_sym_LT_LT_DASH;
	v->a[78099] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3905(v);
}

/* EOF small_parse_table_780.c */
