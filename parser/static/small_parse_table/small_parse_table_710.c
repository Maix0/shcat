/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_710.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3550(t_small_parse_table_array *v)
{
	v->a[71000] = anon_sym_LT_AMP;
	v->a[71001] = anon_sym_GT_AMP;
	v->a[71002] = anon_sym_GT_PIPE;
	v->a[71003] = anon_sym_LT_AMP_DASH;
	v->a[71004] = anon_sym_GT_AMP_DASH;
	v->a[71005] = anon_sym_LT_LT;
	v->a[71006] = anon_sym_LT_LT_DASH;
	v->a[71007] = anon_sym_AMP;
	v->a[71008] = anon_sym_SEMI;
	v->a[71009] = 13;
	v->a[71010] = actions(3);
	v->a[71011] = 1;
	v->a[71012] = sym_comment;
	v->a[71013] = actions(933);
	v->a[71014] = 1;
	v->a[71015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71016] = actions(935);
	v->a[71017] = 1;
	v->a[71018] = anon_sym_DOLLAR;
	v->a[71019] = actions(937);
	small_parse_table_3551(v);
}

void	small_parse_table_3551(t_small_parse_table_array *v)
{
	v->a[71020] = 1;
	v->a[71021] = anon_sym_DQUOTE;
	v->a[71022] = actions(939);
	v->a[71023] = 1;
	v->a[71024] = aux_sym_number_token1;
	v->a[71025] = actions(941);
	v->a[71026] = 1;
	v->a[71027] = aux_sym_number_token2;
	v->a[71028] = actions(943);
	v->a[71029] = 1;
	v->a[71030] = anon_sym_DOLLAR_LBRACE;
	v->a[71031] = actions(945);
	v->a[71032] = 1;
	v->a[71033] = anon_sym_DOLLAR_LPAREN;
	v->a[71034] = actions(947);
	v->a[71035] = 1;
	v->a[71036] = anon_sym_BQUOTE;
	v->a[71037] = actions(2641);
	v->a[71038] = 2;
	v->a[71039] = sym_raw_string;
	small_parse_table_3552(v);
}

void	small_parse_table_3552(t_small_parse_table_array *v)
{
	v->a[71040] = sym_word;
	v->a[71041] = state(1232);
	v->a[71042] = 2;
	v->a[71043] = sym_concatenation;
	v->a[71044] = aux_sym_for_statement_repeat1;
	v->a[71045] = actions(2648);
	v->a[71046] = 4;
	v->a[71047] = anon_sym_SEMI_SEMI;
	v->a[71048] = aux_sym_heredoc_redirect_token1;
	v->a[71049] = anon_sym_AMP;
	v->a[71050] = anon_sym_SEMI;
	v->a[71051] = state(1503);
	v->a[71052] = 6;
	v->a[71053] = sym_arithmetic_expansion;
	v->a[71054] = sym_string;
	v->a[71055] = sym_number;
	v->a[71056] = sym_simple_expansion;
	v->a[71057] = sym_expansion;
	v->a[71058] = sym_command_substitution;
	v->a[71059] = 5;
	small_parse_table_3553(v);
}

void	small_parse_table_3553(t_small_parse_table_array *v)
{
	v->a[71060] = actions(3);
	v->a[71061] = 1;
	v->a[71062] = sym_comment;
	v->a[71063] = actions(2650);
	v->a[71064] = 1;
	v->a[71065] = anon_sym_PIPE;
	v->a[71066] = state(1220);
	v->a[71067] = 1;
	v->a[71068] = aux_sym_pipeline_repeat1;
	v->a[71069] = actions(2247);
	v->a[71070] = 2;
	v->a[71071] = sym_file_descriptor;
	v->a[71072] = aux_sym_heredoc_redirect_token1;
	v->a[71073] = actions(2252);
	v->a[71074] = 18;
	v->a[71075] = anon_sym_esac;
	v->a[71076] = anon_sym_SEMI_SEMI;
	v->a[71077] = anon_sym_AMP_AMP;
	v->a[71078] = anon_sym_PIPE_PIPE;
	v->a[71079] = anon_sym_LT;
	small_parse_table_3554(v);
}

void	small_parse_table_3554(t_small_parse_table_array *v)
{
	v->a[71080] = anon_sym_GT;
	v->a[71081] = anon_sym_GT_GT;
	v->a[71082] = anon_sym_AMP_GT;
	v->a[71083] = anon_sym_AMP_GT_GT;
	v->a[71084] = anon_sym_LT_AMP;
	v->a[71085] = anon_sym_GT_AMP;
	v->a[71086] = anon_sym_GT_PIPE;
	v->a[71087] = anon_sym_LT_AMP_DASH;
	v->a[71088] = anon_sym_GT_AMP_DASH;
	v->a[71089] = anon_sym_LT_LT;
	v->a[71090] = anon_sym_LT_LT_DASH;
	v->a[71091] = anon_sym_AMP;
	v->a[71092] = anon_sym_SEMI;
	v->a[71093] = 5;
	v->a[71094] = actions(3);
	v->a[71095] = 1;
	v->a[71096] = sym_comment;
	v->a[71097] = actions(2249);
	v->a[71098] = 1;
	v->a[71099] = anon_sym_PIPE;
	small_parse_table_3555(v);
}

/* EOF small_parse_table_710.c */
