/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_880.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4400(t_small_parse_table_array *v)
{
	v->a[88000] = anon_sym_DOLLAR;
	v->a[88001] = anon_sym_POUND;
	v->a[88002] = anon_sym_AT;
	v->a[88003] = 7;
	v->a[88004] = actions(3);
	v->a[88005] = 1;
	v->a[88006] = sym_comment;
	v->a[88007] = actions(3336);
	v->a[88008] = 1;
	v->a[88009] = aux_sym__simple_variable_name_token1;
	v->a[88010] = actions(3340);
	v->a[88011] = 1;
	v->a[88012] = sym_variable_name;
	v->a[88013] = actions(3372);
	v->a[88014] = 1;
	v->a[88015] = anon_sym_RBRACE;
	v->a[88016] = state(2319);
	v->a[88017] = 1;
	v->a[88018] = sym__expansion_body;
	v->a[88019] = actions(3338);
	small_parse_table_4401(v);
}

void	small_parse_table_4401(t_small_parse_table_array *v)
{
	v->a[88020] = 2;
	v->a[88021] = anon_sym_0;
	v->a[88022] = anon_sym__;
	v->a[88023] = actions(3334);
	v->a[88024] = 7;
	v->a[88025] = anon_sym_BANG;
	v->a[88026] = anon_sym_DASH;
	v->a[88027] = anon_sym_STAR;
	v->a[88028] = anon_sym_QMARK;
	v->a[88029] = anon_sym_DOLLAR;
	v->a[88030] = anon_sym_POUND;
	v->a[88031] = anon_sym_AT;
	v->a[88032] = 7;
	v->a[88033] = actions(3);
	v->a[88034] = 1;
	v->a[88035] = sym_comment;
	v->a[88036] = actions(3336);
	v->a[88037] = 1;
	v->a[88038] = aux_sym__simple_variable_name_token1;
	v->a[88039] = actions(3340);
	small_parse_table_4402(v);
}

void	small_parse_table_4402(t_small_parse_table_array *v)
{
	v->a[88040] = 1;
	v->a[88041] = sym_variable_name;
	v->a[88042] = actions(3374);
	v->a[88043] = 1;
	v->a[88044] = anon_sym_RBRACE;
	v->a[88045] = state(2215);
	v->a[88046] = 1;
	v->a[88047] = sym__expansion_body;
	v->a[88048] = actions(3338);
	v->a[88049] = 2;
	v->a[88050] = anon_sym_0;
	v->a[88051] = anon_sym__;
	v->a[88052] = actions(3334);
	v->a[88053] = 7;
	v->a[88054] = anon_sym_BANG;
	v->a[88055] = anon_sym_DASH;
	v->a[88056] = anon_sym_STAR;
	v->a[88057] = anon_sym_QMARK;
	v->a[88058] = anon_sym_DOLLAR;
	v->a[88059] = anon_sym_POUND;
	small_parse_table_4403(v);
}

void	small_parse_table_4403(t_small_parse_table_array *v)
{
	v->a[88060] = anon_sym_AT;
	v->a[88061] = 9;
	v->a[88062] = actions(3);
	v->a[88063] = 1;
	v->a[88064] = sym_comment;
	v->a[88065] = actions(1885);
	v->a[88066] = 1;
	v->a[88067] = anon_sym_DOLLAR;
	v->a[88068] = actions(1887);
	v->a[88069] = 1;
	v->a[88070] = anon_sym_DQUOTE;
	v->a[88071] = actions(1889);
	v->a[88072] = 1;
	v->a[88073] = anon_sym_DOLLAR_LBRACE;
	v->a[88074] = actions(1891);
	v->a[88075] = 1;
	v->a[88076] = anon_sym_DOLLAR_LPAREN;
	v->a[88077] = actions(1893);
	v->a[88078] = 1;
	v->a[88079] = anon_sym_BQUOTE;
	small_parse_table_4404(v);
}

void	small_parse_table_4404(t_small_parse_table_array *v)
{
	v->a[88080] = actions(3378);
	v->a[88081] = 1;
	v->a[88082] = sym_raw_string;
	v->a[88083] = actions(3376);
	v->a[88084] = 3;
	v->a[88085] = sym_variable_name;
	v->a[88086] = sym__expansion_word;
	v->a[88087] = sym_word;
	v->a[88088] = state(2090);
	v->a[88089] = 4;
	v->a[88090] = sym_string;
	v->a[88091] = sym_simple_expansion;
	v->a[88092] = sym_expansion;
	v->a[88093] = sym_command_substitution;
	v->a[88094] = 5;
	v->a[88095] = actions(3);
	v->a[88096] = 1;
	v->a[88097] = sym_comment;
	v->a[88098] = actions(3141);
	v->a[88099] = 1;
	small_parse_table_4405(v);
}

/* EOF small_parse_table_880.c */
