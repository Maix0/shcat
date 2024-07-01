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
	v->a[78000] = anon_sym_DQUOTE;
	v->a[78001] = actions(900);
	v->a[78002] = 1;
	v->a[78003] = anon_sym_DOLLAR_LBRACE;
	v->a[78004] = actions(902);
	v->a[78005] = 1;
	v->a[78006] = anon_sym_DOLLAR_LPAREN;
	v->a[78007] = actions(904);
	v->a[78008] = 1;
	v->a[78009] = anon_sym_BQUOTE;
	v->a[78010] = actions(2950);
	v->a[78011] = 1;
	v->a[78012] = sym__bare_dollar;
	v->a[78013] = actions(3008);
	v->a[78014] = 1;
	v->a[78015] = anon_sym_DOLLAR;
	v->a[78016] = actions(2948);
	v->a[78017] = 5;
	v->a[78018] = aux_sym_concatenation_token1;
	v->a[78019] = sym_raw_string;
	small_parse_table_3901(v);
}

void	small_parse_table_3901(t_small_parse_table_array *v)
{
	v->a[78020] = sym_number;
	v->a[78021] = sym__comment_word;
	v->a[78022] = sym_word;
	v->a[78023] = state(1633);
	v->a[78024] = 5;
	v->a[78025] = sym_arithmetic_expansion;
	v->a[78026] = sym_string;
	v->a[78027] = sym_simple_expansion;
	v->a[78028] = sym_expansion;
	v->a[78029] = sym_command_substitution;
	v->a[78030] = 10;
	v->a[78031] = actions(3);
	v->a[78032] = 1;
	v->a[78033] = sym_comment;
	v->a[78034] = actions(2663);
	v->a[78035] = 1;
	v->a[78036] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78037] = actions(2667);
	v->a[78038] = 1;
	v->a[78039] = anon_sym_DQUOTE;
	small_parse_table_3902(v);
}

void	small_parse_table_3902(t_small_parse_table_array *v)
{
	v->a[78040] = actions(2669);
	v->a[78041] = 1;
	v->a[78042] = anon_sym_DOLLAR_LBRACE;
	v->a[78043] = actions(2671);
	v->a[78044] = 1;
	v->a[78045] = anon_sym_DOLLAR_LPAREN;
	v->a[78046] = actions(2673);
	v->a[78047] = 1;
	v->a[78048] = anon_sym_BQUOTE;
	v->a[78049] = actions(2675);
	v->a[78050] = 1;
	v->a[78051] = sym__bare_dollar;
	v->a[78052] = actions(3010);
	v->a[78053] = 1;
	v->a[78054] = anon_sym_DOLLAR;
	v->a[78055] = actions(2661);
	v->a[78056] = 5;
	v->a[78057] = aux_sym_concatenation_token1;
	v->a[78058] = sym_raw_string;
	v->a[78059] = sym_number;
	small_parse_table_3903(v);
}

void	small_parse_table_3903(t_small_parse_table_array *v)
{
	v->a[78060] = sym__comment_word;
	v->a[78061] = sym_word;
	v->a[78062] = state(990);
	v->a[78063] = 5;
	v->a[78064] = sym_arithmetic_expansion;
	v->a[78065] = sym_string;
	v->a[78066] = sym_simple_expansion;
	v->a[78067] = sym_expansion;
	v->a[78068] = sym_command_substitution;
	v->a[78069] = 10;
	v->a[78070] = actions(3);
	v->a[78071] = 1;
	v->a[78072] = sym_comment;
	v->a[78073] = actions(2715);
	v->a[78074] = 1;
	v->a[78075] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78076] = actions(2717);
	v->a[78077] = 1;
	v->a[78078] = anon_sym_DOLLAR;
	v->a[78079] = actions(2719);
	small_parse_table_3904(v);
}

void	small_parse_table_3904(t_small_parse_table_array *v)
{
	v->a[78080] = 1;
	v->a[78081] = anon_sym_DQUOTE;
	v->a[78082] = actions(2721);
	v->a[78083] = 1;
	v->a[78084] = anon_sym_DOLLAR_LBRACE;
	v->a[78085] = actions(2723);
	v->a[78086] = 1;
	v->a[78087] = anon_sym_DOLLAR_LPAREN;
	v->a[78088] = actions(2725);
	v->a[78089] = 1;
	v->a[78090] = anon_sym_BQUOTE;
	v->a[78091] = actions(2913);
	v->a[78092] = 1;
	v->a[78093] = sym__bare_dollar;
	v->a[78094] = actions(2909);
	v->a[78095] = 5;
	v->a[78096] = aux_sym_concatenation_token1;
	v->a[78097] = sym_raw_string;
	v->a[78098] = sym_number;
	v->a[78099] = sym__comment_word;
	small_parse_table_3905(v);
}

/* EOF small_parse_table_780.c */
