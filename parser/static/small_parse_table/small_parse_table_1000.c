/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1000.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5000(t_small_parse_table_array *v)
{
	v->a[100000] = state(587);
	v->a[100001] = 7;
	v->a[100002] = sym_arithmetic_expansion;
	v->a[100003] = sym_brace_expression;
	v->a[100004] = sym_string;
	v->a[100005] = sym_number;
	v->a[100006] = sym_simple_expansion;
	v->a[100007] = sym_expansion;
	v->a[100008] = sym_command_substitution;
	v->a[100009] = 5;
	v->a[100010] = actions(3);
	v->a[100011] = 1;
	v->a[100012] = sym_comment;
	v->a[100013] = actions(2516);
	v->a[100014] = 2;
	v->a[100015] = anon_sym_PIPE;
	v->a[100016] = anon_sym_PIPE_AMP;
	v->a[100017] = actions(2632);
	v->a[100018] = 3;
	v->a[100019] = sym_file_descriptor;
	small_parse_table_5001(v);
}

void	small_parse_table_5001(t_small_parse_table_array *v)
{
	v->a[100020] = ts_builtin_sym_end;
	v->a[100021] = aux_sym_heredoc_redirect_token1;
	v->a[100022] = state(2129);
	v->a[100023] = 3;
	v->a[100024] = sym_file_redirect;
	v->a[100025] = sym_heredoc_redirect;
	v->a[100026] = aux_sym_redirected_statement_repeat1;
	v->a[100027] = actions(2630);
	v->a[100028] = 17;
	v->a[100029] = anon_sym_SEMI_SEMI;
	v->a[100030] = anon_sym_AMP_AMP;
	v->a[100031] = anon_sym_PIPE_PIPE;
	v->a[100032] = anon_sym_LT;
	v->a[100033] = anon_sym_GT;
	v->a[100034] = anon_sym_GT_GT;
	v->a[100035] = anon_sym_AMP_GT;
	v->a[100036] = anon_sym_AMP_GT_GT;
	v->a[100037] = anon_sym_LT_AMP;
	v->a[100038] = anon_sym_GT_AMP;
	v->a[100039] = anon_sym_GT_PIPE;
	small_parse_table_5002(v);
}

void	small_parse_table_5002(t_small_parse_table_array *v)
{
	v->a[100040] = anon_sym_LT_AMP_DASH;
	v->a[100041] = anon_sym_GT_AMP_DASH;
	v->a[100042] = anon_sym_LT_LT;
	v->a[100043] = anon_sym_LT_LT_DASH;
	v->a[100044] = anon_sym_AMP;
	v->a[100045] = anon_sym_SEMI;
	v->a[100046] = 7;
	v->a[100047] = actions(3);
	v->a[100048] = 1;
	v->a[100049] = sym_comment;
	v->a[100050] = actions(5258);
	v->a[100051] = 1;
	v->a[100052] = sym_file_descriptor;
	v->a[100053] = actions(5641);
	v->a[100054] = 1;
	v->a[100055] = aux_sym_heredoc_redirect_token1;
	v->a[100056] = state(2245);
	v->a[100057] = 1;
	v->a[100058] = sym_file_redirect;
	v->a[100059] = actions(5155);
	small_parse_table_5003(v);
}

void	small_parse_table_5003(t_small_parse_table_array *v)
{
	v->a[100060] = 2;
	v->a[100061] = anon_sym_LT_AMP_DASH;
	v->a[100062] = anon_sym_GT_AMP_DASH;
	v->a[100063] = actions(5153);
	v->a[100064] = 8;
	v->a[100065] = anon_sym_LT;
	v->a[100066] = anon_sym_GT;
	v->a[100067] = anon_sym_GT_GT;
	v->a[100068] = anon_sym_AMP_GT;
	v->a[100069] = anon_sym_AMP_GT_GT;
	v->a[100070] = anon_sym_LT_AMP;
	v->a[100071] = anon_sym_GT_AMP;
	v->a[100072] = anon_sym_GT_PIPE;
	v->a[100073] = actions(5639);
	v->a[100074] = 12;
	v->a[100075] = anon_sym_esac;
	v->a[100076] = anon_sym_PIPE;
	v->a[100077] = anon_sym_SEMI_SEMI;
	v->a[100078] = anon_sym_SEMI_AMP;
	v->a[100079] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_5004(v);
}

void	small_parse_table_5004(t_small_parse_table_array *v)
{
	v->a[100080] = anon_sym_PIPE_AMP;
	v->a[100081] = anon_sym_AMP_AMP;
	v->a[100082] = anon_sym_PIPE_PIPE;
	v->a[100083] = anon_sym_LT_LT;
	v->a[100084] = anon_sym_LT_LT_DASH;
	v->a[100085] = anon_sym_AMP;
	v->a[100086] = anon_sym_SEMI;
	v->a[100087] = 19;
	v->a[100088] = actions(3);
	v->a[100089] = 1;
	v->a[100090] = sym_comment;
	v->a[100091] = actions(5643);
	v->a[100092] = 1;
	v->a[100093] = sym_word;
	v->a[100094] = actions(5645);
	v->a[100095] = 1;
	v->a[100096] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100097] = actions(5647);
	v->a[100098] = 1;
	v->a[100099] = anon_sym_DOLLAR;
	small_parse_table_5005(v);
}

/* EOF small_parse_table_1000.c */
