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
	v->a[26001] = aux_sym_heredoc_redirect_token1;
	v->a[26002] = state(1708);
	v->a[26003] = 1;
	v->a[26004] = aux_sym__heredoc_command;
	v->a[26005] = state(2098);
	v->a[26006] = 1;
	v->a[26007] = sym_concatenation;
	v->a[26008] = state(2295);
	v->a[26009] = 1;
	v->a[26010] = sym__heredoc_expression;
	v->a[26011] = state(2296);
	v->a[26012] = 1;
	v->a[26013] = sym__heredoc_pipeline;
	v->a[26014] = actions(874);
	v->a[26015] = 2;
	v->a[26016] = anon_sym_PIPE;
	v->a[26017] = anon_sym_PIPE_AMP;
	v->a[26018] = actions(876);
	v->a[26019] = 2;
	small_parse_table_1301(v);
}

void	small_parse_table_1301(t_small_parse_table_array *v)
{
	v->a[26020] = anon_sym_AMP_AMP;
	v->a[26021] = anon_sym_PIPE_PIPE;
	v->a[26022] = actions(880);
	v->a[26023] = 2;
	v->a[26024] = anon_sym_LT_AMP_DASH;
	v->a[26025] = anon_sym_GT_AMP_DASH;
	v->a[26026] = state(1713);
	v->a[26027] = 2;
	v->a[26028] = sym_file_redirect;
	v->a[26029] = aux_sym_redirected_statement_repeat2;
	v->a[26030] = actions(872);
	v->a[26031] = 3;
	v->a[26032] = sym_raw_string;
	v->a[26033] = sym_number;
	v->a[26034] = sym_word;
	v->a[26035] = state(1944);
	v->a[26036] = 5;
	v->a[26037] = sym_arithmetic_expansion;
	v->a[26038] = sym_string;
	v->a[26039] = sym_simple_expansion;
	small_parse_table_1302(v);
}

void	small_parse_table_1302(t_small_parse_table_array *v)
{
	v->a[26040] = sym_expansion;
	v->a[26041] = sym_command_substitution;
	v->a[26042] = actions(878);
	v->a[26043] = 8;
	v->a[26044] = anon_sym_LT;
	v->a[26045] = anon_sym_GT;
	v->a[26046] = anon_sym_GT_GT;
	v->a[26047] = anon_sym_AMP_GT;
	v->a[26048] = anon_sym_AMP_GT_GT;
	v->a[26049] = anon_sym_LT_AMP;
	v->a[26050] = anon_sym_GT_AMP;
	v->a[26051] = anon_sym_GT_PIPE;
	v->a[26052] = 5;
	v->a[26053] = actions(3);
	v->a[26054] = 1;
	v->a[26055] = sym_comment;
	v->a[26056] = state(734);
	v->a[26057] = 1;
	v->a[26058] = sym_concatenation;
	v->a[26059] = actions(717);
	small_parse_table_1303(v);
}

void	small_parse_table_1303(t_small_parse_table_array *v)
{
	v->a[26060] = 2;
	v->a[26061] = sym_file_descriptor;
	v->a[26062] = sym_variable_name;
	v->a[26063] = state(501);
	v->a[26064] = 5;
	v->a[26065] = sym_arithmetic_expansion;
	v->a[26066] = sym_string;
	v->a[26067] = sym_simple_expansion;
	v->a[26068] = sym_expansion;
	v->a[26069] = sym_command_substitution;
	v->a[26070] = actions(719);
	v->a[26071] = 28;
	v->a[26072] = anon_sym_PIPE;
	v->a[26073] = anon_sym_SEMI_SEMI;
	v->a[26074] = anon_sym_AMP_AMP;
	v->a[26075] = anon_sym_PIPE_PIPE;
	v->a[26076] = anon_sym_LT;
	v->a[26077] = anon_sym_GT;
	v->a[26078] = anon_sym_GT_GT;
	v->a[26079] = anon_sym_AMP_GT;
	small_parse_table_1304(v);
}

void	small_parse_table_1304(t_small_parse_table_array *v)
{
	v->a[26080] = anon_sym_AMP_GT_GT;
	v->a[26081] = anon_sym_LT_AMP;
	v->a[26082] = anon_sym_GT_AMP;
	v->a[26083] = anon_sym_GT_PIPE;
	v->a[26084] = anon_sym_LT_AMP_DASH;
	v->a[26085] = anon_sym_GT_AMP_DASH;
	v->a[26086] = anon_sym_LT_LT;
	v->a[26087] = anon_sym_LT_LT_DASH;
	v->a[26088] = aux_sym_heredoc_redirect_token1;
	v->a[26089] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26090] = anon_sym_AMP;
	v->a[26091] = anon_sym_DOLLAR;
	v->a[26092] = anon_sym_DQUOTE;
	v->a[26093] = sym_raw_string;
	v->a[26094] = sym_number;
	v->a[26095] = anon_sym_DOLLAR_LBRACE;
	v->a[26096] = anon_sym_DOLLAR_LPAREN;
	v->a[26097] = anon_sym_BQUOTE;
	v->a[26098] = sym_word;
	v->a[26099] = anon_sym_SEMI;
	small_parse_table_1305(v);
}

/* EOF small_parse_table_260.c */
