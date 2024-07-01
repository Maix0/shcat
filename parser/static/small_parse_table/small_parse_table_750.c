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
	v->a[75000] = sym_command_substitution;
	v->a[75001] = 11;
	v->a[75002] = actions(3);
	v->a[75003] = 1;
	v->a[75004] = sym_comment;
	v->a[75005] = actions(1778);
	v->a[75006] = 1;
	v->a[75007] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75008] = actions(1780);
	v->a[75009] = 1;
	v->a[75010] = anon_sym_DOLLAR;
	v->a[75011] = actions(1782);
	v->a[75012] = 1;
	v->a[75013] = anon_sym_DQUOTE;
	v->a[75014] = actions(1784);
	v->a[75015] = 1;
	v->a[75016] = anon_sym_DOLLAR_LBRACE;
	v->a[75017] = actions(1786);
	v->a[75018] = 1;
	v->a[75019] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3751(v);
}

void	small_parse_table_3751(t_small_parse_table_array *v)
{
	v->a[75020] = actions(1788);
	v->a[75021] = 1;
	v->a[75022] = anon_sym_BQUOTE;
	v->a[75023] = actions(1790);
	v->a[75024] = 1;
	v->a[75025] = sym_extglob_pattern;
	v->a[75026] = state(2107);
	v->a[75027] = 2;
	v->a[75028] = sym_concatenation;
	v->a[75029] = sym__extglob_blob;
	v->a[75030] = actions(2776);
	v->a[75031] = 3;
	v->a[75032] = sym_raw_string;
	v->a[75033] = sym_number;
	v->a[75034] = sym_word;
	v->a[75035] = state(2056);
	v->a[75036] = 5;
	v->a[75037] = sym_arithmetic_expansion;
	v->a[75038] = sym_string;
	v->a[75039] = sym_simple_expansion;
	small_parse_table_3752(v);
}

void	small_parse_table_3752(t_small_parse_table_array *v)
{
	v->a[75040] = sym_expansion;
	v->a[75041] = sym_command_substitution;
	v->a[75042] = 10;
	v->a[75043] = actions(3);
	v->a[75044] = 1;
	v->a[75045] = sym_comment;
	v->a[75046] = actions(910);
	v->a[75047] = 1;
	v->a[75048] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75049] = actions(914);
	v->a[75050] = 1;
	v->a[75051] = anon_sym_DQUOTE;
	v->a[75052] = actions(916);
	v->a[75053] = 1;
	v->a[75054] = anon_sym_DOLLAR_LBRACE;
	v->a[75055] = actions(918);
	v->a[75056] = 1;
	v->a[75057] = anon_sym_DOLLAR_LPAREN;
	v->a[75058] = actions(920);
	v->a[75059] = 1;
	small_parse_table_3753(v);
}

void	small_parse_table_3753(t_small_parse_table_array *v)
{
	v->a[75060] = anon_sym_BQUOTE;
	v->a[75061] = actions(2577);
	v->a[75062] = 1;
	v->a[75063] = sym__bare_dollar;
	v->a[75064] = actions(2778);
	v->a[75065] = 1;
	v->a[75066] = anon_sym_DOLLAR;
	v->a[75067] = actions(2573);
	v->a[75068] = 5;
	v->a[75069] = aux_sym_concatenation_token1;
	v->a[75070] = sym_raw_string;
	v->a[75071] = sym_number;
	v->a[75072] = sym__comment_word;
	v->a[75073] = sym_word;
	v->a[75074] = state(1040);
	v->a[75075] = 5;
	v->a[75076] = sym_arithmetic_expansion;
	v->a[75077] = sym_string;
	v->a[75078] = sym_simple_expansion;
	v->a[75079] = sym_expansion;
	small_parse_table_3754(v);
}

void	small_parse_table_3754(t_small_parse_table_array *v)
{
	v->a[75080] = sym_command_substitution;
	v->a[75081] = 3;
	v->a[75082] = actions(870);
	v->a[75083] = 1;
	v->a[75084] = sym_comment;
	v->a[75085] = actions(1003);
	v->a[75086] = 6;
	v->a[75087] = anon_sym_PIPE;
	v->a[75088] = anon_sym_LT;
	v->a[75089] = anon_sym_GT;
	v->a[75090] = anon_sym_LT_AMP;
	v->a[75091] = anon_sym_GT_AMP;
	v->a[75092] = anon_sym_LT_LT;
	v->a[75093] = actions(1005);
	v->a[75094] = 11;
	v->a[75095] = sym_file_descriptor;
	v->a[75096] = sym__concat;
	v->a[75097] = sym_variable_name;
	v->a[75098] = anon_sym_AMP_AMP;
	v->a[75099] = anon_sym_PIPE_PIPE;
	small_parse_table_3755(v);
}

/* EOF small_parse_table_750.c */
