/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1380.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6900(t_small_parse_table_array *v)
{
	v->a[138000] = actions(7760);
	v->a[138001] = 1;
	v->a[138002] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[138003] = actions(7766);
	v->a[138004] = 1;
	v->a[138005] = sym_string_content;
	v->a[138006] = actions(7768);
	v->a[138007] = 1;
	v->a[138008] = anon_sym_DOLLAR_LBRACE;
	v->a[138009] = actions(7770);
	v->a[138010] = 1;
	v->a[138011] = anon_sym_DOLLAR_LPAREN;
	v->a[138012] = actions(7772);
	v->a[138013] = 1;
	v->a[138014] = anon_sym_BQUOTE;
	v->a[138015] = actions(7774);
	v->a[138016] = 1;
	v->a[138017] = anon_sym_DOLLAR_BQUOTE;
	v->a[138018] = actions(8063);
	v->a[138019] = 1;
	small_parse_table_6901(v);
}

void	small_parse_table_6901(t_small_parse_table_array *v)
{
	v->a[138020] = anon_sym_DOLLAR;
	v->a[138021] = actions(8065);
	v->a[138022] = 1;
	v->a[138023] = anon_sym_DQUOTE;
	v->a[138024] = state(3088);
	v->a[138025] = 1;
	v->a[138026] = aux_sym_string_repeat1;
	v->a[138027] = state(3218);
	v->a[138028] = 4;
	v->a[138029] = sym_arithmetic_expansion;
	v->a[138030] = sym_simple_expansion;
	v->a[138031] = sym_expansion;
	v->a[138032] = sym_command_substitution;
	v->a[138033] = 7;
	v->a[138034] = actions(3);
	v->a[138035] = 1;
	v->a[138036] = sym_comment;
	v->a[138037] = actions(7754);
	v->a[138038] = 1;
	v->a[138039] = aux_sym__simple_variable_name_token1;
	small_parse_table_6902(v);
}

void	small_parse_table_6902(t_small_parse_table_array *v)
{
	v->a[138040] = actions(7758);
	v->a[138041] = 1;
	v->a[138042] = sym_variable_name;
	v->a[138043] = actions(8067);
	v->a[138044] = 1;
	v->a[138045] = anon_sym_RBRACE3;
	v->a[138046] = state(3793);
	v->a[138047] = 1;
	v->a[138048] = sym__expansion_body;
	v->a[138049] = actions(7756);
	v->a[138050] = 2;
	v->a[138051] = anon_sym_0;
	v->a[138052] = anon_sym__;
	v->a[138053] = actions(7750);
	v->a[138054] = 7;
	v->a[138055] = anon_sym_BANG;
	v->a[138056] = anon_sym_DASH;
	v->a[138057] = anon_sym_STAR;
	v->a[138058] = anon_sym_QMARK;
	v->a[138059] = anon_sym_DOLLAR;
	small_parse_table_6903(v);
}

void	small_parse_table_6903(t_small_parse_table_array *v)
{
	v->a[138060] = anon_sym_POUND;
	v->a[138061] = anon_sym_AT;
	v->a[138062] = 11;
	v->a[138063] = actions(3);
	v->a[138064] = 1;
	v->a[138065] = sym_comment;
	v->a[138066] = actions(7678);
	v->a[138067] = 1;
	v->a[138068] = anon_sym_DQUOTE;
	v->a[138069] = actions(7760);
	v->a[138070] = 1;
	v->a[138071] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[138072] = actions(7766);
	v->a[138073] = 1;
	v->a[138074] = sym_string_content;
	v->a[138075] = actions(7768);
	v->a[138076] = 1;
	v->a[138077] = anon_sym_DOLLAR_LBRACE;
	v->a[138078] = actions(7770);
	v->a[138079] = 1;
	small_parse_table_6904(v);
}

void	small_parse_table_6904(t_small_parse_table_array *v)
{
	v->a[138080] = anon_sym_DOLLAR_LPAREN;
	v->a[138081] = actions(7772);
	v->a[138082] = 1;
	v->a[138083] = anon_sym_BQUOTE;
	v->a[138084] = actions(7774);
	v->a[138085] = 1;
	v->a[138086] = anon_sym_DOLLAR_BQUOTE;
	v->a[138087] = actions(8069);
	v->a[138088] = 1;
	v->a[138089] = anon_sym_DOLLAR;
	v->a[138090] = state(3061);
	v->a[138091] = 1;
	v->a[138092] = aux_sym_string_repeat1;
	v->a[138093] = state(3218);
	v->a[138094] = 4;
	v->a[138095] = sym_arithmetic_expansion;
	v->a[138096] = sym_simple_expansion;
	v->a[138097] = sym_expansion;
	v->a[138098] = sym_command_substitution;
	v->a[138099] = 11;
	small_parse_table_6905(v);
}

/* EOF small_parse_table_1380.c */
