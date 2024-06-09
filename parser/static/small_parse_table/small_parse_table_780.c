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
	v->a[78000] = state(240);
	v->a[78001] = 2;
	v->a[78002] = sym_concatenation;
	v->a[78003] = aux_sym_for_statement_repeat1;
	v->a[78004] = state(566);
	v->a[78005] = 6;
	v->a[78006] = sym_arithmetic_expansion;
	v->a[78007] = sym_string;
	v->a[78008] = sym_number;
	v->a[78009] = sym_simple_expansion;
	v->a[78010] = sym_expansion;
	v->a[78011] = sym_command_substitution;
	v->a[78012] = 8;
	v->a[78013] = actions(1404);
	v->a[78014] = 1;
	v->a[78015] = sym_comment;
	v->a[78016] = actions(3150);
	v->a[78017] = 1;
	v->a[78018] = sym_file_descriptor;
	v->a[78019] = actions(2482);
	small_parse_table_3901(v);
}

void	small_parse_table_3901(t_small_parse_table_array *v)
{
	v->a[78020] = 2;
	v->a[78021] = anon_sym_PIPE;
	v->a[78022] = anon_sym_LT_LT;
	v->a[78023] = actions(3044);
	v->a[78024] = 2;
	v->a[78025] = anon_sym_LT_AMP_DASH;
	v->a[78026] = anon_sym_GT_AMP_DASH;
	v->a[78027] = state(1422);
	v->a[78028] = 2;
	v->a[78029] = sym_file_redirect;
	v->a[78030] = aux_sym_redirected_statement_repeat2;
	v->a[78031] = actions(2480);
	v->a[78032] = 3;
	v->a[78033] = anon_sym_AMP_AMP;
	v->a[78034] = anon_sym_PIPE_PIPE;
	v->a[78035] = anon_sym_LT_LT_DASH;
	v->a[78036] = actions(3042);
	v->a[78037] = 3;
	v->a[78038] = anon_sym_GT_GT;
	v->a[78039] = anon_sym_AMP_GT_GT;
	small_parse_table_3902(v);
}

void	small_parse_table_3902(t_small_parse_table_array *v)
{
	v->a[78040] = anon_sym_GT_PIPE;
	v->a[78041] = actions(3040);
	v->a[78042] = 5;
	v->a[78043] = anon_sym_LT;
	v->a[78044] = anon_sym_GT;
	v->a[78045] = anon_sym_AMP_GT;
	v->a[78046] = anon_sym_LT_AMP;
	v->a[78047] = anon_sym_GT_AMP;
	v->a[78048] = 12;
	v->a[78049] = actions(3);
	v->a[78050] = 1;
	v->a[78051] = sym_comment;
	v->a[78052] = actions(761);
	v->a[78053] = 1;
	v->a[78054] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78055] = actions(763);
	v->a[78056] = 1;
	v->a[78057] = anon_sym_DOLLAR;
	v->a[78058] = actions(765);
	v->a[78059] = 1;
	small_parse_table_3903(v);
}

void	small_parse_table_3903(t_small_parse_table_array *v)
{
	v->a[78060] = anon_sym_DQUOTE;
	v->a[78061] = actions(767);
	v->a[78062] = 1;
	v->a[78063] = aux_sym_number_token1;
	v->a[78064] = actions(769);
	v->a[78065] = 1;
	v->a[78066] = aux_sym_number_token2;
	v->a[78067] = actions(771);
	v->a[78068] = 1;
	v->a[78069] = anon_sym_DOLLAR_LBRACE;
	v->a[78070] = actions(773);
	v->a[78071] = 1;
	v->a[78072] = anon_sym_DOLLAR_LPAREN;
	v->a[78073] = actions(775);
	v->a[78074] = 1;
	v->a[78075] = anon_sym_BQUOTE;
	v->a[78076] = actions(759);
	v->a[78077] = 2;
	v->a[78078] = sym_raw_string;
	v->a[78079] = sym_word;
	small_parse_table_3904(v);
}

void	small_parse_table_3904(t_small_parse_table_array *v)
{
	v->a[78080] = state(217);
	v->a[78081] = 2;
	v->a[78082] = sym_concatenation;
	v->a[78083] = aux_sym_for_statement_repeat1;
	v->a[78084] = state(541);
	v->a[78085] = 6;
	v->a[78086] = sym_arithmetic_expansion;
	v->a[78087] = sym_string;
	v->a[78088] = sym_number;
	v->a[78089] = sym_simple_expansion;
	v->a[78090] = sym_expansion;
	v->a[78091] = sym_command_substitution;
	v->a[78092] = 12;
	v->a[78093] = actions(3);
	v->a[78094] = 1;
	v->a[78095] = sym_comment;
	v->a[78096] = actions(761);
	v->a[78097] = 1;
	v->a[78098] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78099] = actions(763);
	small_parse_table_3905(v);
}

/* EOF small_parse_table_780.c */
