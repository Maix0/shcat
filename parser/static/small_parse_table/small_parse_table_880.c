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
	v->a[88000] = actions(3626);
	v->a[88001] = 1;
	v->a[88002] = anon_sym_DQUOTE;
	v->a[88003] = state(1906);
	v->a[88004] = 1;
	v->a[88005] = aux_sym_string_repeat1;
	v->a[88006] = state(1959);
	v->a[88007] = 4;
	v->a[88008] = sym_arithmetic_expansion;
	v->a[88009] = sym_simple_expansion;
	v->a[88010] = sym_expansion;
	v->a[88011] = sym_command_substitution;
	v->a[88012] = 10;
	v->a[88013] = actions(3);
	v->a[88014] = 1;
	v->a[88015] = sym_comment;
	v->a[88016] = actions(3414);
	v->a[88017] = 1;
	v->a[88018] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88019] = actions(3420);
	small_parse_table_4401(v);
}

void	small_parse_table_4401(t_small_parse_table_array *v)
{
	v->a[88020] = 1;
	v->a[88021] = sym_string_content;
	v->a[88022] = actions(3422);
	v->a[88023] = 1;
	v->a[88024] = anon_sym_DOLLAR_LBRACE;
	v->a[88025] = actions(3424);
	v->a[88026] = 1;
	v->a[88027] = anon_sym_DOLLAR_LPAREN;
	v->a[88028] = actions(3426);
	v->a[88029] = 1;
	v->a[88030] = anon_sym_BQUOTE;
	v->a[88031] = actions(3628);
	v->a[88032] = 1;
	v->a[88033] = anon_sym_DOLLAR;
	v->a[88034] = actions(3630);
	v->a[88035] = 1;
	v->a[88036] = anon_sym_DQUOTE;
	v->a[88037] = state(1874);
	v->a[88038] = 1;
	v->a[88039] = aux_sym_string_repeat1;
	small_parse_table_4402(v);
}

void	small_parse_table_4402(t_small_parse_table_array *v)
{
	v->a[88040] = state(1959);
	v->a[88041] = 4;
	v->a[88042] = sym_arithmetic_expansion;
	v->a[88043] = sym_simple_expansion;
	v->a[88044] = sym_expansion;
	v->a[88045] = sym_command_substitution;
	v->a[88046] = 4;
	v->a[88047] = actions(3);
	v->a[88048] = 1;
	v->a[88049] = sym_comment;
	v->a[88050] = actions(2001);
	v->a[88051] = 1;
	v->a[88052] = sym_variable_name;
	v->a[88053] = actions(1999);
	v->a[88054] = 2;
	v->a[88055] = aux_sym__simple_variable_name_token1;
	v->a[88056] = aux_sym__multiline_variable_name_token1;
	v->a[88057] = actions(1997);
	v->a[88058] = 9;
	v->a[88059] = anon_sym_BANG;
	small_parse_table_4403(v);
}

void	small_parse_table_4403(t_small_parse_table_array *v)
{
	v->a[88060] = anon_sym_DASH;
	v->a[88061] = anon_sym_STAR;
	v->a[88062] = anon_sym_QMARK;
	v->a[88063] = anon_sym_DOLLAR;
	v->a[88064] = anon_sym_POUND;
	v->a[88065] = anon_sym_AT;
	v->a[88066] = anon_sym_0;
	v->a[88067] = anon_sym__;
	v->a[88068] = 10;
	v->a[88069] = actions(3);
	v->a[88070] = 1;
	v->a[88071] = sym_comment;
	v->a[88072] = actions(3414);
	v->a[88073] = 1;
	v->a[88074] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88075] = actions(3420);
	v->a[88076] = 1;
	v->a[88077] = sym_string_content;
	v->a[88078] = actions(3422);
	v->a[88079] = 1;
	small_parse_table_4404(v);
}

void	small_parse_table_4404(t_small_parse_table_array *v)
{
	v->a[88080] = anon_sym_DOLLAR_LBRACE;
	v->a[88081] = actions(3424);
	v->a[88082] = 1;
	v->a[88083] = anon_sym_DOLLAR_LPAREN;
	v->a[88084] = actions(3426);
	v->a[88085] = 1;
	v->a[88086] = anon_sym_BQUOTE;
	v->a[88087] = actions(3632);
	v->a[88088] = 1;
	v->a[88089] = anon_sym_DOLLAR;
	v->a[88090] = actions(3634);
	v->a[88091] = 1;
	v->a[88092] = anon_sym_DQUOTE;
	v->a[88093] = state(1884);
	v->a[88094] = 1;
	v->a[88095] = aux_sym_string_repeat1;
	v->a[88096] = state(1959);
	v->a[88097] = 4;
	v->a[88098] = sym_arithmetic_expansion;
	v->a[88099] = sym_simple_expansion;
	small_parse_table_4405(v);
}

/* EOF small_parse_table_880.c */
