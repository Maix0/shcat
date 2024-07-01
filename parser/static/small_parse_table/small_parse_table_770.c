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
	v->a[77000] = 1;
	v->a[77001] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77002] = actions(3077);
	v->a[77003] = 1;
	v->a[77004] = sym_string_content;
	v->a[77005] = actions(3079);
	v->a[77006] = 1;
	v->a[77007] = anon_sym_DOLLAR_LBRACE;
	v->a[77008] = actions(3081);
	v->a[77009] = 1;
	v->a[77010] = anon_sym_DOLLAR_LPAREN;
	v->a[77011] = actions(3083);
	v->a[77012] = 1;
	v->a[77013] = anon_sym_BQUOTE;
	v->a[77014] = actions(3169);
	v->a[77015] = 1;
	v->a[77016] = anon_sym_DOLLAR;
	v->a[77017] = actions(3171);
	v->a[77018] = 1;
	v->a[77019] = anon_sym_DQUOTE;
	small_parse_table_3851(v);
}

void	small_parse_table_3851(t_small_parse_table_array *v)
{
	v->a[77020] = state(1681);
	v->a[77021] = 1;
	v->a[77022] = aux_sym_string_repeat1;
	v->a[77023] = state(1739);
	v->a[77024] = 4;
	v->a[77025] = sym_arithmetic_expansion;
	v->a[77026] = sym_simple_expansion;
	v->a[77027] = sym_expansion;
	v->a[77028] = sym_command_substitution;
	v->a[77029] = 10;
	v->a[77030] = actions(3);
	v->a[77031] = 1;
	v->a[77032] = sym_comment;
	v->a[77033] = actions(3071);
	v->a[77034] = 1;
	v->a[77035] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77036] = actions(3077);
	v->a[77037] = 1;
	v->a[77038] = sym_string_content;
	v->a[77039] = actions(3079);
	small_parse_table_3852(v);
}

void	small_parse_table_3852(t_small_parse_table_array *v)
{
	v->a[77040] = 1;
	v->a[77041] = anon_sym_DOLLAR_LBRACE;
	v->a[77042] = actions(3081);
	v->a[77043] = 1;
	v->a[77044] = anon_sym_DOLLAR_LPAREN;
	v->a[77045] = actions(3083);
	v->a[77046] = 1;
	v->a[77047] = anon_sym_BQUOTE;
	v->a[77048] = actions(3173);
	v->a[77049] = 1;
	v->a[77050] = anon_sym_DOLLAR;
	v->a[77051] = actions(3175);
	v->a[77052] = 1;
	v->a[77053] = anon_sym_DQUOTE;
	v->a[77054] = state(1638);
	v->a[77055] = 1;
	v->a[77056] = aux_sym_string_repeat1;
	v->a[77057] = state(1739);
	v->a[77058] = 4;
	v->a[77059] = sym_arithmetic_expansion;
	small_parse_table_3853(v);
}

void	small_parse_table_3853(t_small_parse_table_array *v)
{
	v->a[77060] = sym_simple_expansion;
	v->a[77061] = sym_expansion;
	v->a[77062] = sym_command_substitution;
	v->a[77063] = 10;
	v->a[77064] = actions(3);
	v->a[77065] = 1;
	v->a[77066] = sym_comment;
	v->a[77067] = actions(3071);
	v->a[77068] = 1;
	v->a[77069] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77070] = actions(3077);
	v->a[77071] = 1;
	v->a[77072] = sym_string_content;
	v->a[77073] = actions(3079);
	v->a[77074] = 1;
	v->a[77075] = anon_sym_DOLLAR_LBRACE;
	v->a[77076] = actions(3081);
	v->a[77077] = 1;
	v->a[77078] = anon_sym_DOLLAR_LPAREN;
	v->a[77079] = actions(3083);
	small_parse_table_3854(v);
}

void	small_parse_table_3854(t_small_parse_table_array *v)
{
	v->a[77080] = 1;
	v->a[77081] = anon_sym_BQUOTE;
	v->a[77082] = actions(3177);
	v->a[77083] = 1;
	v->a[77084] = anon_sym_DOLLAR;
	v->a[77085] = actions(3179);
	v->a[77086] = 1;
	v->a[77087] = anon_sym_DQUOTE;
	v->a[77088] = state(1681);
	v->a[77089] = 1;
	v->a[77090] = aux_sym_string_repeat1;
	v->a[77091] = state(1739);
	v->a[77092] = 4;
	v->a[77093] = sym_arithmetic_expansion;
	v->a[77094] = sym_simple_expansion;
	v->a[77095] = sym_expansion;
	v->a[77096] = sym_command_substitution;
	v->a[77097] = 4;
	v->a[77098] = actions(3);
	v->a[77099] = 1;
	small_parse_table_3855(v);
}

/* EOF small_parse_table_770.c */
