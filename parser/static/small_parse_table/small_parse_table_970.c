/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_970.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4850(t_small_parse_table_array *v)
{
	v->a[97000] = anon_sym_DQUOTE;
	v->a[97001] = state(1987);
	v->a[97002] = 1;
	v->a[97003] = aux_sym_string_repeat1;
	v->a[97004] = state(2107);
	v->a[97005] = 4;
	v->a[97006] = sym_arithmetic_expansion;
	v->a[97007] = sym_simple_expansion;
	v->a[97008] = sym_expansion;
	v->a[97009] = sym_command_substitution;
	v->a[97010] = 10;
	v->a[97011] = actions(3);
	v->a[97012] = 1;
	v->a[97013] = sym_comment;
	v->a[97014] = actions(3856);
	v->a[97015] = 1;
	v->a[97016] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97017] = actions(3862);
	v->a[97018] = 1;
	v->a[97019] = sym_string_content;
	small_parse_table_4851(v);
}

void	small_parse_table_4851(t_small_parse_table_array *v)
{
	v->a[97020] = actions(3864);
	v->a[97021] = 1;
	v->a[97022] = anon_sym_DOLLAR_LBRACE;
	v->a[97023] = actions(3866);
	v->a[97024] = 1;
	v->a[97025] = anon_sym_DOLLAR_LPAREN;
	v->a[97026] = actions(3868);
	v->a[97027] = 1;
	v->a[97028] = anon_sym_BQUOTE;
	v->a[97029] = actions(4186);
	v->a[97030] = 1;
	v->a[97031] = anon_sym_DOLLAR;
	v->a[97032] = actions(4188);
	v->a[97033] = 1;
	v->a[97034] = anon_sym_DQUOTE;
	v->a[97035] = state(1987);
	v->a[97036] = 1;
	v->a[97037] = aux_sym_string_repeat1;
	v->a[97038] = state(2107);
	v->a[97039] = 4;
	small_parse_table_4852(v);
}

void	small_parse_table_4852(t_small_parse_table_array *v)
{
	v->a[97040] = sym_arithmetic_expansion;
	v->a[97041] = sym_simple_expansion;
	v->a[97042] = sym_expansion;
	v->a[97043] = sym_command_substitution;
	v->a[97044] = 10;
	v->a[97045] = actions(3);
	v->a[97046] = 1;
	v->a[97047] = sym_comment;
	v->a[97048] = actions(3856);
	v->a[97049] = 1;
	v->a[97050] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97051] = actions(3862);
	v->a[97052] = 1;
	v->a[97053] = sym_string_content;
	v->a[97054] = actions(3864);
	v->a[97055] = 1;
	v->a[97056] = anon_sym_DOLLAR_LBRACE;
	v->a[97057] = actions(3866);
	v->a[97058] = 1;
	v->a[97059] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4853(v);
}

void	small_parse_table_4853(t_small_parse_table_array *v)
{
	v->a[97060] = actions(3868);
	v->a[97061] = 1;
	v->a[97062] = anon_sym_BQUOTE;
	v->a[97063] = actions(4190);
	v->a[97064] = 1;
	v->a[97065] = anon_sym_DOLLAR;
	v->a[97066] = actions(4192);
	v->a[97067] = 1;
	v->a[97068] = anon_sym_DQUOTE;
	v->a[97069] = state(2036);
	v->a[97070] = 1;
	v->a[97071] = aux_sym_string_repeat1;
	v->a[97072] = state(2107);
	v->a[97073] = 4;
	v->a[97074] = sym_arithmetic_expansion;
	v->a[97075] = sym_simple_expansion;
	v->a[97076] = sym_expansion;
	v->a[97077] = sym_command_substitution;
	v->a[97078] = 4;
	v->a[97079] = actions(3);
	small_parse_table_4854(v);
}

void	small_parse_table_4854(t_small_parse_table_array *v)
{
	v->a[97080] = 1;
	v->a[97081] = sym_comment;
	v->a[97082] = actions(820);
	v->a[97083] = 1;
	v->a[97084] = sym_variable_name;
	v->a[97085] = actions(818);
	v->a[97086] = 2;
	v->a[97087] = aux_sym__simple_variable_name_token1;
	v->a[97088] = aux_sym__multiline_variable_name_token1;
	v->a[97089] = actions(816);
	v->a[97090] = 9;
	v->a[97091] = anon_sym_BANG;
	v->a[97092] = anon_sym_DASH;
	v->a[97093] = anon_sym_STAR;
	v->a[97094] = anon_sym_QMARK;
	v->a[97095] = anon_sym_DOLLAR;
	v->a[97096] = anon_sym_POUND;
	v->a[97097] = anon_sym_AT;
	v->a[97098] = anon_sym_0;
	v->a[97099] = anon_sym__;
	small_parse_table_4855(v);
}

/* EOF small_parse_table_970.c */
