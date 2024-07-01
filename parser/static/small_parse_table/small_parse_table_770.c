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
	v->a[77000] = anon_sym_DOLLAR;
	v->a[77001] = actions(2832);
	v->a[77002] = 1;
	v->a[77003] = sym__comment_word;
	v->a[77004] = actions(2834);
	v->a[77005] = 1;
	v->a[77006] = sym__empty_value;
	v->a[77007] = state(1183);
	v->a[77008] = 1;
	v->a[77009] = sym_concatenation;
	v->a[77010] = actions(2944);
	v->a[77011] = 3;
	v->a[77012] = sym_raw_string;
	v->a[77013] = sym_number;
	v->a[77014] = sym_word;
	v->a[77015] = state(1362);
	v->a[77016] = 5;
	v->a[77017] = sym_arithmetic_expansion;
	v->a[77018] = sym_string;
	v->a[77019] = sym_simple_expansion;
	small_parse_table_3851(v);
}

void	small_parse_table_3851(t_small_parse_table_array *v)
{
	v->a[77020] = sym_expansion;
	v->a[77021] = sym_command_substitution;
	v->a[77022] = 10;
	v->a[77023] = actions(3);
	v->a[77024] = 1;
	v->a[77025] = sym_comment;
	v->a[77026] = actions(1504);
	v->a[77027] = 1;
	v->a[77028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77029] = actions(1508);
	v->a[77030] = 1;
	v->a[77031] = anon_sym_DQUOTE;
	v->a[77032] = actions(1510);
	v->a[77033] = 1;
	v->a[77034] = anon_sym_DOLLAR_LBRACE;
	v->a[77035] = actions(1512);
	v->a[77036] = 1;
	v->a[77037] = anon_sym_DOLLAR_LPAREN;
	v->a[77038] = actions(1514);
	v->a[77039] = 1;
	small_parse_table_3852(v);
}

void	small_parse_table_3852(t_small_parse_table_array *v)
{
	v->a[77040] = anon_sym_BQUOTE;
	v->a[77041] = actions(2824);
	v->a[77042] = 1;
	v->a[77043] = sym__bare_dollar;
	v->a[77044] = actions(2946);
	v->a[77045] = 1;
	v->a[77046] = anon_sym_DOLLAR;
	v->a[77047] = actions(2822);
	v->a[77048] = 5;
	v->a[77049] = aux_sym_concatenation_token1;
	v->a[77050] = sym_raw_string;
	v->a[77051] = sym_number;
	v->a[77052] = sym__comment_word;
	v->a[77053] = sym_word;
	v->a[77054] = state(963);
	v->a[77055] = 5;
	v->a[77056] = sym_arithmetic_expansion;
	v->a[77057] = sym_string;
	v->a[77058] = sym_simple_expansion;
	v->a[77059] = sym_expansion;
	small_parse_table_3853(v);
}

void	small_parse_table_3853(t_small_parse_table_array *v)
{
	v->a[77060] = sym_command_substitution;
	v->a[77061] = 10;
	v->a[77062] = actions(3);
	v->a[77063] = 1;
	v->a[77064] = sym_comment;
	v->a[77065] = actions(894);
	v->a[77066] = 1;
	v->a[77067] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77068] = actions(896);
	v->a[77069] = 1;
	v->a[77070] = anon_sym_DOLLAR;
	v->a[77071] = actions(898);
	v->a[77072] = 1;
	v->a[77073] = anon_sym_DQUOTE;
	v->a[77074] = actions(900);
	v->a[77075] = 1;
	v->a[77076] = anon_sym_DOLLAR_LBRACE;
	v->a[77077] = actions(902);
	v->a[77078] = 1;
	v->a[77079] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3854(v);
}

void	small_parse_table_3854(t_small_parse_table_array *v)
{
	v->a[77080] = actions(904);
	v->a[77081] = 1;
	v->a[77082] = anon_sym_BQUOTE;
	v->a[77083] = actions(2950);
	v->a[77084] = 1;
	v->a[77085] = sym__bare_dollar;
	v->a[77086] = actions(2948);
	v->a[77087] = 5;
	v->a[77088] = aux_sym_concatenation_token1;
	v->a[77089] = sym_raw_string;
	v->a[77090] = sym_number;
	v->a[77091] = sym__comment_word;
	v->a[77092] = sym_word;
	v->a[77093] = state(1633);
	v->a[77094] = 5;
	v->a[77095] = sym_arithmetic_expansion;
	v->a[77096] = sym_string;
	v->a[77097] = sym_simple_expansion;
	v->a[77098] = sym_expansion;
	v->a[77099] = sym_command_substitution;
	small_parse_table_3855(v);
}

/* EOF small_parse_table_770.c */
