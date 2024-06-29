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
	v->a[26000] = 9;
	v->a[26001] = actions(3);
	v->a[26002] = 1;
	v->a[26003] = sym_comment;
	v->a[26004] = actions(766);
	v->a[26005] = 1;
	v->a[26006] = anon_sym_PIPE;
	v->a[26007] = actions(774);
	v->a[26008] = 1;
	v->a[26009] = sym_file_descriptor;
	v->a[26010] = actions(837);
	v->a[26011] = 1;
	v->a[26012] = sym_variable_name;
	v->a[26013] = actions(927);
	v->a[26014] = 1;
	v->a[26015] = ts_builtin_sym_end;
	v->a[26016] = state(1131);
	v->a[26017] = 2;
	v->a[26018] = sym_variable_assignment;
	v->a[26019] = aux_sym__variable_assignments_repeat1;
	small_parse_table_1301(v);
}

void	small_parse_table_1301(t_small_parse_table_array *v)
{
	v->a[26020] = state(1133);
	v->a[26021] = 3;
	v->a[26022] = sym_file_redirect;
	v->a[26023] = sym_heredoc_redirect;
	v->a[26024] = aux_sym_redirected_statement_repeat1;
	v->a[26025] = actions(900);
	v->a[26026] = 8;
	v->a[26027] = anon_sym_SEMI_SEMI;
	v->a[26028] = anon_sym_AMP_AMP;
	v->a[26029] = anon_sym_PIPE_PIPE;
	v->a[26030] = anon_sym_LT_LT;
	v->a[26031] = anon_sym_LT_LT_DASH;
	v->a[26032] = aux_sym_heredoc_redirect_token1;
	v->a[26033] = anon_sym_AMP;
	v->a[26034] = anon_sym_SEMI;
	v->a[26035] = actions(762);
	v->a[26036] = 19;
	v->a[26037] = anon_sym_LT;
	v->a[26038] = anon_sym_GT;
	v->a[26039] = anon_sym_GT_GT;
	small_parse_table_1302(v);
}

void	small_parse_table_1302(t_small_parse_table_array *v)
{
	v->a[26040] = anon_sym_AMP_GT;
	v->a[26041] = anon_sym_AMP_GT_GT;
	v->a[26042] = anon_sym_LT_AMP;
	v->a[26043] = anon_sym_GT_AMP;
	v->a[26044] = anon_sym_GT_PIPE;
	v->a[26045] = anon_sym_LT_AMP_DASH;
	v->a[26046] = anon_sym_GT_AMP_DASH;
	v->a[26047] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26048] = anon_sym_DOLLAR;
	v->a[26049] = anon_sym_DQUOTE;
	v->a[26050] = sym_raw_string;
	v->a[26051] = sym_number;
	v->a[26052] = anon_sym_DOLLAR_LBRACE;
	v->a[26053] = anon_sym_DOLLAR_LPAREN;
	v->a[26054] = anon_sym_BQUOTE;
	v->a[26055] = sym_word;
	v->a[26056] = 8;
	v->a[26057] = actions(3);
	v->a[26058] = 1;
	v->a[26059] = sym_comment;
	small_parse_table_1303(v);
}

void	small_parse_table_1303(t_small_parse_table_array *v)
{
	v->a[26060] = actions(766);
	v->a[26061] = 1;
	v->a[26062] = anon_sym_PIPE;
	v->a[26063] = actions(774);
	v->a[26064] = 1;
	v->a[26065] = sym_file_descriptor;
	v->a[26066] = actions(776);
	v->a[26067] = 1;
	v->a[26068] = sym_variable_name;
	v->a[26069] = state(1136);
	v->a[26070] = 2;
	v->a[26071] = sym_variable_assignment;
	v->a[26072] = aux_sym__variable_assignments_repeat1;
	v->a[26073] = state(1123);
	v->a[26074] = 3;
	v->a[26075] = sym_file_redirect;
	v->a[26076] = sym_heredoc_redirect;
	v->a[26077] = aux_sym_redirected_statement_repeat1;
	v->a[26078] = actions(900);
	v->a[26079] = 9;
	small_parse_table_1304(v);
}

void	small_parse_table_1304(t_small_parse_table_array *v)
{
	v->a[26080] = anon_sym_esac;
	v->a[26081] = anon_sym_SEMI_SEMI;
	v->a[26082] = anon_sym_AMP_AMP;
	v->a[26083] = anon_sym_PIPE_PIPE;
	v->a[26084] = anon_sym_LT_LT;
	v->a[26085] = anon_sym_LT_LT_DASH;
	v->a[26086] = aux_sym_heredoc_redirect_token1;
	v->a[26087] = anon_sym_AMP;
	v->a[26088] = anon_sym_SEMI;
	v->a[26089] = actions(762);
	v->a[26090] = 19;
	v->a[26091] = anon_sym_LT;
	v->a[26092] = anon_sym_GT;
	v->a[26093] = anon_sym_GT_GT;
	v->a[26094] = anon_sym_AMP_GT;
	v->a[26095] = anon_sym_AMP_GT_GT;
	v->a[26096] = anon_sym_LT_AMP;
	v->a[26097] = anon_sym_GT_AMP;
	v->a[26098] = anon_sym_GT_PIPE;
	v->a[26099] = anon_sym_LT_AMP_DASH;
	small_parse_table_1305(v);
}

/* EOF small_parse_table_260.c */
