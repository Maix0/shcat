/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_930.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4650(t_small_parse_table_array *v)
{
	v->a[93000] = 1;
	v->a[93001] = anon_sym_BQUOTE;
	v->a[93002] = state(533);
	v->a[93003] = 2;
	v->a[93004] = sym_expansion;
	v->a[93005] = sym_command_substitution;
	v->a[93006] = 2;
	v->a[93007] = actions(1404);
	v->a[93008] = 1;
	v->a[93009] = sym_comment;
	v->a[93010] = actions(1315);
	v->a[93011] = 5;
	v->a[93012] = sym__concat;
	v->a[93013] = anon_sym_PIPE;
	v->a[93014] = anon_sym_RPAREN;
	v->a[93015] = anon_sym_RBRACE;
	v->a[93016] = aux_sym_concatenation_token1;
	v->a[93017] = 6;
	v->a[93018] = actions(1404);
	v->a[93019] = 1;
	small_parse_table_4651(v);
}

void	small_parse_table_4651(t_small_parse_table_array *v)
{
	v->a[93020] = sym_comment;
	v->a[93021] = actions(4208);
	v->a[93022] = 1;
	v->a[93023] = sym__heredoc_body_beginning;
	v->a[93024] = actions(4216);
	v->a[93025] = 1;
	v->a[93026] = sym_simple_heredoc_body;
	v->a[93027] = state(1567);
	v->a[93028] = 1;
	v->a[93029] = sym__heredoc_body;
	v->a[93030] = state(1568);
	v->a[93031] = 1;
	v->a[93032] = sym__simple_heredoc_body;
	v->a[93033] = state(2119);
	v->a[93034] = 1;
	v->a[93035] = sym_heredoc_body;
	v->a[93036] = 5;
	v->a[93037] = actions(1404);
	v->a[93038] = 1;
	v->a[93039] = sym_comment;
	small_parse_table_4652(v);
}

void	small_parse_table_4652(t_small_parse_table_array *v)
{
	v->a[93040] = actions(4354);
	v->a[93041] = 1;
	v->a[93042] = anon_sym_DOLLAR_LBRACE;
	v->a[93043] = actions(4356);
	v->a[93044] = 1;
	v->a[93045] = anon_sym_DOLLAR_LPAREN;
	v->a[93046] = actions(4358);
	v->a[93047] = 1;
	v->a[93048] = anon_sym_BQUOTE;
	v->a[93049] = state(486);
	v->a[93050] = 2;
	v->a[93051] = sym_expansion;
	v->a[93052] = sym_command_substitution;
	v->a[93053] = 5;
	v->a[93054] = actions(1404);
	v->a[93055] = 1;
	v->a[93056] = sym_comment;
	v->a[93057] = actions(4208);
	v->a[93058] = 1;
	v->a[93059] = sym__heredoc_body_beginning;
	small_parse_table_4653(v);
}

void	small_parse_table_4653(t_small_parse_table_array *v)
{
	v->a[93060] = actions(4265);
	v->a[93061] = 1;
	v->a[93062] = sym_simple_heredoc_body;
	v->a[93063] = state(2240);
	v->a[93064] = 1;
	v->a[93065] = sym_heredoc_body;
	v->a[93066] = state(1245);
	v->a[93067] = 2;
	v->a[93068] = sym__heredoc_body;
	v->a[93069] = sym__simple_heredoc_body;
	v->a[93070] = 4;
	v->a[93071] = actions(1404);
	v->a[93072] = 1;
	v->a[93073] = sym_comment;
	v->a[93074] = state(1991);
	v->a[93075] = 1;
	v->a[93076] = aux_sym_concatenation_repeat1;
	v->a[93077] = actions(4184);
	v->a[93078] = 2;
	v->a[93079] = sym__concat;
	small_parse_table_4654(v);
}

void	small_parse_table_4654(t_small_parse_table_array *v)
{
	v->a[93080] = aux_sym_concatenation_token1;
	v->a[93081] = actions(4360);
	v->a[93082] = 2;
	v->a[93083] = anon_sym_PIPE;
	v->a[93084] = anon_sym_RPAREN;
	v->a[93085] = 5;
	v->a[93086] = actions(1404);
	v->a[93087] = 1;
	v->a[93088] = sym_comment;
	v->a[93089] = actions(4208);
	v->a[93090] = 1;
	v->a[93091] = sym__heredoc_body_beginning;
	v->a[93092] = actions(4265);
	v->a[93093] = 1;
	v->a[93094] = sym_simple_heredoc_body;
	v->a[93095] = state(2240);
	v->a[93096] = 1;
	v->a[93097] = sym_heredoc_body;
	v->a[93098] = state(1244);
	v->a[93099] = 2;
	small_parse_table_4655(v);
}

/* EOF small_parse_table_930.c */
