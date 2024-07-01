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
	v->a[75000] = state(1984);
	v->a[75001] = 1;
	v->a[75002] = sym__expansion_body;
	v->a[75003] = actions(2997);
	v->a[75004] = 2;
	v->a[75005] = anon_sym_0;
	v->a[75006] = anon_sym__;
	v->a[75007] = actions(2993);
	v->a[75008] = 7;
	v->a[75009] = anon_sym_BANG;
	v->a[75010] = anon_sym_DASH;
	v->a[75011] = anon_sym_STAR;
	v->a[75012] = anon_sym_QMARK;
	v->a[75013] = anon_sym_DOLLAR;
	v->a[75014] = anon_sym_POUND;
	v->a[75015] = anon_sym_AT;
	v->a[75016] = 3;
	v->a[75017] = actions(664);
	v->a[75018] = 1;
	v->a[75019] = sym_comment;
	small_parse_table_3751(v);
}

void	small_parse_table_3751(t_small_parse_table_array *v)
{
	v->a[75020] = actions(2081);
	v->a[75021] = 4;
	v->a[75022] = anon_sym_PIPE;
	v->a[75023] = anon_sym_LT;
	v->a[75024] = anon_sym_GT;
	v->a[75025] = anon_sym_LT_LT;
	v->a[75026] = actions(2079);
	v->a[75027] = 9;
	v->a[75028] = sym_file_descriptor;
	v->a[75029] = anon_sym_AMP_AMP;
	v->a[75030] = anon_sym_PIPE_PIPE;
	v->a[75031] = anon_sym_GT_GT;
	v->a[75032] = anon_sym_LT_AMP;
	v->a[75033] = anon_sym_GT_AMP;
	v->a[75034] = anon_sym_GT_PIPE;
	v->a[75035] = anon_sym_LT_GT;
	v->a[75036] = anon_sym_LT_LT_DASH;
	v->a[75037] = 3;
	v->a[75038] = actions(664);
	v->a[75039] = 1;
	small_parse_table_3752(v);
}

void	small_parse_table_3752(t_small_parse_table_array *v)
{
	v->a[75040] = sym_comment;
	v->a[75041] = actions(2180);
	v->a[75042] = 4;
	v->a[75043] = anon_sym_PIPE;
	v->a[75044] = anon_sym_LT;
	v->a[75045] = anon_sym_GT;
	v->a[75046] = anon_sym_LT_LT;
	v->a[75047] = actions(2178);
	v->a[75048] = 9;
	v->a[75049] = sym_file_descriptor;
	v->a[75050] = anon_sym_AMP_AMP;
	v->a[75051] = anon_sym_PIPE_PIPE;
	v->a[75052] = anon_sym_GT_GT;
	v->a[75053] = anon_sym_LT_AMP;
	v->a[75054] = anon_sym_GT_AMP;
	v->a[75055] = anon_sym_GT_PIPE;
	v->a[75056] = anon_sym_LT_GT;
	v->a[75057] = anon_sym_LT_LT_DASH;
	v->a[75058] = 7;
	v->a[75059] = actions(3);
	small_parse_table_3753(v);
}

void	small_parse_table_3753(t_small_parse_table_array *v)
{
	v->a[75060] = 1;
	v->a[75061] = sym_comment;
	v->a[75062] = actions(2995);
	v->a[75063] = 1;
	v->a[75064] = aux_sym__simple_variable_name_token1;
	v->a[75065] = actions(2999);
	v->a[75066] = 1;
	v->a[75067] = sym_variable_name;
	v->a[75068] = actions(3029);
	v->a[75069] = 1;
	v->a[75070] = anon_sym_RBRACE;
	v->a[75071] = state(2089);
	v->a[75072] = 1;
	v->a[75073] = sym__expansion_body;
	v->a[75074] = actions(2997);
	v->a[75075] = 2;
	v->a[75076] = anon_sym_0;
	v->a[75077] = anon_sym__;
	v->a[75078] = actions(2993);
	v->a[75079] = 7;
	small_parse_table_3754(v);
}

void	small_parse_table_3754(t_small_parse_table_array *v)
{
	v->a[75080] = anon_sym_BANG;
	v->a[75081] = anon_sym_DASH;
	v->a[75082] = anon_sym_STAR;
	v->a[75083] = anon_sym_QMARK;
	v->a[75084] = anon_sym_DOLLAR;
	v->a[75085] = anon_sym_POUND;
	v->a[75086] = anon_sym_AT;
	v->a[75087] = 3;
	v->a[75088] = actions(664);
	v->a[75089] = 1;
	v->a[75090] = sym_comment;
	v->a[75091] = actions(2204);
	v->a[75092] = 4;
	v->a[75093] = anon_sym_PIPE;
	v->a[75094] = anon_sym_LT;
	v->a[75095] = anon_sym_GT;
	v->a[75096] = anon_sym_LT_LT;
	v->a[75097] = actions(2202);
	v->a[75098] = 9;
	v->a[75099] = sym_file_descriptor;
	small_parse_table_3755(v);
}

/* EOF small_parse_table_750.c */
