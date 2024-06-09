/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_260.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1300(t_small_parse_table_array *v)
{
	v->a[26000] = 1;
	v->a[26001] = aux_sym_number_token2;
	v->a[26002] = actions(861);
	v->a[26003] = 1;
	v->a[26004] = anon_sym_DOLLAR_LBRACE;
	v->a[26005] = actions(864);
	v->a[26006] = 1;
	v->a[26007] = anon_sym_DOLLAR_LPAREN;
	v->a[26008] = actions(867);
	v->a[26009] = 1;
	v->a[26010] = anon_sym_BQUOTE;
	v->a[26011] = actions(963);
	v->a[26012] = 2;
	v->a[26013] = sym_raw_string;
	v->a[26014] = sym_word;
	v->a[26015] = state(245);
	v->a[26016] = 2;
	v->a[26017] = sym_concatenation;
	v->a[26018] = aux_sym_for_statement_repeat1;
	v->a[26019] = state(566);
	small_parse_table_1301(v);
}

void	small_parse_table_1301(t_small_parse_table_array *v)
{
	v->a[26020] = 6;
	v->a[26021] = sym_arithmetic_expansion;
	v->a[26022] = sym_string;
	v->a[26023] = sym_number;
	v->a[26024] = sym_simple_expansion;
	v->a[26025] = sym_expansion;
	v->a[26026] = sym_command_substitution;
	v->a[26027] = actions(636);
	v->a[26028] = 19;
	v->a[26029] = anon_sym_PIPE;
	v->a[26030] = anon_sym_SEMI_SEMI;
	v->a[26031] = anon_sym_AMP_AMP;
	v->a[26032] = anon_sym_PIPE_PIPE;
	v->a[26033] = anon_sym_LT;
	v->a[26034] = anon_sym_GT;
	v->a[26035] = anon_sym_GT_GT;
	v->a[26036] = anon_sym_AMP_GT;
	v->a[26037] = anon_sym_AMP_GT_GT;
	v->a[26038] = anon_sym_LT_AMP;
	v->a[26039] = anon_sym_GT_AMP;
	small_parse_table_1302(v);
}

void	small_parse_table_1302(t_small_parse_table_array *v)
{
	v->a[26040] = anon_sym_GT_PIPE;
	v->a[26041] = anon_sym_LT_AMP_DASH;
	v->a[26042] = anon_sym_GT_AMP_DASH;
	v->a[26043] = anon_sym_LT_LT;
	v->a[26044] = anon_sym_LT_LT_DASH;
	v->a[26045] = aux_sym_heredoc_redirect_token1;
	v->a[26046] = anon_sym_AMP;
	v->a[26047] = anon_sym_SEMI;
	v->a[26048] = 14;
	v->a[26049] = actions(3);
	v->a[26050] = 1;
	v->a[26051] = sym_comment;
	v->a[26052] = actions(565);
	v->a[26053] = 1;
	v->a[26054] = sym_file_descriptor;
	v->a[26055] = actions(761);
	v->a[26056] = 1;
	v->a[26057] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26058] = actions(763);
	v->a[26059] = 1;
	small_parse_table_1303(v);
}

void	small_parse_table_1303(t_small_parse_table_array *v)
{
	v->a[26060] = anon_sym_DOLLAR;
	v->a[26061] = actions(765);
	v->a[26062] = 1;
	v->a[26063] = anon_sym_DQUOTE;
	v->a[26064] = actions(767);
	v->a[26065] = 1;
	v->a[26066] = aux_sym_number_token1;
	v->a[26067] = actions(769);
	v->a[26068] = 1;
	v->a[26069] = aux_sym_number_token2;
	v->a[26070] = actions(771);
	v->a[26071] = 1;
	v->a[26072] = anon_sym_DOLLAR_LBRACE;
	v->a[26073] = actions(773);
	v->a[26074] = 1;
	v->a[26075] = anon_sym_DOLLAR_LPAREN;
	v->a[26076] = actions(775);
	v->a[26077] = 1;
	v->a[26078] = anon_sym_BQUOTE;
	v->a[26079] = actions(955);
	small_parse_table_1304(v);
}

void	small_parse_table_1304(t_small_parse_table_array *v)
{
	v->a[26080] = 2;
	v->a[26081] = sym_raw_string;
	v->a[26082] = sym_word;
	v->a[26083] = state(245);
	v->a[26084] = 2;
	v->a[26085] = sym_concatenation;
	v->a[26086] = aux_sym_for_statement_repeat1;
	v->a[26087] = state(566);
	v->a[26088] = 6;
	v->a[26089] = sym_arithmetic_expansion;
	v->a[26090] = sym_string;
	v->a[26091] = sym_number;
	v->a[26092] = sym_simple_expansion;
	v->a[26093] = sym_expansion;
	v->a[26094] = sym_command_substitution;
	v->a[26095] = actions(567);
	v->a[26096] = 19;
	v->a[26097] = anon_sym_PIPE;
	v->a[26098] = anon_sym_SEMI_SEMI;
	v->a[26099] = anon_sym_AMP_AMP;
	small_parse_table_1305(v);
}

/* EOF small_parse_table_260.c */
