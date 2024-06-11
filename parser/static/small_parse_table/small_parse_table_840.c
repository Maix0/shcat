/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_840.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4200(t_small_parse_table_array *v)
{
	v->a[84000] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84001] = actions(912);
	v->a[84002] = 1;
	v->a[84003] = anon_sym_DOLLAR;
	v->a[84004] = actions(914);
	v->a[84005] = 1;
	v->a[84006] = anon_sym_DQUOTE;
	v->a[84007] = actions(916);
	v->a[84008] = 1;
	v->a[84009] = anon_sym_DOLLAR_LBRACE;
	v->a[84010] = actions(918);
	v->a[84011] = 1;
	v->a[84012] = anon_sym_DOLLAR_LPAREN;
	v->a[84013] = actions(920);
	v->a[84014] = 1;
	v->a[84015] = anon_sym_BQUOTE;
	v->a[84016] = actions(3224);
	v->a[84017] = 1;
	v->a[84018] = sym__bare_dollar;
	v->a[84019] = actions(3222);
	small_parse_table_4201(v);
}

void	small_parse_table_4201(t_small_parse_table_array *v)
{
	v->a[84020] = 5;
	v->a[84021] = aux_sym_concatenation_token1;
	v->a[84022] = sym_raw_string;
	v->a[84023] = sym_number;
	v->a[84024] = sym__comment_word;
	v->a[84025] = sym_word;
	v->a[84026] = state(1347);
	v->a[84027] = 5;
	v->a[84028] = sym_arithmetic_expansion;
	v->a[84029] = sym_string;
	v->a[84030] = sym_simple_expansion;
	v->a[84031] = sym_expansion;
	v->a[84032] = sym_command_substitution;
	v->a[84033] = 10;
	v->a[84034] = actions(3);
	v->a[84035] = 1;
	v->a[84036] = sym_comment;
	v->a[84037] = actions(109);
	v->a[84038] = 1;
	v->a[84039] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4202(v);
}

void	small_parse_table_4202(t_small_parse_table_array *v)
{
	v->a[84040] = actions(111);
	v->a[84041] = 1;
	v->a[84042] = anon_sym_DOLLAR;
	v->a[84043] = actions(113);
	v->a[84044] = 1;
	v->a[84045] = anon_sym_DQUOTE;
	v->a[84046] = actions(117);
	v->a[84047] = 1;
	v->a[84048] = anon_sym_DOLLAR_LBRACE;
	v->a[84049] = actions(119);
	v->a[84050] = 1;
	v->a[84051] = anon_sym_DOLLAR_LPAREN;
	v->a[84052] = actions(121);
	v->a[84053] = 1;
	v->a[84054] = anon_sym_BQUOTE;
	v->a[84055] = actions(3228);
	v->a[84056] = 1;
	v->a[84057] = sym__bare_dollar;
	v->a[84058] = actions(3226);
	v->a[84059] = 5;
	small_parse_table_4203(v);
}

void	small_parse_table_4203(t_small_parse_table_array *v)
{
	v->a[84060] = aux_sym_concatenation_token1;
	v->a[84061] = sym_raw_string;
	v->a[84062] = sym_number;
	v->a[84063] = sym__comment_word;
	v->a[84064] = sym_word;
	v->a[84065] = state(319);
	v->a[84066] = 5;
	v->a[84067] = sym_arithmetic_expansion;
	v->a[84068] = sym_string;
	v->a[84069] = sym_simple_expansion;
	v->a[84070] = sym_expansion;
	v->a[84071] = sym_command_substitution;
	v->a[84072] = 10;
	v->a[84073] = actions(3);
	v->a[84074] = 1;
	v->a[84075] = sym_comment;
	v->a[84076] = actions(1804);
	v->a[84077] = 1;
	v->a[84078] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84079] = actions(1806);
	small_parse_table_4204(v);
}

void	small_parse_table_4204(t_small_parse_table_array *v)
{
	v->a[84080] = 1;
	v->a[84081] = anon_sym_DOLLAR;
	v->a[84082] = actions(1808);
	v->a[84083] = 1;
	v->a[84084] = anon_sym_DQUOTE;
	v->a[84085] = actions(1810);
	v->a[84086] = 1;
	v->a[84087] = anon_sym_DOLLAR_LBRACE;
	v->a[84088] = actions(1812);
	v->a[84089] = 1;
	v->a[84090] = anon_sym_DOLLAR_LPAREN;
	v->a[84091] = actions(1814);
	v->a[84092] = 1;
	v->a[84093] = anon_sym_BQUOTE;
	v->a[84094] = actions(3232);
	v->a[84095] = 1;
	v->a[84096] = sym__bare_dollar;
	v->a[84097] = actions(3230);
	v->a[84098] = 5;
	v->a[84099] = aux_sym_concatenation_token1;
	small_parse_table_4205(v);
}

/* EOF small_parse_table_840.c */
