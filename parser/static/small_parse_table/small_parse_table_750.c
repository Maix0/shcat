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
	v->a[75000] = anon_sym_LT_AMP_DASH;
	v->a[75001] = anon_sym_GT_AMP_DASH;
	v->a[75002] = anon_sym_LT_LT;
	v->a[75003] = anon_sym_LT_LT_DASH;
	v->a[75004] = anon_sym_AMP;
	v->a[75005] = anon_sym_SEMI;
	v->a[75006] = 12;
	v->a[75007] = actions(3);
	v->a[75008] = 1;
	v->a[75009] = sym_comment;
	v->a[75010] = actions(859);
	v->a[75011] = 1;
	v->a[75012] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75013] = actions(861);
	v->a[75014] = 1;
	v->a[75015] = anon_sym_DOLLAR;
	v->a[75016] = actions(863);
	v->a[75017] = 1;
	v->a[75018] = anon_sym_DQUOTE;
	v->a[75019] = actions(865);
	small_parse_table_3751(v);
}

void	small_parse_table_3751(t_small_parse_table_array *v)
{
	v->a[75020] = 1;
	v->a[75021] = anon_sym_DOLLAR_LBRACE;
	v->a[75022] = actions(867);
	v->a[75023] = 1;
	v->a[75024] = anon_sym_DOLLAR_LPAREN;
	v->a[75025] = actions(869);
	v->a[75026] = 1;
	v->a[75027] = anon_sym_BQUOTE;
	v->a[75028] = state(2105);
	v->a[75029] = 1;
	v->a[75030] = sym_terminator;
	v->a[75031] = state(1402);
	v->a[75032] = 2;
	v->a[75033] = sym_concatenation;
	v->a[75034] = aux_sym_for_statement_repeat1;
	v->a[75035] = actions(2479);
	v->a[75036] = 3;
	v->a[75037] = sym_raw_string;
	v->a[75038] = sym_number;
	v->a[75039] = sym_word;
	small_parse_table_3752(v);
}

void	small_parse_table_3752(t_small_parse_table_array *v)
{
	v->a[75040] = actions(2481);
	v->a[75041] = 4;
	v->a[75042] = anon_sym_SEMI_SEMI;
	v->a[75043] = aux_sym_heredoc_redirect_token1;
	v->a[75044] = anon_sym_AMP;
	v->a[75045] = anon_sym_SEMI;
	v->a[75046] = state(1669);
	v->a[75047] = 5;
	v->a[75048] = sym_arithmetic_expansion;
	v->a[75049] = sym_string;
	v->a[75050] = sym_simple_expansion;
	v->a[75051] = sym_expansion;
	v->a[75052] = sym_command_substitution;
	v->a[75053] = 3;
	v->a[75054] = actions(3);
	v->a[75055] = 1;
	v->a[75056] = sym_comment;
	v->a[75057] = actions(2392);
	v->a[75058] = 2;
	v->a[75059] = sym_file_descriptor;
	small_parse_table_3753(v);
}

void	small_parse_table_3753(t_small_parse_table_array *v)
{
	v->a[75060] = aux_sym_heredoc_redirect_token1;
	v->a[75061] = actions(2394);
	v->a[75062] = 19;
	v->a[75063] = anon_sym_esac;
	v->a[75064] = anon_sym_PIPE;
	v->a[75065] = anon_sym_SEMI_SEMI;
	v->a[75066] = anon_sym_AMP_AMP;
	v->a[75067] = anon_sym_PIPE_PIPE;
	v->a[75068] = anon_sym_LT;
	v->a[75069] = anon_sym_GT;
	v->a[75070] = anon_sym_GT_GT;
	v->a[75071] = anon_sym_AMP_GT;
	v->a[75072] = anon_sym_AMP_GT_GT;
	v->a[75073] = anon_sym_LT_AMP;
	v->a[75074] = anon_sym_GT_AMP;
	v->a[75075] = anon_sym_GT_PIPE;
	v->a[75076] = anon_sym_LT_AMP_DASH;
	v->a[75077] = anon_sym_GT_AMP_DASH;
	v->a[75078] = anon_sym_LT_LT;
	v->a[75079] = anon_sym_LT_LT_DASH;
	small_parse_table_3754(v);
}

void	small_parse_table_3754(t_small_parse_table_array *v)
{
	v->a[75080] = anon_sym_AMP;
	v->a[75081] = anon_sym_SEMI;
	v->a[75082] = 15;
	v->a[75083] = actions(3);
	v->a[75084] = 1;
	v->a[75085] = sym_comment;
	v->a[75086] = actions(1879);
	v->a[75087] = 1;
	v->a[75088] = anon_sym_LPAREN;
	v->a[75089] = actions(1883);
	v->a[75090] = 1;
	v->a[75091] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75092] = actions(1885);
	v->a[75093] = 1;
	v->a[75094] = anon_sym_DOLLAR;
	v->a[75095] = actions(1887);
	v->a[75096] = 1;
	v->a[75097] = anon_sym_DQUOTE;
	v->a[75098] = actions(1889);
	v->a[75099] = 1;
	small_parse_table_3755(v);
}

/* EOF small_parse_table_750.c */
