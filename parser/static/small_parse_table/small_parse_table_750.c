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
	v->a[75000] = anon_sym_BQUOTE;
	v->a[75001] = actions(3086);
	v->a[75002] = 1;
	v->a[75003] = anon_sym_DOLLAR;
	v->a[75004] = actions(3088);
	v->a[75005] = 1;
	v->a[75006] = anon_sym_DQUOTE;
	v->a[75007] = state(1601);
	v->a[75008] = 1;
	v->a[75009] = aux_sym_string_repeat1;
	v->a[75010] = state(1748);
	v->a[75011] = 4;
	v->a[75012] = sym_arithmetic_expansion;
	v->a[75013] = sym_simple_expansion;
	v->a[75014] = sym_expansion;
	v->a[75015] = sym_command_substitution;
	v->a[75016] = 10;
	v->a[75017] = actions(3);
	v->a[75018] = 1;
	v->a[75019] = sym_comment;
	small_parse_table_3751(v);
}

void	small_parse_table_3751(t_small_parse_table_array *v)
{
	v->a[75020] = actions(3058);
	v->a[75021] = 1;
	v->a[75022] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75023] = actions(3064);
	v->a[75024] = 1;
	v->a[75025] = sym_string_content;
	v->a[75026] = actions(3066);
	v->a[75027] = 1;
	v->a[75028] = anon_sym_DOLLAR_LBRACE;
	v->a[75029] = actions(3068);
	v->a[75030] = 1;
	v->a[75031] = anon_sym_DOLLAR_LPAREN;
	v->a[75032] = actions(3070);
	v->a[75033] = 1;
	v->a[75034] = anon_sym_BQUOTE;
	v->a[75035] = actions(3090);
	v->a[75036] = 1;
	v->a[75037] = anon_sym_DOLLAR;
	v->a[75038] = actions(3092);
	v->a[75039] = 1;
	small_parse_table_3752(v);
}

void	small_parse_table_3752(t_small_parse_table_array *v)
{
	v->a[75040] = anon_sym_DQUOTE;
	v->a[75041] = state(1594);
	v->a[75042] = 1;
	v->a[75043] = aux_sym_string_repeat1;
	v->a[75044] = state(1748);
	v->a[75045] = 4;
	v->a[75046] = sym_arithmetic_expansion;
	v->a[75047] = sym_simple_expansion;
	v->a[75048] = sym_expansion;
	v->a[75049] = sym_command_substitution;
	v->a[75050] = 10;
	v->a[75051] = actions(3);
	v->a[75052] = 1;
	v->a[75053] = sym_comment;
	v->a[75054] = actions(3058);
	v->a[75055] = 1;
	v->a[75056] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75057] = actions(3064);
	v->a[75058] = 1;
	v->a[75059] = sym_string_content;
	small_parse_table_3753(v);
}

void	small_parse_table_3753(t_small_parse_table_array *v)
{
	v->a[75060] = actions(3066);
	v->a[75061] = 1;
	v->a[75062] = anon_sym_DOLLAR_LBRACE;
	v->a[75063] = actions(3068);
	v->a[75064] = 1;
	v->a[75065] = anon_sym_DOLLAR_LPAREN;
	v->a[75066] = actions(3070);
	v->a[75067] = 1;
	v->a[75068] = anon_sym_BQUOTE;
	v->a[75069] = actions(3094);
	v->a[75070] = 1;
	v->a[75071] = anon_sym_DOLLAR;
	v->a[75072] = actions(3096);
	v->a[75073] = 1;
	v->a[75074] = anon_sym_DQUOTE;
	v->a[75075] = state(1610);
	v->a[75076] = 1;
	v->a[75077] = aux_sym_string_repeat1;
	v->a[75078] = state(1748);
	v->a[75079] = 4;
	small_parse_table_3754(v);
}

void	small_parse_table_3754(t_small_parse_table_array *v)
{
	v->a[75080] = sym_arithmetic_expansion;
	v->a[75081] = sym_simple_expansion;
	v->a[75082] = sym_expansion;
	v->a[75083] = sym_command_substitution;
	v->a[75084] = 4;
	v->a[75085] = actions(3);
	v->a[75086] = 1;
	v->a[75087] = sym_comment;
	v->a[75088] = actions(3052);
	v->a[75089] = 1;
	v->a[75090] = anon_sym_esac;
	v->a[75091] = actions(3054);
	v->a[75092] = 1;
	v->a[75093] = sym_extglob_pattern;
	v->a[75094] = actions(3050);
	v->a[75095] = 10;
	v->a[75096] = anon_sym_LPAREN;
	v->a[75097] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75098] = anon_sym_DOLLAR;
	v->a[75099] = anon_sym_DQUOTE;
	small_parse_table_3755(v);
}

/* EOF small_parse_table_750.c */
