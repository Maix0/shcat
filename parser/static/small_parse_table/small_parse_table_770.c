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
	v->a[77000] = actions(3070);
	v->a[77001] = 1;
	v->a[77002] = anon_sym_BQUOTE;
	v->a[77003] = actions(3320);
	v->a[77004] = 1;
	v->a[77005] = anon_sym_DOLLAR;
	v->a[77006] = actions(3322);
	v->a[77007] = 1;
	v->a[77008] = anon_sym_DQUOTE;
	v->a[77009] = state(1660);
	v->a[77010] = 1;
	v->a[77011] = aux_sym_string_repeat1;
	v->a[77012] = state(1748);
	v->a[77013] = 4;
	v->a[77014] = sym_arithmetic_expansion;
	v->a[77015] = sym_simple_expansion;
	v->a[77016] = sym_expansion;
	v->a[77017] = sym_command_substitution;
	v->a[77018] = 8;
	v->a[77019] = actions(3);
	small_parse_table_3851(v);
}

void	small_parse_table_3851(t_small_parse_table_array *v)
{
	v->a[77020] = 1;
	v->a[77021] = sym_comment;
	v->a[77022] = actions(3040);
	v->a[77023] = 1;
	v->a[77024] = anon_sym_POUND;
	v->a[77025] = actions(3042);
	v->a[77026] = 1;
	v->a[77027] = aux_sym__simple_variable_name_token1;
	v->a[77028] = actions(3044);
	v->a[77029] = 1;
	v->a[77030] = anon_sym_0;
	v->a[77031] = actions(3046);
	v->a[77032] = 1;
	v->a[77033] = sym_variable_name;
	v->a[77034] = actions(3324);
	v->a[77035] = 1;
	v->a[77036] = anon_sym_RBRACE;
	v->a[77037] = state(2060);
	v->a[77038] = 1;
	v->a[77039] = sym__expansion_body;
	small_parse_table_3852(v);
}

void	small_parse_table_3852(t_small_parse_table_array *v)
{
	v->a[77040] = actions(3038);
	v->a[77041] = 6;
	v->a[77042] = anon_sym_BANG;
	v->a[77043] = anon_sym_DASH;
	v->a[77044] = anon_sym_STAR;
	v->a[77045] = anon_sym_QMARK;
	v->a[77046] = anon_sym_DOLLAR;
	v->a[77047] = anon_sym_AT;
	v->a[77048] = 10;
	v->a[77049] = actions(3);
	v->a[77050] = 1;
	v->a[77051] = sym_comment;
	v->a[77052] = actions(3058);
	v->a[77053] = 1;
	v->a[77054] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77055] = actions(3064);
	v->a[77056] = 1;
	v->a[77057] = sym_string_content;
	v->a[77058] = actions(3066);
	v->a[77059] = 1;
	small_parse_table_3853(v);
}

void	small_parse_table_3853(t_small_parse_table_array *v)
{
	v->a[77060] = anon_sym_DOLLAR_LBRACE;
	v->a[77061] = actions(3068);
	v->a[77062] = 1;
	v->a[77063] = anon_sym_DOLLAR_LPAREN;
	v->a[77064] = actions(3070);
	v->a[77065] = 1;
	v->a[77066] = anon_sym_BQUOTE;
	v->a[77067] = actions(3326);
	v->a[77068] = 1;
	v->a[77069] = anon_sym_DOLLAR;
	v->a[77070] = actions(3328);
	v->a[77071] = 1;
	v->a[77072] = anon_sym_DQUOTE;
	v->a[77073] = state(1661);
	v->a[77074] = 1;
	v->a[77075] = aux_sym_string_repeat1;
	v->a[77076] = state(1748);
	v->a[77077] = 4;
	v->a[77078] = sym_arithmetic_expansion;
	v->a[77079] = sym_simple_expansion;
	small_parse_table_3854(v);
}

void	small_parse_table_3854(t_small_parse_table_array *v)
{
	v->a[77080] = sym_expansion;
	v->a[77081] = sym_command_substitution;
	v->a[77082] = 8;
	v->a[77083] = actions(3);
	v->a[77084] = 1;
	v->a[77085] = sym_comment;
	v->a[77086] = actions(3040);
	v->a[77087] = 1;
	v->a[77088] = anon_sym_POUND;
	v->a[77089] = actions(3042);
	v->a[77090] = 1;
	v->a[77091] = aux_sym__simple_variable_name_token1;
	v->a[77092] = actions(3044);
	v->a[77093] = 1;
	v->a[77094] = anon_sym_0;
	v->a[77095] = actions(3046);
	v->a[77096] = 1;
	v->a[77097] = sym_variable_name;
	v->a[77098] = actions(3330);
	v->a[77099] = 1;
	small_parse_table_3855(v);
}

/* EOF small_parse_table_770.c */
