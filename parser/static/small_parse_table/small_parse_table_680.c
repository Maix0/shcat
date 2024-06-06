/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_680.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3400(t_small_parse_table_array *v)
{
	v->a[68000] = anon_sym_LT_LT;
	v->a[68001] = anon_sym_DOLLAR;
	v->a[68002] = aux_sym_number_token1;
	v->a[68003] = aux_sym_number_token2;
	v->a[68004] = anon_sym_DOLLAR_LPAREN;
	v->a[68005] = anon_sym_BQUOTE;
	v->a[68006] = aux_sym__simple_variable_name_token1;
	v->a[68007] = sym_word;
	v->a[68008] = actions(3106);
	v->a[68009] = 18;
	v->a[68010] = sym_file_descriptor;
	v->a[68011] = sym_test_operator;
	v->a[68012] = sym__brace_start;
	v->a[68013] = anon_sym_PIPE_AMP;
	v->a[68014] = anon_sym_AMP_AMP;
	v->a[68015] = anon_sym_PIPE_PIPE;
	v->a[68016] = anon_sym_GT_GT;
	v->a[68017] = anon_sym_AMP_GT_GT;
	v->a[68018] = anon_sym_GT_PIPE;
	v->a[68019] = anon_sym_LT_AMP_DASH;
	small_parse_table_3401(v);
}

void	small_parse_table_3401(t_small_parse_table_array *v)
{
	v->a[68020] = anon_sym_GT_AMP_DASH;
	v->a[68021] = anon_sym_LT_LT_DASH;
	v->a[68022] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68023] = sym__special_character;
	v->a[68024] = anon_sym_DQUOTE;
	v->a[68025] = sym_raw_string;
	v->a[68026] = anon_sym_DOLLAR_LBRACE;
	v->a[68027] = anon_sym_DOLLAR_BQUOTE;
	v->a[68028] = 19;
	v->a[68029] = actions(57);
	v->a[68030] = 1;
	v->a[68031] = sym_comment;
	v->a[68032] = actions(4120);
	v->a[68033] = 1;
	v->a[68034] = anon_sym_PIPE;
	v->a[68035] = actions(4122);
	v->a[68036] = 1;
	v->a[68037] = anon_sym_AMP_AMP;
	v->a[68038] = actions(4124);
	v->a[68039] = 1;
	small_parse_table_3402(v);
}

void	small_parse_table_3402(t_small_parse_table_array *v)
{
	v->a[68040] = anon_sym_PIPE_PIPE;
	v->a[68041] = actions(4126);
	v->a[68042] = 1;
	v->a[68043] = anon_sym_EQ;
	v->a[68044] = actions(4132);
	v->a[68045] = 1;
	v->a[68046] = anon_sym_COMMA;
	v->a[68047] = actions(4138);
	v->a[68048] = 1;
	v->a[68049] = anon_sym_CARET;
	v->a[68050] = actions(4140);
	v->a[68051] = 1;
	v->a[68052] = anon_sym_AMP;
	v->a[68053] = actions(4150);
	v->a[68054] = 1;
	v->a[68055] = anon_sym_QMARK;
	v->a[68056] = actions(4254);
	v->a[68057] = 1;
	v->a[68058] = anon_sym_RPAREN_RPAREN;
	v->a[68059] = state(3551);
	small_parse_table_3403(v);
}

void	small_parse_table_3403(t_small_parse_table_array *v)
{
	v->a[68060] = 1;
	v->a[68061] = aux_sym_arithmetic_expansion_repeat1;
	v->a[68062] = actions(4128);
	v->a[68063] = 2;
	v->a[68064] = anon_sym_LT;
	v->a[68065] = anon_sym_GT;
	v->a[68066] = actions(4130);
	v->a[68067] = 2;
	v->a[68068] = anon_sym_GT_GT;
	v->a[68069] = anon_sym_LT_LT;
	v->a[68070] = actions(4142);
	v->a[68071] = 2;
	v->a[68072] = anon_sym_EQ_EQ;
	v->a[68073] = anon_sym_BANG_EQ;
	v->a[68074] = actions(4144);
	v->a[68075] = 2;
	v->a[68076] = anon_sym_LT_EQ;
	v->a[68077] = anon_sym_GT_EQ;
	v->a[68078] = actions(4146);
	v->a[68079] = 2;
	small_parse_table_3404(v);
}

void	small_parse_table_3404(t_small_parse_table_array *v)
{
	v->a[68080] = anon_sym_PLUS;
	v->a[68081] = anon_sym_DASH;
	v->a[68082] = actions(4152);
	v->a[68083] = 2;
	v->a[68084] = anon_sym_PLUS_PLUS2;
	v->a[68085] = anon_sym_DASH_DASH2;
	v->a[68086] = actions(4148);
	v->a[68087] = 3;
	v->a[68088] = anon_sym_STAR;
	v->a[68089] = anon_sym_SLASH;
	v->a[68090] = anon_sym_PERCENT;
	v->a[68091] = actions(4136);
	v->a[68092] = 10;
	v->a[68093] = anon_sym_PLUS_EQ;
	v->a[68094] = anon_sym_DASH_EQ;
	v->a[68095] = anon_sym_STAR_EQ;
	v->a[68096] = anon_sym_SLASH_EQ;
	v->a[68097] = anon_sym_PERCENT_EQ;
	v->a[68098] = anon_sym_LT_LT_EQ;
	v->a[68099] = anon_sym_GT_GT_EQ;
	small_parse_table_3405(v);
}

/* EOF small_parse_table_680.c */
