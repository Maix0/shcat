/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_630.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3150(t_small_parse_table_array *v)
{
	v->a[63000] = 4;
	v->a[63001] = sym_arithmetic_expansion;
	v->a[63002] = sym_simple_expansion;
	v->a[63003] = sym_expansion;
	v->a[63004] = sym_command_substitution;
	v->a[63005] = 3;
	v->a[63006] = actions(407);
	v->a[63007] = 1;
	v->a[63008] = sym_comment;
	v->a[63009] = actions(1891);
	v->a[63010] = 4;
	v->a[63011] = anon_sym_PIPE;
	v->a[63012] = anon_sym_LT;
	v->a[63013] = anon_sym_GT;
	v->a[63014] = anon_sym_LT_LT;
	v->a[63015] = actions(1889);
	v->a[63016] = 8;
	v->a[63017] = anon_sym_AMP_AMP;
	v->a[63018] = anon_sym_PIPE_PIPE;
	v->a[63019] = anon_sym_GT_GT;
	small_parse_table_3151(v);
}

void	small_parse_table_3151(t_small_parse_table_array *v)
{
	v->a[63020] = anon_sym_LT_AMP;
	v->a[63021] = anon_sym_GT_AMP;
	v->a[63022] = anon_sym_GT_PIPE;
	v->a[63023] = anon_sym_LT_GT;
	v->a[63024] = anon_sym_LT_LT_DASH;
	v->a[63025] = 8;
	v->a[63026] = actions(3);
	v->a[63027] = 1;
	v->a[63028] = sym_comment;
	v->a[63029] = actions(2566);
	v->a[63030] = 1;
	v->a[63031] = anon_sym_POUND;
	v->a[63032] = actions(2568);
	v->a[63033] = 1;
	v->a[63034] = aux_sym__simple_variable_name_token1;
	v->a[63035] = actions(2570);
	v->a[63036] = 1;
	v->a[63037] = anon_sym_0;
	v->a[63038] = actions(2572);
	v->a[63039] = 1;
	small_parse_table_3152(v);
}

void	small_parse_table_3152(t_small_parse_table_array *v)
{
	v->a[63040] = sym_variable_name;
	v->a[63041] = actions(2737);
	v->a[63042] = 1;
	v->a[63043] = anon_sym_RBRACE;
	v->a[63044] = state(1654);
	v->a[63045] = 1;
	v->a[63046] = sym__expansion_body;
	v->a[63047] = actions(2564);
	v->a[63048] = 6;
	v->a[63049] = anon_sym_BANG;
	v->a[63050] = anon_sym_DASH;
	v->a[63051] = anon_sym_STAR;
	v->a[63052] = anon_sym_QMARK;
	v->a[63053] = anon_sym_DOLLAR;
	v->a[63054] = anon_sym_AT;
	v->a[63055] = 10;
	v->a[63056] = actions(3);
	v->a[63057] = 1;
	v->a[63058] = sym_comment;
	v->a[63059] = actions(2548);
	small_parse_table_3153(v);
}

void	small_parse_table_3153(t_small_parse_table_array *v)
{
	v->a[63060] = 1;
	v->a[63061] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63062] = actions(2554);
	v->a[63063] = 1;
	v->a[63064] = sym_string_content;
	v->a[63065] = actions(2556);
	v->a[63066] = 1;
	v->a[63067] = anon_sym_DOLLAR_LBRACE;
	v->a[63068] = actions(2558);
	v->a[63069] = 1;
	v->a[63070] = anon_sym_DOLLAR_LPAREN;
	v->a[63071] = actions(2560);
	v->a[63072] = 1;
	v->a[63073] = anon_sym_BQUOTE;
	v->a[63074] = actions(2739);
	v->a[63075] = 1;
	v->a[63076] = anon_sym_DOLLAR;
	v->a[63077] = actions(2741);
	v->a[63078] = 1;
	v->a[63079] = anon_sym_DQUOTE;
	small_parse_table_3154(v);
}

void	small_parse_table_3154(t_small_parse_table_array *v)
{
	v->a[63080] = state(1363);
	v->a[63081] = 1;
	v->a[63082] = aux_sym_string_repeat1;
	v->a[63083] = state(1477);
	v->a[63084] = 4;
	v->a[63085] = sym_arithmetic_expansion;
	v->a[63086] = sym_simple_expansion;
	v->a[63087] = sym_expansion;
	v->a[63088] = sym_command_substitution;
	v->a[63089] = 3;
	v->a[63090] = actions(407);
	v->a[63091] = 1;
	v->a[63092] = sym_comment;
	v->a[63093] = actions(1910);
	v->a[63094] = 4;
	v->a[63095] = anon_sym_PIPE;
	v->a[63096] = anon_sym_LT;
	v->a[63097] = anon_sym_GT;
	v->a[63098] = anon_sym_LT_LT;
	v->a[63099] = actions(1908);
	small_parse_table_3155(v);
}

/* EOF small_parse_table_630.c */
