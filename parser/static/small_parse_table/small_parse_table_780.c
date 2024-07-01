/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_780.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3900(t_small_parse_table_array *v)
{
	v->a[78000] = sym_comment;
	v->a[78001] = actions(3071);
	v->a[78002] = 1;
	v->a[78003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78004] = actions(3077);
	v->a[78005] = 1;
	v->a[78006] = sym_string_content;
	v->a[78007] = actions(3079);
	v->a[78008] = 1;
	v->a[78009] = anon_sym_DOLLAR_LBRACE;
	v->a[78010] = actions(3081);
	v->a[78011] = 1;
	v->a[78012] = anon_sym_DOLLAR_LPAREN;
	v->a[78013] = actions(3083);
	v->a[78014] = 1;
	v->a[78015] = anon_sym_BQUOTE;
	v->a[78016] = actions(3273);
	v->a[78017] = 1;
	v->a[78018] = anon_sym_DOLLAR;
	v->a[78019] = actions(3275);
	small_parse_table_3901(v);
}

void	small_parse_table_3901(t_small_parse_table_array *v)
{
	v->a[78020] = 1;
	v->a[78021] = anon_sym_DQUOTE;
	v->a[78022] = state(1699);
	v->a[78023] = 1;
	v->a[78024] = aux_sym_string_repeat1;
	v->a[78025] = state(1739);
	v->a[78026] = 4;
	v->a[78027] = sym_arithmetic_expansion;
	v->a[78028] = sym_simple_expansion;
	v->a[78029] = sym_expansion;
	v->a[78030] = sym_command_substitution;
	v->a[78031] = 10;
	v->a[78032] = actions(3);
	v->a[78033] = 1;
	v->a[78034] = sym_comment;
	v->a[78035] = actions(3071);
	v->a[78036] = 1;
	v->a[78037] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78038] = actions(3077);
	v->a[78039] = 1;
	small_parse_table_3902(v);
}

void	small_parse_table_3902(t_small_parse_table_array *v)
{
	v->a[78040] = sym_string_content;
	v->a[78041] = actions(3079);
	v->a[78042] = 1;
	v->a[78043] = anon_sym_DOLLAR_LBRACE;
	v->a[78044] = actions(3081);
	v->a[78045] = 1;
	v->a[78046] = anon_sym_DOLLAR_LPAREN;
	v->a[78047] = actions(3083);
	v->a[78048] = 1;
	v->a[78049] = anon_sym_BQUOTE;
	v->a[78050] = actions(3277);
	v->a[78051] = 1;
	v->a[78052] = anon_sym_DOLLAR;
	v->a[78053] = actions(3279);
	v->a[78054] = 1;
	v->a[78055] = anon_sym_DQUOTE;
	v->a[78056] = state(1681);
	v->a[78057] = 1;
	v->a[78058] = aux_sym_string_repeat1;
	v->a[78059] = state(1739);
	small_parse_table_3903(v);
}

void	small_parse_table_3903(t_small_parse_table_array *v)
{
	v->a[78060] = 4;
	v->a[78061] = sym_arithmetic_expansion;
	v->a[78062] = sym_simple_expansion;
	v->a[78063] = sym_expansion;
	v->a[78064] = sym_command_substitution;
	v->a[78065] = 4;
	v->a[78066] = actions(3);
	v->a[78067] = 1;
	v->a[78068] = sym_comment;
	v->a[78069] = actions(3285);
	v->a[78070] = 1;
	v->a[78071] = sym_variable_name;
	v->a[78072] = actions(3283);
	v->a[78073] = 2;
	v->a[78074] = aux_sym__simple_variable_name_token1;
	v->a[78075] = aux_sym__multiline_variable_name_token1;
	v->a[78076] = actions(3281);
	v->a[78077] = 9;
	v->a[78078] = anon_sym_BANG;
	v->a[78079] = anon_sym_DASH;
	small_parse_table_3904(v);
}

void	small_parse_table_3904(t_small_parse_table_array *v)
{
	v->a[78080] = anon_sym_STAR;
	v->a[78081] = anon_sym_QMARK;
	v->a[78082] = anon_sym_DOLLAR;
	v->a[78083] = anon_sym_POUND;
	v->a[78084] = anon_sym_AT;
	v->a[78085] = anon_sym_0;
	v->a[78086] = anon_sym__;
	v->a[78087] = 4;
	v->a[78088] = actions(3);
	v->a[78089] = 1;
	v->a[78090] = sym_comment;
	v->a[78091] = actions(616);
	v->a[78092] = 1;
	v->a[78093] = sym_variable_name;
	v->a[78094] = actions(614);
	v->a[78095] = 2;
	v->a[78096] = aux_sym__simple_variable_name_token1;
	v->a[78097] = aux_sym__multiline_variable_name_token1;
	v->a[78098] = actions(612);
	v->a[78099] = 9;
	small_parse_table_3905(v);
}

/* EOF small_parse_table_780.c */
