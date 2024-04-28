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
	v->a[93000] = sym__bare_dollar;
	v->a[93001] = sym__brace_start;
	v->a[93002] = anon_sym_LPAREN_LPAREN;
	v->a[93003] = anon_sym_PIPE_PIPE;
	v->a[93004] = anon_sym_AMP_AMP;
	v->a[93005] = anon_sym_GT_GT;
	v->a[93006] = anon_sym_PIPE_AMP;
	v->a[93007] = anon_sym_AMP_GT_GT;
	v->a[93008] = anon_sym_GT_PIPE;
	v->a[93009] = anon_sym_LT_AMP_DASH;
	v->a[93010] = anon_sym_GT_AMP_DASH;
	v->a[93011] = anon_sym_LT_LT_DASH;
	v->a[93012] = anon_sym_LT_LT_LT;
	v->a[93013] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[93014] = anon_sym_DOLLAR_LBRACK;
	v->a[93015] = sym__special_character;
	v->a[93016] = anon_sym_DQUOTE;
	v->a[93017] = sym_raw_string;
	v->a[93018] = sym_ansi_c_string;
	v->a[93019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4651(v);
}

void	small_parse_table_4651(t_small_parse_table_array *v)
{
	v->a[93020] = anon_sym_DOLLAR_BQUOTE;
	v->a[93021] = anon_sym_LT_LPAREN;
	v->a[93022] = anon_sym_GT_LPAREN;
	v->a[93023] = 27;
	v->a[93024] = actions(71);
	v->a[93025] = 1;
	v->a[93026] = sym_comment;
	v->a[93027] = actions(233);
	v->a[93028] = 1;
	v->a[93029] = anon_sym_RPAREN_RPAREN;
	v->a[93030] = actions(1131);
	v->a[93031] = 1;
	v->a[93032] = anon_sym_LPAREN;
	v->a[93033] = actions(1141);
	v->a[93034] = 1;
	v->a[93035] = anon_sym_DOLLAR_LBRACK;
	v->a[93036] = actions(1145);
	v->a[93037] = 1;
	v->a[93038] = anon_sym_DOLLAR;
	v->a[93039] = actions(1149);
	small_parse_table_4652(v);
}

void	small_parse_table_4652(t_small_parse_table_array *v)
{
	v->a[93040] = 1;
	v->a[93041] = anon_sym_DQUOTE;
	v->a[93042] = actions(1153);
	v->a[93043] = 1;
	v->a[93044] = aux_sym_number_token1;
	v->a[93045] = actions(1155);
	v->a[93046] = 1;
	v->a[93047] = aux_sym_number_token2;
	v->a[93048] = actions(1157);
	v->a[93049] = 1;
	v->a[93050] = anon_sym_DOLLAR_LBRACE;
	v->a[93051] = actions(1159);
	v->a[93052] = 1;
	v->a[93053] = anon_sym_DOLLAR_LPAREN;
	v->a[93054] = actions(1163);
	v->a[93055] = 1;
	v->a[93056] = anon_sym_DOLLAR_BQUOTE;
	v->a[93057] = actions(1169);
	v->a[93058] = 1;
	v->a[93059] = sym__brace_start;
	small_parse_table_4653(v);
}

void	small_parse_table_4653(t_small_parse_table_array *v)
{
	v->a[93060] = actions(1171);
	v->a[93061] = 1;
	v->a[93062] = sym_word;
	v->a[93063] = actions(1173);
	v->a[93064] = 1;
	v->a[93065] = anon_sym_BANG;
	v->a[93066] = actions(1179);
	v->a[93067] = 1;
	v->a[93068] = anon_sym_TILDE;
	v->a[93069] = actions(1181);
	v->a[93070] = 1;
	v->a[93071] = sym__special_character;
	v->a[93072] = actions(1185);
	v->a[93073] = 1;
	v->a[93074] = sym_test_operator;
	v->a[93075] = actions(3060);
	v->a[93076] = 1;
	v->a[93077] = anon_sym_BQUOTE;
	v->a[93078] = state(2484);
	v->a[93079] = 1;
	small_parse_table_4654(v);
}

void	small_parse_table_4654(t_small_parse_table_array *v)
{
	v->a[93080] = aux_sym__literal_repeat1;
	v->a[93081] = state(3073);
	v->a[93082] = 1;
	v->a[93083] = sym__expression;
	v->a[93084] = actions(1129);
	v->a[93085] = 2;
	v->a[93086] = anon_sym_LPAREN_LPAREN;
	v->a[93087] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[93088] = actions(1165);
	v->a[93089] = 2;
	v->a[93090] = anon_sym_LT_LPAREN;
	v->a[93091] = anon_sym_GT_LPAREN;
	v->a[93092] = actions(1175);
	v->a[93093] = 2;
	v->a[93094] = anon_sym_PLUS_PLUS2;
	v->a[93095] = anon_sym_DASH_DASH2;
	v->a[93096] = actions(1177);
	v->a[93097] = 2;
	v->a[93098] = anon_sym_DASH2;
	v->a[93099] = anon_sym_PLUS2;
	small_parse_table_4655(v);
}

/* EOF small_parse_table_930.c */
