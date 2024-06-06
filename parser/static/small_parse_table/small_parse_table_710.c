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
	v->a[71000] = 1;
	v->a[71001] = anon_sym_CARET;
	v->a[71002] = actions(4140);
	v->a[71003] = 1;
	v->a[71004] = anon_sym_AMP;
	v->a[71005] = actions(4150);
	v->a[71006] = 1;
	v->a[71007] = anon_sym_QMARK;
	v->a[71008] = actions(4305);
	v->a[71009] = 1;
	v->a[71010] = anon_sym_RPAREN_RPAREN;
	v->a[71011] = state(3452);
	v->a[71012] = 1;
	v->a[71013] = aux_sym_arithmetic_expansion_repeat1;
	v->a[71014] = actions(4128);
	v->a[71015] = 2;
	v->a[71016] = anon_sym_LT;
	v->a[71017] = anon_sym_GT;
	v->a[71018] = actions(4130);
	v->a[71019] = 2;
	small_parse_table_3551(v);
}

void	small_parse_table_3551(t_small_parse_table_array *v)
{
	v->a[71020] = anon_sym_GT_GT;
	v->a[71021] = anon_sym_LT_LT;
	v->a[71022] = actions(4142);
	v->a[71023] = 2;
	v->a[71024] = anon_sym_EQ_EQ;
	v->a[71025] = anon_sym_BANG_EQ;
	v->a[71026] = actions(4144);
	v->a[71027] = 2;
	v->a[71028] = anon_sym_LT_EQ;
	v->a[71029] = anon_sym_GT_EQ;
	v->a[71030] = actions(4146);
	v->a[71031] = 2;
	v->a[71032] = anon_sym_PLUS;
	v->a[71033] = anon_sym_DASH;
	v->a[71034] = actions(4152);
	v->a[71035] = 2;
	v->a[71036] = anon_sym_PLUS_PLUS2;
	v->a[71037] = anon_sym_DASH_DASH2;
	v->a[71038] = actions(4148);
	v->a[71039] = 3;
	small_parse_table_3552(v);
}

void	small_parse_table_3552(t_small_parse_table_array *v)
{
	v->a[71040] = anon_sym_STAR;
	v->a[71041] = anon_sym_SLASH;
	v->a[71042] = anon_sym_PERCENT;
	v->a[71043] = actions(4136);
	v->a[71044] = 10;
	v->a[71045] = anon_sym_PLUS_EQ;
	v->a[71046] = anon_sym_DASH_EQ;
	v->a[71047] = anon_sym_STAR_EQ;
	v->a[71048] = anon_sym_SLASH_EQ;
	v->a[71049] = anon_sym_PERCENT_EQ;
	v->a[71050] = anon_sym_LT_LT_EQ;
	v->a[71051] = anon_sym_GT_GT_EQ;
	v->a[71052] = anon_sym_AMP_EQ;
	v->a[71053] = anon_sym_CARET_EQ;
	v->a[71054] = anon_sym_PIPE_EQ;
	v->a[71055] = 3;
	v->a[71056] = actions(57);
	v->a[71057] = 1;
	v->a[71058] = sym_comment;
	v->a[71059] = actions(2652);
	small_parse_table_3553(v);
}

void	small_parse_table_3553(t_small_parse_table_array *v)
{
	v->a[71060] = 14;
	v->a[71061] = anon_sym_PIPE;
	v->a[71062] = anon_sym_LT;
	v->a[71063] = anon_sym_GT;
	v->a[71064] = anon_sym_AMP_GT;
	v->a[71065] = anon_sym_LT_AMP;
	v->a[71066] = anon_sym_GT_AMP;
	v->a[71067] = anon_sym_LT_LT;
	v->a[71068] = anon_sym_DOLLAR;
	v->a[71069] = aux_sym_number_token1;
	v->a[71070] = aux_sym_number_token2;
	v->a[71071] = anon_sym_DOLLAR_LPAREN;
	v->a[71072] = anon_sym_BQUOTE;
	v->a[71073] = aux_sym__simple_variable_name_token1;
	v->a[71074] = sym_word;
	v->a[71075] = actions(2654);
	v->a[71076] = 21;
	v->a[71077] = sym_file_descriptor;
	v->a[71078] = sym__concat;
	v->a[71079] = sym_variable_name;
	small_parse_table_3554(v);
}

void	small_parse_table_3554(t_small_parse_table_array *v)
{
	v->a[71080] = sym_test_operator;
	v->a[71081] = sym__brace_start;
	v->a[71082] = anon_sym_PIPE_AMP;
	v->a[71083] = anon_sym_AMP_AMP;
	v->a[71084] = anon_sym_PIPE_PIPE;
	v->a[71085] = anon_sym_GT_GT;
	v->a[71086] = anon_sym_AMP_GT_GT;
	v->a[71087] = anon_sym_GT_PIPE;
	v->a[71088] = anon_sym_LT_AMP_DASH;
	v->a[71089] = anon_sym_GT_AMP_DASH;
	v->a[71090] = anon_sym_LT_LT_DASH;
	v->a[71091] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71092] = aux_sym_concatenation_token1;
	v->a[71093] = sym__special_character;
	v->a[71094] = anon_sym_DQUOTE;
	v->a[71095] = sym_raw_string;
	v->a[71096] = anon_sym_DOLLAR_LBRACE;
	v->a[71097] = anon_sym_DOLLAR_BQUOTE;
	v->a[71098] = 12;
	v->a[71099] = actions(57);
	small_parse_table_3555(v);
}

/* EOF small_parse_table_710.c */
