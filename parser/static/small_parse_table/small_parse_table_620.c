/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_620.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3100(t_small_parse_table_array *v)
{
	v->a[62000] = sym_command_substitution;
	v->a[62001] = 4;
	v->a[62002] = actions(3);
	v->a[62003] = 1;
	v->a[62004] = sym_comment;
	v->a[62005] = actions(2637);
	v->a[62006] = 1;
	v->a[62007] = anon_sym_esac;
	v->a[62008] = actions(2639);
	v->a[62009] = 1;
	v->a[62010] = sym_extglob_pattern;
	v->a[62011] = actions(2635);
	v->a[62012] = 10;
	v->a[62013] = anon_sym_LPAREN;
	v->a[62014] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62015] = anon_sym_DOLLAR;
	v->a[62016] = anon_sym_DQUOTE;
	v->a[62017] = sym_raw_string;
	v->a[62018] = sym_number;
	v->a[62019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3101(v);
}

void	small_parse_table_3101(t_small_parse_table_array *v)
{
	v->a[62020] = anon_sym_DOLLAR_LPAREN;
	v->a[62021] = anon_sym_BQUOTE;
	v->a[62022] = sym_word;
	v->a[62023] = 10;
	v->a[62024] = actions(3);
	v->a[62025] = 1;
	v->a[62026] = sym_comment;
	v->a[62027] = actions(2548);
	v->a[62028] = 1;
	v->a[62029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62030] = actions(2554);
	v->a[62031] = 1;
	v->a[62032] = sym_string_content;
	v->a[62033] = actions(2556);
	v->a[62034] = 1;
	v->a[62035] = anon_sym_DOLLAR_LBRACE;
	v->a[62036] = actions(2558);
	v->a[62037] = 1;
	v->a[62038] = anon_sym_DOLLAR_LPAREN;
	v->a[62039] = actions(2560);
	small_parse_table_3102(v);
}

void	small_parse_table_3102(t_small_parse_table_array *v)
{
	v->a[62040] = 1;
	v->a[62041] = anon_sym_BQUOTE;
	v->a[62042] = actions(2641);
	v->a[62043] = 1;
	v->a[62044] = anon_sym_DOLLAR;
	v->a[62045] = actions(2643);
	v->a[62046] = 1;
	v->a[62047] = anon_sym_DQUOTE;
	v->a[62048] = state(1370);
	v->a[62049] = 1;
	v->a[62050] = aux_sym_string_repeat1;
	v->a[62051] = state(1477);
	v->a[62052] = 4;
	v->a[62053] = sym_arithmetic_expansion;
	v->a[62054] = sym_simple_expansion;
	v->a[62055] = sym_expansion;
	v->a[62056] = sym_command_substitution;
	v->a[62057] = 8;
	v->a[62058] = actions(3);
	v->a[62059] = 1;
	small_parse_table_3103(v);
}

void	small_parse_table_3103(t_small_parse_table_array *v)
{
	v->a[62060] = sym_comment;
	v->a[62061] = actions(2566);
	v->a[62062] = 1;
	v->a[62063] = anon_sym_POUND;
	v->a[62064] = actions(2568);
	v->a[62065] = 1;
	v->a[62066] = aux_sym__simple_variable_name_token1;
	v->a[62067] = actions(2570);
	v->a[62068] = 1;
	v->a[62069] = anon_sym_0;
	v->a[62070] = actions(2572);
	v->a[62071] = 1;
	v->a[62072] = sym_variable_name;
	v->a[62073] = actions(2645);
	v->a[62074] = 1;
	v->a[62075] = anon_sym_RBRACE;
	v->a[62076] = state(1639);
	v->a[62077] = 1;
	v->a[62078] = sym__expansion_body;
	v->a[62079] = actions(2564);
	small_parse_table_3104(v);
}

void	small_parse_table_3104(t_small_parse_table_array *v)
{
	v->a[62080] = 6;
	v->a[62081] = anon_sym_BANG;
	v->a[62082] = anon_sym_DASH;
	v->a[62083] = anon_sym_STAR;
	v->a[62084] = anon_sym_QMARK;
	v->a[62085] = anon_sym_DOLLAR;
	v->a[62086] = anon_sym_AT;
	v->a[62087] = 10;
	v->a[62088] = actions(3);
	v->a[62089] = 1;
	v->a[62090] = sym_comment;
	v->a[62091] = actions(2548);
	v->a[62092] = 1;
	v->a[62093] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62094] = actions(2554);
	v->a[62095] = 1;
	v->a[62096] = sym_string_content;
	v->a[62097] = actions(2556);
	v->a[62098] = 1;
	v->a[62099] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3105(v);
}

/* EOF small_parse_table_620.c */
