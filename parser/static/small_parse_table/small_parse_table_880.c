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
	v->a[88000] = actions(3712);
	v->a[88001] = 1;
	v->a[88002] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88003] = actions(3716);
	v->a[88004] = 1;
	v->a[88005] = sym_string_content;
	v->a[88006] = actions(3718);
	v->a[88007] = 1;
	v->a[88008] = anon_sym_DOLLAR_LBRACE;
	v->a[88009] = actions(3720);
	v->a[88010] = 1;
	v->a[88011] = anon_sym_DOLLAR_LPAREN;
	v->a[88012] = actions(3722);
	v->a[88013] = 1;
	v->a[88014] = anon_sym_BQUOTE;
	v->a[88015] = actions(3760);
	v->a[88016] = 1;
	v->a[88017] = anon_sym_DOLLAR;
	v->a[88018] = state(1738);
	v->a[88019] = 1;
	small_parse_table_4401(v);
}

void	small_parse_table_4401(t_small_parse_table_array *v)
{
	v->a[88020] = aux_sym_string_repeat1;
	v->a[88021] = state(1869);
	v->a[88022] = 4;
	v->a[88023] = sym_arithmetic_expansion;
	v->a[88024] = sym_simple_expansion;
	v->a[88025] = sym_expansion;
	v->a[88026] = sym_command_substitution;
	v->a[88027] = 10;
	v->a[88028] = actions(3);
	v->a[88029] = 1;
	v->a[88030] = sym_comment;
	v->a[88031] = actions(3762);
	v->a[88032] = 1;
	v->a[88033] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88034] = actions(3765);
	v->a[88035] = 1;
	v->a[88036] = anon_sym_DOLLAR;
	v->a[88037] = actions(3768);
	v->a[88038] = 1;
	v->a[88039] = anon_sym_DQUOTE;
	small_parse_table_4402(v);
}

void	small_parse_table_4402(t_small_parse_table_array *v)
{
	v->a[88040] = actions(3770);
	v->a[88041] = 1;
	v->a[88042] = sym_string_content;
	v->a[88043] = actions(3773);
	v->a[88044] = 1;
	v->a[88045] = anon_sym_DOLLAR_LBRACE;
	v->a[88046] = actions(3776);
	v->a[88047] = 1;
	v->a[88048] = anon_sym_DOLLAR_LPAREN;
	v->a[88049] = actions(3779);
	v->a[88050] = 1;
	v->a[88051] = anon_sym_BQUOTE;
	v->a[88052] = state(1738);
	v->a[88053] = 1;
	v->a[88054] = aux_sym_string_repeat1;
	v->a[88055] = state(1869);
	v->a[88056] = 4;
	v->a[88057] = sym_arithmetic_expansion;
	v->a[88058] = sym_simple_expansion;
	v->a[88059] = sym_expansion;
	small_parse_table_4403(v);
}

void	small_parse_table_4403(t_small_parse_table_array *v)
{
	v->a[88060] = sym_command_substitution;
	v->a[88061] = 3;
	v->a[88062] = actions(3);
	v->a[88063] = 1;
	v->a[88064] = sym_comment;
	v->a[88065] = actions(3634);
	v->a[88066] = 1;
	v->a[88067] = sym_extglob_pattern;
	v->a[88068] = actions(3630);
	v->a[88069] = 11;
	v->a[88070] = anon_sym_LPAREN;
	v->a[88071] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88072] = anon_sym_DOLLAR;
	v->a[88073] = anon_sym_DQUOTE;
	v->a[88074] = sym_raw_string;
	v->a[88075] = aux_sym_number_token1;
	v->a[88076] = aux_sym_number_token2;
	v->a[88077] = anon_sym_DOLLAR_LBRACE;
	v->a[88078] = anon_sym_DOLLAR_LPAREN;
	v->a[88079] = anon_sym_BQUOTE;
	small_parse_table_4404(v);
}

void	small_parse_table_4404(t_small_parse_table_array *v)
{
	v->a[88080] = sym_word;
	v->a[88081] = 4;
	v->a[88082] = actions(3);
	v->a[88083] = 1;
	v->a[88084] = sym_comment;
	v->a[88085] = actions(549);
	v->a[88086] = 1;
	v->a[88087] = sym_variable_name;
	v->a[88088] = actions(547);
	v->a[88089] = 2;
	v->a[88090] = aux_sym__simple_variable_name_token1;
	v->a[88091] = aux_sym__multiline_variable_name_token1;
	v->a[88092] = actions(545);
	v->a[88093] = 9;
	v->a[88094] = anon_sym_BANG;
	v->a[88095] = anon_sym_DASH;
	v->a[88096] = anon_sym_STAR;
	v->a[88097] = anon_sym_QMARK;
	v->a[88098] = anon_sym_DOLLAR;
	v->a[88099] = anon_sym_POUND;
	small_parse_table_4405(v);
}

/* EOF small_parse_table_880.c */
