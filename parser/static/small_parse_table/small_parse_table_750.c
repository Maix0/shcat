/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_750.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3750(t_small_parse_table_array *v)
{
	v->a[75000] = 20;
	v->a[75001] = sym_file_descriptor;
	v->a[75002] = sym__concat;
	v->a[75003] = sym_test_operator;
	v->a[75004] = sym__brace_start;
	v->a[75005] = anon_sym_PIPE_AMP;
	v->a[75006] = anon_sym_AMP_AMP;
	v->a[75007] = anon_sym_PIPE_PIPE;
	v->a[75008] = anon_sym_GT_GT;
	v->a[75009] = anon_sym_AMP_GT_GT;
	v->a[75010] = anon_sym_GT_PIPE;
	v->a[75011] = anon_sym_LT_AMP_DASH;
	v->a[75012] = anon_sym_GT_AMP_DASH;
	v->a[75013] = anon_sym_LT_LT_DASH;
	v->a[75014] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75015] = aux_sym_concatenation_token1;
	v->a[75016] = sym__special_character;
	v->a[75017] = anon_sym_DQUOTE;
	v->a[75018] = sym_raw_string;
	v->a[75019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3751(v);
}

void	small_parse_table_3751(t_small_parse_table_array *v)
{
	v->a[75020] = anon_sym_DOLLAR_BQUOTE;
	v->a[75021] = 24;
	v->a[75022] = actions(3);
	v->a[75023] = 1;
	v->a[75024] = sym_comment;
	v->a[75025] = actions(4332);
	v->a[75026] = 1;
	v->a[75027] = anon_sym_LPAREN;
	v->a[75028] = actions(4338);
	v->a[75029] = 1;
	v->a[75030] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75031] = actions(4340);
	v->a[75032] = 1;
	v->a[75033] = anon_sym_DOLLAR;
	v->a[75034] = actions(4342);
	v->a[75035] = 1;
	v->a[75036] = sym__special_character;
	v->a[75037] = actions(4344);
	v->a[75038] = 1;
	v->a[75039] = anon_sym_DQUOTE;
	small_parse_table_3752(v);
}

void	small_parse_table_3752(t_small_parse_table_array *v)
{
	v->a[75040] = actions(4346);
	v->a[75041] = 1;
	v->a[75042] = aux_sym_number_token1;
	v->a[75043] = actions(4348);
	v->a[75044] = 1;
	v->a[75045] = aux_sym_number_token2;
	v->a[75046] = actions(4350);
	v->a[75047] = 1;
	v->a[75048] = anon_sym_DOLLAR_LBRACE;
	v->a[75049] = actions(4352);
	v->a[75050] = 1;
	v->a[75051] = anon_sym_DOLLAR_LPAREN;
	v->a[75052] = actions(4354);
	v->a[75053] = 1;
	v->a[75054] = anon_sym_BQUOTE;
	v->a[75055] = actions(4356);
	v->a[75056] = 1;
	v->a[75057] = anon_sym_DOLLAR_BQUOTE;
	v->a[75058] = actions(4358);
	v->a[75059] = 1;
	small_parse_table_3753(v);
}

void	small_parse_table_3753(t_small_parse_table_array *v)
{
	v->a[75060] = sym_test_operator;
	v->a[75061] = actions(4360);
	v->a[75062] = 1;
	v->a[75063] = sym_extglob_pattern;
	v->a[75064] = actions(4362);
	v->a[75065] = 1;
	v->a[75066] = sym__brace_start;
	v->a[75067] = actions(4449);
	v->a[75068] = 1;
	v->a[75069] = anon_sym_esac;
	v->a[75070] = actions(4453);
	v->a[75071] = 1;
	v->a[75072] = aux_sym_heredoc_redirect_token1;
	v->a[75073] = state(3393);
	v->a[75074] = 1;
	v->a[75075] = aux_sym__literal_repeat1;
	v->a[75076] = state(3834);
	v->a[75077] = 1;
	v->a[75078] = sym_last_case_item;
	v->a[75079] = actions(4328);
	small_parse_table_3754(v);
}

void	small_parse_table_3754(t_small_parse_table_array *v)
{
	v->a[75080] = 2;
	v->a[75081] = sym_raw_string;
	v->a[75082] = sym_word;
	v->a[75083] = state(1746);
	v->a[75084] = 2;
	v->a[75085] = sym_case_item;
	v->a[75086] = aux_sym_case_statement_repeat1;
	v->a[75087] = state(3472);
	v->a[75088] = 2;
	v->a[75089] = sym_concatenation;
	v->a[75090] = sym__extglob_blob;
	v->a[75091] = actions(4451);
	v->a[75092] = 3;
	v->a[75093] = anon_sym_SEMI_SEMI;
	v->a[75094] = anon_sym_AMP;
	v->a[75095] = anon_sym_SEMI;
	v->a[75096] = state(3295);
	v->a[75097] = 7;
	v->a[75098] = sym_arithmetic_expansion;
	v->a[75099] = sym_brace_expression;
	small_parse_table_3755(v);
}

/* EOF small_parse_table_750.c */
