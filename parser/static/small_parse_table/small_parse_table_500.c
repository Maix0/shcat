/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_500.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2500(t_small_parse_table_array *v)
{
	v->a[50000] = 8;
	v->a[50001] = actions(3);
	v->a[50002] = 1;
	v->a[50003] = sym_comment;
	v->a[50004] = actions(2277);
	v->a[50005] = 1;
	v->a[50006] = anon_sym_POUND;
	v->a[50007] = actions(2279);
	v->a[50008] = 1;
	v->a[50009] = aux_sym__simple_variable_name_token1;
	v->a[50010] = actions(2281);
	v->a[50011] = 1;
	v->a[50012] = anon_sym_0;
	v->a[50013] = actions(2283);
	v->a[50014] = 1;
	v->a[50015] = sym_variable_name;
	v->a[50016] = actions(2448);
	v->a[50017] = 1;
	v->a[50018] = anon_sym_RBRACE;
	v->a[50019] = state(1666);
	small_parse_table_2501(v);
}

void	small_parse_table_2501(t_small_parse_table_array *v)
{
	v->a[50020] = 1;
	v->a[50021] = sym__expansion_body;
	v->a[50022] = actions(2275);
	v->a[50023] = 6;
	v->a[50024] = anon_sym_BANG;
	v->a[50025] = anon_sym_DASH;
	v->a[50026] = anon_sym_STAR;
	v->a[50027] = anon_sym_QMARK;
	v->a[50028] = anon_sym_DOLLAR;
	v->a[50029] = anon_sym_AT;
	v->a[50030] = 10;
	v->a[50031] = actions(3);
	v->a[50032] = 1;
	v->a[50033] = sym_comment;
	v->a[50034] = actions(2293);
	v->a[50035] = 1;
	v->a[50036] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50037] = actions(2299);
	v->a[50038] = 1;
	v->a[50039] = sym_string_content;
	small_parse_table_2502(v);
}

void	small_parse_table_2502(t_small_parse_table_array *v)
{
	v->a[50040] = actions(2301);
	v->a[50041] = 1;
	v->a[50042] = anon_sym_DOLLAR_LBRACE;
	v->a[50043] = actions(2303);
	v->a[50044] = 1;
	v->a[50045] = anon_sym_DOLLAR_LPAREN;
	v->a[50046] = actions(2305);
	v->a[50047] = 1;
	v->a[50048] = anon_sym_BQUOTE;
	v->a[50049] = actions(2450);
	v->a[50050] = 1;
	v->a[50051] = anon_sym_DOLLAR;
	v->a[50052] = actions(2452);
	v->a[50053] = 1;
	v->a[50054] = anon_sym_DQUOTE;
	v->a[50055] = state(1176);
	v->a[50056] = 1;
	v->a[50057] = aux_sym_string_repeat1;
	v->a[50058] = state(1394);
	v->a[50059] = 4;
	small_parse_table_2503(v);
}

void	small_parse_table_2503(t_small_parse_table_array *v)
{
	v->a[50060] = sym_arithmetic_expansion;
	v->a[50061] = sym_simple_expansion;
	v->a[50062] = sym_expansion;
	v->a[50063] = sym_command_substitution;
	v->a[50064] = 5;
	v->a[50065] = actions(3);
	v->a[50066] = 1;
	v->a[50067] = sym_comment;
	v->a[50068] = actions(2454);
	v->a[50069] = 1;
	v->a[50070] = anon_sym_PIPE;
	v->a[50071] = state(1137);
	v->a[50072] = 1;
	v->a[50073] = aux_sym_pipeline_repeat1;
	v->a[50074] = actions(1974);
	v->a[50075] = 2;
	v->a[50076] = ts_builtin_sym_end;
	v->a[50077] = aux_sym_heredoc_redirect_token1;
	v->a[50078] = actions(1979);
	v->a[50079] = 8;
	small_parse_table_2504(v);
}

void	small_parse_table_2504(t_small_parse_table_array *v)
{
	v->a[50080] = anon_sym_SEMI_SEMI;
	v->a[50081] = anon_sym_AMP_AMP;
	v->a[50082] = anon_sym_PIPE_PIPE;
	v->a[50083] = anon_sym_LT;
	v->a[50084] = anon_sym_GT;
	v->a[50085] = anon_sym_GT_GT;
	v->a[50086] = anon_sym_LT_LT;
	v->a[50087] = anon_sym_SEMI;
	v->a[50088] = 10;
	v->a[50089] = actions(3);
	v->a[50090] = 1;
	v->a[50091] = sym_comment;
	v->a[50092] = actions(2293);
	v->a[50093] = 1;
	v->a[50094] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50095] = actions(2299);
	v->a[50096] = 1;
	v->a[50097] = sym_string_content;
	v->a[50098] = actions(2301);
	v->a[50099] = 1;
	small_parse_table_2505(v);
}

/* EOF small_parse_table_500.c */
