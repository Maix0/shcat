/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3110.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15550(t_small_parse_table_array *v)
{
	v->a[311000] = 6;
	v->a[311001] = actions(71);
	v->a[311002] = 1;
	v->a[311003] = sym_comment;
	v->a[311004] = actions(9320);
	v->a[311005] = 1;
	v->a[311006] = anon_sym_DOLLAR_LBRACE;
	v->a[311007] = actions(9322);
	v->a[311008] = 1;
	v->a[311009] = anon_sym_BQUOTE;
	v->a[311010] = actions(9324);
	v->a[311011] = 1;
	v->a[311012] = anon_sym_DOLLAR_BQUOTE;
	v->a[311013] = actions(14514);
	v->a[311014] = 1;
	v->a[311015] = anon_sym_DOLLAR_LPAREN;
	v->a[311016] = state(4561);
	v->a[311017] = 2;
	v->a[311018] = sym_expansion;
	v->a[311019] = sym_command_substitution;
	small_parse_table_15551(v);
}

void	small_parse_table_15551(t_small_parse_table_array *v)
{
	v->a[311020] = 6;
	v->a[311021] = actions(71);
	v->a[311022] = 1;
	v->a[311023] = sym_comment;
	v->a[311024] = actions(4834);
	v->a[311025] = 1;
	v->a[311026] = anon_sym_DOLLAR_LBRACE;
	v->a[311027] = actions(4838);
	v->a[311028] = 1;
	v->a[311029] = anon_sym_BQUOTE;
	v->a[311030] = actions(4840);
	v->a[311031] = 1;
	v->a[311032] = anon_sym_DOLLAR_BQUOTE;
	v->a[311033] = actions(14516);
	v->a[311034] = 1;
	v->a[311035] = anon_sym_DOLLAR_LPAREN;
	v->a[311036] = state(2663);
	v->a[311037] = 2;
	v->a[311038] = sym_expansion;
	v->a[311039] = sym_command_substitution;
	small_parse_table_15552(v);
}

void	small_parse_table_15552(t_small_parse_table_array *v)
{
	v->a[311040] = 6;
	v->a[311041] = actions(71);
	v->a[311042] = 1;
	v->a[311043] = sym_comment;
	v->a[311044] = actions(9916);
	v->a[311045] = 1;
	v->a[311046] = anon_sym_DOLLAR_LBRACE;
	v->a[311047] = actions(9918);
	v->a[311048] = 1;
	v->a[311049] = anon_sym_DOLLAR_LPAREN;
	v->a[311050] = actions(9920);
	v->a[311051] = 1;
	v->a[311052] = anon_sym_BQUOTE;
	v->a[311053] = actions(9922);
	v->a[311054] = 1;
	v->a[311055] = anon_sym_DOLLAR_BQUOTE;
	v->a[311056] = state(3295);
	v->a[311057] = 2;
	v->a[311058] = sym_expansion;
	v->a[311059] = sym_command_substitution;
	small_parse_table_15553(v);
}

void	small_parse_table_15553(t_small_parse_table_array *v)
{
	v->a[311060] = 3;
	v->a[311061] = actions(71);
	v->a[311062] = 1;
	v->a[311063] = sym_comment;
	v->a[311064] = actions(14518);
	v->a[311065] = 1;
	v->a[311066] = anon_sym_RBRACE3;
	v->a[311067] = actions(14437);
	v->a[311068] = 5;
	v->a[311069] = anon_sym_PLUS;
	v->a[311070] = anon_sym_DASH;
	v->a[311071] = anon_sym_STAR;
	v->a[311072] = anon_sym_SLASH;
	v->a[311073] = anon_sym_PERCENT;
	v->a[311074] = 6;
	v->a[311075] = actions(3);
	v->a[311076] = 1;
	v->a[311077] = sym_comment;
	v->a[311078] = actions(14500);
	v->a[311079] = 1;
	small_parse_table_15554(v);
}

void	small_parse_table_15554(t_small_parse_table_array *v)
{
	v->a[311080] = anon_sym_COMMA;
	v->a[311081] = actions(14522);
	v->a[311082] = 1;
	v->a[311083] = aux_sym_heredoc_redirect_token1;
	v->a[311084] = state(4646);
	v->a[311085] = 1;
	v->a[311086] = sym__c_terminator;
	v->a[311087] = state(6463);
	v->a[311088] = 1;
	v->a[311089] = aux_sym__for_body_repeat1;
	v->a[311090] = actions(14520);
	v->a[311091] = 2;
	v->a[311092] = anon_sym_SEMI;
	v->a[311093] = anon_sym_AMP;
	v->a[311094] = 6;
	v->a[311095] = actions(71);
	v->a[311096] = 1;
	v->a[311097] = sym_comment;
	v->a[311098] = actions(7972);
	v->a[311099] = 1;
	small_parse_table_15555(v);
}

/* EOF small_parse_table_3110.c */
