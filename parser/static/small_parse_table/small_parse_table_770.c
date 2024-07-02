/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_770.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3850(t_small_parse_table_array *v)
{
	v->a[77000] = actions(3116);
	v->a[77001] = 1;
	v->a[77002] = anon_sym_BQUOTE;
	v->a[77003] = actions(3196);
	v->a[77004] = 1;
	v->a[77005] = anon_sym_DOLLAR;
	v->a[77006] = actions(3198);
	v->a[77007] = 1;
	v->a[77008] = anon_sym_DQUOTE;
	v->a[77009] = state(1632);
	v->a[77010] = 1;
	v->a[77011] = aux_sym_string_repeat1;
	v->a[77012] = state(1748);
	v->a[77013] = 4;
	v->a[77014] = sym_arithmetic_expansion;
	v->a[77015] = sym_simple_expansion;
	v->a[77016] = sym_expansion;
	v->a[77017] = sym_command_substitution;
	v->a[77018] = 10;
	v->a[77019] = actions(3);
	small_parse_table_3851(v);
}

void	small_parse_table_3851(t_small_parse_table_array *v)
{
	v->a[77020] = 1;
	v->a[77021] = sym_comment;
	v->a[77022] = actions(3104);
	v->a[77023] = 1;
	v->a[77024] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77025] = actions(3110);
	v->a[77026] = 1;
	v->a[77027] = sym_string_content;
	v->a[77028] = actions(3112);
	v->a[77029] = 1;
	v->a[77030] = anon_sym_DOLLAR_LBRACE;
	v->a[77031] = actions(3114);
	v->a[77032] = 1;
	v->a[77033] = anon_sym_DOLLAR_LPAREN;
	v->a[77034] = actions(3116);
	v->a[77035] = 1;
	v->a[77036] = anon_sym_BQUOTE;
	v->a[77037] = actions(3200);
	v->a[77038] = 1;
	v->a[77039] = anon_sym_DOLLAR;
	small_parse_table_3852(v);
}

void	small_parse_table_3852(t_small_parse_table_array *v)
{
	v->a[77040] = actions(3202);
	v->a[77041] = 1;
	v->a[77042] = anon_sym_DQUOTE;
	v->a[77043] = state(1661);
	v->a[77044] = 1;
	v->a[77045] = aux_sym_string_repeat1;
	v->a[77046] = state(1748);
	v->a[77047] = 4;
	v->a[77048] = sym_arithmetic_expansion;
	v->a[77049] = sym_simple_expansion;
	v->a[77050] = sym_expansion;
	v->a[77051] = sym_command_substitution;
	v->a[77052] = 4;
	v->a[77053] = actions(3);
	v->a[77054] = 1;
	v->a[77055] = sym_comment;
	v->a[77056] = actions(381);
	v->a[77057] = 1;
	v->a[77058] = sym_variable_name;
	v->a[77059] = actions(379);
	small_parse_table_3853(v);
}

void	small_parse_table_3853(t_small_parse_table_array *v)
{
	v->a[77060] = 2;
	v->a[77061] = aux_sym__simple_variable_name_token1;
	v->a[77062] = aux_sym__multiline_variable_name_token1;
	v->a[77063] = actions(377);
	v->a[77064] = 9;
	v->a[77065] = anon_sym_BANG;
	v->a[77066] = anon_sym_DASH;
	v->a[77067] = anon_sym_STAR;
	v->a[77068] = anon_sym_QMARK;
	v->a[77069] = anon_sym_DOLLAR;
	v->a[77070] = anon_sym_POUND;
	v->a[77071] = anon_sym_AT;
	v->a[77072] = anon_sym_0;
	v->a[77073] = anon_sym__;
	v->a[77074] = 4;
	v->a[77075] = actions(3);
	v->a[77076] = 1;
	v->a[77077] = sym_comment;
	v->a[77078] = actions(929);
	v->a[77079] = 1;
	small_parse_table_3854(v);
}

void	small_parse_table_3854(t_small_parse_table_array *v)
{
	v->a[77080] = sym_variable_name;
	v->a[77081] = actions(927);
	v->a[77082] = 2;
	v->a[77083] = aux_sym__simple_variable_name_token1;
	v->a[77084] = aux_sym__multiline_variable_name_token1;
	v->a[77085] = actions(925);
	v->a[77086] = 9;
	v->a[77087] = anon_sym_BANG;
	v->a[77088] = anon_sym_DASH;
	v->a[77089] = anon_sym_STAR;
	v->a[77090] = anon_sym_QMARK;
	v->a[77091] = anon_sym_DOLLAR;
	v->a[77092] = anon_sym_POUND;
	v->a[77093] = anon_sym_AT;
	v->a[77094] = anon_sym_0;
	v->a[77095] = anon_sym__;
	v->a[77096] = 10;
	v->a[77097] = actions(3);
	v->a[77098] = 1;
	v->a[77099] = sym_comment;
	small_parse_table_3855(v);
}

/* EOF small_parse_table_770.c */
